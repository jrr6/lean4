import Lean
open Lean Meta

def substIssue (hLocalDecl : LocalDecl) : MetaM Unit := do
  let error {α} _ : MetaM α := throwError "{hLocalDecl.type}"
  let some (_, lhs, rhs) ← matchEq? hLocalDecl.type | error ()
  error ()

theorem omegaTest (a b c : Nat) (h1 : a ≤ b + c) (h2 : b ≤ 2 * c) (h3 : a + c ≤ b + c) : c ≤ a := by
  omega
