/-
TODO: copyright header
Tactic-mode `have` linter adapted from Mathlib
-/
import Lean.Elab.BuiltinNotation
import Lean.Elab.Command
import Lean.Server.InfoUtils

/-!
#  The `have` vs `let` linter

The `have` vs `let` linter flags uses of `have` to introduce a hypothesis whose Type is not `Prop`.

The option for this linter is a natural number, but really there are only 3 settings:
* `0` -- inactive;
* `1` -- active only on noisy declarations;
* `2` or more -- always active.

TODO:
* Also lint `let` vs `have`.
* `haveI` may need to change to `let/letI`?
* `replace`, `classical!`, `classical`, `tauto` internally use `have`:
  should the linter act on them as well?
-/

open Lean Elab Command Meta

namespace Lean.Linter

/-- The `have` vs `let` linter emits a warning on `have`s introducing a hypothesis whose
Type is not `Prop`.
There are three settings:
* `0` -- inactive;
* `1` -- active only on noisy declarations;
* `2` or more -- always active.

The default value is `1`.
-/
register_option linter.haveLet : Nat := {
  -- TODO: make this `Bool`-valued and add a separate `linter.haveLet.alwaysActive` option
  defValue := 0
  descr := "enable the `have` vs `let` linter:\n\
            * 0 -- inactive;\n\
            * 1 -- active only on noisy declarations;\n\
            * 2 or more -- always active."
}

namespace haveLet

/-- find the `have` syntax. -/
def isHaveTac : Syntax → Bool
  | .node _ ``Lean.Parser.Tactic.tacticHave_ _ => true
  | _ => false

def isHaveTerm : Syntax → Bool
  | .node _ ``Lean.Parser.Term.have _ => true
  | _ => false

def isLetOrLetFun : Syntax → Bool
  | .node _ ``Lean.Parser.Term.let _ => true
  | .node _ ``Lean.Parser.Term.let_fun _ => true
  | _ => false
end haveLet

end Lean.Linter

namespace Lean.Linter.haveLet

-- partial def InfoTree.foldInfo (f : ContextInfo → Info → α → α) (init : α) : InfoTree → α :=
--   go none init
-- where go ctx? a
--   | .context ctx t => go (ctx.mergeIntoOuter? ctx?) a t
--   | .node i ts =>
--     let a := match ctx? with
--       | none => a
--       | some ctx => f ctx i a
--     ts.foldl (init := a) (go <| i.updateContext? ctx?)
--   | .hole _ => a

partial def drawInfoTree (t : InfoTree) : MessageData :=
    go none t |>.toList.map (m!"|" ++ ·) |> (MessageData.joinSep · "\n")
where

  go : Option ContextInfo → InfoTree → Array MessageData
  | ctx?, .context ctx t => #[m!"[ctx]"] ++ (go (ctx.mergeIntoOuter? ctx?) t).map (m!"-" ++ ·)
  | ctx?, .node i ts =>
    let rest := ts.foldl (init := #[]) (fun a t =>
      let inners := go (i.updateContext? ctx?) t
      a ++ inners.map (m!"-" ++ ·)
    )
    #[m!"{if let .original .. := i.stx.getHeadInfo then m!"{Lean.checkEmoji}" else ""}{i.stx.getKind} {i.stx}"] ++ rest
  | _, .hole _ => #["[hole]"]

private partial def _root_.Lean.Elab.InfoTree.deepestNode
  (p : ContextInfo → Info → PersistentArray InfoTree → Option α)
  (t : InfoTree)
  (ctx? : Option ContextInfo := none) : Option α :=
  go ctx? t
where
  go : Option ContextInfo → InfoTree → Option α
  | ctx?, .context ctx t => go (ctx.mergeIntoOuter? ctx?) t
  | some ctx, .node i cs =>
    cs.toList.firstM (go <| i.updateContext? ctx)
    <|> p ctx i cs
  | none, .node .. => panic! "unexpected context-free info tree node"
  | _, .hole .. => none

private def _root_.Lean.Elab.InfoTree.termInfo! : InfoTree → TermInfo
  | .node (.ofTermInfo ti) _ => ti
  | _ => panic! "Expected TermInfoTree"

private def _root_.Lean.Elab.InfoTree.nodeKind! : InfoTree → String
  | .node info _ =>
    match info with
    | .ofTermInfo _ => "term"
    | .ofTacticInfo _ => "tactic"
    | .ofFVarAliasInfo _ => "fvar alias"
    | .ofCustomInfo _ => "custom"
    | .ofMacroExpansionInfo _ => "macro expansion"
    | _ => "weird"
  | _ => panic! "Expected node"

