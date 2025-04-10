import Lean

open Lean Meta Hint Tactic TryThis
elab foo:"foo" stx:"bar" "baz" : term => do
  let sug : HintSuggestions := {
    ref := stx
    codeActionPrefix? := "add greeting: "
    suggestions := #[
      { suggestion := SuggestionText.string "hello", preInfo? := "general: ", span? := foo },
      { suggestion := SuggestionText.string "cheers", postInfo? := " if you're feeling British", span? := stx }
    ]
  }
  let msg := m!"your program is insufficiently friendly"
  let msg := msg ++ (← MessageData.hint m!"consider adding a greeting to your program to make it friendlier" sug)
  throwErrorAt stx (msg ++ "\n\nnote: there are good reasons to do this")

#eval foo bar baz

def split (s : String) := s.toList.toArray

run_meta do
  Widget.savePanelWidgetInfo tryThisDiffWidget.javascriptHash (← getRef) (props :=
    return json% {diff : $(mkDiffJson (Diff.diff (split "👍🏻hello") (split "awwelo")))})
