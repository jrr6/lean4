/-
Copyright (c) 2021 Gabriel Ebner. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Gabriel Ebner, Mario Carneiro, Thomas Murrills
-/
prelude
import Lean.Widget.UserWidget

/-!
# "Try this" support

This implements a mechanism for tactics to print a message saying `Try this: <suggestion>`,
where `<suggestion>` is a link to a replacement tactic. Users can either click on the link
in the suggestion (provided by a widget), or use a code action which applies the suggestion.
-/
namespace Lean.Meta.Tactic.TryThis

open Lean Elab PrettyPrinter Meta Server RequestM

/-! # Raw widget -/

/--
This is a widget which is placed by `TryThis.addSuggestion` and `TryThis.addSuggestions`.

When placed by `addSuggestion`, it says `Try this: <replacement>`
where `<replacement>` is a link which will perform the replacement.

When placed by `addSuggestions`, it says:
```
Try these:
```
* `<replacement1>`
* `<replacement2>`
* `<replacement3>`
* ...

where `<replacement*>` is a link which will perform the replacement.
-/
@[builtin_widget_module] def tryThisWidget : Widget.Module where
  javascript := "
import * as React from 'react';
import { EditorContext, EnvPosContext } from '@leanprover/infoview';
const e = React.createElement;
export default function ({ suggestions, range, header, isInline, style }) {
  const pos = React.useContext(EnvPosContext)
  const editorConnection = React.useContext(EditorContext)
  const defStyle = style || {
    className: 'link pointer dim',
    style: { color: 'var(--vscode-textLink-foreground)' }
  }

  // Construct the children of the HTML element for a given suggestion.
  function makeSuggestion({ suggestion, preInfo, postInfo, style }) {
    function onClick() {
      editorConnection.api.applyEdit({
        changes: { [pos.uri]: [{ range, newText: suggestion }] }
      })
    }
    return [
      preInfo,
      e('span', { onClick, title: 'Apply suggestion', ...style || defStyle }, suggestion),
      postInfo
    ]
  }

  // Choose between an inline 'Try this'-like display and a list-based 'Try these'-like display.
  let inner = null
  if (isInline) {
    inner = makeSuggestion(suggestions[0])
  } else {
    inner = e('ul', { style: { paddingInlineStart: '20px' } }, suggestions.map(s =>
        e('li', { className: 'font-code pre-wrap' }, makeSuggestion(s))))
  }

  let outer = e('div', { className: 'ml1' },
    e('pre', { className: 'font-code pre-wrap' }, header), inner)

  // Choose between the 'embedded' display mode for error-message hints and self-contained display
  // mode for tactic suggestions
  if (isEmbedded) {
    return outer
  } else {
    return e('details', { open: true },
      e('summary', { className: 'mv2 pointer' }, 'Suggestions'),
      outer)
  }
}"

/-! # Code action -/

/-- A packet of information about a "Try this" suggestion
that we store in the infotree for the associated code action to retrieve. -/
structure TryThisInfo : Type where
  /-- The textual range to be replaced by one of the suggestions. -/
  range : Lsp.Range
  /--
  A list of suggestions for the user to choose from.
  Each suggestion may optionally come with an override for the code action title.
  -/
  suggestionTexts : Array (String × Option String)
  /-- The prefix to display before the code action for a "Try this" suggestion if no custom code
  action title is provided. If not provided, `"Try this: "` is used. -/
  codeActionPrefix? : Option String
  deriving TypeName

/-! # Formatting -/

/-- Yields `(indent, column)` given a `FileMap` and a `String.Range`, where `indent` is the number
of spaces by which the line that first includes `range` is initially indented, and `column` is the
column `range` starts at in that line. -/
def getIndentAndColumn (map : FileMap) (range : String.Range) : Nat × Nat :=
  let start := map.source.findLineStart range.start
  let body := map.source.findAux (· ≠ ' ') range.start start
  ((body - start).1, (range.start - start).1)

/--
An option allowing the user to customize the ideal input width. Defaults to 100.
This option controls output format when
the output is intended to be copied back into a lean file -/
register_builtin_option format.inputWidth : Nat := {
  /- The default maximum width of an ideal line in source code. -/
  defValue := 100
  descr := "ideal input width"
}

