prelude

import Lean.Meta.Basic
import Lean.Meta.AppBuilder
import Lean.PrettyPrinter.Delaborator

register_builtin_option pp.inlineAssignmentAtoms : Bool := {
  defValue := true
  group    := "pp"
  descr    := "(pretty printer) display atomic values in equational assignments inline rather than as variable names"
}

/-
Relevant Zulip thread:
https://leanprover.zulipchat.com/#narrow/channel/270676-lean4/topic/Rendering.20an.20Expr.20as.20.3Chover.20to.20see.3E.20in.20a.20trace.20message
-/

namespace Lean.Meta.AtomAssignment

structure State where
  atomAssignment : Std.HashMap Expr Name := {}
  nameIndex : Nat := 0

abbrev AtomAssignmentM := StateT State MetaM

/-- ｢e｣ indicates that `e` was treated as an atomic variable when developing the displayed system of
(in)equalities. -/
notation "｢" t "｣" => t

set_option linter.unusedVariables false in
/-- Used to tag an expression as being considered "atomic" by some equation-solving procedure. Will
be pretty-printed within partial square brackets (｢ ｣). -/
@[reducible] def assignableAtom {α : Sort u} (altName : Option Name) (e : α) : α := e

def getAtomAssignment : AtomAssignmentM (Std.HashMap Expr Name) :=
  return (← get).atomAssignment

def getAtomAssignmentSorted : AtomAssignmentM (Array (Expr × Name)) :=
  -- FIXME: this sort is invalid b/c, e.g., "b_9" < "b_10" (and doesn't handle anon)
  return (← getAtomAssignment).toArray.qsort (·.2.toString < ·.2.toString)

private def varNameOf (i : Nat) : String :=
  let c : Char := .ofNat ('a'.toNat + (i % 26))
  let suffix := if i < 26 then "" else s!"_{i / 26}"
  s!"{c}{suffix}"

private def inScope (s : String) : MetaM Bool := do
  let n := .mkSimple s
  if (← resolveGlobalName n).isEmpty then
    if ((← getLCtx).findFromUserName? n).isNone then
      return false
  return true

def getNewAssignmentAtomName (e : Expr) : AtomAssignmentM Name := do
  let { nameIndex, .. } ← get
  let mut nextIndex := nameIndex + 1
  while (← inScope (varNameOf nextIndex)) do
    nextIndex := nextIndex + 1
  let name := varNameOf nameIndex |>.toName
  modify fun { atomAssignment, .. } =>
    { nameIndex := nextIndex
      atomAssignment := atomAssignment.insert e name }
  return name

def mkAtomAssignmentMessageData : AtomAssignmentM MessageData := do
  if pp.inlineAssignmentAtoms.get (← getOptions) then
    return m!""
  -- FIXME: this sort is invalid b/c, e.g., "b_9" < "b_10"
  let assignments := (← getAtomAssignment).toArray.qsort (·.2.toString < ·.2.toString)
  let messageData :=
    assignments.map (fun (assignee, name) => m!" {name} := {assignee}")
    |>.toList
    |> (MessageData.joinSep · "\n")
  return m!"\nwhere\n{messageData}"

def atomAnnotation := `_assignmentAtom

-- def mkAssignableAtom (e : Expr) (masked : Bool := False) : AtomAssignmentM Expr := do
--   let name ←
--     if pp.inlineAssignmentAtoms.get (← getOptions) then pure none else
--     -- FIXME: need a way to render brackets/parens around "masked"
--     if masked then pure <| some "masked" else
--     match (← getAtomAssignment)[e]? with
--     | none      => Option.some <$> getNewAssignmentAtomName e
--     | some name => pure <| some name
--   mkAppM ``assignableAtom #[toExpr name, e]
def mkAssignableAtom (e : Expr) (masked : Bool := False) : AtomAssignmentM Expr := do
  let name ←
    if pp.inlineAssignmentAtoms.get (← getOptions) then pure Name.anonymous else
    if masked then pure Name.anonymous else
    match (← getAtomAssignment)[e]? with
    | none      => getNewAssignmentAtomName e
    | some name => pure name
  -- mkAppM ``assignableAtom #[toExpr name, e]
  return Expr.mdata (KVMap.empty.insert atomAnnotation (.ofName name)) e

-- @[app_unexpander assignableAtom]
-- def unexpandAssignmentAtom : Lean.PrettyPrinter.Unexpander
--   | `($_assignableAtom $altName $arg) =>
--     match altName with
--     | `($_some $name) =>
--       let str := name.raw.isStrLit?.getD "anonymous"
--       pure (mkIdent str.toName)
--     | _ => `(｢ $arg ｣)
--   | s => return s

open Lean PrettyPrinter Delaborator SubExpr in
@[delab mdata._assignmentAtom]
def unexpandAssignmentAtom : Delab := do
  let .mdata d _ ← getExpr | failure
  let showExpr ← getPPOption pp.inlineAssignmentAtoms.get
  let .ofName nm := d.get `_assignmentAtom (DataValue.ofName .anonymous) | failure
  if showExpr then
    let rest ← withMDataExpr delab
    `(｢ $rest ｣)
  else
    pure (mkIdent nm)
    -- match nm with
    -- | .anonymous =>
    --   pure (mkIdent "masked".toName)
    -- | nm => pure (mkIdent nm)

end AtomAssignment

def withTrackingAtomAssignment (x : AtomAssignment.AtomAssignmentM α) : MetaM α :=
  x.run' {}

-- TODO: if we used expr metadata instead of an unexpander, it would have the advantage that we
-- could hover and see the actual expression in the "non-inline" case
-- open AtomAssignment
-- #eval do logInfo (← mkAppM ``assignableAtom #[(toExpr (some "hi")), (mkConst `Nat.zero [])])
-- #eval do logInfo (← mkAppM ``assignableAtom #[(toExpr (Option.none : Option String)), (mkConst `Nat.zero [])])
-- #eval do logInfo m!"{← mkAppM ``assignableAtom #[(toExpr (some "hi")), (mkConst `Nat [])]}"

def f (n : Nat) := n + 1
opaque n : Nat

set_option pp.inlineAssignmentAtoms false
-- #eval do logInfo (Expr.mdata (KVMap.empty.insert `_assignmentAtom `a) (mkConst `Nat.zero []))
-- #eval do logInfo (m := MetaM) <| ← Prod.fst <$> do (AtomAssignment.mkAssignableAtom (mkConst `Nat [])) |>.run {}
-- set_option pp.raw true
#eval do logInfo (m := MetaM) <| ← Prod.fst <$> ((do
    let app ← AtomAssignment.mkAssignableAtom (masked := true) (mkApp (mkConst ``f []) (mkConst ``n []))
    pure app)
  |>.run {})

end Lean.Meta
