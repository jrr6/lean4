
set_option linter.haveLet 2

-- set_option trace.Elab.let.decl true


  -- have x : have y := Nat; y := 0
  -- have y := rfl  -- where `y` is the body and unified with expected type of overall decl
  -- have (y, z) := (32, 24)
  -- have f (a : Nat) | 0 => 1 | n + 1 => a
  -- have (x, y) := (3, 4)
  -- have (x, y) := (fun f => 3 + f, fun f => 4 + f)
  -- have .mk x y := (3, fun t => Nat.succ t)

  -- have f (a : Nat)
  --   | y => fun x => x + y = 1

  -- let rec
  -- /-- This is `f` -/
  -- f (x : Nat) := match x with | 0 => 1 | x' + 1 => g x',
  -- /-- This is `g` -/
  -- g (y : Nat) := f y + 1

-- We shouldn't lint `let rec` b/c there's currently no corresponding `have rec` anyway

-- Don't forget let pattern and let "function-match" decls
set_option pp.rawOnError true

set_option pp.macroStack true

  -- haveI x := 3
def k (q : Nat) : Unit :=
  letI x : Bool := true
  Unit.unit
  -- let (a, b) := (4, 5)
  -- [a + n]
#eval k 59

#check 3 = 3
#check k.match_1