/-- Get the input width specified in the options -/
def getInputWidth (o : Options) : Nat := format.inputWidth.get o

/-! # `Suggestion` data -/

-- TODO: we could also support `Syntax` and `Format`
/-- Text to be used as a suggested replacement in the infoview. This can be either a `TSyntax kind`
for a single `kind : SyntaxNodeKind` or a raw `String`.

Instead of using constructors directly, there are coercions available from these types to
`SuggestionText`. -/
inductive SuggestionText where
  /-- `TSyntax kind` used as suggested replacement text in the infoview. Note that while `TSyntax`
  is in general parameterized by a list of `SyntaxNodeKind`s, we only allow one here; this
  unambiguously guides pretty-printing. -/
  | tsyntax {kind : SyntaxNodeKind} : TSyntax kind → SuggestionText
  /-- A raw string to be used as suggested replacement text in the infoview. -/
  | string : String → SuggestionText
  deriving Inhabited

instance : ToMessageData SuggestionText where
  toMessageData
  | .tsyntax stx => stx
  | .string s => s

instance {kind : SyntaxNodeKind} : CoeHead (TSyntax kind) SuggestionText where
  coe := .tsyntax

instance : Coe String SuggestionText where
  coe := .string

namespace SuggestionText

/-- Pretty-prints a `SuggestionText` as a `Format`. If the `SuggestionText` is some `TSyntax kind`,
we use the appropriate pretty-printer; strings are coerced to `Format`s as-is. -/
def pretty : SuggestionText → CoreM Format
  | .tsyntax (kind := kind) stx => ppCategory kind stx
  | .string text => return text

/- Note that this is essentially `return (← s.pretty).prettyExtra w indent column`, but we
special-case strings to avoid converting them to `Format`s and back, which adds indentation after each newline. -/
/-- Pretty-prints a `SuggestionText` as a `String` and wraps with respect to the pane width,
indentation, and column, via `Format.prettyExtra`. If `w := none`, then
`w := getInputWidth (← getOptions)` is used. Raw `String`s are returned as-is. -/
def prettyExtra (s : SuggestionText) (w : Option Nat := none)
    (indent column : Nat := 0) : CoreM String :=
  match s with
  | .tsyntax (kind := kind) stx => do
    let w ← match w with | none => do pure <| getInputWidth (← getOptions) | some n => pure n
    return (← ppCategory kind stx).pretty w indent column
  | .string text => return text

end SuggestionText

/--
Style hooks for `Suggestion`s. See `SuggestionStyle.error`, `.warning`, `.success`, `.value`,
and other definitions here for style presets. This is an arbitrary `Json` object, with the following
interesting fields:
* `title`: the hover text in the suggestion link
* `className`: the CSS classes applied to the link
* `style`: A `Json` object with additional inline CSS styles such as `color` or `textDecoration`.
-/
def SuggestionStyle := Json deriving Inhabited, ToJson

/-- Style as an error. By default, decorates the text with an undersquiggle; providing the argument
`decorated := false` turns this off. -/
def SuggestionStyle.error (decorated := true) : SuggestionStyle :=
  let style := if decorated then
    json% {
      -- The VS code error foreground theme color (`--vscode-errorForeground`).
      color: "var(--vscode-errorForeground)",
      textDecoration: "underline wavy var(--vscode-editorError-foreground) 1pt"
    }
  else json% { color: "var(--vscode-errorForeground)" }
  json% { className: "pointer dim", style: $style }

/-- Style as a warning. By default, decorates the text with an undersquiggle; providing the
argument `decorated := false` turns this off. -/
def SuggestionStyle.warning (decorated := true) : SuggestionStyle :=
  if decorated then
    json% {
      -- The `.gold` CSS class, which the infoview uses when e.g. building a file.
      className: "gold pointer dim",
      style: { textDecoration: "underline wavy var(--vscode-editorWarning-foreground) 1pt" }
    }
  else json% { className: "gold pointer dim" }

/-- Style as a success. -/
def SuggestionStyle.success : SuggestionStyle :=
  -- The `.information` CSS class, which the infoview uses on successes.
  json% { className: "information pointer dim" }

