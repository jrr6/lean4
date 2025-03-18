/- TODO: header -/

prelude
import Lean.Message
import Lean.MetavarContext
import Lean.Meta.Basic
import Lean.Elab.Util

namespace Lean

private def binderInfoDescr : BinderInfo → String
  | .default => ""
  | .implicit => "implicit"
  | .instImplicit => "instance implicit"
  | .strictImplicit => "strict implicit"

def MVarProvenanceKind.toMessageData : MVarProvenanceKind → MessageData
  | .inferredArg bi name type =>
    m!"{binderInfoDescr bi} '{name}' of type{indentExpr type}"
  | .expectedTypeExpr e => m!"expected type of{indentExpr e}"
  -- TODO: once using MessageData, don't mess with `stx`
  | .expectedTypeStx stx => m!"expected type of{indentD stx.prettyPrint}"
  | .inst type =>
    m!"instance of type{indentExpr type}"
  | .hole syn =>
    (if syn then m!"synthetic " else "") ++ m!"hole"
  | .autoParam struct name type e =>
    m!"default value for {if struct then "field" else "parameter"} '{name}' of type{indentExpr type}\nin{indentExpr e}"
  | .outParam name type e =>
    -- TODO: explain outParams
    m!"output parameter '{name}' of type{indentExpr type}\nin{indentExpr e}"
  | .postponed stx =>
    m!"the expression {stx}"
  | .ofCustom msg => msg.get? MessageData |>.getD m!""

def MVarProvenanceKind.custom (msg : MessageData) : MVarProvenanceKind :=
  .ofCustom (.mk msg)

def MVarProvenance.ofKindAt (ref : Syntax) (kind : MVarProvenanceKind) : MVarProvenance :=
  { kind, ref }

def MVarProvenance.ofKind [Monad m] [MonadRef m] (kind : MVarProvenanceKind) : m MVarProvenance :=
  return { kind, ref := (← getRef) }

end Lean
