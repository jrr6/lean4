/-
Copyright (c) 2021 Gabriel Ebner. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Gabriel Ebner, Mario Carneiro, Thomas Murrills
-/
prelude
import Lean.Server.CodeActions
import Lean.Widget.UserWidget
import Lean.Data.Json.Elab
import Lean.Data.Lsp.Utf16
import Lean.Meta.Tactic.ExposeNames
import Lean.Meta.Tactic.Suggestion

/-!
# "Try this" code action and tactic suggestions

This file defines the code-action provider for the "Try this" widget and defines tactic-specific
suggestions.
-/
namespace Lean.Meta.Tactic.TryThis

open Lean Elab PrettyPrinter Meta Server RequestM

/-! # Code action -/

/--
This is a code action provider that looks for `TryThisInfo` nodes and supplies a code action to
apply the replacement.
-/
@[builtin_code_action_provider] def tryThisProvider : CodeActionProvider := fun params snap => do
  let doc ← readDoc
  pure <| snap.infoTree.foldInfo (init := #[]) fun _ctx info result => Id.run do
    let .ofCustomInfo { stx, value } := info | result
    let some { range, suggestionTexts, codeActionPrefix? } :=
      value.get? TryThisInfo | result
    let some stxRange := stx.getRange? | result
    let stxRange := doc.meta.text.utf8RangeToLspRange stxRange
    unless stxRange.start.line ≤ params.range.end.line do return result
    unless params.range.start.line ≤ stxRange.end.line do return result
    let mut result := result
    for h : i in [:suggestionTexts.size] do
      let (newText, title?) := suggestionTexts[i]
      let title := title?.getD <| (codeActionPrefix?.getD "Try this: ") ++ newText
      result := result.push {
        eager.title := title
        eager.kind? := "quickfix"
        -- Only make the first option preferred
        eager.isPreferred? := if i = 0 then true else none
        eager.edit? := some <| .ofTextEdit doc.versionedIdentifier { range, newText }
      }
    result

/-! # Formatting -/

/-- Delaborate `e` into syntax suitable for use by `refine`. -/
def delabToRefinableSyntax (e : Expr) : MetaM Term :=
  withOptions (pp.mvars.anonymous.set · false) do delab e

/-- Delaborate `e` into a suggestion suitable for use by `refine`. -/
def delabToRefinableSuggestion (e : Expr) : MetaM Suggestion :=
  return { suggestion := ← delabToRefinableSyntax e, messageData? := e }

/-! # Tactic-specific widget hooks -/
/--
Returns the syntax for an `exact` or `refine` (as indicated by `useRefine`) tactic corresponding to
`e`. If `exposeNames` is `true`, prepends the tactic with `expose_names.`
-/
def mkExactSuggestionSyntax (e : Expr) (useRefine : Bool) (exposeNames : Bool) : MetaM (TSyntax `tactic) :=
  withOptions (pp.mvars.set · false) do
  let exprStx ← (if exposeNames then withExposedNames else id) <| delabToRefinableSyntax e
  let tac ← if useRefine then `(tactic| refine $exprStx) else `(tactic| exact $exprStx)
  let tacSeq ← if exposeNames then `(tactic| (expose_names; $tac)) else pure tac
  return tacSeq

private def addExactSuggestionCore (addSubgoalsMsg : Bool) (exposeNames : Bool) (e : Expr) :
    MetaM Suggestion :=
  withOptions (pp.mvars.set · false) do
  let mvars ← getMVars e
  let mut suggestion ← mkExactSuggestionSyntax e (useRefine := !mvars.isEmpty) exposeNames
  let messageData? ← SuggestionText.prettyExtra suggestion
  let postInfo? ← if !addSubgoalsMsg || mvars.isEmpty then pure none else
    let mut str := "\nRemaining subgoals:"
    for g in mvars do
      -- TODO: use a MessageData.ofExpr instead of rendering to string
      let e ← PrettyPrinter.ppExpr (← instantiateMVars (← g.getType))
      str := str ++ Format.pretty ("\n⊢ " ++ e)
    pure str
  pure { suggestion, postInfo?, messageData? }

/-- Add an `exact e` or `refine e` suggestion.

The parameters are:
* `ref`: the span of the info diagnostic
* `e`: the replacement expression
* `origSpan?`: a syntax object whose span is the actual text to be replaced by `suggestion`.
  If not provided it defaults to `ref`.
* `addSubgoalsMsg`: if true (default false), any remaining subgoals will be shown after
  `Remaining subgoals:`
* `codeActionPrefix?`: an optional string to be used as the prefix of the replacement text if the
  suggestion does not have a custom `toCodeActionTitle?`. If not provided, `"Try this: "` is used.
* `exposeNames`: if true (default false), will insert `expose_names` prior to the generated tactic
-/
def addExactSuggestion (ref : Syntax) (e : Expr)
    (origSpan? : Option Syntax := none) (addSubgoalsMsg := false)
    (codeActionPrefix? : Option String := none) (exposeNames := false) : MetaM Unit := do
  addSuggestion ref (← addExactSuggestionCore addSubgoalsMsg exposeNames e)
    (origSpan? := origSpan?) (codeActionPrefix? := codeActionPrefix?)

/-- Add `exact e` or `refine e` suggestions.

The parameters are:
* `ref`: the span of the info diagnostic
* `es`: the array of replacement expressions
* `origSpan?`: a syntax object whose span is the actual text to be replaced by `suggestion`.
  If not provided it defaults to `ref`.
* `addSubgoalsMsg`: if true (default false), any remaining subgoals will be shown after
  `Remaining subgoals:`
* `codeActionPrefix?`: an optional string to be used as the prefix of the replacement text for all
  suggestions which do not have a custom `toCodeActionTitle?`. If not provided, `"Try this: "` is
  used.
-/
def addExactSuggestions (ref : Syntax) (es : Array Expr)
    (origSpan? : Option Syntax := none) (addSubgoalsMsg := false)
    (codeActionPrefix? : Option String := none) (exposeNames := false) : MetaM Unit := do
  let suggestions ← es.mapM <| addExactSuggestionCore addSubgoalsMsg exposeNames
  addSuggestions ref suggestions (origSpan? := origSpan?) (codeActionPrefix? := codeActionPrefix?)

/-- Add a term suggestion.

The parameters are:
* `ref`: the span of the info diagnostic
* `e`: the replacement expression
* `origSpan?`: a syntax object whose span is the actual text to be replaced by `suggestion`.
  If not provided it defaults to `ref`.
* `header`: a string which precedes the suggestion. By default, it's `"Try this: "`.
* `codeActionPrefix?`: an optional string to be used as the prefix of the replacement text if the
  suggestion does not have a custom `toCodeActionTitle?`. If not provided, `"Try this: "` is used.
-/
def addTermSuggestion (ref : Syntax) (e : Expr)
    (origSpan? : Option Syntax := none) (header : String := "Try this: ")
    (codeActionPrefix? : Option String := none) : MetaM Unit := do
  addSuggestion ref (← delabToRefinableSuggestion e) (origSpan? := origSpan?) (header := header)
    (codeActionPrefix? := codeActionPrefix?)

/-- Add term suggestions.

The parameters are:
* `ref`: the span of the info diagnostic
* `es`: an array of the replacement expressions
* `origSpan?`: a syntax object whose span is the actual text to be replaced by `suggestion`.
  If not provided it defaults to `ref`.
* `header`: a string which precedes the list of suggestions. By default, it's `"Try these:"`.
* `codeActionPrefix?`: an optional string to be used as the prefix of the replacement text for all
  suggestions which do not have a custom `toCodeActionTitle?`. If not provided, `"Try this: "` is
  used.
-/
def addTermSuggestions (ref : Syntax) (es : Array Expr)
    (origSpan? : Option Syntax := none) (header : String := "Try these:")
    (codeActionPrefix? : Option String := none) : MetaM Unit := do
  addSuggestions ref (← es.mapM delabToRefinableSuggestion)
    (origSpan? := origSpan?) (header := header) (codeActionPrefix? := codeActionPrefix?)

open Lean Elab Elab.Tactic PrettyPrinter Meta

/-- Add a suggestion for `have h : t := e`. -/
def addHaveSuggestion (ref : Syntax) (h? : Option Name) (t? : Option Expr) (e : Expr)
    (origSpan? : Option Syntax := none) : TermElabM Unit := do
  let estx ← delabToRefinableSyntax e
  let prop ← isProp (← inferType e)
  let tac ← if let some t := t? then
    let tstx ← delabToRefinableSyntax t
    if prop then
      match h? with
      | some h => `(tactic| have $(mkIdent h) : $tstx := $estx)
      | none => `(tactic| have : $tstx := $estx)
    else
      `(tactic| let $(mkIdent (h?.getD `_)) : $tstx := $estx)
  else
    if prop then
      match h? with
      | some h => `(tactic| have $(mkIdent h) := $estx)
      | none => `(tactic| have := $estx)
    else
      `(tactic| let $(mkIdent (h?.getD `_)) := $estx)
  addSuggestion ref tac origSpan?

