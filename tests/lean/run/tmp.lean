import Lean

class Bah (α : Type) where

def foo {α} [Bah α] (x : α) := x
def Bool.bar {α} [Bah α] (x : α) := foo x

instance : Bah Bool where

structure Wah (α : Type) [Add α] where
  foo : α
  [inst : Add α]

def structInst : Wah Nat := { foo := 3, inst := sorry }

-- set_option trace.Meta.Match.debug true

open Lean Meta Elab Tactic

def foob (q : Nat) :=
  match h : q with
  | 0 => 0
  | n + 1 => by
    run_tac do (← getMainGoal).cleanup
set_option pp.rawOnError true
#eval foob 32
#print foob

elab "print_provenances%" t:term : term <= expectedType? => do
  let provs := (← getMCtx).provenances
  let mvarIds := provs.toList.map fun (m, v) => (m.name, v.kind.toMessageData)
  logInfo m!"{mvarIds}"
  Term.elabTerm t expectedType?

def bar [inst : Add α] : Add α := inst

run_meta do
  let stx ← `(let x := 3; x)
  IO.println (stx.raw.prettyPrint)

theorem afoo : 1 = 1 := rfl
