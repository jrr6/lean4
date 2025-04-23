def Exists.witness {p : α → Prop} : (∃ x : α, p x) → α
  | Exists.intro w h => w

structure Existy {α : Sort u} (p : α → Prop) : Prop where
  w : α
  h : p w

def foo (h : ∃ x: Nat, True) := h.1
theorem contradiction : False :=
  (by decide : 0 ≠ 1) (show foo ⟨0, trivial⟩ = foo ⟨1, trivial⟩ from rfl)
