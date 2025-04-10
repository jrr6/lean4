/-
TODO: copyright
-/

prelude

import Lean.CoreM
import Lean.Data.Lsp.Utf16
import Lean.Message
import Lean.Meta.TryThis
import Lean.Util.Diff
import Lean.Widget.Types

namespace Lean.Meta.Hint

open Elab Tactic TryThis

/--
A widget for rendering code-action suggestions in error messages. Generally, this widget should not
be used directly; instead, use `MessageData.hint`.

The props to this widget are of the following form:
```json
{
  "diff": [
    {"type": "unchanged", "text": "h"},
    {"type": "deletion", "text": "ello"},
    {"type": "insertion", "text": "i"}
  ]
}
```
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
  const fullDiff = e('span',
    { onClick, title: 'Apply suggestion', className: 'link pointer dim font-code', },
    spans)
  return fullDiff
}"

inductive DiffRange where
  | insertion (s : String)
  | deletion (s : String)
  | unchanged (s : String)
deriving Repr

def mkDiffJson (ds : Array (Diff.Action × String)) :=
  toJson <| ds.map fun
    | (.insert, s) => json% { type: "insertion", text: $s }
    | (.delete, s) => json% { type: "deletion", text: $s }
    | (.skip  , s) => json% { type: "unchanged", text: $s }

def mkDiffString (ds : Array (Diff.Action × String)) : String :=
  let decorate (s : String) (dec : Char) : String :=
    .mk <| s.data.foldr (init := []) fun c acc =>
      c :: dec :: acc
  let rangeStrs := ds.map fun
    | (.insert, s) => decorate s '\u0332'
    | (.delete, s) => decorate s '\u0335'
    | (.skip  , s) => s
  rangeStrs.foldl (· ++ ·) ""

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
@[extern "lean_meta_tactic_try_this_process_suggestions_pushing_info"]
private opaque processSuggestionsPushingInfo :
  Syntax → String.Range → Array Suggestion → Option String → CoreM (Array String × Lsp.Range)

/--
Creates message data corresponding to a `HintSuggestions` collection and adds the corresponding info
leaf.
-/
def HintSuggestions.toHintMessage (suggestions : HintSuggestions) : CoreM MessageData := do
  let { ref, codeActionPrefix?, suggestions } := suggestions
  let mut msg := m!""
  if suggestions.size > 0 then
    for suggestion in suggestions do
      if let some range := (suggestion.span?.getD ref).getRange? then
        let (suggestionTexts, lspRange) ←
          processSuggestionsPushingInfo ref range #[suggestion.toSuggestion] codeActionPrefix?
        let suggestionText := suggestionTexts[0]!
        let map ← getFileMap
        let rangeContents := Substring.mk map.source range.start range.stop |>.toString
        let split (s : String) := s.toList.map (String.mk ∘ ([·])) |>.toArray
        let edits := Diff.diff (split rangeContents) (split suggestionText)
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
    hintMsg := hintMsg ++ (← suggestions.toHintMessage)
  return hintMsg
