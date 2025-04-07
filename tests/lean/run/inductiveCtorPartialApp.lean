/-
# Parameter fixing in higher-order type functions

The inductive declaration elaborator should not impose a blanket prohibition on occurrences of the
defined type constructor that are either partially applied or applied to free variables, since some
such definitions are valid (see below). The elaborator should catch and report instances where the
constructor has been applied to something that can never be instantiated with the expected
parameter.
-/
inductive ZeroOrTwo (F : Nat → Type) (x : Nat) : Type
  | zero : ZeroOrTwo F x
  | two : F x → F x → ZeroOrTwo F x

inductive Foo (x : Nat) : Type
  | foo : ZeroOrTwo Foo x → Foo x

inductive Foo' (x : Nat) : Nat → Type
  | foo : ZeroOrTwo (Foo' · 13) x → Foo' x 71

-- The kernel erroneously detects this as invalid; nothing we can do in the elaborator
/--
error: (kernel) arg #2 of '_nested.ZeroOrTwo_1.two' contains a non valid occurrence of the datatypes being declared
-/
#guard_msgs in
inductive Foo'' (x : Nat) : Nat → Type
  | foo : ZeroOrTwo (fun x => Foo'' (id x) 13) x → Foo'' x 71

-- We correctly catch this as invalid
/--
error: inductive datatype parameter mismatch in
  Bad Nat
found
  Nat
but expected
  α

The value of a parameter must be the same throughout an inductive declaration; consider making this parameter an index if it must vary between occurrences in constructor types
-/
#guard_msgs in
inductive Bad (α : Type) : Prop
  | mk : Bad Nat → Bad α

-- This is too general and is illegal, but our heuristic must defer to the kernel
/--
error: (kernel) arg #2 of 'Bad'.mk' contains a non valid occurrence of the datatypes being declared
-/
#guard_msgs in
inductive Bad' (α : Type) : Prop
  | mk : (∀ (α : Type), Bad' α) → Bad' α
