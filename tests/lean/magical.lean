-- Projection to the witness should be rejected.
def witness : Nat := (⟨1, Nat.le_refl _⟩ : ∃ x, x ≥ 1).1

-- Projection to the property as well (it could contain the witness projection).
theorem witness_eq (h : ∃ x : Nat, True) : h.2 = h.2 := rfl

inductive P : Nat → n > 0 → Prop
  | mk (n) (q : n > 0) : P n q

def foo (h1 : P n h) (h2 : P m h') := h1.1 = h2.2
def test (h : Nat) := h.2

example (a : Nat) (h : ∃ x : Nat, x > a + 1) : ∃ x : Nat, x > a := by
  cases h with
  | intro w hw =>
    exists w
    omega
