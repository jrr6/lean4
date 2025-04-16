/-
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Sebastian Ullrich, Leonardo de Moura

Message type used by the Lean frontend
-/
prelude
import Lean.Data.Position
import Lean.Data.OpenDecl
import Lean.MetavarContext
import Lean.Environment
import Lean.Util.PPExt
import Lean.Util.Sorry

namespace Lean

def mkErrorStringWithPos (fileName : String) (pos : Position) (msg : String) (endPos : Option Position := none) : String :=
  let endPos := match endPos with
    | some endPos => s!"-{endPos.line}:{endPos.column}"
    | none        => ""
  s!"{fileName}:{pos.line}:{pos.column}{endPos}: {msg}"

inductive MessageSeverity where
  | information | warning | error
  deriving Inhabited, BEq, ToJson, FromJson

structure MessageDataContext where
  env  : Environment
  mctx : MetavarContext
  lctx : LocalContext
  opts : Options

/-- A naming context is the information needed to shorten names in pretty printing.

It gives the current namespace and the list of open declarations.
-/
structure NamingContext where
  currNamespace : Name
  openDecls : List OpenDecl

structure TraceData where
  /-- Trace class, e.g. `Elab.step`. -/
  cls       : Name
  /-- Start time in seconds; 0 if unknown to avoid `Option` allocation. -/
  startTime : Float := 0
  /-- Stop time in seconds; 0 if unknown to avoid `Option` allocation. -/
  stopTime  : Float := startTime
  /-- Whether trace node defaults to collapsed in the infoview. -/
  collapsed : Bool := true
  /-- Optional tag shown in `trace.profiler.output` output after the trace class name. -/
  tag       : String := ""

/-- Structured message data. We use it for reporting errors, trace messages, etc. -/
inductive MessageData where
  /-- Eagerly formatted text with info annotations.
  This constructor is inspected in various hacks. -/
  | ofFormatWithInfos : FormatWithInfos → MessageData
  | ofGoal            : MVarId → MessageData
  /-- A widget instance.

  In `ofWidget wi alt`,
  the nested message `alt` should approximate the contents of the widget
  without itself using `ofWidget wi _`.
  This is used as fallback in environments that cannot display user widgets.
  `alt` may nest any structured message,
  for example `ofGoal` to approximate a tactic state widget,
  and, if necessary, even other widget instances
  (for which approximations are computed recursively).

  Note that unlike with `Widget.savePanelWidgetInfo`,
  the infoview will not pass any additional props to the widget instance. -/
  | ofWidget          : Widget.WidgetInstance → MessageData → MessageData
  /-- `withContext ctx d` specifies the pretty printing context `(env, mctx, lctx, opts)` for the nested expressions in `d`. -/
  | withContext       : MessageDataContext → MessageData → MessageData
  | withNamingContext : NamingContext → MessageData → MessageData
  /-- Lifted `Format.nest` -/
  | nest              : Nat → MessageData → MessageData
  /-- Lifted `Format.group` -/
  | group             : MessageData → MessageData
  /-- Lifted `Format.compose` -/
  | compose           : MessageData → MessageData → MessageData
  /-- Tagged sections. `Name` should be viewed as a "kind", and is used by `MessageData` inspector functions.
    Example: an inspector that tries to find "definitional equality failures" may look for the tag "DefEqFailure". -/
  | tagged            : Name → MessageData → MessageData
  | trace (data : TraceData) (msg : MessageData) (children : Array MessageData)
  /-- A lazy message.
  The provided thunk will not be run until it is about to be displayed.
  This can save computation in cases where the message may never be seen.

  The `Dynamic` value is expected to be a `MessageData`,
  which is a workaround for the positivity restriction.

  If the thunked message is produced for a term that contains a synthetic sorry,
  `hasSyntheticSorry` should return `true`.
  This is used to filter out certain messages. -/
  | ofLazy (f : Option PPContext → BaseIO Dynamic) (hasSyntheticSorry : MetavarContext → Bool)
  deriving Inhabited, TypeName

namespace MessageData

/-- Eagerly formatted text. -/
def ofFormat (fmt : Format) : MessageData := .ofFormatWithInfos ⟨fmt, .empty⟩

