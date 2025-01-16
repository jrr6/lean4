prelude

import Lean.Meta.Basic
import Lean.Meta.AppBuilder

open Lean Meta

/-- ｢e｣ indicates that `e` was treated as an atomic variable when developing the displayed system of
(in)equalities. -/
notation "｢" t "｣" => t

/-- Used to tag an expression as being considered "atomic" by some equation-solving procedure. Will
be pretty-printed within partial square brackets (｢ ｣). -/
@[reducible] def assignmentAtom {α : Sort u} (e : α) : α := e

def mkAssignmentAtom (e : Expr) : MetaM Expr :=
  mkAppM ``assignmentAtom #[e]

@[app_unexpander assignmentAtom]
def unexpandAssignmentAtom : Lean.PrettyPrinter.Unexpander
  | `($_ppAtom $arg) => `(｢ $arg ｣)
  | s => return s