inductive DeclKind
  | letDecl | letIDecl | haveDecl | haveIDecl

def DeclKind.toString : DeclKind → String
  | .letDecl => "let"
  | .letIDecl => "letI"
  | .haveDecl => "have"
  | .haveIDecl => "haveI"

def DeclKind.counterpart : DeclKind → DeclKind
  | .letDecl => .haveDecl
  | .letIDecl => .haveIDecl
  | .haveDecl => .letDecl
  | .haveIDecl => .letIDecl

def DeclKind.isHaveLike : DeclKind → Bool
  | .haveDecl | .haveIDecl => true
  | _ => false

structure BinderInfo where
  name : Name
  type : MessageData
  isProp : Bool

structure DeclInfo where
  binders : List BinderInfo
  stx : Syntax
  kind : DeclKind

instance : ToString BinderInfo where
  toString := fun { name, type, isProp } => s!"[{if isProp then "prop" else "data"}] {name}"

-- private def getBinderInfo? (ctx : ContextInfo) : InfoTree → IO (Option DeclInfo)
--   | .node (.ofTermInfo info) _ => info.runMetaM ctx do
--     if info.isBinder then
--       let name := info.expr
--       let type ← Meta.inferType name
--       let isProp := (← Meta.inferType type).isProp
--       return some { name := (← ppExpr name), type := m!"{type}", isProp }
--     else
--       return none
--   | _ => return none

private def processLetFunTermInfo (ti : TermInfo) (ctx : ContextInfo) : IO (Option (Format × Bool)) :=
  ti.runMetaM ctx do
    if ti.expr.isAppOf ``letFun then
      let some motive := ti.expr.getAppArgs[0]? | return none
      let motiveType ← inferType motive
      let isProp ← isDefEq motiveType (.sort .zero)
      return some (← ppExpr motive, isProp)
    else
      return none

--  :=
--   fun stx =>
--     dbg_trace (if stx.raw matches .node _ ``Lean.Parser.Term.haveIdLhs _ then "ok" else s!"expected haveIdLhs, got {stx.raw.getKind}")
    -- stx.raw[0].getId

def findElaboratedLetInfo (ctx : ContextInfo) : InfoTree → IO (List BinderInfo)
  -- TODO: handle pattern matches
  | .node (.ofTermInfo ti) _ => ti.runMetaM ctx do
    if let Expr.letE declName type _ _ _ := ti.expr then
      let sort ← inferType type
      let isProp ← isDefEq sort (.sort .zero)
      return [{ name := declName, type := (← ppExpr sort), isProp := isProp }]
    return []
  | _ => return []

def findElaboratedInlineInfo (lctx? : Option LocalContext) (ctx : ContextInfo) : InfoTree → IO (List BinderInfo)
  -- TODO: may want to recursively search? Not sure how best to do this...
  | .node (.ofCustomInfo ci) cs => do
    match ci.stx with
    | `(letI $id:ident $_* : $_ := $_; $_) =>
      -- TODO: we need to export the binder type or something...there's no way to recover it from an inline `let`/`have`
      dbg_trace s!"processing an inline binding with name {id} and custom info {ci.value.get? Lean.Elab.Term.InlineBinderInfo |>.map (·.fvarId.name)}"
      let some info := ci.value.get? Lean.Elab.Term.InlineBinderInfo | return []
      -- TODO: make this more robust (we don't know what the info structure looks like)
      let .node (.ofTermInfo ti) _ := cs[0]! | return []
      -- FIXME: this does not work because cs is empty
      -- If we wanted the body infos to be in cs, we should use `withInfoContext'` instead of just
      -- pushing the info leaf (this is how `BodyInfo` works)
      -- Otherwise, we'd need to traverse horizontally (or maybe just up one level?) in the tree to
      -- find a term in whose context we can resolve the fvarId
      ti.runMetaM ctx do dbg_trace s!"{← inferType (.fvar info.fvarId)}"
      -- Issue: we can't just look up the type of `id` in the lctx because it may have been shadowed
      let some bodyInfo := ci.value.get? Lean.Elab.Term.BodyInfo | return []
      -- Note: body info gives the value and binder type of the *overall* decl, *not* the inline binding
      let some expr := bodyInfo.value? | return []
      -- let some type := bodyInfo.binderType? | return []
      -- let typeMsg ← if let some lctx := lctx? then ctx.runMetaM lctx do ppExpr type else pure f!"{type}"
      dbg_trace "Body: {expr}"
      return []
    | _ => return []
  | _ => return []

