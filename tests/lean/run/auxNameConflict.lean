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
  -- | rec

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

inductive X where
  | noConfusion (x : X)
  | noConfusionType
  | below
  | brecOn
  | recOn
  | ibelow
  | binductionOn
  | _sizeOf_inst
  | _sizeOf_1

#check X.noConfusion

structure Y where
  noConfusion : Y
  noConfusionType : Nat
  below : Nat
  brecOn : Nat
  recOn : Nat
  casesOn : Nat
  rec : Nat
  ibelow : Nat
  binductionOn : Nat
  _sizeOf_inst : Nat
  _sizeOf_1 : Nat



def foo : Nat → Nat
  | n + 41 => foo (n + 13) + 9
  | n + 2 => foo n + foo (n + 1)
  | 1 => induct_unfolding 13
  | 0 => induct 0
where
  induct : Nat → Nat := id
  induct_unfolding : Nat → Nat := id

#check foo.induct_unfolding
#check foo.induct
