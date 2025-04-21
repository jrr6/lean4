/-
Copyright (c) 2025 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Joseph Rotella
-/

import Lean.Meta.Basic

namespace Lean.Meta

def ensureAuxNameUnused (auxName : Name) (declName : Name) : MetaM Unit := do
  if (← getEnv).contains auxName then
    throwError m!"Failed to generate auxiliary declaration '{.ofConstName auxName}' for '{declName}': \
      A constant with the auxiliary declaration's name was already declared." ++
      .hint' "Rename the previously declared constant '{.ofConstName auxName}' to allow this auxiliary \
        declaration to be added."