-- TODO: don't forget `haveI`/`letI`
def findElaboratedHaveInfo (ctx : ContextInfo) : InfoTree → IO (List BinderInfo)
  | .node (.ofTermInfo ti) _ => do
    match ti.stx with
    | `(have $decl:haveIdDecl; $_:term) | `(have $decl:haveEqnsDecl; $_:term)
    | `(haveI $decl:haveIdDecl; $_:term) | `(haveI $decl:haveEqnsDecl; $_:term)
    | `(letI $decl:haveIdDecl; $_:term) | `(letI $decl:haveEqnsDecl; $_:term) =>
      let some (type, isProp) ← processLetFunTermInfo ti ctx | return []
      -- TODO: come up with a less awful solution here
      let name := decl.raw[0]![0]!.getId
      return [{ type, isProp, name }]
    | `(have $_:letPatDecl; $_:term) | `(haveI $_:letPatDecl; $_:term) | `(letI $_:letPatDecl; $_:term) =>
      dbg_trace "this syntax elaborates to: {← ti.runMetaM ctx (instantiateMVars ti.expr)}"
      return [] -- TODO:
    | _ => return []
  | _ => return []

-- Note: it is tempting simply to inspect the `ti.expr` that the syntax elaborates to, but recall
-- that `let_fun pat := e` will elaborate to a `match`, not a `letFun` application
-- According to `Lean/Elab/Match.lean`, it seems the motive is always the first arg to a matcher...
-- maybe we could at least try the Expr thing after all
-- partial def findElaboratedHaveInfo (ctx? : Option ContextInfo) : InfoTree → IO (Option DeclInfo)
--   | .node info children => do
--     let some ctx := ctx? | return none
--     match info with
--     | .ofMacroExpansionInfo mi =>
--       dbg_trace "MACRO NODE of kind {mi.stx.getKind}: {mi.stx}"
--       unless mi.stx matches .node _ ``Lean.Parser.Term.have _ | .node _ ``Lean.Parser.Term.let_fun _ do return none
--       children.findSomeM? (findElaboratedHaveInfo ctx)
--     | .ofTermInfo ti =>
--       -- dbg_trace "term info good"
--       dbg_trace "this syntax elaborates to: {← ti.runMetaM ctx (instantiateMVars ti.expr)}"
--       match ti.stx with
--       | `(let_fun $x $_* $[: $_]? := $_; $_) =>
--         dbg_trace "found a let fun with first syntax object {x}"
--         -- TODO: are we confident that the right binder is always the last binder child of the let_fun?
--         if let some declInfo ← children.findSomeRevM? (getBinderInfo? ctx) then
--           return declInfo
--         else
--         -- Currently, there shouldn't be multiple stages of `let_fun` elaboration; however, we
--         -- include this possibility
--           children.findSomeM? (findElaboratedHaveInfo ctx)
--       | _ =>
--       match ti.stx with
--       | .node _ ``Lean.Parser.Term.have _ => children.findSomeM? (findElaboratedHaveInfo ctx)
--       | .node _ ``Lean.Parser.Term.let_fun _ =>
--         dbg_trace (← children.toArray.mapM (·.format (ctx? := ctx)))
--         return none
--       | _ => return none
--     | _ => return none
--   | .context ctx' child => findElaboratedHaveInfo (ctx'.mergeIntoOuter? ctx?) child
--   | .hole _ => return none