/--
Lazy message data production, with access to the context as given by
a surrounding `MessageData.withContext` (which is expected to exist).
-/
def lazy (f : PPContext → BaseIO MessageData)
    (hasSyntheticSorry : MetavarContext → Bool := fun _ => false) : MessageData :=
  .ofLazy (hasSyntheticSorry := hasSyntheticSorry) fun ctx? => do
    let msg ← match ctx? with
      | .none =>
        pure (.ofFormat "(invalid MessageData.lazy, missing context)") -- see `addMessageContext`
      | .some ctx => f ctx
    return Dynamic.mk msg

variable (p : Name → Bool) in
/-- Returns true when the message contains a `MessageData.tagged tag ..` constructor where `p tag`
is true.

This does not descend into lazily generated subtrees (`.ofLazy`); message tags
of interest (like those added by `logLinter`) are expected to be near the root
of the `MessageData`, and not hidden inside `.ofLazy`.
-/
partial def hasTag : MessageData → Bool
  | withContext _ msg       => hasTag msg
  | withNamingContext _ msg => hasTag msg
  | nest _ msg              => hasTag msg
  | group msg               => hasTag msg
  | compose msg₁ msg₂       => hasTag msg₁ || hasTag msg₂
  | tagged n msg            => p n || hasTag msg
  | trace data msg msgs     => p data.cls || hasTag msg || msgs.any hasTag
  | _                       => false

/--
Returns the top-level tag of the message.
If none, returns `Name.anonymous`.

This does not descend into message subtrees (e.g., `.compose`, `.ofLazy`).
The message kind is expected to describe the whole message.
-/
def kind : MessageData → Name
  | withContext _ msg       => kind msg
  | withNamingContext _ msg => kind msg
  | tagged n _              => n
  | _                       => .anonymous

/-- An empty message. -/
def nil : MessageData :=
  ofFormat Format.nil

def mkPPContext (nCtx : NamingContext) (ctx : MessageDataContext) : PPContext := {
  env := ctx.env, mctx := ctx.mctx, lctx := ctx.lctx, opts := ctx.opts,
  currNamespace := nCtx.currNamespace, openDecls := nCtx.openDecls
}

def ofSyntax (stx : Syntax) : MessageData :=
  -- discard leading/trailing whitespace
  let stx := stx.copyHeadTailInfoFrom .missing
  .ofLazy
    (fun ctx? => do
      let msg ← ofFormat <$> match ctx? with
        | .none => pure stx.formatStx
        | .some ctx => ppTerm ctx ⟨stx⟩ -- HACK: might not be a term
      return Dynamic.mk msg)
    (fun _ => false)

def ofExpr (e : Expr) : MessageData :=
  .ofLazy
    (fun ctx? => do
      let msg ← ofFormatWithInfos <$> match ctx? with
        | .none => pure (format (toString e))
        | .some ctx => ppExprWithInfos ctx e
      return Dynamic.mk msg)
    (fun mctx => instantiateMVarsCore mctx e |>.1.hasSyntheticSorry)

def ofLevel (l : Level) : MessageData :=
  .ofLazy
    (fun ctx? => do
      let msg ← ofFormat <$> match ctx? with
        | .none => pure (format l)
        | .some ctx => ppLevel ctx l
      return Dynamic.mk msg)
    (fun _ => false)

/--
Simply formats the name.
See `MessageData.ofConstName` for richer messages.
-/
def ofName (n : Name) : MessageData := ofFormat (format n)

/--
Represents a constant name such that hovering and "go to definition" works.
If there is no such constant in the environment, the name is simply formatted, but sanitized if it is a hygienic name.
Use `MessageData.ofName` if hovers are undesired.

