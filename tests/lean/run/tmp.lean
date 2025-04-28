import Lean

open Lean Meta Hint Tactic
set_option hygiene false in
elab foo:"foo" stx:"bar" "baz" : term => do
  let sug : Suggestions := {
    ref := stx
    codeActionPrefix? := "add greeting: "
    suggestions := #[
      { suggestion := .string "hello", preInfo? := "general: ", span? := foo },
      { suggestion := .string "cheers", postInfo? := " if you're feeling British", span? := stx }
    ]
  }
  let msg := m!"Your program is insufficiently friendly" ++
    (← MessageData.hint m!"Consider adding a greeting to your program to make it friendlier" sug)
  let otherSug : Suggestions := {
    ref := stx
    suggestions := #["let x := 5; x", (← `(let x := 6; x))]
  }
  let fullMsg := msg ++ .note "There are good reasons to do this" ++ (← MessageData.hint m!"Or try these!" otherSug)
  throwErrorAt stx fullMsg

#eval foo bar baz

def split (s : String) := s.toList.toArray

run_meta do
  Widget.savePanelWidgetInfo tryThisDiffWidget.javascriptHash (← getRef) (props :=
    return json% {diff : $(mkDiffJson (Diff.diff (split "👍🏻hello") (split "awwelo")))})
