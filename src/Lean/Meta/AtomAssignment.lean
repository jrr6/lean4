prelude

import Lean.Meta.Basic
import Lean.Meta.AppBuilder
import Lean.PrettyPrinter.Delaborator

register_builtin_option pp.inlineAssignmentAtoms : Bool := {
  defValue := true
  group    := "pp"
  descr    := "(pretty printer) display atomic values in equational assignments inline rather than as variable names"
}

namespace Lean.Meta

structure AtomAssignmentM.State where
  atomAssignment : Std.HashMap Expr Name := {}
  nameIndex : Nat := 0

abbrev AtomAssignmentM := StateT AtomAssignmentM.State MetaM

namespace AtomAssignmentM

/-- ｢e｣ indicates that `e` was treated as an atomic variable when developing the displayed system of
(in)equalities. -/
notation "｢" t "｣" => t

set_option linter.unusedVariables false in
/-- Used to tag an expression as being considered "atomic" by some equation-solving procedure. Will
be pretty-printed within partial square brackets (｢ ｣). -/
@[reducible] def assignableAtom {α : Sort u} (altName : Option String) (e : α) : α := e

def getAtomAssignment : AtomAssignmentM (Std.HashMap Expr Name) :=
  return (← get).atomAssignment

private def varNameOf (i : Nat) : String :=
  let c : Char := .ofNat ('a'.toNat + (i % 26))
  let suffix := if i < 26 then "" else s!"_{i / 26}"
  s!"{c}{suffix}"

private def inScope (s : String) : MetaM Bool := do
  let n := .mkSimple s
  if (← resolveGlobalName n).isEmpty then
    if ((← getLCtx).findFromUserName? n).isNone then
      return false
  return true

def getNewAssignmentAtomName (e : Expr) : AtomAssignmentM Name := do
  let { nameIndex, .. } ← get
  let mut nextIndex := nameIndex + 1
  while (← inScope (varNameOf nextIndex)) do
    nextIndex := nextIndex + 1
  let name := varNameOf nameIndex |>.toName
  modify fun { atomAssignment, .. } =>
    { nameIndex := nextIndex
      atomAssignment := atomAssignment.insert e name }
  return name

def mkAtomAssignmentMessageData : AtomAssignmentM MessageData := do
  if pp.inlineAssignmentAtoms.get (← getOptions) then
    return m!""
  -- FIXME: this sort is invalid b/c, e.g., "b_9" < "b_10"
  let assignments := (← getAtomAssignment).toArray.qsort (·.2.toString < ·.2.toString)
  let mut messageData := m!""
  for (assignee, name) in assignments do
    -- TODO: can we use `Syntax` for the `name`?
    messageData := messageData ++ m!" {name} := {assignee}"
  return m!"\nwhere\n{messageData}"

def mkAssignableAtom (e : Expr) (masked : Bool := False) : AtomAssignmentM Expr := do
  let name ←
    if !(pp.inlineAssignmentAtoms.get (← getOptions)) then pure none else
    -- FIXME: not a valid name
    if masked then pure <| some "(masked)".toName else
    match (← AtomAssignmentM.getAtomAssignment)[e]? with
    | none      => Option.some <$> AtomAssignmentM.getNewAssignmentAtomName e
    | some name => pure <| some name
  mkAppM ``assignableAtom #[toExpr name, e]


@[app_unexpander assignableAtom]
def unexpandAssignmentAtom : Lean.PrettyPrinter.Unexpander
  | `($_ppAtom none $arg) => `(｢ $arg ｣)
  | `($_ppAtom (some $name) $arg) => `(name)
  | s => return s

end AtomAssignmentM

def withTrackingAtomAssignment (x : AtomAssignmentM α) : MetaM α :=
  x.run' {}

end Lean.Meta
