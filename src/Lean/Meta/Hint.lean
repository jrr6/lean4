/-
TODO: copyright
-/

prelude
import Lean.Meta.TryThis
import Lean.Widget.Types
import Lean.Message
import Lean.CoreM
import Lean.Data.Lsp.Basic
import Lean.Data.Lsp.Utf16
-- TODO: this has a few too many imports (e.g., we may want to surface hints in
-- `ReservedNameAction`) -- it would be really nice if we could push `pushInfoLeaf` to an `extern`
import Lean.Elab.InfoTree.Main

namespace Lean.Meta.Hint

open Elab Tactic TryThis

/-
A widget for rendering code-action suggestions in error messages. Generally, this widget should not
be used directly; instead, use
{
  "diff": [
    {"type": "unchanged", "text": "h"},
    {"type": "deletion", "text": "ello"},
    {"type": "insertion", "text": "i"}
  ]
}
-/
def tryThisDiffWidget : Widget.Module where
  javascript := "
import * as React from 'react';
import { EditorContext, EnvPosContext } from '@leanprover/infoview';
const e = React.createElement;
export default function ({ diff, range, suggestion }) {
  const pos = React.useContext(EnvPosContext)
  const editorConnection = React.useContext(EditorContext)
  const insStyle = { className: 'information' }
  const delStyle = {
    style: { color: 'var(--vscode-errorForeground)', textDecoration: 'line-through' }
  }
  const defStyle = {
    style: { color: 'var(--vscode-textLink-foreground)' }
  }
  function onClick() {
    editorConnection.api.applyEdit({
      changes: { [pos.uri]: [{ range, newText: suggestion }] }
    })
  }

  const spans = diff.map (comp =>
    comp.type === 'deletion' ? e('span', delStyle, comp.text) :
    comp.type === 'insertion' ? e('span', insStyle, comp.text) :
      e('span', defStyle, comp.text)
  )
  const fullDiff = e('span', { onClick, title: 'Apply suggestion', className: 'link pointer dim font-code', }, spans)
  return fullDiff
}"

inductive DiffRange where
  | insertion (s : String)
  | deletion (s : String)
  | unchanged (s : String)
deriving Repr

def mkDiffJson (ds : Array DiffRange) :=
  toJson <| ds.map fun
    | .insertion s => json% { type: "insertion", text: $s }
    | .deletion s => json% { type: "deletion", text: $s }
    | .unchanged s => json% { type: "unchanged", text: $s }

def mkDiffString (ds : Array DiffRange) : String :=
  let decorate (s : String) (dec : Char) : String :=
    .mk <| s.data.foldr (init := []) fun c acc =>
      c :: dec :: acc
  let rangeStrs := ds.map fun
    | .insertion s => decorate s '\u0332'
    | .deletion s => decorate s '\u0335'
    | .unchanged s => s
  rangeStrs.foldl (· ++ ·) ""

-- FIXME: Figure out why the panic fires even when this isn't even called when running `tmp.lean`
/--
Computes a diff of the partitioned strings `s` and `s'` using Myers' algorithm.

