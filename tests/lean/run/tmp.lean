inductive Foo
  | foo
  | foo2

-- set_option trace.Meta.Match.debug true
-- set_option trace.Elab.match true
-- set_option trace.Elab.definition true

def correct : Foo → Foo → Prop
  | .foo => fun _ => True
  | .foo2 => fun _ => False

-- TODO: this should say "inconsistent"
def patCountMismatch : Foo → Foo → Prop
  | .foo => fun _ => True
  | .foo2, x => False

set_option pp.rawOnError true
def badType : Nat
  | 0 => 32

-- TODO: "inconsistent"
def eq : Foo → Foo → Prop
  | .foo, .foo => True
  | .foo2, .foo2 => True
  | _ => False

def tooMany₁ : Foo → Foo → Prop
  | f₁, f₂, f₃ => True

def tooMany₂ : Foo → Foo → Prop
  | .foo, .foo, f => True
  | .foo, .foo2 => True

def tooMany₃ : Foo → Foo → Prop
  | .foo, .foo2 => True
  | .foo, .foo, f => True

def tooFew₁ : Foo → Foo → Prop
  | .foo => False
  | .foo, .foo2 => True

def TyVal := Nat → String → Nat

def withTyValOK : TyVal
  | x, y => x

def noType
  | Nat.zero, "" => true
  | _ => false

def notEnoughInfo
  | x => x

def notEnoughInfoAndMismatch
  | x => x
  | x, y => x

def notEnoughInfoAndMismatch'
  | x, y => x
  | x => x

def ToggleFun (b : Bool) := if b then Nat else Nat → Nat

def trickyCase : (b : Bool) → ToggleFun b
  | true => 32
  | false, n => n

set_option trace.Elab.definition true in
def withTyValTooMany : TyVal
  | x, y, z =>
    let x := 34
    toString x ++ y ++ z

-- TODO: this error shouldn't include the LHS pattern
def withTyValTooFew : TyVal
  | x => x

def matchTooMany₁ (f : Foo) : Nat :=
  match f with
  | .foo, .foo => 32
  | _ => 41

def matchTooMany₂ (f : Foo) : Nat :=
  match f with
  | .foo => 41
  | .foo2, .foo2 => 32

def matchTooFew₁ (f : Foo) : Nat :=
  match f, f with
  | .foo => 41
  | .foo2, .foo2 => 32

def matchTooFew₂ (f : Foo) : Nat :=
  match f, f with
  | .foo2, .foo2 => 32
  | .foo => 41

def eq₂ : Foo → Foo → Prop :=
  λ a b => match a, b with
  | .foo, .foo => True
  | .foo2, .foo2 => True
  |  _ => False

def eq₃ : Foo → Foo → Prop :=
  λ a b => match a, b with
  | .foo, .foo => True
  | .foo2, .foo2 => True

def eq₃Many : Foo → Foo → Prop :=
  λ a b =>
  match a, b with
  | a, b, _ => True

def eq₃Few : Foo → Foo → Prop :=
  λ a b =>
  match a, b with
  | _ => True

def eq₃FewFn : Foo → Foo → Prop :=
  λ a b =>
  match a, b with
  | _ => fun b => True

def eq₄ : Foo → Foo → Prop :=
  λ a b => by
  induction a with
  | foo => sorry

inductive Three
  | one | two | three

def threeTest (t : Three) : Prop := by
  induction t with
  | one => exact True


-- Separate issue: the "match on unit" optimization in `elabMatchAux` sometimes isn't applied
def foo : Unit → Nat
  | () => 32
def foo₂ : Unit → Nat := λ | () => 32
#print foo
#print foo₂

def foo' := λ () => 32
def foo'₂ (x : Unit) :=
  match x with
  | () => 32
#print foo'
#print foo'₂
