import Lean

open Lean Meta Hint Tactic TryThis
elab "foo" stx:"bar" "baz" : term => do
  let sug : HintSuggestions := {
    ref := stx
    codeActionPrefix? := "add greeting: "
    suggestions := #[
      { suggestion := SuggestionText.string "hello", preInfo? := "general: " },
      { suggestion := SuggestionText.string "cheers", postInfo? := " if you're feeling British"}
    ]
  }
  let msg := m!"your program is insufficiently friendly"
  let msg := msg ++ (← MessageData.hint m!"consider adding a greeting to your program to make it friendlier" sug)
  throwErrorAt stx (msg ++ "\n\nnote: there are good reasons to do this")

#eval foo bar baz

def split (s : String) := s.toList.map (String.mk ∘ ([·])) |>.toArray

run_meta do
  Widget.savePanelWidgetInfo tryThisDiffWidget.javascriptHash (← getRef) (props :=
    return json% {diff : $(mkDiffJson (diff (split "👍🏻hello") (split "awwelo")))})

-- def myersDiff (s s' : String) := Id.run do
--   let (n, m) := (s.length, s'.length)
--   let maxSteps := n + m
--   let mut v := Array.replicate (2 * maxSteps + 1) (0 : Nat)
--   let mut vs : Array (Array Nat) := #[]

--   let mut (x, y) : Nat × Nat := (0, 0)
--   for d in [:maxSteps + 1] do
--     vs := vs.push v
--     for i in [0 : d + 1] do
--       let k : Int := -d + 2*i
--       if k == -d || (k ≠ d && get! v (k - 1) < get! v (k + 1)) then
--         x := get! (α := Nat) v (k + 1)
--       else
--         x := get! v (k - 1) + 1
--       y := (x - k).toNat
--       while x < n && y < m && s.get ⟨x⟩ == s'.get ⟨y⟩ do
--         (x, y) := (x + 1, y + 1)
--       if x ≥ n && y ≥ m then
--         return d
--       v := set! v k x
--   panic! "Diff algorithm did not terminate correctly"
-- where
--   wrapIdx {α} (v : Array α) (x : Int) :=
--     if x < 0 then (v.size + x).toNat else x.toNat
--   set! {α} [Inhabited α] (v : Array α) (x : Int) (a : α) : Array α :=
--     v.set! (wrapIdx v x) a
--   get! {α} [Inhabited α] (v : Array α) (x : Int) : α :=
--     v[wrapIdx v x]!

-- #eval _root_.myersDiff "👍🏻hello" "awwelo"
def old := "module Diff
  class Printer


    LINE_WIDTH = 4

    def initialize(output: $stdout)
      @output = output
      @colors = output.isatty ? COLORS : {}
    end

    def print(diff)
      diff.each { |edit| print_edit(edit) }
    end

    def print_edit(edit)
    end

  end
end
"
def new := "module Diff
  class Printer


    LINE_WIDTH = 4

    def initialize(output: $stdout)
      @output = output
      @colors = output.isatty ? COLORS : {}
    end

    def print(diff)
      diff.each { |edit| print_edit(edit) }
    end

  end
end"

run_meta do logInfo old
elab "qqqq" "qqqq" : term => do
  logInfo (← MessageData.nil.appendHint m!"try this instead" <| some { ref := (← getRef), suggestions := #[new] })
  return (mkConst `Unit.unit)
run_meta do logInfo (← MessageData.nil.appendHint m!"try this instead" <| some { ref := (← getRef), suggestions := #[new] })
#check qqqq
qqqq

-- FIXME: account for line breaks in widget
#eval diff (split old) (split new)
#eval jsonOfDiffRanges (diff (split old) (split new))
run_meta do
  Widget.savePanelWidgetInfo tryThisDiffWidget.javascriptHash (← getRef) (props :=
    return json% {diff : $(jsonOfDiffRanges (diff (split old) (split new)))})
