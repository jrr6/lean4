/-!
This is an example for monadic reasoning.

The eventual goal is to provide a nice user experience for proving `fib_impl n = fib_spec n`
and related goals.

Currently, this file just contains a proof that uses `simp` lemmas to convert the `do` notation
and for loop into a `List.foldl`, and then gives a "functional" proof.
(This is *not* the nice user experience we are aiming for!)

Even in this setup, there is an awkward problem that `do` blocks handle multiple mutable variables
via the universe monomorphic `MProd` type, to avoid universe unification issues arising when using
`Prod`. We have to jump through some additional hoops to handle that.
We could provide simp lemmas, simprocs, and possibly custom tactics to eliminator `MProd` from the
terms produced by `do` notation.
-/

def fib_spec : Nat → Nat
| 0 => 0
| 1 => 1
| n+2 => fib_spec n + fib_spec (n+1)

def fib_impl (n : Nat) := Id.run do
  if n = 0 then return 0
  let mut a := 0
  let mut b := 0
  b := b + 1
  for _ in [1:n] do
    let a' := a
    a := b
    b := a' + b
  return b

theorem fib_correct {n} : fib_impl n = fib_spec n := by
  -- The default simp set eliminates the binds generated by `do` notation,
  -- and converts the `for` loop into a `List.foldl` over `List.range'`.
  simp [fib_impl]
  match n with
  | 0 => simp [fib_spec]
  | n+1 =>
    -- Note here that we have to use `⟨x, y⟩ : MProd _ _`, because these are not `Prod` products.
    suffices ((List.range' 1 n).foldl (fun b a ↦ ⟨b.snd, b.fst + b.snd⟩) (⟨0, 1⟩ : MProd _ _)) =
        ⟨fib_spec n, fib_spec (n + 1)⟩ by simp_all
    induction n with
    | zero => rfl
    | succ n ih => simp [fib_spec, List.range'_1_concat, ih]
