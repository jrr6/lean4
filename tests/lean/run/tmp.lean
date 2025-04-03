import Lean

open Lean Meta Tactic TryThis
elab stx:"foo" : term => do
  let msg ← MessageData.appendHint m!"this is an error" m!"consider adding stuff"
    (some { ref := (← getRef), codeActionPrefix? := "add good thing: ", suggestions := #[
      SuggestionText.string "hello"
    ] })
  throwErrorAt stx (msg ++ "here's some more")

#eval foo
