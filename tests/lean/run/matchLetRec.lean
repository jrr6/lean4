-- `Match.lean`: 1 min rebuild
-- `Match` + `LetRec`: 1 min rebuild
-- `MutualDef`: 1 min rebuild
-- `Message.lean` (where the kernel stuff is): 10 min rebuild

-- def foo (n : Nat) :=
--   match n with
--   | 0 | n + 1 => let rec k := 3; n
-- #eval foo 1
set_option trace.Elab.letrec true
set_option trace.Elab.definition true
set_option trace.Elab.match true
/-
Speculation:
`middle` takes `f`
`inner` does not (seemingly need to) take `f`
somehow, when we don't have an intervening `match`, Lean recognizes we need to insert the `f` arg anyway
but the `match` seemingly doesn't allow that to happen?
OR the `f` does get inserted, but the fvars don't match up appropriately somehow?
-/
-- set_option pp.raw true

/-
ToLift: [outer.middle.inner (f _fvar.66, m _uniq.65) : Unit := @_fvar.17 (Nat.succ _fvar.18),
     outer.middle (f _fvar.17, m _uniq.16) : Nat → Unit := fun n =>
       match n with
       | 0 => ()
       | n_1.succ =>
         (fun inner =>
             let x := _fvar.9;
             ())
           (outer.middle.inner n)]
-/
set_option pp.match false
set_option pp.mvars.delayed true
def outer (f : Nat → Nat) :=
  let rec middle n := match n with
  | 0 => () | .succ _ =>
    let rec inner := middle (Nat.succ n)
    let _ := f
    ()
  ()
#print outer.middle

/-
ToLift: [Foo.outer.middle.inner (f _fvar.167, m _uniq.166) : Unit := @_fvar.162 (Nat.succ _fvar.163),
     Foo.outer.middle (f _fvar.162, m _uniq.161) : Nat → Unit := fun n =>
       (fun inner =>
           let x := _fvar.154;
           ())
         (Foo.outer.middle.inner _fvar.154 n)]
-/
namespace Foo
def outer (f : Nat → Nat) :=
  let rec middle n :=
    let rec inner := middle (Nat.succ n)
    let _ := f
    ()
  ()

#check Foo.outer.middle
#check _root_.outer.middle
#check Foo.outer.middle.inner
#check _root_.outer.middle.inner

def foo :=
  let rec f n := bar n
  f 91
where
  bar n := 2 * n

/- Note: `by` blocks induce similar behavior, since they also elab to mvars -/
def tac (f : Nat → Nat) :=
  let rec middle n := by
    let rec inner := middle (Nat.succ n)
    have := f
    exact ()
  ()

def tac' (f : Nat → Nat) := by
  let rec middle n :=
    let rec inner := middle (Nat.succ n)
    have := f
    ()
  exact ()

-- TODO: we should make sure that mutually recursive `let rec`s don't mess any of this up further
