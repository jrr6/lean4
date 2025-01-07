/-!
# `clear` in conversion mode

  Tests the basic functionality of the `clear` command in conversion mode (i.e., that it clears the
  specified hypotheses in the appropriate scope provided they have no dependents in the current
  proof state).
-/

-- Ensure `clear` correctly removes hypotheses, that removals persist after refocusing, and that
-- removals do not propagate beyond the `conv` block
/--
info: α : Type
x y z : α
h₂ : y = z
| x = y ∧ y = z
---
info: α : Type
x y z : α
| x = y
---
info: α : Type
x y z : α
h₁ : x = y
h₂ : y = z
⊢ x = y ∧ y = z
-/
#guard_msgs in
example (α : Type) (x y z : α) (h₁ : x = y) (h₂ : y = z) : x = y ∧ y = z := by
  conv =>
    clear h₁
    trace_state
    lhs
    clear h₂
    trace_state
  trace_state
  exact And.intro h₁ h₂

-- Ensure `clear` behaves correctly when nesting `conv` blocks
/--
info: α : Type
x y z : α
h₂ : y = z
| y
---
info: α : Type
x y z : α
h₁ : x = y
h₂ : y = z
| y = z
---
info: α : Type
x y z : α
h₂ : y = z
| y = z
-/
#guard_msgs in
example (α : Type) (x y z : α) (h₁ : x = y) (h₂ : y = z) : x = y ∧ y = z := by
  conv =>
    rhs
    conv =>
      lhs
      clear h₁
      trace_state
    trace_state
    clear h₁
    trace_state
  exact And.intro h₁ h₂

-- Ensure `clear` correctly handles multiple arguments, including by removing them in the correct
-- order
/--
info: α : Type
y z : α
h₂ : y = z
| y = z
---
info: α : Type
z : α
| z
-/
#guard_msgs in
example (α : Type) (x y z : α) (h₁ : x = y) (h₂ : y = z) : x = y ∧ y = z := by
  conv =>
    rhs
    clear x h₁
    trace_state
    rhs
    clear h₂ y
    trace_state
  exact And.intro h₁ h₂

-- Ensure `clear` refuses to remove arguments on which the goal or existing hypotheses depend
/--
error: tactic 'clear' failed, variable 'h' depends on 'x'
x : Nat
h : x = 1
| True
-/
#guard_msgs in
example (x : Nat) (h : x = 1) : True := by
  conv =>
    clear x

/--
error: tactic 'clear' failed, target depends on 'x'
x : Nat
| x = 2
-/
#guard_msgs in
example (x : Nat) : x = 2 := by
  conv =>
    clear x

/--
error: tactic 'clear' failed, target depends on 'x'
y x : Nat
| x = 2
-/
#guard_msgs in
example (y x : Nat) : x = 2 := by
  conv =>
    clear x y