open Lean.Parser.Tactic
open Lean.Syntax

/-- Add a suggestion for `rw [h₁, ← h₂] at loc`. -/
def addRewriteSuggestion (ref : Syntax) (rules : List (Expr × Bool))
  (type? : Option Expr := none) (loc? : Option Expr := none)
  (origSpan? : Option Syntax := none) :
    TermElabM Unit := do
  let rules_stx := TSepArray.ofElems <| ← rules.toArray.mapM fun ⟨e, symm⟩ => do
    let t ← delabToRefinableSyntax e
    if symm then `(rwRule| ← $t:term) else `(rwRule| $t:term)
  let tac ← do
    let loc ← loc?.mapM fun loc => do `(location| at $(← delab loc):term)
    `(tactic| rw [$rules_stx,*] $(loc)?)

  -- We don't simply write `let mut tacMsg := m!"{tac}"` here
  -- but instead rebuild it, so that there are embedded `Expr`s in the message,
  -- thus giving more information in the hovers.
  -- Perhaps in future we will have a better way to attach elaboration information to
  -- `Syntax` embedded in a `MessageData`.
  let toMessageData (e : Expr) : MessageData := if e.isConst then .ofConst e else .ofExpr e
  let mut tacMsg :=
    let rulesMsg := MessageData.sbracket <| MessageData.joinSep
      (rules.map fun ⟨e, symm⟩ => (if symm then "← " else "") ++ toMessageData e) ", "
    if let some loc := loc? then
      m!"rw {rulesMsg} at {loc}"
    else
      m!"rw {rulesMsg}"
  let mut extraMsg := ""
  if let some type := type? then
    tacMsg := tacMsg ++ m!"\n-- {type}"
    extraMsg := extraMsg ++ s!"\n-- {← PrettyPrinter.ppExpr type}"
  addSuggestion ref (s := { suggestion := tac, postInfo? := extraMsg, messageData? := tacMsg })
    origSpan?