/-- Style the same way as a hypothesis appearing in the infoview. -/
def SuggestionStyle.asHypothesis : SuggestionStyle :=
  json% { className: "goal-hyp pointer dim" }

/-- Style the same way as an inaccessible hypothesis appearing in the infoview. -/
def SuggestionStyle.asInaccessible : SuggestionStyle :=
  json% { className: "goal-inaccessible pointer dim" }

/-- Draws the color from a red-yellow-green color gradient with red at `0.0`, yellow at `0.5`, and
green at `1.0`. Values outside the range `[0.0, 1.0]` are clipped to lie within this range.

With `showValueInHoverText := true` (the default), the value `t` will be included in the `title` of
the HTML element (which appears on hover). -/
def SuggestionStyle.value (t : Float) (showValueInHoverText := true) : SuggestionStyle :=
  let t := min (max t 0) 1
  json% {
    className: "pointer dim",
    -- interpolates linearly from 0º to 120º with 95% saturation and lightness
    -- varying around 50% in HSL space
    style: { color: $(s!"hsl({(t * 120).round} 95% {60 * ((t - 0.5)^2 + 0.75)}%)") },
    title: $(if showValueInHoverText then s!"Apply suggestion ({t})" else "Apply suggestion")
  }

/-- Holds a `suggestion` for replacement, along with `preInfo` and `postInfo` strings to be printed
immediately before and after that suggestion, respectively. It also includes an optional
`MessageData` to represent the suggestion in logs; by default, this is `none`, and `suggestion` is
used. -/
structure Suggestion where
  /-- Text to be used as a replacement via a code action. -/
  suggestion : SuggestionText
  /-- Optional info to be printed immediately before replacement text in a widget. -/
  preInfo? : Option String := none
  /-- Optional info to be printed immediately after replacement text in a widget. -/
  postInfo? : Option String := none
  /-- Optional style specification for the suggestion. If `none` (the default), the suggestion is
  styled as a text link. Otherwise, the suggestion can be styled as:
  * a status: `.error`, `.warning`, `.success`
  * a hypothesis name: `.asHypothesis`, `.asInaccessible`
  * a variable color: `.value (t : Float)`, which draws from a red-yellow-green gradient, with red
  at `0.0` and green at `1.0`.

  See `SuggestionStyle` for details. -/
  style? : Option SuggestionStyle := none
  /-- How to represent the suggestion as `MessageData`. This is used only in the info diagnostic.
  If `none`, we use `suggestion`. Use `toMessageData` to render a `Suggestion` in this manner. -/
  messageData? : Option MessageData := none
  /-- How to construct the text that appears in the lightbulb menu from the suggestion text. If
  `none`, we use `fun ppSuggestionText => "Try this: " ++ ppSuggestionText`. Only the pretty-printed
  `suggestion : SuggestionText` is used here. -/
  toCodeActionTitle? : Option (String → String) := none
  deriving Inhabited

/-- Converts a `Suggestion` to `Json` in `CoreM`. We need `CoreM` in order to pretty-print syntax.

This also returns a `String × Option String` consisting of the pretty-printed text and any custom
code action title if `toCodeActionTitle?` is provided.

If `w := none`, then `w := getInputWidth (← getOptions)` is used.
-/
def Suggestion.toJsonAndInfoM (s : Suggestion) (w : Option Nat := none) (indent column : Nat := 0) :
    CoreM (Json × String × Option String) := do
  let text ← s.suggestion.prettyExtra w indent column
  let mut json := [("suggestion", (text : Json))]
  if let some preInfo := s.preInfo? then json := ("preInfo", preInfo) :: json
  if let some postInfo := s.postInfo? then json := ("postInfo", postInfo) :: json
  if let some style := s.style? then json := ("style", toJson style) :: json
  return (Json.mkObj json, text, s.toCodeActionTitle?.map (· text))

/- If `messageData?` is specified, we use that; otherwise (by default), we use `toMessageData` of
the suggestion text. -/
instance : ToMessageData Suggestion where
  toMessageData s := s.messageData?.getD (toMessageData s.suggestion)

instance : Coe SuggestionText Suggestion where
  coe t := { suggestion := t }