-- TODO: also should capture type
partial def extractInfoTrees (t : InfoTree) (lctx? : Option LocalContext := none) (ctx? : Option ContextInfo := none) : IO (Array DeclInfo) :=
  match t with
  | .context ctx t => extractInfoTrees t lctx? (ctx.mergeIntoOuter? ctx?)
  | t@(.node info ts) => do
    dbg_trace "processing {t.nodeKind!} {info.stx}"
    let kwStx := info.stx[0]?.getD info.stx
    let bindingsHere : Array DeclInfo ← do
      let some ctx := ctx? | pure #[]
      -- FIXME: `unless` is broken
      if !info.stx.getHeadInfo matches .original .. then dbg_trace "this is NOT original syntax"; pure #[] else
      dbg_trace "this is original syntax"
      match info.stx with
      | .node _ ``Lean.Parser.Term.have _ =>
        dbg_trace "have"
        pure #[{ binders := (← findElaboratedHaveInfo ctx t)
                 stx := kwStx
                 kind := .haveDecl }]
      | .node _ ``Lean.Parser.Term.haveI _ =>
        dbg_trace "haveI"
        pure #[{ binders := (← findElaboratedInlineInfo lctx? ctx t)
                 stx := kwStx
                 kind := .haveIDecl }]
      | .node _ ``Lean.Parser.Term.letI _ =>
        pure #[{ binders := (← findElaboratedInlineInfo lctx? ctx t)
                 stx := kwStx
                 kind := .letIDecl }]
      | .node _ ``Lean.Parser.Term.let _ =>
        dbg_trace "let"
        -- TODO: handle let pattern matches...
        pure #[{ binders := (← findElaboratedLetInfo ctx t),
                 stx := kwStx,
                 kind := .letDecl }]
      | _ =>
        dbg_trace "unknown syntax {info.stx}"
        pure #[]
    -- dbg_trace s!"found names {namesHere} @ {info.stx}"
    -- let bindingsHere := namesHere.map (·, haveDeclStx)
    let lctx? :=
      if let .ofTermInfo ti := info then
        some ti.lctx
      else none
    let bindingsBelow ← ts.foldlM (init := #[]) fun a t =>
      return a ++ (← extractInfoTrees t lctx? (info.updateContext? ctx?))
    return bindingsHere ++ bindingsBelow
  | .hole _ => return #[]
-- where
--   processBottommostLetDecl (info : TermInfo) (ts : PersistentArray InfoTree) : List Name := Id.run do
--     let initFVars := info.lctx.decls.toArray.reduceOption.map (·.fvarId)
--     -- We hardcode the positions of the infotrees generated by `let`/`let_fun` elaboration
--     let some bodyInfoTree := ts[3]? | return []
--     let .node (.ofTermInfo info') _ := bodyInfoTree | return []
--     -- dbg_trace s!"let_fun {ts[2]!.termInfo!.stx} : {ts[0]!.termInfo!.stx} := {ts[1]!.termInfo!.stx} in {info'.stx}"
--     let endDecls := info'.lctx.decls.toArray
--     let newDecls := endDecls.filterMap fun d? =>
--       match d? with
--       | none => none
--       | some d => if initFVars.any (· == d.fvarId) then some d else none
--     return Array.toList <| newDecls.map (·.userName)

/-- a monadic version of `Lean.Elab.InfoTree.foldInfo`.
Used to infer types inside a `CommandElabM`. -/
def InfoTree.foldInfoM {α m} [Monad m] (f : ContextInfo → Info → α → m α) (init : α) :
    InfoTree → m α :=
  InfoTree.foldInfo (fun ctx i ma => do f ctx i (← ma)) (pure init)

/-- given a `ContextInfo`, a `LocalContext` and an `Array` of `Expr`essions `es` with a `Name`,
`toFormat_propTypes` creates a `MetaM` context, and returns an array of
the pretty-printed `Format` of `e`, together with the (unchanged) name
for each `Expr`ession `e` in `es` whose type is a `Prop`.

Concretely, `toFormat_propTypes` runs `inferType` in `CommandElabM`.
This is the kind of monadic lift that `nonPropHaves` uses to decide whether the Type of a `have`
is in `Prop` or not.
The output `Format` is just so that the linter displays a better message. -/
def toFormat_propTypes (ctx : ContextInfo) (lc : LocalContext) (es : Array (Expr × Name)) :
    CommandElabM (Array (Format × Name)) := do
  ctx.runMetaM lc do
    es.filterMapM fun (e, name) ↦ do
      let typ ← inferType (← instantiateMVars e)
      if typ.isProp then return none else return (← ppExpr e, name)

private def _root_.Lean.SourceInfo.isOriginal : SourceInfo → Bool
  | .original .. => true
  | _ => false

/-- returns the `have` syntax whose corresponding hypothesis does not have Type `Prop` and
also a `Format`ted version of the corresponding Type. -/
partial def nonPropHaves : InfoTree → CommandElabM (Array (Syntax × Format)) :=
  InfoTree.foldInfoM (init := #[]) fun ctx info args => return args ++ (← do
    match info with
    | .ofTacticInfo i =>
      unless i.stx.getHeadInfo.isOriginal && isHaveTac i.stx do return #[]
      let mctx := i.mctxAfter
      let mvdecls := i.goalsAfter.filterMap mctx.decls.find?
      let some maxDecl := @mvdecls.max? _ ⟨fun a b => if a.index < b.index then a else b⟩ | return #[]
      let lctx := maxDecl.lctx
      let oldMvdecls := i.goalsBefore.filterMap mctx.decls.find?
      let oldFVars := (oldMvdecls.map (·.lctx.decls.toList.reduceOption)).flatten.map (·.fvarId)
      let newDecls := lctx.decls.toList.reduceOption.filter (! oldFVars.contains ·.fvarId)
      let fmts ← toFormat_propTypes ctx lctx (newDecls.map (fun e ↦ (e.type, e.userName))).toArray
      return fmts.map fun (fmt, na) ↦ (i.stx, f!"{na} : {fmt}")
    | .ofTermInfo i =>
      unless i.stx.getHeadInfo.isOriginal do return #[]
      unless isHaveTerm i.stx do return #[]
      let lctx := i.lctx
      let oldFVars := i.lctx.decls
      -- TODO: when we hit a `have` info tree, we want to detect the lctx at the immediate successor node
      -- to detect any vars that were added
      for decl? in lctx.decls do
        let some decl := decl? | continue
        logInfo m!"{decl.userName} : {← i.runMetaM ctx <| instantiateMVars decl.type} @ {i.stx}"
      return #[]
    | _ => return #[]
  )
    /-
    let .ofTacticInfo i := info | return #[]
    let stx := i.stx
    let .original .. := stx.getHeadInfo | return #[]
    unless isHave? stx do return #[]
    let mctx := i.mctxAfter
    let mvdecls := i.goalsAfter.filterMap (mctx.decls.find? ·)
    -- We extract the `MetavarDecl` with largest index after a `have`, since this one
    -- holds information about the metavariable where `have` introduces the new hypothesis,
    -- and determine the relevant `LocalContext`.
    let lc := mvdecls.toArray.getMax? (·.index < ·.index) |>.getD default |>.lctx
    -- we also accumulate all `fvarId`s from all local contexts before the use of `have`
    -- so that we can then isolate the `fvarId`s that are created by `have`
    let oldMvdecls := i.goalsBefore.filterMap (mctx.decls.find? ·)
    let oldFVars := (oldMvdecls.map (·.lctx.decls.toList.reduceOption)).flatten.map (·.fvarId)
    -- `newDecls` are the local declarations whose `FVarID` did not exist before the `have`.
    -- Effectively they are the declarations that we want to test for being in `Prop` or not.
    let newDecls := lc.decls.toList.reduceOption.filter (! oldFVars.contains ·.fvarId)
    -- Now, we get the `MetaM` state up and running to find the types of each entry of `newDecls`.
    -- For each entry which is a `Type`, we print a warning on `have`.
    let fmts ← toFormat_propTypes ctx lc (newDecls.map (fun e ↦ (e.type, e.userName))).toArray
    return fmts.map fun (fmt, na) ↦ (stx, f!"{na} : {fmt}"))
    -/

/-- The main implementation of the `have` vs `let` linter. -/
def haveLetLinter : Linter where run := withSetOptionIn fun _stx => do
  let gh := linter.haveLet.get (← getOptions)
  unless gh != 0 && (← getInfoState).enabled do
    return
  unless gh == 1 && (← MonadState.get).messages.unreported.isEmpty do
    let trees ← getInfoTrees
    for t in trees do
      logInfo <| m!"{← t.format}"
      -- logInfo <| m!"{← extractInfoTrees t}"
      for { binders, stx, kind } in (← extractInfoTrees t) do
        for { name, type, isProp } in binders do
          -- FIXME: only show the "use have" error if NONE of the binders are data
          if (isProp && !kind.isHaveLike) || (!isProp && kind.isHaveLike) then
            let (usedMacro, oppositeMacro) := (kind.toString, kind.counterpart.toString)
            let (expectedSort, foundSort) := if kind.isHaveLike then ("a proposition", "data") else ("data", "a proposition")
            let nameStr := if name.isAnonymous then f!"This unnamed binder" else f!"'{format name}'"
            let mut warning := m!"use `{oppositeMacro}` instead of `{usedMacro}` for binding {foundSort}."
            if name.isAnonymous && kind.isHaveLike then
              warning := warning ++ m!" You will need to give your `{oppositeMacro}` binding a name."
            warning := warning ++ m!"\n{nameStr} has type{indentD type}\nwhich is not {expectedSort}."
            warning := warning ++ m!"\nYou can disable this linter using `set_option linter.haveLet false`."
            logWarningAt stx <| .tagged linter.haveLet.name warning
      -- for (s, fmt) in ← nonPropHaves t do
      --   -- Since the linter option is not in `Bool`, the standard `Linter.logLint` does not work.
      --   -- We emulate it with `logWarningAt`
      --   logWarningAt s <| .tagged linter.haveLet.name
      --     m!"'{fmt}' is a Type and not a Prop. Consider using 'let' instead of 'have'.\n\
      --     You can disable this linter using `set_option linter.haveLet 0`"

initialize addLinter haveLetLinter

end haveLet

end Lean.Linter
