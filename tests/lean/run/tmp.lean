import Lean
open Lean Meta

run_meta do
  logError m!"The 'batteries included' extended library for Lean 4. This is a collection of data structures and tactics intended for use by both computer-science applications and mathematics applications of Lean 4.\
  \n\nTo use batteries in your project, add the following to your lakefile." `Lean.BadError