/-! # Widget hooks -/

private structure ProcessedSuggestionData where
  info : Info
  json : Json

private def mkSuggestionMessages (header : String) (suggestions : Array Suggestion) :=
  if _ : suggestions.size = 1 then
    m!"\n{header}{suggestions[0]}\n"
  else
    let msgs := suggestions.map toMessageData
    let msgs := msgs.foldl (init := MessageData.nil) (fun msg m => msg ++ m!"\n• " ++ .nest 2 m)
    m!"\n{header}{msgs}\n"

-- TODO: add ability to disable dropdown and header text for inline rendering
private def processSuggestion (ref : Syntax) (range : String.Range) (suggestions : Array Suggestion)
    (header : String) (isInline : Bool) (isEmbedded := false)
    (style? : Option SuggestionStyle := none) (codeActionPrefix? : Option String := none)
    : CoreM ProcessedSuggestionData := do
  let map ← getFileMap
  -- FIXME: this produces incorrect results when `by` is at the beginning of the line, i.e.
  -- replacing `tac` in `by tac`, because the next line will only be 2 space indented
  -- (less than `tac` which starts at column 3)
  let (indent, column) := getIndentAndColumn map range
  let suggestions ← suggestions.mapM (·.toJsonAndInfoM (indent := indent) (column := column))
  let suggestionTexts := suggestions.map (·.2)
  let suggestions := suggestions.map (·.1)
  let ref := Syntax.ofRange <| ref.getRange?.getD range
  let range := map.utf8RangeToLspRange range
  let info := .ofCustomInfo {
    stx := ref
    value := Dynamic.mk { range, suggestionTexts, codeActionPrefix? : TryThisInfo }
  }
  let json := json% {
    suggestions: $suggestions,
    range: $range,
    header: $header,
    isInline: $isInline,
    isEmbedded: $isEmbedded,
    style: $style?
  }
  return { info, json }

/-- Core of `addSuggestion` and `addSuggestions`. Whether we use an inline display for a single
element or a list display is controlled by `isInline`. -/
private def addSuggestionCore (ref : Syntax) (suggestions : Array Suggestion)
    (header : String) (isInline : Bool) (origSpan? : Option Syntax := none)
    (style? : Option SuggestionStyle := none)
    (codeActionPrefix? : Option String := none) : CoreM Unit := do
  if let some range := (origSpan?.getD ref).getRange? then
    let { info, json } ← processSuggestion ref range suggestions header isInline (isEmbedded := false) style? codeActionPrefix?
    pushInfoLeaf info
    Widget.savePanelWidgetInfo tryThisWidget.javascriptHash ref (props := return json)

/-- Add a "try this" suggestion. This has three effects:

* An info diagnostic is displayed saying `Try this: <suggestion>`
* A widget is registered, saying `Try this: <suggestion>` with a link on `<suggestion>` to apply
  the suggestion
* A code action is added, which will apply the suggestion.

The parameters are:
* `ref`: the span of the info diagnostic
* `s`: a `Suggestion`, which contains
  * `suggestion`: the replacement text;
  * `preInfo?`: an optional string shown immediately after the replacement text in the widget
    message (only)
  * `postInfo?`: an optional string shown immediately after the replacement text in the widget
    message (only)
  * `style?`: an optional `Json` object used as the value of the `style` attribute of the
    suggestion text's element (not the whole suggestion element).
  * `messageData?`: an optional message to display in place of `suggestion` in the info diagnostic
    (only). The widget message uses only `suggestion`. If `messageData?` is `none`, we simply use
    `suggestion` instead.
  * `toCodeActionTitle?`: an optional function `String → String` describing how to transform the
    pretty-printed suggestion text into the code action text which appears in the lightbulb menu.
    If `none`, we simply prepend `"Try This: "` to the suggestion text.
* `origSpan?`: a syntax object whose span is the actual text to be replaced by `suggestion`.
  If not provided it defaults to `ref`.
* `header`: a string that begins the display. By default, it is `"Try this: "`.
* `codeActionPrefix?`: an optional string to be used as the prefix of the replacement text if the
  suggestion does not have a custom `toCodeActionTitle?`. If not provided, `"Try this: "` is used.