If `fullNames` is true, then pretty prints as if `pp.fullNames` is true.
Otherwise, pretty prints using the current user setting for `pp.fullNames`.
-/
def ofConstName (constName : Name) (fullNames : Bool := false) : MessageData :=
  .ofLazy
    (fun ctx? => do
      let msg ← ofFormatWithInfos <$> match ctx? with
        | .none => pure (format constName)
        | .some ctx =>
          let ctx := if fullNames then { ctx with opts := ctx.opts.insert `pp.fullNames fullNames } else ctx
          ppConstNameWithInfos ctx constName
      return Dynamic.mk msg)
    (fun _ => false)

partial def hasSyntheticSorry (msg : MessageData) : Bool :=
  visit none msg
where
  visit (mctx? : Option MetavarContext) : MessageData → Bool
  | ofLazy _ f              => f (mctx?.getD {})
  | withContext ctx msg     => visit ctx.mctx msg
  | withNamingContext _ msg => visit mctx? msg
  | nest _ msg              => visit mctx? msg
  | group msg               => visit mctx? msg
  | compose msg₁ msg₂       => visit mctx? msg₁ || visit mctx? msg₂
  | tagged _ msg            => visit mctx? msg
  | trace _ msg msgs        => visit mctx? msg || msgs.any (visit mctx?)
  | _                       => false

/--
Maximum number of trace node children to display by default to prevent slowdowns from rendering. In
the info view, more children can be expanded interactively.
-/
register_option maxTraceChildren : Nat := {
  defValue := 50
  descr := "Maximum number of trace node children to display"
}

partial def formatAux : NamingContext → Option MessageDataContext → MessageData → BaseIO Format
  | _,    _,         ofFormatWithInfos fmt    => return fmt.1
  | _,    none,      ofGoal mvarId            => return formatRawGoal mvarId
  | nCtx, some ctx,  ofGoal mvarId            => ppGoal (mkPPContext nCtx ctx) mvarId
  | nCtx, ctx,       ofWidget _ d             => formatAux nCtx ctx d
  | nCtx, _,         withContext ctx d        => formatAux nCtx ctx d
  | _,    ctx,       withNamingContext nCtx d => formatAux nCtx ctx d
  | nCtx, ctx,       tagged _ d               => formatAux nCtx ctx d
  | nCtx, ctx,       nest n d                 => Format.nest n <$> formatAux nCtx ctx d
  | nCtx, ctx,       compose d₁ d₂            => return (← formatAux nCtx ctx d₁) ++ (← formatAux nCtx ctx d₂)
  | nCtx, ctx,       group d                  => Format.group <$> formatAux nCtx ctx d
  | nCtx, ctx,       trace data header children => do
    let childFmts ← children.mapM (formatAux nCtx ctx)
    if data.cls.isAnonymous then
      -- Sequence of top-level traces collected by `addTraceAsMessages`, do not indent.
      return .joinSep childFmts.toList "\n"

    let mut msg := f!"[{data.cls}]"
    if data.startTime != 0 then
      msg := f!"{msg} [{data.stopTime - data.startTime}]"
    msg := f!"{msg} {(← formatAux nCtx ctx header).nest 2}"
    let mut children := children
    if let some maxNum := ctx.map (maxTraceChildren.get ·.opts) then
      if maxNum > 0 && children.size > maxNum then
        children := children.take maxNum |>.push <|
          ofFormat f!"{children.size - maxNum} more entries... (increase `maxTraceChildren` to see more)"
    return .nest 2 (.joinSep (msg::childFmts.toList) "\n")
  | nCtx, ctx?,      ofLazy pp _             => do
    let dyn ← pp (ctx?.map (mkPPContext nCtx))
    let some msg := dyn.get? MessageData
      | panic! s!"MessageData.ofLazy: expected MessageData in Dynamic, got {dyn.typeName}"
    formatAux nCtx ctx? msg

protected def format (msgData : MessageData) (ctx? : Option MessageDataContext := none) : BaseIO Format :=
  formatAux { currNamespace := Name.anonymous, openDecls := [] } ctx? msgData

protected def toString (msgData : MessageData) : BaseIO String := do
  return toString (← msgData.format)

instance : Append MessageData := ⟨compose⟩

instance : Coe String MessageData := ⟨ofFormat ∘ format⟩
instance : Coe Format MessageData := ⟨ofFormat⟩
instance : Coe Level MessageData  := ⟨ofLevel⟩
instance : Coe Expr MessageData   := ⟨ofExpr⟩
instance : Coe Name MessageData   := ⟨ofName⟩
instance : Coe Syntax MessageData := ⟨ofSyntax⟩
instance : Coe MVarId MessageData := ⟨ofGoal⟩
instance : Coe (Option Expr) MessageData := ⟨fun o => match o with | none => "none" | some e => ofExpr e⟩

partial def arrayExpr.toMessageData (es : Array Expr) (i : Nat) (acc : MessageData) : MessageData :=
  if h : i < es.size then
    let e   := es[i];
    let acc := if i == 0 then acc ++ ofExpr e else acc ++ ", " ++ ofExpr e;
    toMessageData es (i+1) acc
  else
    acc ++ "]"

instance : Coe (Array Expr) MessageData := ⟨fun es => arrayExpr.toMessageData es 0 "#["⟩

/-- Wrap the given message in `l` and `r`. See also `Format.bracket`.  -/
def bracket (l : String) (f : MessageData) (r : String) : MessageData := group (nest l.length <| l ++ f ++ r)
/-- Wrap the given message in parentheses `()`. -/
def paren (f : MessageData) : MessageData := bracket "(" f ")"
/-- Wrap the given message in square brackets `[]`. -/
def sbracket (f : MessageData) : MessageData := bracket "[" f "]"
/-- Append the given list of messages with the given separator. -/
def joinSep : List MessageData → MessageData → MessageData
  | [],    _   => Format.nil
  | [a],   _   => a
  | a::as, sep => a ++ sep ++ joinSep as sep

/-- Write the given list of messages as a list, separating each item with `,\n` and surrounding with square brackets. -/
def ofList : List MessageData → MessageData
  | [] => "[]"
  | xs => sbracket <| joinSep xs (ofFormat "," ++ Format.line)

/-- See `MessageData.ofList`. -/
def ofArray (msgs : Array MessageData) : MessageData :=
  ofList msgs.toList

/-- Puts `MessageData` into a comma-separated list with `"or"` at the back (no Oxford comma).
Best used on non-empty lists; returns `"– none –"` for an empty list.  -/
def orList (xs : List MessageData) : MessageData :=
  match xs with
  | [] => "– none –"
  | [x] => "'" ++ x ++ "'"
  | _ => joinSep (xs.dropLast.map (fun x => "'" ++ x ++ "'")) ", " ++ " or '" ++ xs.getLast! ++ "'"

/-- Puts `MessageData` into a comma-separated list with `"and"` at the back (no Oxford comma).
Best used on non-empty lists; returns `"– none –"` for an empty list.  -/
def andList (xs : List MessageData) : MessageData :=
  match xs with
  | [] => "– none –"
  | [x] => x
  | _ => joinSep xs.dropLast ", " ++ " and " ++ xs.getLast!

/--
Produces a labeled note that can be appended to an error message.
-/
def note (note : MessageData) : MessageData :=
  .tagged `note <| "\n\nNote: " ++ note

/--
Non-monadic variant of `MessageData.hint` that produces a labeled hint without an associated code
action.
-/
def hint' (hint : MessageData) : MessageData :=
  .tagged `hint <| "\n\nHint: " ++ hint

instance : Coe (List MessageData) MessageData := ⟨ofList⟩
instance : Coe (List Expr) MessageData := ⟨fun es => ofList <| es.map ofExpr⟩

end MessageData

/--
A `BaseMessage` is a richly formatted piece of information emitted by Lean.
They are rendered by client editors in the infoview and in diagnostic windows.
There are two varieties in the Lean core:
* `Message`: Uses structured, effectful `MessageData` for formatting content.
* `SerialMessage`: Stores pure `String` data. Obtained by running the effectful
`Message.serialize`.
-/
structure BaseMessage (α : Type u) where
  fileName      : String
  pos           : Position
  endPos        : Option Position := none
  /-- If `true`, report range as given; see `msgToInteractiveDiagnostic`. -/
  keepFullRange : Bool := false
  severity      : MessageSeverity := .error
  /--
  If `true`, filter this message from non-language server output.
  In the language server, silent messages are served as silent diagnostics.
  See also `DiagnosticWith.isSilent?`.
  -/
  isSilent      : Bool := false
  caption       : String          := ""
  /-- The content of the message. -/
  data          : α
  deriving Inhabited, ToJson, FromJson

/-- A `Message` is a richly formatted piece of information emitted by Lean.
They are rendered by client editors in the infoview and in diagnostic windows. -/
abbrev Message := BaseMessage MessageData

/-- A `SerialMessage` is a `Message` whose `MessageData` has been eagerly
serialized and is thus appropriate for use in pure contexts where the effectful
`MessageData.toString` cannot be used. -/
structure SerialMessage extends BaseMessage String where
  /-- The message kind (i.e., the top-level tag). -/
  kind          : Name
  deriving ToJson, FromJson

namespace SerialMessage

@[inline] def toMessage (msg : SerialMessage) : Message :=
  {msg with data := msg.data}

protected def toString (msg : SerialMessage) (includeEndPos := false) : String := Id.run do
  let mut str := msg.data
  let endPos := if includeEndPos then msg.endPos else none
  unless msg.caption == "" do
    str := msg.caption ++ ":\n" ++ str
  match msg.severity with
  | .information => pure ()
  | .warning     => str := mkErrorStringWithPos msg.fileName msg.pos (endPos := endPos) "warning: " ++ str
  | .error       => str := mkErrorStringWithPos msg.fileName msg.pos (endPos := endPos) "error: " ++ str
  if str.isEmpty || str.back != '\n' then
    str := str ++ "\n"
  return str

instance : ToString SerialMessage := ⟨SerialMessage.toString⟩

end SerialMessage

namespace Message

@[inherit_doc MessageData.kind] abbrev kind (msg : Message) :=
  msg.data.kind

/-- Serializes the message, converting its data into a string and saving its kind. -/
@[inline] def serialize (msg : Message) : BaseIO SerialMessage := do
  return {msg with kind := msg.kind, data := ← msg.data.toString}

protected def toString (msg : Message) (includeEndPos := false) : BaseIO String := do
  -- Remark: The inline here avoids a new message allocation when `msg` is shared
  return inline <| (← msg.serialize).toString includeEndPos

protected def toJson (msg : Message) : BaseIO Json := do
  -- Remark: The inline here avoids a new message allocation when `msg` is shared
  return inline <| toJson (← msg.serialize)

end Message

/--
A persistent array of messages.

In the Lean elaborator, we use a fresh message log per command but may also report diagnostics at
various points inside a command, which will empty `unreported` and move its messages to `reported`.
Reported messages are preserved for some specific "lookback" operations such as `hasError` that
should consider the entire message history of the current command; most other functions such as
`add` and `toList` will only operate on unreported messages.
-/
structure MessageLog where
  /-- The list of messages already reported (i.e. saved in a `Snapshot`), in insertion order. -/
  reported : PersistentArray Message := {}
  /-- The list of messages not already reported, in insertion order. -/
  unreported : PersistentArray Message := {}
  /--
  Set of message kinds that have been added to the log.
  For example, we have the kind `unsafe.exponentiation.warning` for warning messages associated with
  the configuration option `exponentiation.threshold`.
  We don't produce a warning if the kind is already in the following set.
  -/
  loggedKinds : NameSet := {}
  deriving Inhabited

namespace MessageLog
def empty : MessageLog := {}

-- Despite having been deprecated, the archived `LeanInk` project (which CI still uses)
-- relies on this name.
@[deprecated "renamed to `unreported`; direct access should in general be avoided in favor of \
using `MessageLog.toList/toArray`" (since := "2024-05-22")]
def msgs : MessageLog → PersistentArray Message := unreported

def reportedPlusUnreported : MessageLog → PersistentArray Message
  | { reported := r, unreported := u, .. } => r ++ u

def hasUnreported (log : MessageLog) : Bool :=
  !log.unreported.isEmpty

def add (msg : Message) (log : MessageLog) : MessageLog :=
  { log with unreported := log.unreported.push msg }

protected def append (l₁ l₂ : MessageLog) : MessageLog where
  reported := l₁.reported ++ l₂.reported
  unreported := l₁.unreported ++ l₂.unreported
  loggedKinds := l₁.loggedKinds.union l₂.loggedKinds

instance : Append MessageLog :=
  ⟨MessageLog.append⟩

/--
Checks if either of `reported` or `unreported` contains an error, i.e. whether the current command
has errored yet.
-/
def hasErrors (log : MessageLog) : Bool :=
  log.reported.any (·.severity matches .error) || log.unreported.any (·.severity matches .error)

/-- Moves `unreported` messages to `reported`. -/
def markAllReported (log : MessageLog) : MessageLog :=
  { log with unreported := {}, reported := log.reported ++ log.unreported }

def errorsToWarnings (log : MessageLog) : MessageLog :=
  { unreported := log.unreported.map (fun m => match m.severity with | MessageSeverity.error => { m with severity := MessageSeverity.warning } | _ => m) }

def errorsToInfos (log : MessageLog) : MessageLog :=
  { unreported := log.unreported.map (fun m => match m.severity with | MessageSeverity.error => { m with severity := MessageSeverity.information } | _ => m) }

def getInfoMessages (log : MessageLog) : MessageLog :=
  { unreported := log.unreported.filter fun m => match m.severity with | MessageSeverity.information => true | _ => false }

def forM {m : Type → Type} [Monad m] (log : MessageLog) (f : Message → m Unit) : m Unit :=
  log.unreported.forM f

/-- Converts the unreported messages to a list, oldest message first. -/
def toList (log : MessageLog) : List Message :=
  log.unreported.toList

/-- Converts the unreported messages to an array, oldest message first. -/
def toArray (log : MessageLog) : Array Message :=
  log.unreported.toArray

end MessageLog

def MessageData.nestD (msg : MessageData) : MessageData :=
  MessageData.nest 2 msg

def indentD (msg : MessageData) : MessageData :=
  MessageData.nestD (Format.line ++ msg)

def indentExpr (e : Expr) : MessageData :=
  indentD e

/--
Renders an expression `e` inline in a message if it will not exceed `maxInlineLength` characters;
otherwise, renders the expression indented on a new line.

Note that the output of this function is formatted with preceding and trailing space included. Thus,
in `m₁ ++ inlineExpr e ++ m₂`, `m₁` should not end with a space or new line, nor should `m₂` begin
with one.
-/
def inlineExpr (e : Expr) (maxInlineLength := 30) : MessageData :=
  .ofLazy
    (fun ctx? => do
      let msg := MessageData.ofExpr e
      let some { env, mctx, lctx, opts, ..} := ctx? | return Dynamic.mk (" " ++ msg ++ " ")
      let fmt ← msg.format (some { env, mctx, lctx, opts })
      if fmt.pretty.length > maxInlineLength then
        return Dynamic.mk (indentD msg ++ "\n")
      else
        return Dynamic.mk (" " ++ msg ++ " "))
    (fun mctx => instantiateMVarsCore mctx e |>.1.hasSyntheticSorry)

/-- Atom quotes -/
def aquote (msg : MessageData) : MessageData :=
  "「" ++ msg ++ "」"

class AddMessageContext (m : Type → Type) where
  /--
  Without context, a `MessageData` object may be missing information
  (e.g. hover info) for pretty printing, or may print an error. Hence,
  `addMessageContext` should be called on all constructed `MessageData`
  (e.g. via `m!`) before taking it out of context (e.g. leaving `MetaM` or
  `CoreM`).
  -/
  addMessageContext : MessageData → m MessageData

export AddMessageContext (addMessageContext)

instance (m n) [MonadLift m n] [AddMessageContext m] : AddMessageContext n where
  addMessageContext := fun msg => liftM (addMessageContext msg : m _)

def addMessageContextPartial {m} [Monad m] [MonadEnv m] [MonadOptions m] (msgData : MessageData) : m MessageData := do
  let env ← getEnv
  let opts ← getOptions
  return MessageData.withContext { env := env, mctx := {}, lctx := {}, opts := opts } msgData

def addMessageContextFull {m} [Monad m] [MonadEnv m] [MonadMCtx m] [MonadLCtx m] [MonadOptions m] (msgData : MessageData) : m MessageData := do
  let env ← getEnv
  let mctx ← getMCtx
  let lctx ← getLCtx
  let opts ← getOptions
  return MessageData.withContext { env := env, mctx := mctx, lctx := lctx, opts := opts } msgData

class ToMessageData (α : Type) where
  toMessageData : α → MessageData

export ToMessageData (toMessageData)

def stringToMessageData (str : String) : MessageData :=
  let lines := str.split (· == '\n')
  let lines := lines.map (MessageData.ofFormat ∘ format)
  MessageData.joinSep lines (MessageData.ofFormat Format.line)

instance [ToFormat α] : ToMessageData α := ⟨MessageData.ofFormat ∘ format⟩
instance : ToMessageData Expr          := ⟨MessageData.ofExpr⟩
instance : ToMessageData Level         := ⟨MessageData.ofLevel⟩
instance : ToMessageData Name          := ⟨MessageData.ofName⟩
instance : ToMessageData String        := ⟨stringToMessageData⟩
instance : ToMessageData Syntax        := ⟨MessageData.ofSyntax⟩
instance : ToMessageData (TSyntax k)   := ⟨(MessageData.ofSyntax ·)⟩
instance : ToMessageData Format        := ⟨MessageData.ofFormat⟩
instance : ToMessageData MVarId        := ⟨MessageData.ofGoal⟩
@[default_instance]
instance : ToMessageData MessageData   := ⟨id⟩
instance [ToMessageData α] : ToMessageData (List α)  := ⟨fun as => MessageData.ofList <| as.map toMessageData⟩
instance [ToMessageData α] : ToMessageData (Array α) := ⟨fun as => toMessageData as.toList⟩
instance [ToMessageData α] : ToMessageData (Subarray α) := ⟨fun as => toMessageData as.toArray.toList⟩
instance [ToMessageData α] : ToMessageData (Option α) := ⟨fun | none => "none" | some e => "some (" ++ toMessageData e ++ ")"⟩
instance [ToMessageData α] [ToMessageData β] : ToMessageData (α × β) :=
  ⟨fun (a, b) => .paren <| toMessageData a ++ "," ++ Format.line ++ toMessageData b⟩
instance : ToMessageData (Option Expr) := ⟨fun | none => "<not-available>" | some e => toMessageData e⟩

syntax:max "m!" interpolatedStr(term) : term

macro_rules
  | `(m! $interpStr) => do interpStr.expandInterpolatedStr (← `(MessageData)) (← `(toMessageData))

def toMessageList (msgs : Array MessageData) : MessageData :=
  indentD (MessageData.joinSep msgs.toList m!"\n\n")

namespace Kernel.Exception

private def mkCtx (env : Environment) (lctx : LocalContext) (opts : Options) (msg : MessageData) : MessageData :=
  MessageData.withContext { env := .ofKernelEnv env, mctx := {}, lctx := lctx, opts := opts } msg

def toMessageData (e : Kernel.Exception) (opts : Options) : MessageData :=
  match e with
  | unknownConstant env constName       => mkCtx env {} opts m!"(kernel) unknown constant '{constName}'"
  | alreadyDeclared env constName       => mkCtx env {} opts m!"(kernel) constant has already been declared '{.ofConstName constName true}'"
  | declTypeMismatch env decl givenType =>
    mkCtx env {} opts <|
    let process (n : Name) (expectedType : Expr) : MessageData :=
      m!"(kernel) declaration type mismatch, '{n}' has type{indentExpr givenType}\nbut it is expected to have type{indentExpr expectedType}";
    match decl with
    | Declaration.defnDecl { name := n, type := type, .. } => process n type
    | Declaration.thmDecl { name := n, type := type, .. }  => process n type
    | _ => "(kernel) declaration type mismatch" -- TODO fix type checker, type mismatch for mutual decls does not have enough information
  | declHasMVars env constName _        => mkCtx env {} opts m!"(kernel) declaration has metavariables '{.ofConstName constName true}'"
  | declHasFVars env constName _        => mkCtx env {} opts m!"(kernel) declaration has free variables '{.ofConstName constName true}'"
  | funExpected env lctx e              => mkCtx env lctx opts m!"(kernel) function expected{indentExpr e}"
  | typeExpected env lctx e             => mkCtx env lctx opts m!"(kernel) type expected{indentExpr e}"
  | letTypeMismatch  env lctx n _ _     => mkCtx env lctx opts m!"(kernel) let-declaration type mismatch '{n}'"
  | exprTypeMismatch env lctx e _       => mkCtx env lctx opts m!"(kernel) type mismatch at{indentExpr e}"
  | appTypeMismatch  env lctx e fnType argType =>
    mkCtx env lctx opts m!"(kernel) application type mismatch{indentExpr e}\nargument has type{indentExpr argType}\nbut function has type{indentExpr fnType}"
  | invalidProj env lctx e              => mkCtx env lctx opts m!"(kernel) invalid projection{indentExpr e}"
  | thmTypeIsNotProp env constName type => mkCtx env {} opts m!"(kernel) type of theorem '{.ofConstName constName true}' is not a proposition{indentExpr type}"
  | other msg                           => m!"(kernel) {msg}"
  | deterministicTimeout                => "(kernel) deterministic timeout"
  | excessiveMemory                     => "(kernel) excessive memory consumption detected"
  | deepRecursion                       => "(kernel) deep recursion detected"
  | interrupted                         => "(kernel) interrupted"

end Kernel.Exception
end Lean
