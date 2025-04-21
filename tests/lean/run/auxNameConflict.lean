/-!
# Auxiliary declaration name conflict errors

When an auxiliary declaration name has already been declared, show the user a more informative error
message than the standard kernel one.
-/

inductive T1 : Type
  | below : T1 → T1

inductive T1' : Type
  | casesOn

inductive T1''
  | rec

structure T2 where
  rec : Nat

-- Pathological cases that we test for completeness

def T3.below := ()
inductive T3 : Type
  | mk : T3 → T3

-- Recursive predicates use a different aux decl generation strategy
def P.below := ()
inductive P : Nat → Prop
  | mk : P n → P (n + 1)