-/
def addSuggestion (ref : Syntax) (s : Suggestion) (origSpan? : Option Syntax := none)
    (header : String := "Try this: ") (codeActionPrefix? : Option String := none) : MetaM Unit := do
  logInfoAt ref m!"{header}{s}"
  addSuggestionCore ref #[s] header (isInline := true) origSpan?
    (codeActionPrefix? := codeActionPrefix?)

/-- Add a list of "try this" suggestions as a single "try these" suggestion. This has three effects:

* An info diagnostic is displayed saying `Try these: <list of suggestions>`
* A widget is registered, saying `Try these: <list of suggestions>` with a link on each
  `<suggestion>` to apply the suggestion
* A code action for each suggestion is added, which will apply the suggestion.

The parameters are:
* `ref`: the span of the info diagnostic
* `suggestions`: an array of `Suggestion`s, which each contain
  * `suggestion`: the replacement text;
  * `preInfo?`: an optional string shown immediately after the replacement text in the widget
    message (only)
  * `postInfo?`: an optional string shown immediately after the replacement text in the widget
    message (only)
  * `style?`: an optional `Json` object used as the value of the `style` attribute of the
    suggestion text's element (not the whole suggestion element).
  * `messageData?`: an optional message to display in place of `suggestion` in the info diagnostic
    (only). The widget message uses only `suggestion`. If `messageData?` is `none`, we simply use
    `suggestion` instead.
  * `toCodeActionTitle?`: an optional function `String → String` describing how to transform the
    pretty-printed suggestion text into the code action text which appears in the lightbulb menu.
    If `none`, we simply prepend `"Try This: "` to the suggestion text.
* `origSpan?`: a syntax object whose span is the actual text to be replaced by `suggestion`.
  If not provided it defaults to `ref`.
* `header`: a string that precedes the list. By default, it is `"Try these:"`.
* `style?`: a default style for all suggestions which do not have a custom `style?` set.
* `codeActionPrefix?`: an optional string to be used as the prefix of the replacement text for all
  suggestions which do not have a custom `toCodeActionTitle?`. If not provided, `"Try this: "` is
  used.
-/
def addSuggestions (ref : Syntax) (suggestions : Array Suggestion)
    (origSpan? : Option Syntax := none) (header : String := "Try these:")
    (style? : Option SuggestionStyle := none)
    (codeActionPrefix? : Option String := none) : MetaM Unit := do
  if suggestions.isEmpty then throwErrorAt ref "no suggestions available"
  let msgs := suggestions.map toMessageData
  let msgs := msgs.foldl (init := MessageData.nil) (fun msg m => msg ++ m!"\n• " ++ .nest 2 m)
  logInfoAt ref m!"{header}{msgs}"
  addSuggestionCore ref suggestions header (isInline := false) origSpan? style? codeActionPrefix?

structure MessageSuggestions where
  ref : Syntax
  suggestions : Array Suggestion
  codeActionPrefix? : Option String

/--
Appends a hint `hint` to `msg`. If `ref?` is non-`none` and `suggestions` is nonempty, will also
append an inline suggestion widget.
-/
def _root_.Lean.MessageData.appendHint (msg hint : MessageData)
    (msgSuggs? : Option MessageSuggestions := none)
    : CoreM MessageData := do
  let mut hintMsg := m!"\n\nhint: {hint}"
  -- In the future, we may wish to be able to direct users to relevant syntax (e.g., via a "jump to
  -- location" link without an associated suggestion)
  if let some msgSuggs := msgSuggs? then
    let { ref, codeActionPrefix?, suggestions } := msgSuggs
    if let some range := ref.getRange? then
      if suggestions.size > 0 then
        let { info, json } ← processSuggestion ref range suggestions ""
          (isEmbedded := true)
          (isInline := false)
          (codeActionPrefix? := codeActionPrefix?)
        pushInfoLeaf info
        hintMsg := hintMsg ++ .ofWidget {
          id := ``tryThisWidget
          javascriptHash := tryThisWidget.javascriptHash
          props := return json
        } (mkSuggestionMessages "" suggestions)
  return msg ++ hintMsg