`s` and `s'` should contain a partitioning of the desired strings into the minimal unit at which a
diff will be computed (e.g., character, word, line). The returned diff is an array of edits that
yield `s'` from `s`. Note that unchanged segments are included in this diff (see `DiffRange`) and
that this function is only intended for use on small strings of the kind that would be shown in a
code-action suggestion, as we implement a simple, unoptimized version of Myers' algorithm (see
https://doi.org/10.1007/BF01840446).
-/
def diff (s s' : Array String) := Id.run do
  let (n, m) := (s.size, s'.size)
  let maxSteps := n + m
  let mut v := Array.replicate (2 * maxSteps + 1) (0 : Nat)
  let mut vs : Array (Array Nat) := #[]
  let mut (x, y) : Nat × Nat := (0, 0)

  for d in [:maxSteps + 1] do
    vs := vs.push v
    for i in [0 : d + 1] do
      let k : Int := -d + 2*i
      if k == -d || (k != d && get! v (k - 1) < get! v (k + 1)) then
        x := get! v (k + 1)
      else
        x := get! v (k - 1) + 1
      y := (x - k).toNat
      while x < n && y < m && s[x]! == s'[y]! do
        (x, y) := (x + 1, y + 1)
      if x ≥ n && y ≥ m then
        return mkDiffRanges vs
      v := set! v k x
  panic! "diff generation terminated without computing a diff"
where
  wrapIdx {α} (v : Array α) (x : Int) :=
    if x < 0 then (v.size + x).toNat else x.toNat
  set! {α} [Inhabited α] (v : Array α) (x : Int) (a : α) : Array α :=
    v.set! (wrapIdx v x) a
  get! {α} [Inhabited α] (v : Array α) (x : Int) : α :=
    v[wrapIdx v x]!

  /-- Produces diff ranges corresponding to a sequence of states from Myers' algorithm. -/
  mkDiffRanges (vs : Array (Array Nat)) := Id.run do
    let mut (x, y) := (s.size, s'.size)
    let mut result := #[]
    for i in [:vs.size] do
      let d := vs.size - i - 1
      let v := vs[d]!
      let k := (x : Int) - y
      let kPrev := if k == -d || (k != d && get! v (k - 1) < get! v (k + 1)) then
        k + 1
      else
        k - 1
      let xPrev := get! v kPrev
      let yPrev := (xPrev - kPrev).toNat
      while x > xPrev && y > yPrev do
        result := appendEdit result (x - 1) (y - 1) x y
        (x, y) := (x - 1, y - 1)
      if d > 0 then
        result := appendEdit result xPrev yPrev x y
      (x, y) := (xPrev, yPrev)
    return result.reverse

  /--
  Appends a single edit, corresponding to moving from `(x1, y1)` to `(x2, y2)`, to `result`, merging
  if possible with the most recently appended edit.

  Note that this function assumes that `result` is being constructed in reverse, so merging will
  place the contents of this edit *before* those of the edit with which it is being merged.
  -/
  appendEdit (result : Array DiffRange) (x1 y1 x2 y2 : Nat) : Array DiffRange :=
    -- Attempt to merge this diff with the last added one (recall we are traversing backwards)
    let merge (newDiff : DiffRange) :=
      match newDiff, result.back? with
      | .deletion d, some (.deletion d') =>
        result.set! (result.size - 1) (.deletion (d ++ d'))
      | .insertion i, some (.insertion i') =>
        result.set! (result.size - 1) (.insertion (i ++ i'))
      | .unchanged u, some (.unchanged u') =>
        result.set! (result.size - 1) (.unchanged (u ++ u'))
      | _, _ => result.push newDiff
    if x1 == x2 then
      merge (.insertion s'[y1]!)
    else if y1 == y2 then
      merge (.deletion s[x1]!)
    else
      merge (.unchanged s[x1]!)

structure HintSuggestion extends Suggestion where
  span? : Option Syntax := none

instance : Coe SuggestionText HintSuggestion where
  coe t := { suggestion := t }

instance : ToMessageData HintSuggestion where
  toMessageData s := toMessageData s.toSuggestion

structure HintSuggestions where
  ref : Syntax
  suggestions : Array HintSuggestion
  codeActionPrefix? : Option String := none

-- This hack is required so that we can avoid import cycles: to delaborate syntax suggestions, we
-- need to import `Lean.PrettyPrinter`, which imports portions of `Lean.Elab` from which we may
-- reasonably want to throw hint-containing errors
@[extern "lean_meta_tactic_trythis_process_suggestions"] private opaque processSuggestions :
  Syntax → String.Range → Array Suggestion → Option String → CoreM ProcessedSuggestions

/--
Creates message data corresponding to a `HintSuggestions` collection and adds the corresponding info
leaf.
-/
def HintSuggestions.mkHint (suggestions : HintSuggestions) : CoreM MessageData := do
  let { ref, codeActionPrefix?, suggestions } := suggestions
  let mut msg := m!""
  if suggestions.size > 0 then
    for suggestion in suggestions do
      if let some range := (suggestion.span?.getD ref).getRange? then
        let { info, suggestions := suggestionArr, range := lspRange } ← processSuggestions ref range
          #[suggestion.toSuggestion] codeActionPrefix?
        pushInfoLeaf info
        let map ← getFileMap
        let rangeContents := Substring.mk map.source range.start range.stop |>.toString
        let suggestionText := suggestionArr[0]!.2.1
        let split (s : String) := s.toList.map (String.mk ∘ ([·])) |>.toArray
        let edits := diff (split rangeContents) (split suggestionText)
        let diff := mkDiffJson edits
        let preInfo := suggestion.preInfo?.getD ""
        let postInfo := suggestion.postInfo?.getD ""
        let json := json% {
          diff: $diff,
          suggestion: $suggestionText,
          range: $lspRange
        }
        let widget := MessageData.ofWidget {
            id := ``tryThisDiffWidget
            javascriptHash := tryThisDiffWidget.javascriptHash
            props := return json
          } (mkDiffString edits)
        let widgetMsg := m!"{preInfo}{widget}{postInfo}"
        let suggestionMsg := if suggestions.size == 1 then m!"\n{widgetMsg}" else m!"\n• {widgetMsg}"
        msg := msg ++ MessageData.nestD suggestionMsg
  return msg

end Meta.Hint

open Meta.Hint in
/--
Appends a hint `hint` to `msg`. If `suggestions?` is non-`none`, will also append an inline
suggestion widget.
-/
def MessageData.hint (hint : MessageData) (suggestions? : Option HintSuggestions := none)
    : CoreM MessageData := do
  let mut hintMsg := m!"\n\nhint: {hint}"
  if let some suggestions := suggestions? then
    hintMsg := hintMsg ++ (← suggestions.mkHint)
  return hintMsg
