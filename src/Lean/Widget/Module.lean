/-
TODO: copyright
-/
prelude
import Lean.Attributes
import Lean.Widget.Types
import Lean.Meta.Basic

namespace Lean.Widget

/-- A widget module is a unit of source code that can execute in the infoview.

Every module definition must either be annotated with `@[widget_module]`,
or use a value of `javascript` identical to that of another definition
annotated with `@[widget_module]`.
This makes it possible for the infoview to load the module.

See the [manual entry](https://lean-lang.org/lean4/doc/examples/widgets.lean.html)
for more information on how to use the widgets system. -/
structure Module where
  /-- A JS [module](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Modules)
  intended for use in user widgets.

  The JS environment in which modules execute
  provides a fixed set of libraries accessible via direct `import`,
  notably [`@leanprover/infoview`](https://www.npmjs.com/package/@leanprover/infoview)
  and [`react`](https://www.npmjs.com/package/react).

  To initialize this field from an external JS file,
  you may use `include_str "path"/"to"/"file.js"`.
  However **beware** that this does not register a dependency with Lake,
  so your Lean module will not automatically be rebuilt
  when the `.js` file changes. -/
  javascript : String
  /-- The hash is cached to avoid recomputing it whenever the `Module` is used. -/
  javascriptHash : { x : UInt64 // x = hash javascript } := ⟨hash javascript, rfl⟩

/-- Registers a widget module. Its type must implement `Lean.Widget.ToModule`. -/
builtin_initialize widgetModuleAttrImpl : AttributeImpl ←
  let mkAttr (builtin : Bool) (name : Name) := do
    let impl := {
      name
      descr           := (if builtin then "(builtin) " else "") ++
        "Registers a widget module. Its type must implement Lean.Widget.ToModule."
      applicationTime := .afterCompilation
      add             := fun decl stx kind => Prod.fst <$> MetaM.run do
        Attribute.Builtin.ensureNoArgs stx
        unless kind == AttributeKind.global do throwError "invalid attribute '{name}', must be global"
        let e ← mkAppM ``ToModule.toModule #[.const decl []]
        let mod ← evalModule e
        let env ← getEnv
        unless builtin do  -- don't warn on collision between previous and current stage
          if let some _ := (← builtinModulesRef.get).find? mod.javascriptHash then
            logWarning m!"A builtin widget module with the same hash(JS source code) was already registered."
        if let some (n, _) := moduleRegistry.getState env |>.find? mod.javascriptHash then
          logWarning m!"A widget module with the same hash(JS source code) was already registered at {.ofConstName n true}."
        let env ← getEnv
        if builtin then
          let h := mkConst decl
          declareBuiltin decl <| mkApp2 (mkConst ``addBuiltinModule) (toExpr decl) h
        else
          setEnv <| moduleRegistry.addEntry env (mod.javascriptHash, decl, e)
    }
    registerBuiltinAttribute impl
    return impl
  /- We declare the `[builtin_widget_module]` and `[widget_module]` attributes
  and bind the latter's implementation
  (used for creating the obsolete `[widget]` alias below). -/
  let _ ← mkAttr true `builtin_widget_module
  mkAttr false `widget_module
