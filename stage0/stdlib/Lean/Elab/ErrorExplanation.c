// Lean compiler output
// Module: Lean.Elab.ErrorExplanation
// Imports: Lean.ErrorExplanation Lean.Meta.Eval Lean.Elab.Term Lean.Elab.Command Lean.Widget.UserWidget Std.Internal.Parsec
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Name_getNumParts(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_ErrorExplanation_processDoc(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__4;
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__1;
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__2;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__43;
lean_object* l_Lean_Elab_Command_runTermElabM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__19;
lean_object* l_Lean_indentD(lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__37;
static lean_object* l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__9;
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
static lean_object* l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1___closed__1;
lean_object* l_Lean_Elab_addCompletionInfo___at_Lean_Elab_Term_addDotCompletionInfo___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__52;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__8;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__28;
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_rewriteManualLinksCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__3;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__38;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__36;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__16;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__6;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__20;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__42;
lean_object* l_Lean_Syntax_ofRange(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__13;
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__6;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__7;
lean_object* l_Lean_MessageData_note(lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__4;
lean_object* lean_string_utf8_byte_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__1;
static lean_object* l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__4;
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__8;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__3;
lean_object* l_Lean_FileMap_ofPosition(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1(lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__3;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__1;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__46;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__21;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__5;
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__34;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__2;
lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__1;
lean_object* l_Lean_Meta_evalExpr___rarg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__41;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__4;
lean_object* l_Lean_Elab_Command_getRef(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_NameMap_contains___rarg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__53;
lean_object* l_Lean_quoteNameMk(lean_object*);
static lean_object* l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__2;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__5;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__10;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__17;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__5;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__7;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__1;
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__35;
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24;
lean_object* l_Lean_addMessageContextPartial___at_Lean_Elab_Command_instAddMessageContextCommandElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__5;
lean_object* l_Lean_Elab_liftMacroM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwAbortTerm___at_Lean_Elab_Term_ensureType___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getDocString(lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__5;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__3;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__11;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__3;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__33;
lean_object* l_Lean_SourceInfo_getPos_x3f(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__4;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__51;
extern lean_object* l_Lean_errorDescriptionWidget;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__31;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__15;
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
static lean_object* l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__48;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__6;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__3;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__12;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__1;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__49;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__50;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__39;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__6;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__30;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__32;
lean_object* l_Lean_Syntax_getHeadInfo_x3f(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___rarg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__44;
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1(lean_object*);
lean_object* l_Lean_Widget_addBuiltinModule(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__23;
size_t lean_usize_add(size_t, size_t);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__27;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_logAt___at_Lean_Elab_Command_withLoggingExceptions___spec__3(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__7;
lean_object* lean_array_uget(lean_object*, size_t);
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__5;
size_t lean_array_size(lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__18;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__29;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Widget_elabShowPanelWidgetsCmd___spec__1___rarg(lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__47;
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_object* l_Lean_log___at_Lean_Elab_Command_withLoggingExceptions___spec__4(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__40;
lean_object* l_Lean_throwError___at_Lean_withSetOptionIn___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__7;
lean_object* l_String_toSubstring_x27(lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__2;
lean_object* l_Lean_MessageData_ofName(lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__45;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_errorExplanationExt;
static lean_object* _init_l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("errorDescriptionWidget", 22, 22);
return x_1;
}
}
static lean_object* _init_l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__3;
x_3 = l_Lean_errorDescriptionWidget;
x_4 = l_Lean_Widget_addBuiltinModule(x_2, x_3, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("throwNamedErrorParser", 21, 21);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__1;
x_3 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__2;
x_4 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__3;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("throwNamedErrorAtParser", 23, 23);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__1;
x_3 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__2;
x_4 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__5;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("logNamedErrorParser", 19, 19);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__1;
x_3 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__2;
x_4 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__7;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("logNamedErrorAtParser", 21, 21);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__1;
x_3 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__2;
x_4 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__9;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("interpolatedStrKind", 19, 19);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("app", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__1;
x_3 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__2;
x_4 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__13;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.logNamedErrorAt", 20, 20);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__15;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("logNamedErrorAt", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__17;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__18;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__19;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__21;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__23() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("quotedName", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__1;
x_3 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__2;
x_4 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__23;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(".", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("`", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__27() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("termM!_", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__27;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__29() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("m!", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__30() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.logNamedError", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__30;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__32() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("logNamedError", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__33() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__32;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__33;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__35() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__34;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__36() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.logError", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__37() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__36;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__38() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("logError", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__39() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__38;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__40() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__39;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__41() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__40;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__42() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.throwNamedErrorAt", 22, 22);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__43() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__42;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__44() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("throwNamedErrorAt", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__45() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__44;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__46() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__45;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__47() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__46;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__48() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.throwNamedError", 20, 20);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__49() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__48;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__50() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("throwNamedError", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__51() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__50;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__52() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__51;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__53() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__52;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__4;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__6;
lean_inc(x_1);
x_7 = l_Lean_Syntax_isOfKind(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__8;
lean_inc(x_1);
x_9 = l_Lean_Syntax_isOfKind(x_1, x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__10;
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(1);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = lean_unsigned_to_nat(2u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_18 = lean_unsigned_to_nat(3u);
x_19 = l_Lean_Syntax_getArg(x_1, x_18);
lean_dec(x_1);
x_20 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__12;
lean_inc(x_19);
x_21 = l_Lean_Syntax_isOfKind(x_19, x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_22 = lean_ctor_get(x_2, 5);
lean_inc(x_22);
x_23 = 0;
x_24 = l_Lean_SourceInfo_fromRef(x_22, x_23);
lean_dec(x_22);
x_25 = lean_ctor_get(x_2, 2);
lean_inc(x_25);
x_26 = lean_ctor_get(x_2, 1);
lean_inc(x_26);
lean_dec(x_2);
x_27 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__18;
x_28 = l_Lean_addMacroScope(x_26, x_27, x_25);
x_29 = lean_box(0);
x_30 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__16;
x_31 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__20;
lean_inc(x_24);
x_32 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_32, 0, x_24);
lean_ctor_set(x_32, 1, x_30);
lean_ctor_set(x_32, 2, x_28);
lean_ctor_set(x_32, 3, x_31);
x_33 = l_Lean_Syntax_getId(x_17);
lean_dec(x_17);
lean_inc(x_33);
x_34 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_29, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_35 = l_Lean_quoteNameMk(x_33);
x_36 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_24);
x_37 = l_Lean_Syntax_node3(x_24, x_36, x_15, x_35, x_19);
x_38 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_39 = l_Lean_Syntax_node2(x_24, x_38, x_32, x_37);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_3);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_33);
x_41 = lean_ctor_get(x_34, 0);
lean_inc(x_41);
lean_dec(x_34);
x_42 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
x_43 = l_String_intercalate(x_42, x_41);
x_44 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_45 = lean_string_append(x_44, x_43);
lean_dec(x_43);
x_46 = lean_box(2);
x_47 = l_Lean_Syntax_mkNameLit(x_45, x_46);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_29);
x_49 = lean_array_mk(x_48);
x_50 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24;
x_51 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_51, 0, x_46);
lean_ctor_set(x_51, 1, x_50);
lean_ctor_set(x_51, 2, x_49);
x_52 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_24);
x_53 = l_Lean_Syntax_node3(x_24, x_52, x_15, x_51, x_19);
x_54 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_55 = l_Lean_Syntax_node2(x_24, x_54, x_32, x_53);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_3);
return x_56;
}
}
else
{
lean_object* x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_57 = lean_ctor_get(x_2, 5);
lean_inc(x_57);
x_58 = 0;
x_59 = l_Lean_SourceInfo_fromRef(x_57, x_58);
lean_dec(x_57);
x_60 = lean_ctor_get(x_2, 2);
lean_inc(x_60);
x_61 = lean_ctor_get(x_2, 1);
lean_inc(x_61);
lean_dec(x_2);
x_62 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__18;
x_63 = l_Lean_addMacroScope(x_61, x_62, x_60);
x_64 = lean_box(0);
x_65 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__16;
x_66 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__20;
lean_inc(x_59);
x_67 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_67, 0, x_59);
lean_ctor_set(x_67, 1, x_65);
lean_ctor_set(x_67, 2, x_63);
lean_ctor_set(x_67, 3, x_66);
x_68 = l_Lean_Syntax_getId(x_17);
lean_dec(x_17);
lean_inc(x_68);
x_69 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_64, x_68);
x_70 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__29;
lean_inc(x_59);
x_71 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_71, 0, x_59);
lean_ctor_set(x_71, 1, x_70);
x_72 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__28;
lean_inc(x_59);
x_73 = l_Lean_Syntax_node2(x_59, x_72, x_71, x_19);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_74 = l_Lean_quoteNameMk(x_68);
x_75 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_59);
x_76 = l_Lean_Syntax_node3(x_59, x_75, x_15, x_74, x_73);
x_77 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_78 = l_Lean_Syntax_node2(x_59, x_77, x_67, x_76);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_3);
return x_79;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_68);
x_80 = lean_ctor_get(x_69, 0);
lean_inc(x_80);
lean_dec(x_69);
x_81 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
x_82 = l_String_intercalate(x_81, x_80);
x_83 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_84 = lean_string_append(x_83, x_82);
lean_dec(x_82);
x_85 = lean_box(2);
x_86 = l_Lean_Syntax_mkNameLit(x_84, x_85);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_64);
x_88 = lean_array_mk(x_87);
x_89 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24;
x_90 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_90, 0, x_85);
lean_ctor_set(x_90, 1, x_89);
lean_ctor_set(x_90, 2, x_88);
x_91 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_59);
x_92 = l_Lean_Syntax_node3(x_59, x_91, x_15, x_90, x_73);
x_93 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_94 = l_Lean_Syntax_node2(x_59, x_93, x_67, x_92);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_3);
return x_95;
}
}
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; 
x_96 = lean_unsigned_to_nat(1u);
x_97 = l_Lean_Syntax_getArg(x_1, x_96);
x_98 = lean_unsigned_to_nat(2u);
x_99 = l_Lean_Syntax_getArg(x_1, x_98);
lean_dec(x_1);
x_100 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__12;
lean_inc(x_99);
x_101 = l_Lean_Syntax_isOfKind(x_99, x_100);
if (x_101 == 0)
{
lean_object* x_102; uint8_t x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_102 = lean_ctor_get(x_2, 5);
lean_inc(x_102);
x_103 = 0;
x_104 = l_Lean_SourceInfo_fromRef(x_102, x_103);
lean_dec(x_102);
x_105 = lean_ctor_get(x_2, 2);
lean_inc(x_105);
x_106 = lean_ctor_get(x_2, 1);
lean_inc(x_106);
lean_dec(x_2);
x_107 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__33;
x_108 = l_Lean_addMacroScope(x_106, x_107, x_105);
x_109 = lean_box(0);
x_110 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__31;
x_111 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__35;
lean_inc(x_104);
x_112 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_112, 0, x_104);
lean_ctor_set(x_112, 1, x_110);
lean_ctor_set(x_112, 2, x_108);
lean_ctor_set(x_112, 3, x_111);
x_113 = l_Lean_Syntax_getId(x_97);
lean_dec(x_97);
lean_inc(x_113);
x_114 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_109, x_113);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_115 = l_Lean_quoteNameMk(x_113);
x_116 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_104);
x_117 = l_Lean_Syntax_node2(x_104, x_116, x_115, x_99);
x_118 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_119 = l_Lean_Syntax_node2(x_104, x_118, x_112, x_117);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_3);
return x_120;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_113);
x_121 = lean_ctor_get(x_114, 0);
lean_inc(x_121);
lean_dec(x_114);
x_122 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
x_123 = l_String_intercalate(x_122, x_121);
x_124 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_125 = lean_string_append(x_124, x_123);
lean_dec(x_123);
x_126 = lean_box(2);
x_127 = l_Lean_Syntax_mkNameLit(x_125, x_126);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_109);
x_129 = lean_array_mk(x_128);
x_130 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24;
x_131 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_131, 0, x_126);
lean_ctor_set(x_131, 1, x_130);
lean_ctor_set(x_131, 2, x_129);
x_132 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_104);
x_133 = l_Lean_Syntax_node2(x_104, x_132, x_131, x_99);
x_134 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_135 = l_Lean_Syntax_node2(x_104, x_134, x_112, x_133);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_3);
return x_136;
}
}
else
{
lean_object* x_137; uint8_t x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_137 = lean_ctor_get(x_2, 5);
lean_inc(x_137);
x_138 = 0;
x_139 = l_Lean_SourceInfo_fromRef(x_137, x_138);
lean_dec(x_137);
x_140 = lean_ctor_get(x_2, 2);
lean_inc(x_140);
x_141 = lean_ctor_get(x_2, 1);
lean_inc(x_141);
lean_dec(x_2);
x_142 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__39;
x_143 = l_Lean_addMacroScope(x_141, x_142, x_140);
x_144 = lean_box(0);
x_145 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__37;
x_146 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__41;
lean_inc(x_139);
x_147 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_147, 0, x_139);
lean_ctor_set(x_147, 1, x_145);
lean_ctor_set(x_147, 2, x_143);
lean_ctor_set(x_147, 3, x_146);
x_148 = l_Lean_Syntax_getId(x_97);
lean_dec(x_97);
lean_inc(x_148);
x_149 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_144, x_148);
x_150 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__29;
lean_inc(x_139);
x_151 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_151, 0, x_139);
lean_ctor_set(x_151, 1, x_150);
x_152 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__28;
lean_inc(x_139);
x_153 = l_Lean_Syntax_node2(x_139, x_152, x_151, x_99);
if (lean_obj_tag(x_149) == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_154 = l_Lean_quoteNameMk(x_148);
x_155 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_139);
x_156 = l_Lean_Syntax_node2(x_139, x_155, x_154, x_153);
x_157 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_158 = l_Lean_Syntax_node2(x_139, x_157, x_147, x_156);
x_159 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_3);
return x_159;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_dec(x_148);
x_160 = lean_ctor_get(x_149, 0);
lean_inc(x_160);
lean_dec(x_149);
x_161 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
x_162 = l_String_intercalate(x_161, x_160);
x_163 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_164 = lean_string_append(x_163, x_162);
lean_dec(x_162);
x_165 = lean_box(2);
x_166 = l_Lean_Syntax_mkNameLit(x_164, x_165);
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_144);
x_168 = lean_array_mk(x_167);
x_169 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24;
x_170 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_170, 0, x_165);
lean_ctor_set(x_170, 1, x_169);
lean_ctor_set(x_170, 2, x_168);
x_171 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_139);
x_172 = l_Lean_Syntax_node2(x_139, x_171, x_170, x_153);
x_173 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_174 = l_Lean_Syntax_node2(x_139, x_173, x_147, x_172);
x_175 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_3);
return x_175;
}
}
}
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; uint8_t x_183; 
x_176 = lean_unsigned_to_nat(1u);
x_177 = l_Lean_Syntax_getArg(x_1, x_176);
x_178 = lean_unsigned_to_nat(2u);
x_179 = l_Lean_Syntax_getArg(x_1, x_178);
x_180 = lean_unsigned_to_nat(3u);
x_181 = l_Lean_Syntax_getArg(x_1, x_180);
lean_dec(x_1);
x_182 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__12;
lean_inc(x_181);
x_183 = l_Lean_Syntax_isOfKind(x_181, x_182);
if (x_183 == 0)
{
lean_object* x_184; uint8_t x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_184 = lean_ctor_get(x_2, 5);
lean_inc(x_184);
x_185 = 0;
x_186 = l_Lean_SourceInfo_fromRef(x_184, x_185);
lean_dec(x_184);
x_187 = lean_ctor_get(x_2, 2);
lean_inc(x_187);
x_188 = lean_ctor_get(x_2, 1);
lean_inc(x_188);
lean_dec(x_2);
x_189 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__45;
x_190 = l_Lean_addMacroScope(x_188, x_189, x_187);
x_191 = lean_box(0);
x_192 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__43;
x_193 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__47;
lean_inc(x_186);
x_194 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_194, 0, x_186);
lean_ctor_set(x_194, 1, x_192);
lean_ctor_set(x_194, 2, x_190);
lean_ctor_set(x_194, 3, x_193);
x_195 = l_Lean_Syntax_getId(x_179);
lean_dec(x_179);
lean_inc(x_195);
x_196 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_191, x_195);
if (lean_obj_tag(x_196) == 0)
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_197 = l_Lean_quoteNameMk(x_195);
x_198 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_186);
x_199 = l_Lean_Syntax_node3(x_186, x_198, x_177, x_197, x_181);
x_200 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_201 = l_Lean_Syntax_node2(x_186, x_200, x_194, x_199);
x_202 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_3);
return x_202;
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; 
lean_dec(x_195);
x_203 = lean_ctor_get(x_196, 0);
lean_inc(x_203);
lean_dec(x_196);
x_204 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
x_205 = l_String_intercalate(x_204, x_203);
x_206 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_207 = lean_string_append(x_206, x_205);
lean_dec(x_205);
x_208 = lean_box(2);
x_209 = l_Lean_Syntax_mkNameLit(x_207, x_208);
x_210 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_210, 0, x_209);
lean_ctor_set(x_210, 1, x_191);
x_211 = lean_array_mk(x_210);
x_212 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24;
x_213 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_213, 0, x_208);
lean_ctor_set(x_213, 1, x_212);
lean_ctor_set(x_213, 2, x_211);
x_214 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_186);
x_215 = l_Lean_Syntax_node3(x_186, x_214, x_177, x_213, x_181);
x_216 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_217 = l_Lean_Syntax_node2(x_186, x_216, x_194, x_215);
x_218 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_218, 0, x_217);
lean_ctor_set(x_218, 1, x_3);
return x_218;
}
}
else
{
lean_object* x_219; uint8_t x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_219 = lean_ctor_get(x_2, 5);
lean_inc(x_219);
x_220 = 0;
x_221 = l_Lean_SourceInfo_fromRef(x_219, x_220);
lean_dec(x_219);
x_222 = lean_ctor_get(x_2, 2);
lean_inc(x_222);
x_223 = lean_ctor_get(x_2, 1);
lean_inc(x_223);
lean_dec(x_2);
x_224 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__45;
x_225 = l_Lean_addMacroScope(x_223, x_224, x_222);
x_226 = lean_box(0);
x_227 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__43;
x_228 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__47;
lean_inc(x_221);
x_229 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_229, 0, x_221);
lean_ctor_set(x_229, 1, x_227);
lean_ctor_set(x_229, 2, x_225);
lean_ctor_set(x_229, 3, x_228);
x_230 = l_Lean_Syntax_getId(x_179);
lean_dec(x_179);
lean_inc(x_230);
x_231 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_226, x_230);
x_232 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__29;
lean_inc(x_221);
x_233 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_233, 0, x_221);
lean_ctor_set(x_233, 1, x_232);
x_234 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__28;
lean_inc(x_221);
x_235 = l_Lean_Syntax_node2(x_221, x_234, x_233, x_181);
if (lean_obj_tag(x_231) == 0)
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_236 = l_Lean_quoteNameMk(x_230);
x_237 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_221);
x_238 = l_Lean_Syntax_node3(x_221, x_237, x_177, x_236, x_235);
x_239 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_240 = l_Lean_Syntax_node2(x_221, x_239, x_229, x_238);
x_241 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_241, 0, x_240);
lean_ctor_set(x_241, 1, x_3);
return x_241;
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; 
lean_dec(x_230);
x_242 = lean_ctor_get(x_231, 0);
lean_inc(x_242);
lean_dec(x_231);
x_243 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
x_244 = l_String_intercalate(x_243, x_242);
x_245 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_246 = lean_string_append(x_245, x_244);
lean_dec(x_244);
x_247 = lean_box(2);
x_248 = l_Lean_Syntax_mkNameLit(x_246, x_247);
x_249 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_226);
x_250 = lean_array_mk(x_249);
x_251 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24;
x_252 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_252, 0, x_247);
lean_ctor_set(x_252, 1, x_251);
lean_ctor_set(x_252, 2, x_250);
x_253 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_221);
x_254 = l_Lean_Syntax_node3(x_221, x_253, x_177, x_252, x_235);
x_255 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_256 = l_Lean_Syntax_node2(x_221, x_255, x_229, x_254);
x_257 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_257, 0, x_256);
lean_ctor_set(x_257, 1, x_3);
return x_257;
}
}
}
}
else
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; uint8_t x_263; 
x_258 = lean_unsigned_to_nat(1u);
x_259 = l_Lean_Syntax_getArg(x_1, x_258);
x_260 = lean_unsigned_to_nat(2u);
x_261 = l_Lean_Syntax_getArg(x_1, x_260);
lean_dec(x_1);
x_262 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__12;
lean_inc(x_261);
x_263 = l_Lean_Syntax_isOfKind(x_261, x_262);
if (x_263 == 0)
{
lean_object* x_264; uint8_t x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; 
x_264 = lean_ctor_get(x_2, 5);
lean_inc(x_264);
x_265 = 0;
x_266 = l_Lean_SourceInfo_fromRef(x_264, x_265);
lean_dec(x_264);
x_267 = lean_ctor_get(x_2, 2);
lean_inc(x_267);
x_268 = lean_ctor_get(x_2, 1);
lean_inc(x_268);
lean_dec(x_2);
x_269 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__51;
x_270 = l_Lean_addMacroScope(x_268, x_269, x_267);
x_271 = lean_box(0);
x_272 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__49;
x_273 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__53;
lean_inc(x_266);
x_274 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_274, 0, x_266);
lean_ctor_set(x_274, 1, x_272);
lean_ctor_set(x_274, 2, x_270);
lean_ctor_set(x_274, 3, x_273);
x_275 = l_Lean_Syntax_getId(x_259);
lean_dec(x_259);
lean_inc(x_275);
x_276 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_271, x_275);
if (lean_obj_tag(x_276) == 0)
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_277 = l_Lean_quoteNameMk(x_275);
x_278 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_266);
x_279 = l_Lean_Syntax_node2(x_266, x_278, x_277, x_261);
x_280 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_281 = l_Lean_Syntax_node2(x_266, x_280, x_274, x_279);
x_282 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_282, 0, x_281);
lean_ctor_set(x_282, 1, x_3);
return x_282;
}
else
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; 
lean_dec(x_275);
x_283 = lean_ctor_get(x_276, 0);
lean_inc(x_283);
lean_dec(x_276);
x_284 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
x_285 = l_String_intercalate(x_284, x_283);
x_286 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_287 = lean_string_append(x_286, x_285);
lean_dec(x_285);
x_288 = lean_box(2);
x_289 = l_Lean_Syntax_mkNameLit(x_287, x_288);
x_290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_271);
x_291 = lean_array_mk(x_290);
x_292 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24;
x_293 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_293, 0, x_288);
lean_ctor_set(x_293, 1, x_292);
lean_ctor_set(x_293, 2, x_291);
x_294 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_266);
x_295 = l_Lean_Syntax_node2(x_266, x_294, x_293, x_261);
x_296 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_297 = l_Lean_Syntax_node2(x_266, x_296, x_274, x_295);
x_298 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_298, 0, x_297);
lean_ctor_set(x_298, 1, x_3);
return x_298;
}
}
else
{
lean_object* x_299; uint8_t x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; 
x_299 = lean_ctor_get(x_2, 5);
lean_inc(x_299);
x_300 = 0;
x_301 = l_Lean_SourceInfo_fromRef(x_299, x_300);
lean_dec(x_299);
x_302 = lean_ctor_get(x_2, 2);
lean_inc(x_302);
x_303 = lean_ctor_get(x_2, 1);
lean_inc(x_303);
lean_dec(x_2);
x_304 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__51;
x_305 = l_Lean_addMacroScope(x_303, x_304, x_302);
x_306 = lean_box(0);
x_307 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__49;
x_308 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__53;
lean_inc(x_301);
x_309 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_309, 0, x_301);
lean_ctor_set(x_309, 1, x_307);
lean_ctor_set(x_309, 2, x_305);
lean_ctor_set(x_309, 3, x_308);
x_310 = l_Lean_Syntax_getId(x_259);
lean_dec(x_259);
lean_inc(x_310);
x_311 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_306, x_310);
x_312 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__29;
lean_inc(x_301);
x_313 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_313, 0, x_301);
lean_ctor_set(x_313, 1, x_312);
x_314 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__28;
lean_inc(x_301);
x_315 = l_Lean_Syntax_node2(x_301, x_314, x_313, x_261);
if (lean_obj_tag(x_311) == 0)
{
lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; 
x_316 = l_Lean_quoteNameMk(x_310);
x_317 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_301);
x_318 = l_Lean_Syntax_node2(x_301, x_317, x_316, x_315);
x_319 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_320 = l_Lean_Syntax_node2(x_301, x_319, x_309, x_318);
x_321 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_321, 0, x_320);
lean_ctor_set(x_321, 1, x_3);
return x_321;
}
else
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; 
lean_dec(x_310);
x_322 = lean_ctor_get(x_311, 0);
lean_inc(x_322);
lean_dec(x_311);
x_323 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
x_324 = l_String_intercalate(x_323, x_322);
x_325 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_326 = lean_string_append(x_325, x_324);
lean_dec(x_324);
x_327 = lean_box(2);
x_328 = l_Lean_Syntax_mkNameLit(x_326, x_327);
x_329 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_329, 0, x_328);
lean_ctor_set(x_329, 1, x_306);
x_330 = lean_array_mk(x_329);
x_331 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24;
x_332 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_332, 0, x_327);
lean_ctor_set(x_332, 1, x_331);
lean_ctor_set(x_332, 2, x_330);
x_333 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_301);
x_334 = l_Lean_Syntax_node2(x_301, x_333, x_332, x_315);
x_335 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_336 = l_Lean_Syntax_node2(x_301, x_335, x_309, x_334);
x_337 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_337, 0, x_336);
lean_ctor_set(x_337, 1, x_3);
return x_337;
}
}
}
}
}
static lean_object* _init_l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_errorExplanationExt;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_box(0);
x_14 = l_Lean_errorExplanationExt;
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get_uint8(x_15, sizeof(void*)*3);
lean_dec(x_15);
x_17 = l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1___closed__1;
x_18 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_13, x_17, x_12, x_16);
x_19 = l_Lean_NameMap_contains___rarg(x_18, x_1);
lean_dec(x_18);
x_20 = lean_box(x_19);
lean_ctor_set(x_9, 0, x_20);
return x_9;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_box(0);
x_25 = l_Lean_errorExplanationExt;
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get_uint8(x_26, sizeof(void*)*3);
lean_dec(x_26);
x_28 = l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1___closed__1;
x_29 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_24, x_28, x_23, x_27);
x_30 = l_Lean_NameMap_contains___rarg(x_29, x_1);
lean_dec(x_29);
x_31 = lean_box(x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_22);
return x_32;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_ErrorExplanation_expandThrowNamedError), 3, 1);
lean_closure_set(x_11, 0, x_1);
lean_inc(x_8);
lean_inc(x_4);
x_12 = l_Lean_Elab_liftMacroM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__9(x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = 1;
x_16 = l_Lean_Elab_Term_elabTerm(x_13, x_2, x_15, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_14);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("choice", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("There is no explanation associated with the name `", 50, 50);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("`. Add an explanation of this error to the `Lean.ErrorExplanation` module.", 74, 74);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__4;
lean_inc(x_14);
x_16 = l_Lean_Syntax_isOfKind(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__6;
lean_inc(x_14);
x_18 = l_Lean_Syntax_isOfKind(x_14, x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__8;
lean_inc(x_14);
x_20 = l_Lean_Syntax_isOfKind(x_14, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__10;
lean_inc(x_14);
x_22 = l_Lean_Syntax_isOfKind(x_14, x_21);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_unsigned_to_nat(2u);
x_25 = l_Lean_Syntax_getArg(x_14, x_24);
lean_dec(x_14);
x_26 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
lean_inc(x_25);
x_27 = l_Lean_Syntax_isOfKind(x_25, x_26);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_25);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = lean_unsigned_to_nat(1u);
x_30 = l_Lean_Syntax_getArg(x_1, x_29);
lean_inc(x_30);
x_31 = l_Lean_Syntax_isOfKind(x_30, x_21);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_30);
lean_dec(x_25);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_32;
}
else
{
lean_object* x_33; uint8_t x_34; 
x_33 = l_Lean_Syntax_getArg(x_30, x_24);
lean_dec(x_30);
x_34 = l_Lean_Syntax_isOfKind(x_33, x_26);
if (x_34 == 0)
{
lean_object* x_35; 
lean_dec(x_25);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_36 = l_Lean_Syntax_getId(x_25);
lean_inc(x_36);
x_37 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_37, 0, x_25);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_Lean_Elab_addCompletionInfo___at_Lean_Elab_Term_addDotCompletionInfo___spec__1(x_37, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_40 = lean_ctor_get(x_38, 1);
x_41 = lean_ctor_get(x_38, 0);
lean_dec(x_41);
x_42 = l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1(x_36, x_3, x_4, x_5, x_6, x_7, x_8, x_40);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_unbox(x_43);
lean_dec(x_43);
if (x_44 == 0)
{
uint8_t x_45; 
lean_dec(x_2);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_42);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_46 = lean_ctor_get(x_42, 1);
x_47 = lean_ctor_get(x_42, 0);
lean_dec(x_47);
x_48 = l_Lean_MessageData_ofName(x_36);
x_49 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
lean_ctor_set_tag(x_42, 7);
lean_ctor_set(x_42, 1, x_48);
lean_ctor_set(x_42, 0, x_49);
x_50 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_ctor_set_tag(x_38, 7);
lean_ctor_set(x_38, 1, x_50);
lean_ctor_set(x_38, 0, x_42);
x_51 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_46);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
return x_51;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_51, 0);
x_54 = lean_ctor_get(x_51, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_51);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_56 = lean_ctor_get(x_42, 1);
lean_inc(x_56);
lean_dec(x_42);
x_57 = l_Lean_MessageData_ofName(x_36);
x_58 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
x_59 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
x_60 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_ctor_set_tag(x_38, 7);
lean_ctor_set(x_38, 1, x_60);
lean_ctor_set(x_38, 0, x_59);
x_61 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_56);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_64 = x_61;
} else {
 lean_dec_ref(x_61);
 x_64 = lean_box(0);
}
if (lean_is_scalar(x_64)) {
 x_65 = lean_alloc_ctor(1, 2, 0);
} else {
 x_65 = x_64;
}
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_free_object(x_38);
lean_dec(x_36);
x_66 = lean_ctor_get(x_42, 1);
lean_inc(x_66);
lean_dec(x_42);
x_67 = lean_box(0);
x_68 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_67, x_3, x_4, x_5, x_6, x_7, x_8, x_66);
return x_68;
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_69 = lean_ctor_get(x_38, 1);
lean_inc(x_69);
lean_dec(x_38);
x_70 = l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1(x_36, x_3, x_4, x_5, x_6, x_7, x_8, x_69);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_unbox(x_71);
lean_dec(x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_2);
lean_dec(x_1);
x_73 = lean_ctor_get(x_70, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_74 = x_70;
} else {
 lean_dec_ref(x_70);
 x_74 = lean_box(0);
}
x_75 = l_Lean_MessageData_ofName(x_36);
x_76 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
if (lean_is_scalar(x_74)) {
 x_77 = lean_alloc_ctor(7, 2, 0);
} else {
 x_77 = x_74;
 lean_ctor_set_tag(x_77, 7);
}
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_75);
x_78 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
x_79 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
x_80 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_79, x_3, x_4, x_5, x_6, x_7, x_8, x_73);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_83 = x_80;
} else {
 lean_dec_ref(x_80);
 x_83 = lean_box(0);
}
if (lean_is_scalar(x_83)) {
 x_84 = lean_alloc_ctor(1, 2, 0);
} else {
 x_84 = x_83;
}
lean_ctor_set(x_84, 0, x_81);
lean_ctor_set(x_84, 1, x_82);
return x_84;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_36);
x_85 = lean_ctor_get(x_70, 1);
lean_inc(x_85);
lean_dec(x_70);
x_86 = lean_box(0);
x_87 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_86, x_3, x_4, x_5, x_6, x_7, x_8, x_85);
return x_87;
}
}
}
}
}
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; uint8_t x_91; 
x_88 = lean_unsigned_to_nat(1u);
x_89 = l_Lean_Syntax_getArg(x_14, x_88);
lean_dec(x_14);
x_90 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
lean_inc(x_89);
x_91 = l_Lean_Syntax_isOfKind(x_89, x_90);
if (x_91 == 0)
{
lean_object* x_92; 
lean_dec(x_89);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_92 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_92;
}
else
{
lean_object* x_93; uint8_t x_94; 
x_93 = l_Lean_Syntax_getArg(x_1, x_88);
lean_inc(x_93);
x_94 = l_Lean_Syntax_isOfKind(x_93, x_19);
if (x_94 == 0)
{
lean_object* x_95; 
lean_dec(x_93);
lean_dec(x_89);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_95 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_95;
}
else
{
lean_object* x_96; uint8_t x_97; 
x_96 = l_Lean_Syntax_getArg(x_93, x_88);
lean_dec(x_93);
x_97 = l_Lean_Syntax_isOfKind(x_96, x_90);
if (x_97 == 0)
{
lean_object* x_98; 
lean_dec(x_89);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_98 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_98;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; uint8_t x_102; 
x_99 = l_Lean_Syntax_getId(x_89);
lean_inc(x_99);
x_100 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_100, 0, x_89);
lean_ctor_set(x_100, 1, x_99);
x_101 = l_Lean_Elab_addCompletionInfo___at_Lean_Elab_Term_addDotCompletionInfo___spec__1(x_100, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_102 = !lean_is_exclusive(x_101);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_103 = lean_ctor_get(x_101, 1);
x_104 = lean_ctor_get(x_101, 0);
lean_dec(x_104);
x_105 = l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1(x_99, x_3, x_4, x_5, x_6, x_7, x_8, x_103);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_unbox(x_106);
lean_dec(x_106);
if (x_107 == 0)
{
uint8_t x_108; 
lean_dec(x_2);
lean_dec(x_1);
x_108 = !lean_is_exclusive(x_105);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_109 = lean_ctor_get(x_105, 1);
x_110 = lean_ctor_get(x_105, 0);
lean_dec(x_110);
x_111 = l_Lean_MessageData_ofName(x_99);
x_112 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
lean_ctor_set_tag(x_105, 7);
lean_ctor_set(x_105, 1, x_111);
lean_ctor_set(x_105, 0, x_112);
x_113 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_ctor_set_tag(x_101, 7);
lean_ctor_set(x_101, 1, x_113);
lean_ctor_set(x_101, 0, x_105);
x_114 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_101, x_3, x_4, x_5, x_6, x_7, x_8, x_109);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_115 = !lean_is_exclusive(x_114);
if (x_115 == 0)
{
return x_114;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_114, 0);
x_117 = lean_ctor_get(x_114, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_114);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_119 = lean_ctor_get(x_105, 1);
lean_inc(x_119);
lean_dec(x_105);
x_120 = l_Lean_MessageData_ofName(x_99);
x_121 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
x_122 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_120);
x_123 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_ctor_set_tag(x_101, 7);
lean_ctor_set(x_101, 1, x_123);
lean_ctor_set(x_101, 0, x_122);
x_124 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_101, x_3, x_4, x_5, x_6, x_7, x_8, x_119);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_127 = x_124;
} else {
 lean_dec_ref(x_124);
 x_127 = lean_box(0);
}
if (lean_is_scalar(x_127)) {
 x_128 = lean_alloc_ctor(1, 2, 0);
} else {
 x_128 = x_127;
}
lean_ctor_set(x_128, 0, x_125);
lean_ctor_set(x_128, 1, x_126);
return x_128;
}
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_free_object(x_101);
lean_dec(x_99);
x_129 = lean_ctor_get(x_105, 1);
lean_inc(x_129);
lean_dec(x_105);
x_130 = lean_box(0);
x_131 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_130, x_3, x_4, x_5, x_6, x_7, x_8, x_129);
return x_131;
}
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; uint8_t x_135; 
x_132 = lean_ctor_get(x_101, 1);
lean_inc(x_132);
lean_dec(x_101);
x_133 = l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1(x_99, x_3, x_4, x_5, x_6, x_7, x_8, x_132);
x_134 = lean_ctor_get(x_133, 0);
lean_inc(x_134);
x_135 = lean_unbox(x_134);
lean_dec(x_134);
if (x_135 == 0)
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
lean_dec(x_2);
lean_dec(x_1);
x_136 = lean_ctor_get(x_133, 1);
lean_inc(x_136);
if (lean_is_exclusive(x_133)) {
 lean_ctor_release(x_133, 0);
 lean_ctor_release(x_133, 1);
 x_137 = x_133;
} else {
 lean_dec_ref(x_133);
 x_137 = lean_box(0);
}
x_138 = l_Lean_MessageData_ofName(x_99);
x_139 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
if (lean_is_scalar(x_137)) {
 x_140 = lean_alloc_ctor(7, 2, 0);
} else {
 x_140 = x_137;
 lean_ctor_set_tag(x_140, 7);
}
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_138);
x_141 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
x_142 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_142, 0, x_140);
lean_ctor_set(x_142, 1, x_141);
x_143 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_142, x_3, x_4, x_5, x_6, x_7, x_8, x_136);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_143, 1);
lean_inc(x_145);
if (lean_is_exclusive(x_143)) {
 lean_ctor_release(x_143, 0);
 lean_ctor_release(x_143, 1);
 x_146 = x_143;
} else {
 lean_dec_ref(x_143);
 x_146 = lean_box(0);
}
if (lean_is_scalar(x_146)) {
 x_147 = lean_alloc_ctor(1, 2, 0);
} else {
 x_147 = x_146;
}
lean_ctor_set(x_147, 0, x_144);
lean_ctor_set(x_147, 1, x_145);
return x_147;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_99);
x_148 = lean_ctor_get(x_133, 1);
lean_inc(x_148);
lean_dec(x_133);
x_149 = lean_box(0);
x_150 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_149, x_3, x_4, x_5, x_6, x_7, x_8, x_148);
return x_150;
}
}
}
}
}
}
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; uint8_t x_154; 
x_151 = lean_unsigned_to_nat(2u);
x_152 = l_Lean_Syntax_getArg(x_14, x_151);
lean_dec(x_14);
x_153 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
lean_inc(x_152);
x_154 = l_Lean_Syntax_isOfKind(x_152, x_153);
if (x_154 == 0)
{
lean_object* x_155; 
lean_dec(x_152);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_155 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_155;
}
else
{
lean_object* x_156; lean_object* x_157; uint8_t x_158; 
x_156 = lean_unsigned_to_nat(1u);
x_157 = l_Lean_Syntax_getArg(x_1, x_156);
lean_inc(x_157);
x_158 = l_Lean_Syntax_isOfKind(x_157, x_17);
if (x_158 == 0)
{
lean_object* x_159; 
lean_dec(x_157);
lean_dec(x_152);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_159 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_159;
}
else
{
lean_object* x_160; uint8_t x_161; 
x_160 = l_Lean_Syntax_getArg(x_157, x_151);
lean_dec(x_157);
x_161 = l_Lean_Syntax_isOfKind(x_160, x_153);
if (x_161 == 0)
{
lean_object* x_162; 
lean_dec(x_152);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_162 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_162;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; uint8_t x_166; 
x_163 = l_Lean_Syntax_getId(x_152);
lean_inc(x_163);
x_164 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_164, 0, x_152);
lean_ctor_set(x_164, 1, x_163);
x_165 = l_Lean_Elab_addCompletionInfo___at_Lean_Elab_Term_addDotCompletionInfo___spec__1(x_164, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_166 = !lean_is_exclusive(x_165);
if (x_166 == 0)
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; uint8_t x_171; 
x_167 = lean_ctor_get(x_165, 1);
x_168 = lean_ctor_get(x_165, 0);
lean_dec(x_168);
x_169 = l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1(x_163, x_3, x_4, x_5, x_6, x_7, x_8, x_167);
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
x_171 = lean_unbox(x_170);
lean_dec(x_170);
if (x_171 == 0)
{
uint8_t x_172; 
lean_dec(x_2);
lean_dec(x_1);
x_172 = !lean_is_exclusive(x_169);
if (x_172 == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; uint8_t x_179; 
x_173 = lean_ctor_get(x_169, 1);
x_174 = lean_ctor_get(x_169, 0);
lean_dec(x_174);
x_175 = l_Lean_MessageData_ofName(x_163);
x_176 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
lean_ctor_set_tag(x_169, 7);
lean_ctor_set(x_169, 1, x_175);
lean_ctor_set(x_169, 0, x_176);
x_177 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_ctor_set_tag(x_165, 7);
lean_ctor_set(x_165, 1, x_177);
lean_ctor_set(x_165, 0, x_169);
x_178 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_165, x_3, x_4, x_5, x_6, x_7, x_8, x_173);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_179 = !lean_is_exclusive(x_178);
if (x_179 == 0)
{
return x_178;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_178, 0);
x_181 = lean_ctor_get(x_178, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_178);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_181);
return x_182;
}
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_183 = lean_ctor_get(x_169, 1);
lean_inc(x_183);
lean_dec(x_169);
x_184 = l_Lean_MessageData_ofName(x_163);
x_185 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
x_186 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_184);
x_187 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_ctor_set_tag(x_165, 7);
lean_ctor_set(x_165, 1, x_187);
lean_ctor_set(x_165, 0, x_186);
x_188 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_165, x_3, x_4, x_5, x_6, x_7, x_8, x_183);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_188, 1);
lean_inc(x_190);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_191 = x_188;
} else {
 lean_dec_ref(x_188);
 x_191 = lean_box(0);
}
if (lean_is_scalar(x_191)) {
 x_192 = lean_alloc_ctor(1, 2, 0);
} else {
 x_192 = x_191;
}
lean_ctor_set(x_192, 0, x_189);
lean_ctor_set(x_192, 1, x_190);
return x_192;
}
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; 
lean_free_object(x_165);
lean_dec(x_163);
x_193 = lean_ctor_get(x_169, 1);
lean_inc(x_193);
lean_dec(x_169);
x_194 = lean_box(0);
x_195 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_194, x_3, x_4, x_5, x_6, x_7, x_8, x_193);
return x_195;
}
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; uint8_t x_199; 
x_196 = lean_ctor_get(x_165, 1);
lean_inc(x_196);
lean_dec(x_165);
x_197 = l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1(x_163, x_3, x_4, x_5, x_6, x_7, x_8, x_196);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_unbox(x_198);
lean_dec(x_198);
if (x_199 == 0)
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; 
lean_dec(x_2);
lean_dec(x_1);
x_200 = lean_ctor_get(x_197, 1);
lean_inc(x_200);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 lean_ctor_release(x_197, 1);
 x_201 = x_197;
} else {
 lean_dec_ref(x_197);
 x_201 = lean_box(0);
}
x_202 = l_Lean_MessageData_ofName(x_163);
x_203 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
if (lean_is_scalar(x_201)) {
 x_204 = lean_alloc_ctor(7, 2, 0);
} else {
 x_204 = x_201;
 lean_ctor_set_tag(x_204, 7);
}
lean_ctor_set(x_204, 0, x_203);
lean_ctor_set(x_204, 1, x_202);
x_205 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
x_206 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_206, 0, x_204);
lean_ctor_set(x_206, 1, x_205);
x_207 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_206, x_3, x_4, x_5, x_6, x_7, x_8, x_200);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_208 = lean_ctor_get(x_207, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_207, 1);
lean_inc(x_209);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 x_210 = x_207;
} else {
 lean_dec_ref(x_207);
 x_210 = lean_box(0);
}
if (lean_is_scalar(x_210)) {
 x_211 = lean_alloc_ctor(1, 2, 0);
} else {
 x_211 = x_210;
}
lean_ctor_set(x_211, 0, x_208);
lean_ctor_set(x_211, 1, x_209);
return x_211;
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; 
lean_dec(x_163);
x_212 = lean_ctor_get(x_197, 1);
lean_inc(x_212);
lean_dec(x_197);
x_213 = lean_box(0);
x_214 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_213, x_3, x_4, x_5, x_6, x_7, x_8, x_212);
return x_214;
}
}
}
}
}
}
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; 
x_215 = lean_unsigned_to_nat(1u);
x_216 = l_Lean_Syntax_getArg(x_14, x_215);
lean_dec(x_14);
x_217 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
lean_inc(x_216);
x_218 = l_Lean_Syntax_isOfKind(x_216, x_217);
if (x_218 == 0)
{
lean_object* x_219; 
lean_dec(x_216);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_219 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_219;
}
else
{
lean_object* x_220; uint8_t x_221; 
x_220 = l_Lean_Syntax_getArg(x_1, x_215);
lean_inc(x_220);
x_221 = l_Lean_Syntax_isOfKind(x_220, x_15);
if (x_221 == 0)
{
lean_object* x_222; 
lean_dec(x_220);
lean_dec(x_216);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_222 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_222;
}
else
{
lean_object* x_223; uint8_t x_224; 
x_223 = l_Lean_Syntax_getArg(x_220, x_215);
lean_dec(x_220);
x_224 = l_Lean_Syntax_isOfKind(x_223, x_217);
if (x_224 == 0)
{
lean_object* x_225; 
lean_dec(x_216);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_225 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_225;
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; uint8_t x_229; 
x_226 = l_Lean_Syntax_getId(x_216);
lean_inc(x_226);
x_227 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_227, 0, x_216);
lean_ctor_set(x_227, 1, x_226);
x_228 = l_Lean_Elab_addCompletionInfo___at_Lean_Elab_Term_addDotCompletionInfo___spec__1(x_227, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_229 = !lean_is_exclusive(x_228);
if (x_229 == 0)
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; uint8_t x_234; 
x_230 = lean_ctor_get(x_228, 1);
x_231 = lean_ctor_get(x_228, 0);
lean_dec(x_231);
x_232 = l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1(x_226, x_3, x_4, x_5, x_6, x_7, x_8, x_230);
x_233 = lean_ctor_get(x_232, 0);
lean_inc(x_233);
x_234 = lean_unbox(x_233);
lean_dec(x_233);
if (x_234 == 0)
{
uint8_t x_235; 
lean_dec(x_2);
lean_dec(x_1);
x_235 = !lean_is_exclusive(x_232);
if (x_235 == 0)
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; uint8_t x_242; 
x_236 = lean_ctor_get(x_232, 1);
x_237 = lean_ctor_get(x_232, 0);
lean_dec(x_237);
x_238 = l_Lean_MessageData_ofName(x_226);
x_239 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
lean_ctor_set_tag(x_232, 7);
lean_ctor_set(x_232, 1, x_238);
lean_ctor_set(x_232, 0, x_239);
x_240 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_ctor_set_tag(x_228, 7);
lean_ctor_set(x_228, 1, x_240);
lean_ctor_set(x_228, 0, x_232);
x_241 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_228, x_3, x_4, x_5, x_6, x_7, x_8, x_236);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_242 = !lean_is_exclusive(x_241);
if (x_242 == 0)
{
return x_241;
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_243 = lean_ctor_get(x_241, 0);
x_244 = lean_ctor_get(x_241, 1);
lean_inc(x_244);
lean_inc(x_243);
lean_dec(x_241);
x_245 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_245, 0, x_243);
lean_ctor_set(x_245, 1, x_244);
return x_245;
}
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_246 = lean_ctor_get(x_232, 1);
lean_inc(x_246);
lean_dec(x_232);
x_247 = l_Lean_MessageData_ofName(x_226);
x_248 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
x_249 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_247);
x_250 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_ctor_set_tag(x_228, 7);
lean_ctor_set(x_228, 1, x_250);
lean_ctor_set(x_228, 0, x_249);
x_251 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_228, x_3, x_4, x_5, x_6, x_7, x_8, x_246);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_252 = lean_ctor_get(x_251, 0);
lean_inc(x_252);
x_253 = lean_ctor_get(x_251, 1);
lean_inc(x_253);
if (lean_is_exclusive(x_251)) {
 lean_ctor_release(x_251, 0);
 lean_ctor_release(x_251, 1);
 x_254 = x_251;
} else {
 lean_dec_ref(x_251);
 x_254 = lean_box(0);
}
if (lean_is_scalar(x_254)) {
 x_255 = lean_alloc_ctor(1, 2, 0);
} else {
 x_255 = x_254;
}
lean_ctor_set(x_255, 0, x_252);
lean_ctor_set(x_255, 1, x_253);
return x_255;
}
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; 
lean_free_object(x_228);
lean_dec(x_226);
x_256 = lean_ctor_get(x_232, 1);
lean_inc(x_256);
lean_dec(x_232);
x_257 = lean_box(0);
x_258 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_257, x_3, x_4, x_5, x_6, x_7, x_8, x_256);
return x_258;
}
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; uint8_t x_262; 
x_259 = lean_ctor_get(x_228, 1);
lean_inc(x_259);
lean_dec(x_228);
x_260 = l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1(x_226, x_3, x_4, x_5, x_6, x_7, x_8, x_259);
x_261 = lean_ctor_get(x_260, 0);
lean_inc(x_261);
x_262 = lean_unbox(x_261);
lean_dec(x_261);
if (x_262 == 0)
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
lean_dec(x_2);
lean_dec(x_1);
x_263 = lean_ctor_get(x_260, 1);
lean_inc(x_263);
if (lean_is_exclusive(x_260)) {
 lean_ctor_release(x_260, 0);
 lean_ctor_release(x_260, 1);
 x_264 = x_260;
} else {
 lean_dec_ref(x_260);
 x_264 = lean_box(0);
}
x_265 = l_Lean_MessageData_ofName(x_226);
x_266 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
if (lean_is_scalar(x_264)) {
 x_267 = lean_alloc_ctor(7, 2, 0);
} else {
 x_267 = x_264;
 lean_ctor_set_tag(x_267, 7);
}
lean_ctor_set(x_267, 0, x_266);
lean_ctor_set(x_267, 1, x_265);
x_268 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
x_269 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_269, 0, x_267);
lean_ctor_set(x_269, 1, x_268);
x_270 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_269, x_3, x_4, x_5, x_6, x_7, x_8, x_263);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_271 = lean_ctor_get(x_270, 0);
lean_inc(x_271);
x_272 = lean_ctor_get(x_270, 1);
lean_inc(x_272);
if (lean_is_exclusive(x_270)) {
 lean_ctor_release(x_270, 0);
 lean_ctor_release(x_270, 1);
 x_273 = x_270;
} else {
 lean_dec_ref(x_270);
 x_273 = lean_box(0);
}
if (lean_is_scalar(x_273)) {
 x_274 = lean_alloc_ctor(1, 2, 0);
} else {
 x_274 = x_273;
}
lean_ctor_set(x_274, 0, x_271);
lean_ctor_set(x_274, 1, x_272);
return x_274;
}
else
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; 
lean_dec(x_226);
x_275 = lean_ctor_get(x_260, 1);
lean_inc(x_275);
lean_dec(x_260);
x_276 = lean_box(0);
x_277 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_276, x_3, x_4, x_5, x_6, x_7, x_8, x_275);
return x_277;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = 1;
x_12 = l_Lean_Meta_evalExpr___rarg(x_1, x_2, x_11, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; 
lean_inc(x_2);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_2);
x_11 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_12 = l_Lean_Elab_Term_elabTerm(x_1, x_10, x_11, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Expr_hasSyntheticSorry(x_13);
if (x_15 == 0)
{
uint8_t x_16; lean_object* x_17; 
x_16 = 1;
x_17 = l_Lean_Meta_evalExpr___rarg(x_2, x_13, x_16, x_5, x_6, x_7, x_8, x_14);
return x_17;
}
else
{
lean_object* x_18; uint8_t x_19; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_18 = l_Lean_Elab_throwAbortTerm___at_Lean_Elab_Term_ensureType___spec__1___rarg(x_14);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
return x_18;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_18);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_12);
if (x_23 == 0)
{
return x_12;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_12, 0);
x_25 = lean_ctor_get(x_12, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_12);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, size_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_lt(x_7, x_6);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_8);
x_14 = lean_array_uget(x_5, x_7);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
lean_dec(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = l_Lean_MessageData_ofFormat(x_17);
x_19 = 2;
x_20 = 0;
lean_inc(x_9);
x_21 = l_Lean_log___at_Lean_Elab_Command_withLoggingExceptions___spec__4(x_18, x_19, x_20, x_9, x_10, x_11);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = 1;
x_24 = lean_usize_add(x_7, x_23);
x_25 = lean_box(0);
x_7 = x_24;
x_8 = x_25;
x_11 = x_22;
goto _start;
}
else
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_ctor_get(x_14, 1);
lean_inc(x_27);
lean_dec(x_14);
x_28 = !lean_is_exclusive(x_15);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; size_t x_42; size_t x_43; lean_object* x_44; 
x_29 = lean_ctor_get(x_15, 0);
x_30 = lean_ctor_get(x_15, 1);
x_31 = lean_ctor_get(x_2, 0);
x_32 = lean_nat_add(x_31, x_29);
x_33 = lean_nat_add(x_31, x_30);
x_34 = 0;
x_35 = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_33);
lean_ctor_set_uint8(x_35, sizeof(void*)*2, x_34);
x_36 = lean_string_utf8_extract(x_1, x_29, x_30);
lean_dec(x_30);
lean_dec(x_29);
lean_ctor_set_tag(x_15, 2);
lean_ctor_set(x_15, 1, x_36);
lean_ctor_set(x_15, 0, x_35);
x_37 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_37, 0, x_27);
x_38 = l_Lean_MessageData_ofFormat(x_37);
x_39 = 2;
lean_inc(x_9);
x_40 = l_Lean_logAt___at_Lean_Elab_Command_withLoggingExceptions___spec__3(x_15, x_38, x_39, x_34, x_9, x_10, x_11);
lean_dec(x_15);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = 1;
x_43 = lean_usize_add(x_7, x_42);
x_44 = lean_box(0);
x_7 = x_43;
x_8 = x_44;
x_11 = x_41;
goto _start;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; lean_object* x_58; lean_object* x_59; size_t x_60; size_t x_61; lean_object* x_62; 
x_46 = lean_ctor_get(x_15, 0);
x_47 = lean_ctor_get(x_15, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_15);
x_48 = lean_ctor_get(x_2, 0);
x_49 = lean_nat_add(x_48, x_46);
x_50 = lean_nat_add(x_48, x_47);
x_51 = 0;
x_52 = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_50);
lean_ctor_set_uint8(x_52, sizeof(void*)*2, x_51);
x_53 = lean_string_utf8_extract(x_1, x_46, x_47);
lean_dec(x_47);
lean_dec(x_46);
x_54 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_55, 0, x_27);
x_56 = l_Lean_MessageData_ofFormat(x_55);
x_57 = 2;
lean_inc(x_9);
x_58 = l_Lean_logAt___at_Lean_Elab_Command_withLoggingExceptions___spec__3(x_54, x_56, x_57, x_51, x_9, x_10, x_11);
lean_dec(x_54);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_60 = 1;
x_61 = lean_usize_add(x_7, x_60);
x_62 = lean_box(0);
x_7 = x_61;
x_8 = x_62;
x_11 = x_59;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_5 = l_Lean_TSyntax_getDocString(x_1);
x_21 = lean_unsigned_to_nat(1u);
x_22 = l_Lean_Syntax_getArg(x_1, x_21);
x_23 = l_Lean_Syntax_getHeadInfo_x3f(x_22);
lean_dec(x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; 
x_24 = lean_box(0);
x_6 = x_24;
goto block_20;
}
else
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = 0;
x_27 = l_Lean_SourceInfo_getPos_x3f(x_25, x_26);
lean_dec(x_25);
x_6 = x_27;
goto block_20;
}
block_20:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
lean_inc(x_5);
x_7 = l_Lean_rewriteManualLinksCore(x_5, x_4);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_box(0);
x_12 = lean_array_size(x_10);
x_13 = 0;
x_14 = lean_box(0);
x_15 = l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__2(x_5, x_6, x_10, x_11, x_10, x_12, x_13, x_14, x_2, x_3, x_9);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_dec(x_17);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_5 = l_Lean_Elab_Command_getRef(x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_2, 4);
lean_inc(x_8);
lean_inc(x_8);
x_9 = l_Lean_Elab_getBetterRef(x_6, x_8);
lean_dec(x_6);
x_10 = l_Lean_addMessageContextPartial___at_Lean_Elab_Command_instAddMessageContextCommandElabM___spec__1(x_1, x_2, x_3, x_7);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(x_12, x_8, x_2, x_3, x_13);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_14, 0);
lean_ctor_set(x_10, 1, x_16);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 0, x_10);
return x_14;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_14, 0);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_14);
lean_ctor_set(x_10, 1, x_17);
lean_ctor_set(x_10, 0, x_9);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_10);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_20 = lean_ctor_get(x_10, 0);
x_21 = lean_ctor_get(x_10, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_10);
x_22 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(x_20, x_8, x_2, x_3, x_21);
lean_dec(x_2);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_25 = x_22;
} else {
 lean_dec_ref(x_22);
 x_25 = lean_box(0);
}
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_9);
lean_ctor_set(x_26, 1, x_23);
if (lean_is_scalar(x_25)) {
 x_27 = lean_alloc_ctor(1, 2, 0);
} else {
 x_27 = x_25;
 lean_ctor_set_tag(x_27, 1);
}
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_Elab_Command_getRef(x_3, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_replaceRef(x_1, x_7);
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 6);
lean_dec(x_11);
lean_ctor_set(x_3, 6, x_9);
x_12 = l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__5(x_2, x_3, x_4, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_ctor_get(x_3, 2);
x_16 = lean_ctor_get(x_3, 3);
x_17 = lean_ctor_get(x_3, 4);
x_18 = lean_ctor_get(x_3, 5);
x_19 = lean_ctor_get(x_3, 7);
x_20 = lean_ctor_get(x_3, 8);
x_21 = lean_ctor_get_uint8(x_3, sizeof(void*)*9);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_22 = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(x_22, 0, x_13);
lean_ctor_set(x_22, 1, x_14);
lean_ctor_set(x_22, 2, x_15);
lean_ctor_set(x_22, 3, x_16);
lean_ctor_set(x_22, 4, x_17);
lean_ctor_set(x_22, 5, x_18);
lean_ctor_set(x_22, 6, x_9);
lean_ctor_set(x_22, 7, x_19);
lean_ctor_set(x_22, 8, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*9, x_21);
x_23 = l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__5(x_2, x_22, x_4, x_8);
return x_23;
}
}
}
static lean_object* _init_l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unexpected doc string", 21, 21);
return x_1;
}
}
static lean_object* _init_l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
if (lean_obj_tag(x_6) == 2)
{
uint8_t x_7; 
lean_dec(x_2);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_6, 1);
x_9 = lean_ctor_get(x_6, 0);
lean_dec(x_9);
x_10 = lean_string_utf8_byte_size(x_8);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_sub(x_10, x_11);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_string_utf8_extract(x_8, x_13, x_12);
lean_dec(x_12);
lean_dec(x_8);
lean_ctor_set_tag(x_6, 0);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 0, x_14);
return x_6;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_dec(x_6);
x_16 = lean_string_utf8_byte_size(x_15);
x_17 = lean_unsigned_to_nat(2u);
x_18 = lean_nat_sub(x_16, x_17);
lean_dec(x_16);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_string_utf8_extract(x_15, x_19, x_18);
lean_dec(x_18);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_4);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_22 = l_Lean_MessageData_ofSyntax(x_6);
x_23 = l_Lean_indentD(x_22);
x_24 = l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__2;
x_25 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__4;
x_27 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__4(x_1, x_27, x_2, x_3, x_4);
return x_28;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_5 = l_Lean_Elab_Command_getRef(x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_2, 4);
lean_inc(x_8);
lean_inc(x_8);
x_9 = l_Lean_Elab_getBetterRef(x_6, x_8);
lean_dec(x_6);
x_10 = l_Lean_addMessageContextPartial___at_Lean_Elab_Command_instAddMessageContextCommandElabM___spec__1(x_1, x_2, x_3, x_7);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(x_12, x_8, x_2, x_3, x_13);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_14, 0);
lean_ctor_set(x_10, 1, x_16);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 0, x_10);
return x_14;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_14, 0);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_14);
lean_ctor_set(x_10, 1, x_17);
lean_ctor_set(x_10, 0, x_9);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_10);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_20 = lean_ctor_get(x_10, 0);
x_21 = lean_ctor_get(x_10, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_10);
x_22 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(x_20, x_8, x_2, x_3, x_21);
lean_dec(x_2);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_25 = x_22;
} else {
 lean_dec_ref(x_22);
 x_25 = lean_box(0);
}
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_9);
lean_ctor_set(x_26, 1, x_23);
if (lean_is_scalar(x_25)) {
 x_27 = lean_alloc_ctor(1, 2, 0);
} else {
 x_27 = x_25;
 lean_ctor_set_tag(x_27, 1);
}
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_Elab_Command_getRef(x_3, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_replaceRef(x_1, x_7);
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 6);
lean_dec(x_11);
lean_ctor_set(x_3, 6, x_9);
x_12 = l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__6(x_2, x_3, x_4, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_ctor_get(x_3, 2);
x_16 = lean_ctor_get(x_3, 3);
x_17 = lean_ctor_get(x_3, 4);
x_18 = lean_ctor_get(x_3, 5);
x_19 = lean_ctor_get(x_3, 7);
x_20 = lean_ctor_get(x_3, 8);
x_21 = lean_ctor_get_uint8(x_3, sizeof(void*)*9);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_22 = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(x_22, 0, x_13);
lean_ctor_set(x_22, 1, x_14);
lean_ctor_set(x_22, 2, x_15);
lean_ctor_set(x_22, 3, x_16);
lean_ctor_set(x_22, 4, x_17);
lean_ctor_set(x_22, 5, x_18);
lean_ctor_set(x_22, 6, x_9);
lean_ctor_set(x_22, 7, x_19);
lean_ctor_set(x_22, 8, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*9, x_21);
x_23 = l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__6(x_2, x_22, x_4, x_8);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_Elab_Command_getRef(x_3, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_replaceRef(x_1, x_7);
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 6);
lean_dec(x_11);
lean_ctor_set(x_3, 6, x_9);
x_12 = l_Lean_throwError___at_Lean_withSetOptionIn___spec__7(x_2, x_3, x_4, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_ctor_get(x_3, 2);
x_16 = lean_ctor_get(x_3, 3);
x_17 = lean_ctor_get(x_3, 4);
x_18 = lean_ctor_get(x_3, 5);
x_19 = lean_ctor_get(x_3, 7);
x_20 = lean_ctor_get(x_3, 8);
x_21 = lean_ctor_get_uint8(x_3, sizeof(void*)*9);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_22 = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(x_22, 0, x_13);
lean_ctor_set(x_22, 1, x_14);
lean_ctor_set(x_22, 2, x_15);
lean_ctor_set(x_22, 3, x_16);
lean_ctor_set(x_22, 4, x_17);
lean_ctor_set(x_22, 5, x_18);
lean_ctor_set(x_22, 6, x_9);
lean_ctor_set(x_22, 7, x_19);
lean_ctor_set(x_22, 8, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*9, x_21);
x_23 = l_Lean_throwError___at_Lean_withSetOptionIn___spec__7(x_2, x_22, x_4, x_8);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1(x_1, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_st_ref_take(x_6, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_12 = lean_ctor_get(x_8, 1);
x_13 = lean_ctor_get(x_10, 0);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_4);
lean_ctor_set(x_14, 2, x_2);
lean_ctor_set(x_8, 1, x_14);
lean_ctor_set(x_8, 0, x_3);
x_15 = l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1___closed__1;
x_16 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_15, x_13, x_8);
lean_ctor_set(x_10, 0, x_16);
x_17 = lean_st_ref_set(x_6, x_10, x_12);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
x_20 = lean_box(0);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_24 = lean_ctor_get(x_8, 1);
x_25 = lean_ctor_get(x_10, 0);
x_26 = lean_ctor_get(x_10, 1);
x_27 = lean_ctor_get(x_10, 2);
x_28 = lean_ctor_get(x_10, 3);
x_29 = lean_ctor_get(x_10, 4);
x_30 = lean_ctor_get(x_10, 5);
x_31 = lean_ctor_get(x_10, 6);
x_32 = lean_ctor_get(x_10, 7);
x_33 = lean_ctor_get(x_10, 8);
x_34 = lean_ctor_get(x_10, 9);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_10);
x_35 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_35, 0, x_1);
lean_ctor_set(x_35, 1, x_4);
lean_ctor_set(x_35, 2, x_2);
lean_ctor_set(x_8, 1, x_35);
lean_ctor_set(x_8, 0, x_3);
x_36 = l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1___closed__1;
x_37 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_36, x_25, x_8);
x_38 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_26);
lean_ctor_set(x_38, 2, x_27);
lean_ctor_set(x_38, 3, x_28);
lean_ctor_set(x_38, 4, x_29);
lean_ctor_set(x_38, 5, x_30);
lean_ctor_set(x_38, 6, x_31);
lean_ctor_set(x_38, 7, x_32);
lean_ctor_set(x_38, 8, x_33);
lean_ctor_set(x_38, 9, x_34);
x_39 = lean_st_ref_set(x_6, x_38, x_24);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_41 = x_39;
} else {
 lean_dec_ref(x_39);
 x_41 = lean_box(0);
}
x_42 = lean_box(0);
if (lean_is_scalar(x_41)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_41;
}
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_40);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_44 = lean_ctor_get(x_8, 0);
x_45 = lean_ctor_get(x_8, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_8);
x_46 = lean_ctor_get(x_44, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
x_48 = lean_ctor_get(x_44, 2);
lean_inc(x_48);
x_49 = lean_ctor_get(x_44, 3);
lean_inc(x_49);
x_50 = lean_ctor_get(x_44, 4);
lean_inc(x_50);
x_51 = lean_ctor_get(x_44, 5);
lean_inc(x_51);
x_52 = lean_ctor_get(x_44, 6);
lean_inc(x_52);
x_53 = lean_ctor_get(x_44, 7);
lean_inc(x_53);
x_54 = lean_ctor_get(x_44, 8);
lean_inc(x_54);
x_55 = lean_ctor_get(x_44, 9);
lean_inc(x_55);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 lean_ctor_release(x_44, 2);
 lean_ctor_release(x_44, 3);
 lean_ctor_release(x_44, 4);
 lean_ctor_release(x_44, 5);
 lean_ctor_release(x_44, 6);
 lean_ctor_release(x_44, 7);
 lean_ctor_release(x_44, 8);
 lean_ctor_release(x_44, 9);
 x_56 = x_44;
} else {
 lean_dec_ref(x_44);
 x_56 = lean_box(0);
}
x_57 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_57, 0, x_1);
lean_ctor_set(x_57, 1, x_4);
lean_ctor_set(x_57, 2, x_2);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_3);
lean_ctor_set(x_58, 1, x_57);
x_59 = l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1___closed__1;
x_60 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_59, x_46, x_58);
if (lean_is_scalar(x_56)) {
 x_61 = lean_alloc_ctor(0, 10, 0);
} else {
 x_61 = x_56;
}
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_47);
lean_ctor_set(x_61, 2, x_48);
lean_ctor_set(x_61, 3, x_49);
lean_ctor_set(x_61, 4, x_50);
lean_ctor_set(x_61, 5, x_51);
lean_ctor_set(x_61, 6, x_52);
lean_ctor_set(x_61, 7, x_53);
lean_ctor_set(x_61, 8, x_54);
lean_ctor_set(x_61, 9, x_55);
x_62 = lean_st_ref_set(x_6, x_61, x_45);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_64 = x_62;
} else {
 lean_dec_ref(x_62);
 x_64 = lean_box(0);
}
x_65 = lean_box(0);
if (lean_is_scalar(x_64)) {
 x_66 = lean_alloc_ctor(0, 2, 0);
} else {
 x_66 = x_64;
}
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_63);
return x_66;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_1);
x_9 = l_Lean_ErrorExplanation_processDoc(x_1);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = lean_unsigned_to_nat(1u);
x_16 = l_Lean_Syntax_getArg(x_4, x_15);
x_17 = 0;
x_18 = l_Lean_Syntax_getRange_x3f(x_16, x_17);
lean_dec(x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_free_object(x_11);
lean_dec(x_13);
lean_ctor_set_tag(x_9, 3);
lean_ctor_set(x_9, 0, x_14);
x_19 = l_Lean_MessageData_ofFormat(x_9);
x_20 = l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__6(x_19, x_6, x_7, x_8);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_free_object(x_9);
x_25 = !lean_is_exclusive(x_18);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_26 = lean_ctor_get(x_18, 0);
x_27 = lean_ctor_get(x_6, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
lean_dec(x_26);
lean_inc(x_27);
x_29 = l_Lean_FileMap_toPosition(x_27, x_28);
lean_dec(x_28);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_29, 1);
lean_dec(x_32);
x_33 = lean_nat_add(x_31, x_13);
lean_dec(x_13);
lean_dec(x_31);
x_34 = lean_unsigned_to_nat(0u);
lean_inc(x_33);
lean_ctor_set(x_29, 1, x_34);
lean_ctor_set(x_29, 0, x_33);
lean_inc(x_27);
x_35 = l_Lean_FileMap_ofPosition(x_27, x_29);
x_36 = lean_nat_add(x_33, x_15);
lean_dec(x_33);
lean_ctor_set(x_11, 1, x_34);
lean_ctor_set(x_11, 0, x_36);
x_37 = l_Lean_FileMap_ofPosition(x_27, x_11);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_37);
x_39 = 1;
x_40 = l_Lean_Syntax_ofRange(x_38, x_39);
lean_ctor_set_tag(x_18, 3);
lean_ctor_set(x_18, 0, x_14);
x_41 = l_Lean_MessageData_ofFormat(x_18);
x_42 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__7(x_40, x_41, x_6, x_7, x_8);
lean_dec(x_40);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
return x_42;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_42, 0);
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_42);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_47 = lean_ctor_get(x_29, 0);
lean_inc(x_47);
lean_dec(x_29);
x_48 = lean_nat_add(x_47, x_13);
lean_dec(x_13);
lean_dec(x_47);
x_49 = lean_unsigned_to_nat(0u);
lean_inc(x_48);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
lean_inc(x_27);
x_51 = l_Lean_FileMap_ofPosition(x_27, x_50);
x_52 = lean_nat_add(x_48, x_15);
lean_dec(x_48);
lean_ctor_set(x_11, 1, x_49);
lean_ctor_set(x_11, 0, x_52);
x_53 = l_Lean_FileMap_ofPosition(x_27, x_11);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_53);
x_55 = 1;
x_56 = l_Lean_Syntax_ofRange(x_54, x_55);
lean_ctor_set_tag(x_18, 3);
lean_ctor_set(x_18, 0, x_14);
x_57 = l_Lean_MessageData_ofFormat(x_18);
x_58 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__7(x_56, x_57, x_6, x_7, x_8);
lean_dec(x_56);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_61 = x_58;
} else {
 lean_dec_ref(x_58);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_63 = lean_ctor_get(x_18, 0);
lean_inc(x_63);
lean_dec(x_18);
x_64 = lean_ctor_get(x_6, 1);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 0);
lean_inc(x_65);
lean_dec(x_63);
lean_inc(x_64);
x_66 = l_Lean_FileMap_toPosition(x_64, x_65);
lean_dec(x_65);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_68 = x_66;
} else {
 lean_dec_ref(x_66);
 x_68 = lean_box(0);
}
x_69 = lean_nat_add(x_67, x_13);
lean_dec(x_13);
lean_dec(x_67);
x_70 = lean_unsigned_to_nat(0u);
lean_inc(x_69);
if (lean_is_scalar(x_68)) {
 x_71 = lean_alloc_ctor(0, 2, 0);
} else {
 x_71 = x_68;
}
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
lean_inc(x_64);
x_72 = l_Lean_FileMap_ofPosition(x_64, x_71);
x_73 = lean_nat_add(x_69, x_15);
lean_dec(x_69);
lean_ctor_set(x_11, 1, x_70);
lean_ctor_set(x_11, 0, x_73);
x_74 = l_Lean_FileMap_ofPosition(x_64, x_11);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_74);
x_76 = 1;
x_77 = l_Lean_Syntax_ofRange(x_75, x_76);
x_78 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_78, 0, x_14);
x_79 = l_Lean_MessageData_ofFormat(x_78);
x_80 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__7(x_77, x_79, x_6, x_7, x_8);
lean_dec(x_77);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_83 = x_80;
} else {
 lean_dec_ref(x_80);
 x_83 = lean_box(0);
}
if (lean_is_scalar(x_83)) {
 x_84 = lean_alloc_ctor(1, 2, 0);
} else {
 x_84 = x_83;
}
lean_ctor_set(x_84, 0, x_81);
lean_ctor_set(x_84, 1, x_82);
return x_84;
}
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; lean_object* x_90; 
x_85 = lean_ctor_get(x_11, 0);
x_86 = lean_ctor_get(x_11, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_11);
x_87 = lean_unsigned_to_nat(1u);
x_88 = l_Lean_Syntax_getArg(x_4, x_87);
x_89 = 0;
x_90 = l_Lean_Syntax_getRange_x3f(x_88, x_89);
lean_dec(x_88);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_85);
lean_ctor_set_tag(x_9, 3);
lean_ctor_set(x_9, 0, x_86);
x_91 = l_Lean_MessageData_ofFormat(x_9);
x_92 = l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__6(x_91, x_6, x_7, x_8);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 x_95 = x_92;
} else {
 lean_dec_ref(x_92);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(1, 2, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_93);
lean_ctor_set(x_96, 1, x_94);
return x_96;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
lean_free_object(x_9);
x_97 = lean_ctor_get(x_90, 0);
lean_inc(x_97);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 x_98 = x_90;
} else {
 lean_dec_ref(x_90);
 x_98 = lean_box(0);
}
x_99 = lean_ctor_get(x_6, 1);
lean_inc(x_99);
x_100 = lean_ctor_get(x_97, 0);
lean_inc(x_100);
lean_dec(x_97);
lean_inc(x_99);
x_101 = l_Lean_FileMap_toPosition(x_99, x_100);
lean_dec(x_100);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 x_103 = x_101;
} else {
 lean_dec_ref(x_101);
 x_103 = lean_box(0);
}
x_104 = lean_nat_add(x_102, x_85);
lean_dec(x_85);
lean_dec(x_102);
x_105 = lean_unsigned_to_nat(0u);
lean_inc(x_104);
if (lean_is_scalar(x_103)) {
 x_106 = lean_alloc_ctor(0, 2, 0);
} else {
 x_106 = x_103;
}
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
lean_inc(x_99);
x_107 = l_Lean_FileMap_ofPosition(x_99, x_106);
x_108 = lean_nat_add(x_104, x_87);
lean_dec(x_104);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_105);
x_110 = l_Lean_FileMap_ofPosition(x_99, x_109);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_107);
lean_ctor_set(x_111, 1, x_110);
x_112 = 1;
x_113 = l_Lean_Syntax_ofRange(x_111, x_112);
if (lean_is_scalar(x_98)) {
 x_114 = lean_alloc_ctor(3, 1, 0);
} else {
 x_114 = x_98;
 lean_ctor_set_tag(x_114, 3);
}
lean_ctor_set(x_114, 0, x_86);
x_115 = l_Lean_MessageData_ofFormat(x_114);
x_116 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__7(x_113, x_115, x_6, x_7, x_8);
lean_dec(x_113);
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 x_119 = x_116;
} else {
 lean_dec_ref(x_116);
 x_119 = lean_box(0);
}
if (lean_is_scalar(x_119)) {
 x_120 = lean_alloc_ctor(1, 2, 0);
} else {
 x_120 = x_119;
}
lean_ctor_set(x_120, 0, x_117);
lean_ctor_set(x_120, 1, x_118);
return x_120;
}
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; lean_object* x_128; 
x_121 = lean_ctor_get(x_9, 0);
lean_inc(x_121);
lean_dec(x_9);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_124 = x_121;
} else {
 lean_dec_ref(x_121);
 x_124 = lean_box(0);
}
x_125 = lean_unsigned_to_nat(1u);
x_126 = l_Lean_Syntax_getArg(x_4, x_125);
x_127 = 0;
x_128 = l_Lean_Syntax_getRange_x3f(x_126, x_127);
lean_dec(x_126);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
lean_dec(x_124);
lean_dec(x_122);
x_129 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_129, 0, x_123);
x_130 = l_Lean_MessageData_ofFormat(x_129);
x_131 = l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__6(x_130, x_6, x_7, x_8);
x_132 = lean_ctor_get(x_131, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_131, 1);
lean_inc(x_133);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 lean_ctor_release(x_131, 1);
 x_134 = x_131;
} else {
 lean_dec_ref(x_131);
 x_134 = lean_box(0);
}
if (lean_is_scalar(x_134)) {
 x_135 = lean_alloc_ctor(1, 2, 0);
} else {
 x_135 = x_134;
}
lean_ctor_set(x_135, 0, x_132);
lean_ctor_set(x_135, 1, x_133);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; uint8_t x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_136 = lean_ctor_get(x_128, 0);
lean_inc(x_136);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 x_137 = x_128;
} else {
 lean_dec_ref(x_128);
 x_137 = lean_box(0);
}
x_138 = lean_ctor_get(x_6, 1);
lean_inc(x_138);
x_139 = lean_ctor_get(x_136, 0);
lean_inc(x_139);
lean_dec(x_136);
lean_inc(x_138);
x_140 = l_Lean_FileMap_toPosition(x_138, x_139);
lean_dec(x_139);
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 x_142 = x_140;
} else {
 lean_dec_ref(x_140);
 x_142 = lean_box(0);
}
x_143 = lean_nat_add(x_141, x_122);
lean_dec(x_122);
lean_dec(x_141);
x_144 = lean_unsigned_to_nat(0u);
lean_inc(x_143);
if (lean_is_scalar(x_142)) {
 x_145 = lean_alloc_ctor(0, 2, 0);
} else {
 x_145 = x_142;
}
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set(x_145, 1, x_144);
lean_inc(x_138);
x_146 = l_Lean_FileMap_ofPosition(x_138, x_145);
x_147 = lean_nat_add(x_143, x_125);
lean_dec(x_143);
if (lean_is_scalar(x_124)) {
 x_148 = lean_alloc_ctor(0, 2, 0);
} else {
 x_148 = x_124;
}
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_144);
x_149 = l_Lean_FileMap_ofPosition(x_138, x_148);
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_146);
lean_ctor_set(x_150, 1, x_149);
x_151 = 1;
x_152 = l_Lean_Syntax_ofRange(x_150, x_151);
if (lean_is_scalar(x_137)) {
 x_153 = lean_alloc_ctor(3, 1, 0);
} else {
 x_153 = x_137;
 lean_ctor_set_tag(x_153, 3);
}
lean_ctor_set(x_153, 0, x_123);
x_154 = l_Lean_MessageData_ofFormat(x_153);
x_155 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__7(x_152, x_154, x_6, x_7, x_8);
lean_dec(x_152);
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 lean_ctor_release(x_155, 1);
 x_158 = x_155;
} else {
 lean_dec_ref(x_155);
 x_158 = lean_box(0);
}
if (lean_is_scalar(x_158)) {
 x_159 = lean_alloc_ctor(1, 2, 0);
} else {
 x_159 = x_158;
}
lean_ctor_set(x_159, 0, x_156);
lean_ctor_set(x_159, 1, x_157);
return x_159;
}
}
}
else
{
lean_object* x_160; lean_object* x_161; 
x_160 = lean_ctor_get(x_9, 0);
lean_inc(x_160);
lean_dec(x_9);
x_161 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_2, x_3, x_160, x_6, x_7, x_8);
lean_dec(x_6);
return x_161;
}
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Cannot add explanation: An error explanation already exists for `", 65, 65);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
lean_inc(x_6);
x_9 = l_Lean_validateDocComment___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__1(x_1, x_6, x_7, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 1);
x_12 = lean_ctor_get(x_9, 0);
lean_dec(x_12);
lean_inc(x_6);
x_13 = l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3(x_1, x_6, x_7, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_st_ref_get(x_7, x_15);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_box(0);
x_22 = l_Lean_errorExplanationExt;
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get_uint8(x_23, sizeof(void*)*3);
lean_dec(x_23);
x_25 = l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1___closed__1;
x_26 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_21, x_25, x_20, x_24);
x_27 = l_Lean_NameMap_contains___rarg(x_26, x_3);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_free_object(x_16);
lean_free_object(x_9);
x_28 = lean_box(0);
x_29 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__3(x_14, x_2, x_3, x_1, x_28, x_6, x_7, x_19);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
lean_dec(x_14);
lean_dec(x_2);
x_30 = l_Lean_MessageData_ofName(x_3);
x_31 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__2;
lean_ctor_set_tag(x_16, 7);
lean_ctor_set(x_16, 1, x_30);
lean_ctor_set(x_16, 0, x_31);
x_32 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__3;
lean_ctor_set_tag(x_9, 7);
lean_ctor_set(x_9, 1, x_32);
lean_ctor_set(x_9, 0, x_16);
x_33 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__8(x_4, x_9, x_6, x_7, x_19);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
return x_33;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_33);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_38 = lean_ctor_get(x_16, 0);
x_39 = lean_ctor_get(x_16, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_16);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_box(0);
x_42 = l_Lean_errorExplanationExt;
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get_uint8(x_43, sizeof(void*)*3);
lean_dec(x_43);
x_45 = l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1___closed__1;
x_46 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_41, x_45, x_40, x_44);
x_47 = l_Lean_NameMap_contains___rarg(x_46, x_3);
lean_dec(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
lean_free_object(x_9);
x_48 = lean_box(0);
x_49 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__3(x_14, x_2, x_3, x_1, x_48, x_6, x_7, x_39);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_14);
lean_dec(x_2);
x_50 = l_Lean_MessageData_ofName(x_3);
x_51 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__2;
x_52 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
x_53 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__3;
lean_ctor_set_tag(x_9, 7);
lean_ctor_set(x_9, 1, x_53);
lean_ctor_set(x_9, 0, x_52);
x_54 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__8(x_4, x_9, x_6, x_7, x_39);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_57 = x_54;
} else {
 lean_dec_ref(x_54);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(1, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
}
else
{
uint8_t x_59; 
lean_free_object(x_9);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_59 = !lean_is_exclusive(x_13);
if (x_59 == 0)
{
return x_13;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_13, 0);
x_61 = lean_ctor_get(x_13, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_13);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_ctor_get(x_9, 1);
lean_inc(x_63);
lean_dec(x_9);
lean_inc(x_6);
x_64 = l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3(x_1, x_6, x_7, x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = lean_st_ref_get(x_7, x_66);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_70 = x_67;
} else {
 lean_dec_ref(x_67);
 x_70 = lean_box(0);
}
x_71 = lean_ctor_get(x_68, 0);
lean_inc(x_71);
lean_dec(x_68);
x_72 = lean_box(0);
x_73 = l_Lean_errorExplanationExt;
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get_uint8(x_74, sizeof(void*)*3);
lean_dec(x_74);
x_76 = l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1___closed__1;
x_77 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_72, x_76, x_71, x_75);
x_78 = l_Lean_NameMap_contains___rarg(x_77, x_3);
lean_dec(x_77);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; 
lean_dec(x_70);
x_79 = lean_box(0);
x_80 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__3(x_65, x_2, x_3, x_1, x_79, x_6, x_7, x_69);
return x_80;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_65);
lean_dec(x_2);
x_81 = l_Lean_MessageData_ofName(x_3);
x_82 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__2;
if (lean_is_scalar(x_70)) {
 x_83 = lean_alloc_ctor(7, 2, 0);
} else {
 x_83 = x_70;
 lean_ctor_set_tag(x_83, 7);
}
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
x_84 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__3;
x_85 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
x_86 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__8(x_4, x_85, x_6, x_7, x_69);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 lean_ctor_release(x_86, 1);
 x_89 = x_86;
} else {
 lean_dec_ref(x_86);
 x_89 = lean_box(0);
}
if (lean_is_scalar(x_89)) {
 x_90 = lean_alloc_ctor(1, 2, 0);
} else {
 x_90 = x_89;
}
lean_ctor_set(x_90, 0, x_87);
lean_ctor_set(x_90, 1, x_88);
return x_90;
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_91 = lean_ctor_get(x_64, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_64, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_93 = x_64;
} else {
 lean_dec_ref(x_64);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(1, 2, 0);
} else {
 x_94 = x_93;
}
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
}
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Invalid name `", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("`: Error explanation names must have two components", 51, 51);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("The first component of an error explanation name identifies the package from which the error originates, and the second identifies the error itself.", 148, 148);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__6;
x_2 = l_Lean_MessageData_note(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_Name_getNumParts(x_3);
x_10 = lean_unsigned_to_nat(2u);
x_11 = lean_nat_dec_eq(x_9, x_10);
lean_dec(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
lean_dec(x_3);
lean_dec(x_2);
lean_inc(x_4);
x_12 = l_Lean_MessageData_ofSyntax(x_4);
x_13 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__2;
x_14 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
x_15 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__4;
x_16 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__7;
x_18 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__8(x_4, x_18, x_6, x_7, x_8);
lean_dec(x_4);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_19);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_box(0);
x_25 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4(x_1, x_2, x_3, x_4, x_24, x_6, x_7, x_8);
lean_dec(x_4);
return x_25;
}
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ErrorExplanation", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Metadata", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__1;
x_3 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__2;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__3;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Invalid name for error explanation: `", 37, 37);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__4;
x_9 = lean_alloc_closure((void*)(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__1___boxed), 10, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
x_10 = l_Lean_Elab_Command_runTermElabM___rarg(x_9, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Syntax_getId(x_2);
x_14 = l_Lean_Name_isAnonymous(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5(x_3, x_11, x_13, x_2, x_15, x_5, x_6, x_12);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_13);
lean_dec(x_11);
lean_inc(x_2);
x_17 = l_Lean_MessageData_ofSyntax(x_2);
x_18 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__6;
x_19 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__3;
x_21 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__8(x_2, x_21, x_5, x_6, x_12);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
return x_22;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_5);
lean_dec(x_2);
x_27 = !lean_is_exclusive(x_10);
if (x_27 == 0)
{
return x_10;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_10, 0);
x_29 = lean_ctor_get(x_10, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_10);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Command", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("registerErrorExplanationStx", 27, 27);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__1;
x_3 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__1;
x_4 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__2;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("docComment", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__1;
x_3 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__1;
x_4 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("To use this command, add `import Lean.ErrorExplanation` to the header of this file", 82, 82);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__3;
lean_inc(x_1);
x_6 = l_Lean_Syntax_isOfKind(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Widget_elabShowPanelWidgetsCmd___spec__1___rarg(x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__5;
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_12 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Widget_elabShowPanelWidgetsCmd___spec__1___rarg(x_4);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(2u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
x_17 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
lean_inc(x_16);
x_18 = l_Lean_Syntax_isOfKind(x_16, x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_19 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Widget_elabShowPanelWidgetsCmd___spec__1___rarg(x_4);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_unsigned_to_nat(3u);
x_21 = l_Lean_Syntax_getArg(x_1, x_20);
lean_dec(x_1);
x_22 = l_Lean_Elab_Command_getRef(x_2, x_3, x_4);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_replaceRef(x_14, x_23);
lean_dec(x_23);
lean_dec(x_14);
x_26 = !lean_is_exclusive(x_2);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; uint8_t x_34; 
x_27 = lean_ctor_get(x_2, 6);
lean_dec(x_27);
lean_ctor_set(x_2, 6, x_25);
x_28 = lean_st_ref_get(x_3, x_24);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__6;
x_33 = 1;
x_34 = l_Lean_Environment_contains(x_31, x_32, x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
lean_dec(x_21);
lean_dec(x_16);
lean_dec(x_9);
x_35 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__8;
x_36 = l_Lean_throwError___at_Lean_withSetOptionIn___spec__7(x_35, x_2, x_3, x_30);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
return x_36;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_36, 0);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_36);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_box(0);
x_42 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6(x_21, x_16, x_9, x_41, x_2, x_3, x_30);
lean_dec(x_9);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; uint8_t x_59; 
x_43 = lean_ctor_get(x_2, 0);
x_44 = lean_ctor_get(x_2, 1);
x_45 = lean_ctor_get(x_2, 2);
x_46 = lean_ctor_get(x_2, 3);
x_47 = lean_ctor_get(x_2, 4);
x_48 = lean_ctor_get(x_2, 5);
x_49 = lean_ctor_get(x_2, 7);
x_50 = lean_ctor_get(x_2, 8);
x_51 = lean_ctor_get_uint8(x_2, sizeof(void*)*9);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_2);
x_52 = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(x_52, 0, x_43);
lean_ctor_set(x_52, 1, x_44);
lean_ctor_set(x_52, 2, x_45);
lean_ctor_set(x_52, 3, x_46);
lean_ctor_set(x_52, 4, x_47);
lean_ctor_set(x_52, 5, x_48);
lean_ctor_set(x_52, 6, x_25);
lean_ctor_set(x_52, 7, x_49);
lean_ctor_set(x_52, 8, x_50);
lean_ctor_set_uint8(x_52, sizeof(void*)*9, x_51);
x_53 = lean_st_ref_get(x_3, x_24);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_ctor_get(x_54, 0);
lean_inc(x_56);
lean_dec(x_54);
x_57 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__6;
x_58 = 1;
x_59 = l_Lean_Environment_contains(x_56, x_57, x_58);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_21);
lean_dec(x_16);
lean_dec(x_9);
x_60 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__8;
x_61 = l_Lean_throwError___at_Lean_withSetOptionIn___spec__7(x_60, x_52, x_3, x_55);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_64 = x_61;
} else {
 lean_dec_ref(x_61);
 x_64 = lean_box(0);
}
if (lean_is_scalar(x_64)) {
 x_65 = lean_alloc_ctor(1, 2, 0);
} else {
 x_65 = x_64;
}
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_box(0);
x_67 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6(x_21, x_16, x_9, x_66, x_52, x_3, x_55);
lean_dec(x_9);
return x_67;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_13 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_14 = l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__2(x_1, x_2, x_3, x_4, x_5, x_12, x_13, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_validateDocComment___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__5(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__6(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__7(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__8(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Elab", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("elabRegisterErrorExplanation", 28, 28);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__1;
x_3 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__1;
x_4 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__2;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Command_commandElabAttribute;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___boxed), 4, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__4;
x_3 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__3;
x_4 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__3;
x_5 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__5;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* initialize_Lean_ErrorExplanation(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Eval(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Term(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Widget_UserWidget(uint8_t builtin, lean_object*);
lean_object* initialize_Std_Internal_Parsec(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_ErrorExplanation(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_ErrorExplanation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Eval(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Widget_UserWidget(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Parsec(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1 = _init_l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1();
lean_mark_persistent(l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1);
l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__2 = _init_l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__2();
lean_mark_persistent(l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__2);
l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__3 = _init_l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__3();
lean_mark_persistent(l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__3);
if (builtin) {res = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__1 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__1();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__1);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__2 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__2();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__2);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__3 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__3();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__3);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__4 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__4();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__4);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__5 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__5();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__5);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__6 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__6();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__6);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__7 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__7();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__7);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__8 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__8();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__8);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__9 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__9();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__9);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__10 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__10();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__10);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__11 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__11();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__11);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__12 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__12();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__12);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__13 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__13();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__13);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__15 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__15();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__15);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__16 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__16();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__16);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__17 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__17();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__17);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__18 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__18();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__18);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__19 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__19();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__19);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__20 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__20();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__20);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__21 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__21();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__21);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__23 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__23();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__23);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__27 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__27();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__27);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__28 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__28();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__28);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__29 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__29();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__29);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__30 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__30();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__30);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__31 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__31();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__31);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__32 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__32();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__32);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__33 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__33();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__33);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__34 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__34();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__34);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__35 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__35();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__35);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__36 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__36();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__36);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__37 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__37();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__37);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__38 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__38();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__38);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__39 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__39();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__39);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__40 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__40();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__40);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__41 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__41();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__41);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__42 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__42();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__42);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__43 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__43();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__43);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__44 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__44();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__44);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__45 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__45();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__45);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__46 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__46();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__46);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__47 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__47();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__47);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__48 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__48();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__48);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__49 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__49();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__49);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__50 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__50();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__50);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__51 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__51();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__51);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__52 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__52();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__52);
l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__53 = _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__53();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__53);
l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1___closed__1 = _init_l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1___closed__1();
lean_mark_persistent(l_Lean_hasErrorExplanation___at_Lean_Elab_ErrorExplanation_elabCheckedNamedError___spec__1___closed__1);
l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__1 = _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__1();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__1);
l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2 = _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2);
l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__3 = _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__3();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__3);
l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4 = _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4);
l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__5 = _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__5();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__5);
l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6 = _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6);
l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__7 = _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__7();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__7);
l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8 = _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8);
l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__1 = _init_l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__1();
lean_mark_persistent(l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__1);
l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__2 = _init_l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__2();
lean_mark_persistent(l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__2);
l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__3 = _init_l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__3();
lean_mark_persistent(l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__3);
l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__4 = _init_l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__4();
lean_mark_persistent(l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__4);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__1 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__1);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__2 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__2();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__2);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__3 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__3();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___closed__3);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__1 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__1();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__1);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__2 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__2();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__2);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__3 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__3();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__3);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__4 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__4();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__4);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__5 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__5();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__5);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__6 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__6();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__6);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__7 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__7();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__7);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__1 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__1();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__1);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__2 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__2();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__2);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__3 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__3();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__3);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__4 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__4();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__4);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__5 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__5();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__5);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__6 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__6();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__6);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__1 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__1();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__1);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__2 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__2();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__2);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__3 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__3();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__3);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__4 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__4();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__4);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__5 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__5();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__5);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__6 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__6();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__6);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__7 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__7();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__7);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__8 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__8();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__8);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__1 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__1();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__1);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__2 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__2();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__2);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__3 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__3();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__3);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__4 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__4();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__4);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__5 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__5();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__5);
if (builtin) {res = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
