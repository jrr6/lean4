import Lean

open Lean Meta Elab Tactic
variable {α : Type u} (as : List α)

namespace Good

theorem foo (as : List α) : as = as := by
  rcases as with _ | ⟨a, as⟩
  case cons =>
    have := foo as
    sorry
  sorry

end Good

-- set_option trace.Elab.app true
-- set_option trace.Elab.cases true

namespace Bad

-- TODO: why can't we resolve `foo` after `cases` (or `rcases`)? (Note it's fine after `induction`...)
theorem foo : as = as := by
  cases as with
  | nil => sorry
  | cons a as =>
    run_tac do
      Tactic.runTermElab <| logInfo m!"{(← getLCtx).decls.toArray.map (·.map (·.userName))}"
    have := foo (a :: as)
    sorry

-- TODO: explain why `as` is invalid here
def foo' : as = as :=
  as.casesOn rfl (fun _ tl => foo' (as := _ :: tl))

end Bad
