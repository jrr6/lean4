/-
Copyright (c) 2025 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Joseph Rotella
-/
prelude
import Lean.ErrorExplanation

/--
This error occurs when the type of a definition is not fully specified and the elaborator is unable
to infer the type from the available information. If the definition contains parameters, this error
refers only to the return type following the colon (the error
[`Lean.BinderTypeInferenceFailed`](lean-manual://errorExplanation/Lean.BinderTypeInferenceFailed)
appears if the type of a parameter cannot be inferred).

To resolve this error, provide additional type information in the definition. The simplest way to do
this is to provide an explicit return type after the colon in a definition header, or fill in holes
or implicit arguments if one is already present. Alternatively, adding further type information to
the body of the definition—such as by specifying implicit type arguments or giving explicit types to
`let` binders—may allow Lean to infer the type of the definition.

Note that if the resulting type of a definition is provided in the definition header—even if the
type contains holes—Lean will not use information from the definition body when inferring the
definition's type. To specify the resulting type without this behavior, use the `show` syntax
demonstrated in the example below. Additionally, it is always necessary to fully specify the type of
a `theorem` definition: the `theorem` declaration syntax requires a type annotation, and the
elaborator will never attempt to use the theorem body to infer the proposition being proved.

# Examples

## Specifying uninferrable type parameter

```lean broken
def emptyNats :=
  []
```
```output
failed to infer type of `emptyNats`
```

```lean fixed (title := "Fixed (type annotation)")
def emptyNats : List Nat :=
  []
```
```lean fixed (title := "Fixed (implicit argument)")
def emptyNats :=
  List.nil (α := Nat)
```

Here, Lean is unable to infer the value of the parameter `α` of the `List` type constructor, which
also prevents it from inferring the type of the definition. Two fixes are possible: specifying the
expected type of the definition allows Lean to infer the appropriate implicit argument to the
`List.nil` constructor; alternatively, making this implicit argument explicit in the function body
provides sufficient information for Lean to infer the definition's type.

-/
register_error_explanation Lean.InferDefTypeFailed {
  summary := "The type of a definition was not fully provided and could not be inferred."
  sinceVersion := "4.21.0"
}
