import Lean

-- EXAMPLE FROM BACKLOG
theorem getElem?_eq_some_getElem {α} (xs : List α) (i : Nat) (h : i < xs.length) :
    xs[i]? = some xs[i] := by
  simp [h]

theorem t {m : List Nat} (h : 0 < m.length) (q : Nat) (hq : q = 0) : m[q]? = some m[0] :=
  by
  rw [getElem?_eq_some_getElem]
  · subst hq
    rfl

----------

-- EXAMPLE FROM BACKLOG
opaque F : Nat → Nat

inductive Foo : Nat → Type
  | foo n : Foo (F n)

set_option pp.proofs true

example (a b : Nat) (hab : F a = F b) (hab' : a ≠ b) :
    Foo.foo a ≠ hab ▸ Foo.foo b := by
  intro h
  unfold Eq.symm at h
  have := @heq_of_eqRec_eq (Foo (F b)) (Foo (F a)) (Foo.foo b) (Foo.foo a) (hab ▸ rfl) h.symm
  sorry

example : p → q ∧ r → s := by
  intro n m a

example : p → p := by
  intro hq (hp : True)

set_option pp.notation false in
#check fun (a b : Nat) (hab : F a = F b) =>
  @Eq.rec Nat (F a) (fun x h => x = F a) rfl (F b) hab

--------

open Lean Meta Elab Term
run_elab do
  let stx ← `([1,2,3][0])
  let e ← elabTerm stx none
  logInfo m!"{e.setPPExplicit true |>.setOption `pp.notation false}"


-- EXAMPLE: we don't pp universes
theorem foo (x : Type → Type) : x = x := rfl
example (h : id List.{4} = id List.{4}) : id List.{3} = id List.{3} := by rw [foo List] at h
