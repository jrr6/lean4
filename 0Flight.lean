import Lean

open Lean hiding ErrorDescr

structure ErrorDescr where
  explanationName : Option Name
  data : Dynamic
  DataType : Type
  name : Name := by exact decl_name%
  [instDataTypeName : TypeName DataType] --:= by infer_instance

def ErrorDescr.new {α} [inst : TypeName α] (explanationName : Name) (data : α) (name : Name := by exact decl_name%) : ErrorDescr where
  explanationName
  data := Dynamic.mk data
  DataType := α
  instDataTypeName := inst
  name

def myDescr := ErrorDescr.new

deriving instance TypeName for Nat

-- instance : Repr ErrorDescr where
--   reprPrec d n := f!"{d.explanationName}, {d.name}"
#reduce ErrorDescr.create `hi 32

def ErrorDescr.getData? (d : ErrorDescr) : Option d.DataType :=
  @d.data.get? d.DataType d.instDataTypeName

inductive Exception where
  | error (ref : Syntax) (descr : ErrorDescr)

def logError (descr : ErrorDescr) :=
  descr

def foo : ErrorDescr := ErrorDescr.mk none (.mk 13) Nat
#print foo
