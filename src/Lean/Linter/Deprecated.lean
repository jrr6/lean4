/-
Copyright (c) 2022 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import Lean.Linter.Basic
import Lean.Attributes
import Lean.Elab.InfoTree.Main

namespace Lean.Linter

register_builtin_option linter.deprecated : Bool := {
  defValue := true
  descr := "if true, generate deprecation warnings"
}

structure DeprecationEntry where
  newName? : Option Name := none
  text? : Option String := none
  since? : Option String := none
  deriving Inhabited

builtin_initialize deprecatedAttr : ParametricAttribute DeprecationEntry ←
  registerParametricAttribute {
    name := `deprecated
    descr := "mark declaration as deprecated",
    getParam := fun _ stx => do
      let `(attr| deprecated $[$id?]? $[$text?]? $[(since := $since?)]?) := stx
        | throwError "invalid `[deprecated]` attribute"
      let newName? ← id?.mapM Elab.realizeGlobalConstNoOverloadWithInfo
      let text? := text?.map TSyntax.getString
      let since? := since?.map TSyntax.getString
      if id?.isNone && text?.isNone then
        logWarning "`[deprecated]` attribute should specify either a new name or a deprecation message"
      if since?.isNone then
        logWarning "`[deprecated]` attribute should specify the date or library version at which the deprecation was introduced, using `(since := \"...\")`"
      return { newName?, text?, since? }
  }

def isDeprecated (env : Environment) (declName : Name) : Bool :=
  Option.isSome <| deprecatedAttr.getParam? env declName

def _root_.Lean.MessageData.isDeprecationWarning (msg : MessageData) : Bool :=
  msg.hasTag (· == ``deprecatedAttr)

def getDeprecatedNewName (env : Environment) (declName : Name) : Option Name := do
  (← deprecatedAttr.getParam? env declName).newName?

def checkDeprecated (declName : Name) : MetaM Unit := do
  if getLinterValue linter.deprecated (← getOptions) then
    let some attr := deprecatedAttr.getParam? (← getEnv) declName | pure ()
    let extraMsg ← match attr.text? with
      | some text => pure m!": {text}"
      | none => match attr.newName? with
        | none => pure m!""
        | some newName => do
          let mut msg := m!": use '{.ofConstName newName true}' instead"
          -- Add additional notes if the type, namespace, or visibility changed
          let env ← getEnv
          let oldPfx := declName.getPrefix
          let newPfx := newName.getPrefix
          let some oldDecl := env.find? declName | pure msg
          let some newDecl := env.find? newName | pure msg
          if !(← Meta.withReducible <| Meta.isDefEq oldDecl.type newDecl.type) then
            msg := msg ++ m!"\n\nNote: The updated constant has a different type:{indentExpr newDecl.type}\
              \ninstead of{indentExpr oldDecl.type}"

          -- Check namespace, then visibility, exclusively and in this order, to avoid redundancy
          if oldPfx != newPfx then
            let changeEx := if let .str _ oldRoot := declName then
              m!" (e.g., from `x.{oldRoot}` to `{.ofConstName newName} x`)"
            else m!""
            msg := msg ++ m!"\n\nNote: The updated constant is in a different namespace. \
              Dot notation may need to be changed{changeEx}."
          else if !(isProtected env declName) && isProtected env newName then
            let pfxCompStr := if newPfx.getNumParts > 1 then "at least the last component of " else ""
            msg := msg ++ m!"\n\nNote: '{.ofConstName newName true}' is protected. References to this \
              constant must include {pfxCompStr}its prefix '{newPfx}' even when inside its namespace."

          pure msg
    logWarning <| .tagged ``deprecatedAttr <|
      m!"'{.ofConstName declName true}' has been deprecated" ++ extraMsg
