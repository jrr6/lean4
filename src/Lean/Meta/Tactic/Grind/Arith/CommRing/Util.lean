/-
Copyright (c) 2025 Amazon.com, Inc. or its affiliates. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import Lean.Meta.Tactic.Grind.Types
import Lean.Meta.Tactic.Grind.Arith.CommRing.Poly

namespace Lean.Meta.Grind.Arith.CommRing

def get' : GoalM State := do
  return (← get).arith.ring

@[inline] def modify' (f : State → State) : GoalM Unit := do
  modify fun s => { s with arith.ring := f s.arith.ring }

def checkMaxSteps : GoalM Bool := do
  return (← get').steps >= (← getConfig).ringSteps

def incSteps : GoalM Unit := do
  modify' fun s => { s with steps := s.steps + 1 }

structure RingM.Context where
  ringId : Nat
  /--
  If `checkCoeffDvd` is `true`, then when using a polynomial `k*m - p`
  to simplify `.. + k'*m*m_2 + ...`, the substitution is performed IF
  - `k` divides `k'`, OR
  - Ring implements `NoNatZeroDivisors`.

  We need this check when simplifying disequalities. In this case, if we perform
  the simplification anyway, we may end up with a proof that `k * q = 0`, but
  we cannot deduce `q = 0` since the ring does not implement `NoNatZeroDivisors`
  See comment at `PolyDerivation`.
  -/
  checkCoeffDvd : Bool := false

class MonadGetRing (m : Type → Type) where
  getRing : m Ring

export MonadGetRing (getRing)

@[always_inline]
instance (m n) [MonadLift m n] [MonadGetRing m] : MonadGetRing n where
  getRing    := liftM (getRing : m Ring)

/-- We don't want to keep carrying the `RingId` around. -/
abbrev RingM := ReaderT RingM.Context GoalM

abbrev RingM.run (ringId : Nat) (x : RingM α) : GoalM α :=
  x { ringId }

abbrev getRingId : RingM Nat :=
  return (← read).ringId

protected def RingM.getRing : RingM Ring := do
  let s ← get'
  let ringId ← getRingId
  if h : ringId < s.rings.size then
    return s.rings[ringId]
  else
    throwError "`grind` internal error, invalid ringId"

instance : MonadGetRing RingM where
  getRing := RingM.getRing

@[inline] def modifyRing (f : Ring → Ring) : RingM Unit := do
  let ringId ← getRingId
  modify' fun s => { s with rings := s.rings.modify ringId f }

structure SemiringM.Context where
  semiringId : Nat

abbrev SemiringM := ReaderT SemiringM.Context GoalM

abbrev SemiringM.run (semiringId : Nat) (x : SemiringM α) : GoalM α :=
  x { semiringId }

abbrev getSemiringId : SemiringM Nat :=
  return (← read).semiringId

def getSemiring : SemiringM Semiring := do
  let s ← get'
  let semiringId ← getSemiringId
  if h : semiringId < s.semirings.size then
    return s.semirings[semiringId]
  else
    throwError "`grind` internal error, invalid semiringId"

protected def SemiringM.getRing : SemiringM Ring := do
  let s ← get'
  let ringId := (← getSemiring).ringId
  if h : ringId < s.rings.size then
    return s.rings[ringId]
  else
    throwError "`grind` internal error, invalid ringId"

instance : MonadGetRing SemiringM where
  getRing := SemiringM.getRing

@[inline] def modifySemiring (f : Semiring → Semiring) : SemiringM Unit := do
  let semiringId ← getSemiringId
  modify' fun s => { s with semirings := s.semirings.modify semiringId f }

abbrev withCheckCoeffDvd (x : RingM α) : RingM α :=
  withReader (fun ctx => { ctx with checkCoeffDvd := true }) x

def checkCoeffDvd : RingM Bool :=
  return (← read).checkCoeffDvd

def getTermRingId? (e : Expr) : GoalM (Option Nat) := do
  return (← get').exprToRingId.find? { expr := e }

def setTermRingId (e : Expr) : RingM Unit := do
  let ringId ← getRingId
  if let some ringId' ← getTermRingId? e then
    unless ringId' == ringId do
      reportIssue! "expression in two different rings{indentExpr e}"
    return ()
  modify' fun s => { s with exprToRingId := s.exprToRingId.insert { expr := e } ringId }

def getTermSemiringId? (e : Expr) : GoalM (Option Nat) := do
  return (← get').exprToSemiringId.find? { expr := e }

def setTermSemiringId (e : Expr) : SemiringM Unit := do
  let semiringId ← getSemiringId
  if let some semiringId' ← getTermSemiringId? e then
    unless semiringId' == semiringId do
      reportIssue! "expression in two different semirings{indentExpr e}"
    return ()
  modify' fun s => { s with exprToSemiringId := s.exprToSemiringId.insert { expr := e } semiringId }

/-- Returns `some c` if the current ring has a nonzero characteristic `c`. -/
def nonzeroChar? [Monad m] [MonadGetRing m] : m (Option Nat) := do
  if let some (_, c) := (← getRing).charInst? then
    if c != 0 then
      return some c
  return none

/-- Returns `some (charInst, c)` if the current ring has a nonzero characteristic `c`. -/
def nonzeroCharInst? [Monad m] [MonadGetRing m] : m (Option (Expr × Nat)) := do
  if let some (inst, c) := (← getRing).charInst? then
    if c != 0 then
      return some (inst, c)
  return none

def noZeroDivisorsInst? : RingM (Option Expr) := do
  return (← getRing).noZeroDivInst?

/--
Returns `true` if the current ring satisfies the property
```
∀ (k : Nat) (a : α), k ≠ 0 → OfNat.ofNat (α := α) k * a = 0 → a = 0
```
-/
def noZeroDivisors : RingM Bool := do
  return (← getRing).noZeroDivInst?.isSome

/-- Returns `true` if the current ring has a `IsCharP` instance. -/
def hasChar  : RingM Bool := do
  return (← getRing).charInst?.isSome

/--
Returns the pair `(charInst, c)`. If the ring does not have a `IsCharP` instance, then throws internal error.
-/
def getCharInst : RingM (Expr × Nat) := do
  let some c := (← getRing).charInst?
    | throwError "`grind` internal error, ring does not have a characteristic"
  return c

def isField : RingM Bool :=
  return (← getRing).fieldInst?.isSome

def isQueueEmpty : RingM Bool :=
  return (← getRing).queue.isEmpty

def getNext? : RingM (Option EqCnstr) := do
  let some c := (← getRing).queue.min | return none
  modifyRing fun s => { s with queue := s.queue.erase c }
  incSteps
  return some c

end Lean.Meta.Grind.Arith.CommRing
