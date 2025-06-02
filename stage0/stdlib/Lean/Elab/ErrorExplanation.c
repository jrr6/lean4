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
lean_object* l_Lean_Elab_addCompletionInfo___at_Lean_Elab_Term_addDotCompletionInfo___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__8;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__28;
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_rewriteManualLinksCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
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
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
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
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__5;
lean_object* l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_addDotCompletionInfo___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__5;
lean_object* l_Lean_Elab_liftMacroM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwAbortTerm___at_Lean_Elab_Term_ensureType___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getDocString(lean_object*);
lean_object* l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
extern lean_object* l_Lean_errorDescriptionWidget;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__31;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__15;
lean_object* l_Lean_Syntax_setArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
static lean_object* l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__48;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__6;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__3;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__12;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__1;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__49;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__39;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__6;
lean_object* l_Lean_getErrorExplanationRaw_x3f(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__30;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__32;
lean_object* l_Lean_Syntax_getHeadInfo_x3f(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__9;
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___rarg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__2;
lean_object* l_Array_ofSubarray___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__44;
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
x_1 = lean_mk_string_unchecked("Lean.throwNamedErrorAt", 22, 22);
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
x_1 = lean_mk_string_unchecked("throwNamedErrorAt", 17, 17);
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
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__43() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__42;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__44() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.throwNamedError", 20, 20);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__45() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__44;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__46() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("throwNamedError", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__47() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__46;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__48() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__47;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__49() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__48;
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
x_20 = lean_unsigned_to_nat(0u);
x_21 = l_Lean_Syntax_matchesNull(x_19, x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_2);
lean_dec(x_1);
x_22 = lean_box(1);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_3);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_unsigned_to_nat(4u);
x_25 = l_Lean_Syntax_getArg(x_1, x_24);
lean_dec(x_1);
x_26 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__12;
lean_inc(x_25);
x_27 = l_Lean_Syntax_isOfKind(x_25, x_26);
if (x_27 == 0)
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_28 = lean_ctor_get(x_2, 5);
lean_inc(x_28);
x_29 = 0;
x_30 = l_Lean_SourceInfo_fromRef(x_28, x_29);
lean_dec(x_28);
x_31 = lean_ctor_get(x_2, 2);
lean_inc(x_31);
x_32 = lean_ctor_get(x_2, 1);
lean_inc(x_32);
lean_dec(x_2);
x_33 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__18;
x_34 = l_Lean_addMacroScope(x_32, x_33, x_31);
x_35 = lean_box(0);
x_36 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__16;
x_37 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__20;
lean_inc(x_30);
x_38 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_38, 0, x_30);
lean_ctor_set(x_38, 1, x_36);
lean_ctor_set(x_38, 2, x_34);
lean_ctor_set(x_38, 3, x_37);
x_39 = l_Lean_Syntax_getId(x_17);
lean_dec(x_17);
lean_inc(x_39);
x_40 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_35, x_39);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = l_Lean_quoteNameMk(x_39);
x_42 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_30);
x_43 = l_Lean_Syntax_node3(x_30, x_42, x_15, x_41, x_25);
x_44 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_45 = l_Lean_Syntax_node2(x_30, x_44, x_38, x_43);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_3);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_39);
x_47 = lean_ctor_get(x_40, 0);
lean_inc(x_47);
lean_dec(x_40);
x_48 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
x_49 = l_String_intercalate(x_48, x_47);
x_50 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_51 = lean_string_append(x_50, x_49);
lean_dec(x_49);
x_52 = lean_box(2);
x_53 = l_Lean_Syntax_mkNameLit(x_51, x_52);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_35);
x_55 = lean_array_mk(x_54);
x_56 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24;
x_57 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_57, 0, x_52);
lean_ctor_set(x_57, 1, x_56);
lean_ctor_set(x_57, 2, x_55);
x_58 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_30);
x_59 = l_Lean_Syntax_node3(x_30, x_58, x_15, x_57, x_25);
x_60 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_61 = l_Lean_Syntax_node2(x_30, x_60, x_38, x_59);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_3);
return x_62;
}
}
else
{
lean_object* x_63; uint8_t x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_63 = lean_ctor_get(x_2, 5);
lean_inc(x_63);
x_64 = 0;
x_65 = l_Lean_SourceInfo_fromRef(x_63, x_64);
lean_dec(x_63);
x_66 = lean_ctor_get(x_2, 2);
lean_inc(x_66);
x_67 = lean_ctor_get(x_2, 1);
lean_inc(x_67);
lean_dec(x_2);
x_68 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__18;
x_69 = l_Lean_addMacroScope(x_67, x_68, x_66);
x_70 = lean_box(0);
x_71 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__16;
x_72 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__20;
lean_inc(x_65);
x_73 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_73, 0, x_65);
lean_ctor_set(x_73, 1, x_71);
lean_ctor_set(x_73, 2, x_69);
lean_ctor_set(x_73, 3, x_72);
x_74 = l_Lean_Syntax_getId(x_17);
lean_dec(x_17);
lean_inc(x_74);
x_75 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_70, x_74);
x_76 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__29;
lean_inc(x_65);
x_77 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_77, 0, x_65);
lean_ctor_set(x_77, 1, x_76);
x_78 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__28;
lean_inc(x_65);
x_79 = l_Lean_Syntax_node2(x_65, x_78, x_77, x_25);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_80 = l_Lean_quoteNameMk(x_74);
x_81 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_65);
x_82 = l_Lean_Syntax_node3(x_65, x_81, x_15, x_80, x_79);
x_83 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_84 = l_Lean_Syntax_node2(x_65, x_83, x_73, x_82);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_3);
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_74);
x_86 = lean_ctor_get(x_75, 0);
lean_inc(x_86);
lean_dec(x_75);
x_87 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
x_88 = l_String_intercalate(x_87, x_86);
x_89 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_90 = lean_string_append(x_89, x_88);
lean_dec(x_88);
x_91 = lean_box(2);
x_92 = l_Lean_Syntax_mkNameLit(x_90, x_91);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_70);
x_94 = lean_array_mk(x_93);
x_95 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24;
x_96 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_96, 0, x_91);
lean_ctor_set(x_96, 1, x_95);
lean_ctor_set(x_96, 2, x_94);
x_97 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_65);
x_98 = l_Lean_Syntax_node3(x_65, x_97, x_15, x_96, x_79);
x_99 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_100 = l_Lean_Syntax_node2(x_65, x_99, x_73, x_98);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_3);
return x_101;
}
}
}
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_102 = lean_unsigned_to_nat(1u);
x_103 = l_Lean_Syntax_getArg(x_1, x_102);
x_104 = lean_unsigned_to_nat(2u);
x_105 = l_Lean_Syntax_getArg(x_1, x_104);
x_106 = lean_unsigned_to_nat(0u);
x_107 = l_Lean_Syntax_matchesNull(x_105, x_106);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; 
lean_dec(x_103);
lean_dec(x_2);
lean_dec(x_1);
x_108 = lean_box(1);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_3);
return x_109;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_110 = lean_unsigned_to_nat(3u);
x_111 = l_Lean_Syntax_getArg(x_1, x_110);
lean_dec(x_1);
x_112 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__12;
lean_inc(x_111);
x_113 = l_Lean_Syntax_isOfKind(x_111, x_112);
if (x_113 == 0)
{
lean_object* x_114; uint8_t x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_114 = lean_ctor_get(x_2, 5);
lean_inc(x_114);
x_115 = 0;
x_116 = l_Lean_SourceInfo_fromRef(x_114, x_115);
lean_dec(x_114);
x_117 = lean_ctor_get(x_2, 2);
lean_inc(x_117);
x_118 = lean_ctor_get(x_2, 1);
lean_inc(x_118);
lean_dec(x_2);
x_119 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__33;
x_120 = l_Lean_addMacroScope(x_118, x_119, x_117);
x_121 = lean_box(0);
x_122 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__31;
x_123 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__35;
lean_inc(x_116);
x_124 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_124, 0, x_116);
lean_ctor_set(x_124, 1, x_122);
lean_ctor_set(x_124, 2, x_120);
lean_ctor_set(x_124, 3, x_123);
x_125 = l_Lean_Syntax_getId(x_103);
lean_dec(x_103);
lean_inc(x_125);
x_126 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_121, x_125);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_127 = l_Lean_quoteNameMk(x_125);
x_128 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_116);
x_129 = l_Lean_Syntax_node2(x_116, x_128, x_127, x_111);
x_130 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_131 = l_Lean_Syntax_node2(x_116, x_130, x_124, x_129);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_3);
return x_132;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_dec(x_125);
x_133 = lean_ctor_get(x_126, 0);
lean_inc(x_133);
lean_dec(x_126);
x_134 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
x_135 = l_String_intercalate(x_134, x_133);
x_136 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_137 = lean_string_append(x_136, x_135);
lean_dec(x_135);
x_138 = lean_box(2);
x_139 = l_Lean_Syntax_mkNameLit(x_137, x_138);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_121);
x_141 = lean_array_mk(x_140);
x_142 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24;
x_143 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_143, 0, x_138);
lean_ctor_set(x_143, 1, x_142);
lean_ctor_set(x_143, 2, x_141);
x_144 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_116);
x_145 = l_Lean_Syntax_node2(x_116, x_144, x_143, x_111);
x_146 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_147 = l_Lean_Syntax_node2(x_116, x_146, x_124, x_145);
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_3);
return x_148;
}
}
else
{
lean_object* x_149; uint8_t x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_149 = lean_ctor_get(x_2, 5);
lean_inc(x_149);
x_150 = 0;
x_151 = l_Lean_SourceInfo_fromRef(x_149, x_150);
lean_dec(x_149);
x_152 = lean_ctor_get(x_2, 2);
lean_inc(x_152);
x_153 = lean_ctor_get(x_2, 1);
lean_inc(x_153);
lean_dec(x_2);
x_154 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__33;
x_155 = l_Lean_addMacroScope(x_153, x_154, x_152);
x_156 = lean_box(0);
x_157 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__31;
x_158 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__35;
lean_inc(x_151);
x_159 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_159, 0, x_151);
lean_ctor_set(x_159, 1, x_157);
lean_ctor_set(x_159, 2, x_155);
lean_ctor_set(x_159, 3, x_158);
x_160 = l_Lean_Syntax_getId(x_103);
lean_dec(x_103);
lean_inc(x_160);
x_161 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_156, x_160);
x_162 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__29;
lean_inc(x_151);
x_163 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_163, 0, x_151);
lean_ctor_set(x_163, 1, x_162);
x_164 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__28;
lean_inc(x_151);
x_165 = l_Lean_Syntax_node2(x_151, x_164, x_163, x_111);
if (lean_obj_tag(x_161) == 0)
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_166 = l_Lean_quoteNameMk(x_160);
x_167 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_151);
x_168 = l_Lean_Syntax_node2(x_151, x_167, x_166, x_165);
x_169 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_170 = l_Lean_Syntax_node2(x_151, x_169, x_159, x_168);
x_171 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_3);
return x_171;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
lean_dec(x_160);
x_172 = lean_ctor_get(x_161, 0);
lean_inc(x_172);
lean_dec(x_161);
x_173 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
x_174 = l_String_intercalate(x_173, x_172);
x_175 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_176 = lean_string_append(x_175, x_174);
lean_dec(x_174);
x_177 = lean_box(2);
x_178 = l_Lean_Syntax_mkNameLit(x_176, x_177);
x_179 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_179, 0, x_178);
lean_ctor_set(x_179, 1, x_156);
x_180 = lean_array_mk(x_179);
x_181 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24;
x_182 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_182, 0, x_177);
lean_ctor_set(x_182, 1, x_181);
lean_ctor_set(x_182, 2, x_180);
x_183 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_151);
x_184 = l_Lean_Syntax_node2(x_151, x_183, x_182, x_165);
x_185 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_186 = l_Lean_Syntax_node2(x_151, x_185, x_159, x_184);
x_187 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_187, 0, x_186);
lean_ctor_set(x_187, 1, x_3);
return x_187;
}
}
}
}
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; uint8_t x_195; 
x_188 = lean_unsigned_to_nat(1u);
x_189 = l_Lean_Syntax_getArg(x_1, x_188);
x_190 = lean_unsigned_to_nat(2u);
x_191 = l_Lean_Syntax_getArg(x_1, x_190);
x_192 = lean_unsigned_to_nat(3u);
x_193 = l_Lean_Syntax_getArg(x_1, x_192);
x_194 = lean_unsigned_to_nat(0u);
x_195 = l_Lean_Syntax_matchesNull(x_193, x_194);
if (x_195 == 0)
{
lean_object* x_196; lean_object* x_197; 
lean_dec(x_191);
lean_dec(x_189);
lean_dec(x_2);
lean_dec(x_1);
x_196 = lean_box(1);
x_197 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_3);
return x_197;
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; uint8_t x_201; 
x_198 = lean_unsigned_to_nat(4u);
x_199 = l_Lean_Syntax_getArg(x_1, x_198);
lean_dec(x_1);
x_200 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__12;
lean_inc(x_199);
x_201 = l_Lean_Syntax_isOfKind(x_199, x_200);
if (x_201 == 0)
{
lean_object* x_202; uint8_t x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_202 = lean_ctor_get(x_2, 5);
lean_inc(x_202);
x_203 = 0;
x_204 = l_Lean_SourceInfo_fromRef(x_202, x_203);
lean_dec(x_202);
x_205 = lean_ctor_get(x_2, 2);
lean_inc(x_205);
x_206 = lean_ctor_get(x_2, 1);
lean_inc(x_206);
lean_dec(x_2);
x_207 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__39;
x_208 = l_Lean_addMacroScope(x_206, x_207, x_205);
x_209 = lean_box(0);
x_210 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__37;
x_211 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__41;
lean_inc(x_204);
x_212 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_212, 0, x_204);
lean_ctor_set(x_212, 1, x_210);
lean_ctor_set(x_212, 2, x_208);
lean_ctor_set(x_212, 3, x_211);
x_213 = l_Lean_Syntax_getId(x_191);
lean_dec(x_191);
lean_inc(x_213);
x_214 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_209, x_213);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_215 = l_Lean_quoteNameMk(x_213);
x_216 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_204);
x_217 = l_Lean_Syntax_node3(x_204, x_216, x_189, x_215, x_199);
x_218 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_219 = l_Lean_Syntax_node2(x_204, x_218, x_212, x_217);
x_220 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_220, 0, x_219);
lean_ctor_set(x_220, 1, x_3);
return x_220;
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; 
lean_dec(x_213);
x_221 = lean_ctor_get(x_214, 0);
lean_inc(x_221);
lean_dec(x_214);
x_222 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
x_223 = l_String_intercalate(x_222, x_221);
x_224 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_225 = lean_string_append(x_224, x_223);
lean_dec(x_223);
x_226 = lean_box(2);
x_227 = l_Lean_Syntax_mkNameLit(x_225, x_226);
x_228 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_228, 0, x_227);
lean_ctor_set(x_228, 1, x_209);
x_229 = lean_array_mk(x_228);
x_230 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24;
x_231 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_231, 0, x_226);
lean_ctor_set(x_231, 1, x_230);
lean_ctor_set(x_231, 2, x_229);
x_232 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_204);
x_233 = l_Lean_Syntax_node3(x_204, x_232, x_189, x_231, x_199);
x_234 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_235 = l_Lean_Syntax_node2(x_204, x_234, x_212, x_233);
x_236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_236, 0, x_235);
lean_ctor_set(x_236, 1, x_3);
return x_236;
}
}
else
{
lean_object* x_237; uint8_t x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_237 = lean_ctor_get(x_2, 5);
lean_inc(x_237);
x_238 = 0;
x_239 = l_Lean_SourceInfo_fromRef(x_237, x_238);
lean_dec(x_237);
x_240 = lean_ctor_get(x_2, 2);
lean_inc(x_240);
x_241 = lean_ctor_get(x_2, 1);
lean_inc(x_241);
lean_dec(x_2);
x_242 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__39;
x_243 = l_Lean_addMacroScope(x_241, x_242, x_240);
x_244 = lean_box(0);
x_245 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__37;
x_246 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__41;
lean_inc(x_239);
x_247 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_247, 0, x_239);
lean_ctor_set(x_247, 1, x_245);
lean_ctor_set(x_247, 2, x_243);
lean_ctor_set(x_247, 3, x_246);
x_248 = l_Lean_Syntax_getId(x_191);
lean_dec(x_191);
lean_inc(x_248);
x_249 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_244, x_248);
x_250 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__29;
lean_inc(x_239);
x_251 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_251, 0, x_239);
lean_ctor_set(x_251, 1, x_250);
x_252 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__28;
lean_inc(x_239);
x_253 = l_Lean_Syntax_node2(x_239, x_252, x_251, x_199);
if (lean_obj_tag(x_249) == 0)
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; 
x_254 = l_Lean_quoteNameMk(x_248);
x_255 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_239);
x_256 = l_Lean_Syntax_node3(x_239, x_255, x_189, x_254, x_253);
x_257 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_258 = l_Lean_Syntax_node2(x_239, x_257, x_247, x_256);
x_259 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_259, 0, x_258);
lean_ctor_set(x_259, 1, x_3);
return x_259;
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
lean_dec(x_248);
x_260 = lean_ctor_get(x_249, 0);
lean_inc(x_260);
lean_dec(x_249);
x_261 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
x_262 = l_String_intercalate(x_261, x_260);
x_263 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_264 = lean_string_append(x_263, x_262);
lean_dec(x_262);
x_265 = lean_box(2);
x_266 = l_Lean_Syntax_mkNameLit(x_264, x_265);
x_267 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_267, 0, x_266);
lean_ctor_set(x_267, 1, x_244);
x_268 = lean_array_mk(x_267);
x_269 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24;
x_270 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_270, 0, x_265);
lean_ctor_set(x_270, 1, x_269);
lean_ctor_set(x_270, 2, x_268);
x_271 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_239);
x_272 = l_Lean_Syntax_node3(x_239, x_271, x_189, x_270, x_253);
x_273 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_274 = l_Lean_Syntax_node2(x_239, x_273, x_247, x_272);
x_275 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_275, 0, x_274);
lean_ctor_set(x_275, 1, x_3);
return x_275;
}
}
}
}
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; uint8_t x_279; 
x_276 = lean_unsigned_to_nat(1u);
x_277 = l_Lean_Syntax_getArg(x_1, x_276);
x_278 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__43;
lean_inc(x_277);
x_279 = l_Lean_Syntax_isOfKind(x_277, x_278);
if (x_279 == 0)
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; uint8_t x_283; 
x_280 = lean_unsigned_to_nat(2u);
x_281 = l_Lean_Syntax_getArg(x_1, x_280);
x_282 = lean_unsigned_to_nat(0u);
x_283 = l_Lean_Syntax_matchesNull(x_281, x_282);
if (x_283 == 0)
{
lean_object* x_284; lean_object* x_285; 
lean_dec(x_277);
lean_dec(x_2);
lean_dec(x_1);
x_284 = lean_box(1);
x_285 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_285, 0, x_284);
lean_ctor_set(x_285, 1, x_3);
return x_285;
}
else
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; uint8_t x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; 
x_286 = lean_unsigned_to_nat(3u);
x_287 = l_Lean_Syntax_getArg(x_1, x_286);
lean_dec(x_1);
x_288 = lean_ctor_get(x_2, 5);
lean_inc(x_288);
x_289 = 0;
x_290 = l_Lean_SourceInfo_fromRef(x_288, x_289);
lean_dec(x_288);
x_291 = lean_ctor_get(x_2, 2);
lean_inc(x_291);
x_292 = lean_ctor_get(x_2, 1);
lean_inc(x_292);
lean_dec(x_2);
x_293 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__47;
x_294 = l_Lean_addMacroScope(x_292, x_293, x_291);
x_295 = lean_box(0);
x_296 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__45;
x_297 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__49;
lean_inc(x_290);
x_298 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_298, 0, x_290);
lean_ctor_set(x_298, 1, x_296);
lean_ctor_set(x_298, 2, x_294);
lean_ctor_set(x_298, 3, x_297);
x_299 = l_Lean_Syntax_getId(x_277);
lean_dec(x_277);
lean_inc(x_299);
x_300 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_295, x_299);
if (lean_obj_tag(x_300) == 0)
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_301 = l_Lean_quoteNameMk(x_299);
x_302 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_290);
x_303 = l_Lean_Syntax_node2(x_290, x_302, x_301, x_287);
x_304 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_305 = l_Lean_Syntax_node2(x_290, x_304, x_298, x_303);
x_306 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_306, 0, x_305);
lean_ctor_set(x_306, 1, x_3);
return x_306;
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; 
lean_dec(x_299);
x_307 = lean_ctor_get(x_300, 0);
lean_inc(x_307);
lean_dec(x_300);
x_308 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
x_309 = l_String_intercalate(x_308, x_307);
x_310 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_311 = lean_string_append(x_310, x_309);
lean_dec(x_309);
x_312 = lean_box(2);
x_313 = l_Lean_Syntax_mkNameLit(x_311, x_312);
x_314 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_314, 0, x_313);
lean_ctor_set(x_314, 1, x_295);
x_315 = lean_array_mk(x_314);
x_316 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24;
x_317 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_317, 0, x_312);
lean_ctor_set(x_317, 1, x_316);
lean_ctor_set(x_317, 2, x_315);
x_318 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_290);
x_319 = l_Lean_Syntax_node2(x_290, x_318, x_317, x_287);
x_320 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_321 = l_Lean_Syntax_node2(x_290, x_320, x_298, x_319);
x_322 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_322, 0, x_321);
lean_ctor_set(x_322, 1, x_3);
return x_322;
}
}
}
else
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; uint8_t x_326; 
x_323 = lean_unsigned_to_nat(2u);
x_324 = l_Lean_Syntax_getArg(x_1, x_323);
x_325 = lean_unsigned_to_nat(0u);
x_326 = l_Lean_Syntax_matchesNull(x_324, x_325);
if (x_326 == 0)
{
lean_object* x_327; lean_object* x_328; 
lean_dec(x_277);
lean_dec(x_2);
lean_dec(x_1);
x_327 = lean_box(1);
x_328 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_328, 0, x_327);
lean_ctor_set(x_328, 1, x_3);
return x_328;
}
else
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; uint8_t x_332; 
x_329 = lean_unsigned_to_nat(3u);
x_330 = l_Lean_Syntax_getArg(x_1, x_329);
lean_dec(x_1);
x_331 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__12;
lean_inc(x_330);
x_332 = l_Lean_Syntax_isOfKind(x_330, x_331);
if (x_332 == 0)
{
lean_object* x_333; uint8_t x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; 
x_333 = lean_ctor_get(x_2, 5);
lean_inc(x_333);
x_334 = 0;
x_335 = l_Lean_SourceInfo_fromRef(x_333, x_334);
lean_dec(x_333);
x_336 = lean_ctor_get(x_2, 2);
lean_inc(x_336);
x_337 = lean_ctor_get(x_2, 1);
lean_inc(x_337);
lean_dec(x_2);
x_338 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__47;
x_339 = l_Lean_addMacroScope(x_337, x_338, x_336);
x_340 = lean_box(0);
x_341 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__45;
x_342 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__49;
lean_inc(x_335);
x_343 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_343, 0, x_335);
lean_ctor_set(x_343, 1, x_341);
lean_ctor_set(x_343, 2, x_339);
lean_ctor_set(x_343, 3, x_342);
x_344 = l_Lean_Syntax_getId(x_277);
lean_dec(x_277);
lean_inc(x_344);
x_345 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_340, x_344);
if (lean_obj_tag(x_345) == 0)
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; 
x_346 = l_Lean_quoteNameMk(x_344);
x_347 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_335);
x_348 = l_Lean_Syntax_node2(x_335, x_347, x_346, x_330);
x_349 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_350 = l_Lean_Syntax_node2(x_335, x_349, x_343, x_348);
x_351 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_351, 0, x_350);
lean_ctor_set(x_351, 1, x_3);
return x_351;
}
else
{
lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; 
lean_dec(x_344);
x_352 = lean_ctor_get(x_345, 0);
lean_inc(x_352);
lean_dec(x_345);
x_353 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
x_354 = l_String_intercalate(x_353, x_352);
x_355 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_356 = lean_string_append(x_355, x_354);
lean_dec(x_354);
x_357 = lean_box(2);
x_358 = l_Lean_Syntax_mkNameLit(x_356, x_357);
x_359 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_359, 0, x_358);
lean_ctor_set(x_359, 1, x_340);
x_360 = lean_array_mk(x_359);
x_361 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24;
x_362 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_362, 0, x_357);
lean_ctor_set(x_362, 1, x_361);
lean_ctor_set(x_362, 2, x_360);
x_363 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_335);
x_364 = l_Lean_Syntax_node2(x_335, x_363, x_362, x_330);
x_365 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_366 = l_Lean_Syntax_node2(x_335, x_365, x_343, x_364);
x_367 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_367, 0, x_366);
lean_ctor_set(x_367, 1, x_3);
return x_367;
}
}
else
{
lean_object* x_368; uint8_t x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; 
x_368 = lean_ctor_get(x_2, 5);
lean_inc(x_368);
x_369 = 0;
x_370 = l_Lean_SourceInfo_fromRef(x_368, x_369);
lean_dec(x_368);
x_371 = lean_ctor_get(x_2, 2);
lean_inc(x_371);
x_372 = lean_ctor_get(x_2, 1);
lean_inc(x_372);
lean_dec(x_2);
x_373 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__47;
x_374 = l_Lean_addMacroScope(x_372, x_373, x_371);
x_375 = lean_box(0);
x_376 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__45;
x_377 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__49;
lean_inc(x_370);
x_378 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_378, 0, x_370);
lean_ctor_set(x_378, 1, x_376);
lean_ctor_set(x_378, 2, x_374);
lean_ctor_set(x_378, 3, x_377);
x_379 = l_Lean_Syntax_getId(x_277);
lean_dec(x_277);
lean_inc(x_379);
x_380 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_375, x_379);
x_381 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__29;
lean_inc(x_370);
x_382 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_382, 0, x_370);
lean_ctor_set(x_382, 1, x_381);
x_383 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__28;
lean_inc(x_370);
x_384 = l_Lean_Syntax_node2(x_370, x_383, x_382, x_330);
if (lean_obj_tag(x_380) == 0)
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; 
x_385 = l_Lean_quoteNameMk(x_379);
x_386 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_370);
x_387 = l_Lean_Syntax_node2(x_370, x_386, x_385, x_384);
x_388 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_389 = l_Lean_Syntax_node2(x_370, x_388, x_378, x_387);
x_390 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_390, 0, x_389);
lean_ctor_set(x_390, 1, x_3);
return x_390;
}
else
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; 
lean_dec(x_379);
x_391 = lean_ctor_get(x_380, 0);
lean_inc(x_391);
lean_dec(x_380);
x_392 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__25;
x_393 = l_String_intercalate(x_392, x_391);
x_394 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_395 = lean_string_append(x_394, x_393);
lean_dec(x_393);
x_396 = lean_box(2);
x_397 = l_Lean_Syntax_mkNameLit(x_395, x_396);
x_398 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_398, 0, x_397);
lean_ctor_set(x_398, 1, x_375);
x_399 = lean_array_mk(x_398);
x_400 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__24;
x_401 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_401, 0, x_396);
lean_ctor_set(x_401, 1, x_400);
lean_ctor_set(x_401, 2, x_399);
x_402 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__22;
lean_inc(x_370);
x_403 = l_Lean_Syntax_node2(x_370, x_402, x_401, x_384);
x_404 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__14;
x_405 = l_Lean_Syntax_node2(x_370, x_404, x_378, x_403);
x_406 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_406, 0, x_405);
lean_ctor_set(x_406, 1, x_3);
return x_406;
}
}
}
}
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
x_1 = lean_mk_string_unchecked("There is no explanation associated with the name `", 50, 50);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("`. Add an explanation of this error to the `Lean.ErrorExplanation` module.", 74, 74);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("The error name `", 16, 16);
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
x_1 = lean_mk_string_unchecked("` was removed in Lean version ", 30, 30);
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
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" and should not be used.", 24, 24);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__4;
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__6;
lean_inc(x_1);
x_13 = l_Lean_Syntax_isOfKind(x_1, x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__8;
lean_inc(x_1);
x_15 = l_Lean_Syntax_isOfKind(x_1, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__10;
lean_inc(x_1);
x_17 = l_Lean_Syntax_isOfKind(x_1, x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_unsigned_to_nat(2u);
x_20 = l_Lean_Syntax_getArg(x_1, x_19);
x_21 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__43;
lean_inc(x_20);
x_22 = l_Lean_Syntax_isOfKind(x_20, x_21);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_20);
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
x_24 = lean_unsigned_to_nat(3u);
x_25 = l_Lean_Syntax_getArg(x_1, x_24);
x_26 = lean_unsigned_to_nat(0u);
x_27 = l_Lean_Syntax_matchesNull(x_25, x_26);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_20);
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
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_29 = l_Lean_Syntax_getId(x_20);
x_30 = l_Lean_Syntax_getArgs(x_1);
x_31 = l_Lean_Syntax_getNumArgs(x_1);
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_sub(x_31, x_32);
lean_dec(x_31);
x_34 = l_Array_toSubarray___rarg(x_30, x_26, x_33);
x_35 = l_Array_ofSubarray___rarg(x_34);
lean_dec(x_34);
lean_inc(x_1);
x_36 = l_Lean_Syntax_setArgs(x_1, x_35);
x_37 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_38 = l_Lean_Elab_addCompletionInfo___at_Lean_Elab_Term_addDotCompletionInfo___spec__1(x_37, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_40 = lean_ctor_get(x_38, 1);
x_41 = lean_ctor_get(x_38, 0);
lean_dec(x_41);
lean_inc(x_29);
lean_inc(x_20);
lean_ctor_set(x_38, 1, x_29);
lean_ctor_set(x_38, 0, x_20);
x_42 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_42, 0, x_38);
x_43 = l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_addDotCompletionInfo___spec__2(x_42, x_3, x_4, x_5, x_6, x_7, x_8, x_40);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_45 = lean_ctor_get(x_43, 1);
x_46 = lean_ctor_get(x_43, 0);
lean_dec(x_46);
x_47 = lean_st_ref_get(x_8, x_45);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_47, 0);
x_50 = lean_ctor_get(x_47, 1);
x_51 = lean_ctor_get(x_49, 0);
lean_inc(x_51);
lean_dec(x_49);
x_52 = l_Lean_getErrorExplanationRaw_x3f(x_51, x_29);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_20);
lean_dec(x_2);
lean_dec(x_1);
x_53 = l_Lean_MessageData_ofName(x_29);
x_54 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
lean_ctor_set_tag(x_47, 7);
lean_ctor_set(x_47, 1, x_53);
lean_ctor_set(x_47, 0, x_54);
x_55 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
lean_ctor_set_tag(x_43, 7);
lean_ctor_set(x_43, 1, x_55);
lean_ctor_set(x_43, 0, x_47);
x_56 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_43, x_3, x_4, x_5, x_6, x_7, x_8, x_50);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_52, 0);
lean_inc(x_57);
lean_dec(x_52);
x_58 = lean_ctor_get(x_57, 2);
lean_inc(x_58);
lean_dec(x_57);
x_59 = lean_ctor_get(x_58, 2);
lean_inc(x_59);
lean_dec(x_58);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; 
lean_free_object(x_47);
lean_free_object(x_43);
lean_dec(x_29);
lean_dec(x_20);
x_60 = lean_box(0);
x_61 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_60, x_3, x_4, x_5, x_6, x_7, x_8, x_50);
return x_61;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_62 = lean_ctor_get(x_59, 0);
lean_inc(x_62);
lean_dec(x_59);
x_63 = l_Lean_MessageData_ofName(x_29);
x_64 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
lean_ctor_set_tag(x_47, 7);
lean_ctor_set(x_47, 1, x_63);
lean_ctor_set(x_47, 0, x_64);
x_65 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_ctor_set_tag(x_43, 7);
lean_ctor_set(x_43, 1, x_65);
lean_ctor_set(x_43, 0, x_47);
x_66 = l_Lean_stringToMessageData(x_62);
lean_dec(x_62);
x_67 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_67, 0, x_43);
lean_ctor_set(x_67, 1, x_66);
x_68 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_69 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
x_70 = 1;
x_71 = 0;
lean_inc(x_7);
x_72 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_20, x_69, x_70, x_71, x_3, x_4, x_5, x_6, x_7, x_8, x_50);
lean_dec(x_20);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_73, x_3, x_4, x_5, x_6, x_7, x_8, x_74);
lean_dec(x_73);
return x_75;
}
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_76 = lean_ctor_get(x_47, 0);
x_77 = lean_ctor_get(x_47, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_47);
x_78 = lean_ctor_get(x_76, 0);
lean_inc(x_78);
lean_dec(x_76);
x_79 = l_Lean_getErrorExplanationRaw_x3f(x_78, x_29);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_20);
lean_dec(x_2);
lean_dec(x_1);
x_80 = l_Lean_MessageData_ofName(x_29);
x_81 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
x_82 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_80);
x_83 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
lean_ctor_set_tag(x_43, 7);
lean_ctor_set(x_43, 1, x_83);
lean_ctor_set(x_43, 0, x_82);
x_84 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_43, x_3, x_4, x_5, x_6, x_7, x_8, x_77);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_84;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_79, 0);
lean_inc(x_85);
lean_dec(x_79);
x_86 = lean_ctor_get(x_85, 2);
lean_inc(x_86);
lean_dec(x_85);
x_87 = lean_ctor_get(x_86, 2);
lean_inc(x_87);
lean_dec(x_86);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; 
lean_free_object(x_43);
lean_dec(x_29);
lean_dec(x_20);
x_88 = lean_box(0);
x_89 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_88, x_3, x_4, x_5, x_6, x_7, x_8, x_77);
return x_89;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; uint8_t x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_90 = lean_ctor_get(x_87, 0);
lean_inc(x_90);
lean_dec(x_87);
x_91 = l_Lean_MessageData_ofName(x_29);
x_92 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
x_93 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_91);
x_94 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_ctor_set_tag(x_43, 7);
lean_ctor_set(x_43, 1, x_94);
lean_ctor_set(x_43, 0, x_93);
x_95 = l_Lean_stringToMessageData(x_90);
lean_dec(x_90);
x_96 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_96, 0, x_43);
lean_ctor_set(x_96, 1, x_95);
x_97 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_98 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
x_99 = 1;
x_100 = 0;
lean_inc(x_7);
x_101 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_20, x_98, x_99, x_100, x_3, x_4, x_5, x_6, x_7, x_8, x_77);
lean_dec(x_20);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_104 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_102, x_3, x_4, x_5, x_6, x_7, x_8, x_103);
lean_dec(x_102);
return x_104;
}
}
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_105 = lean_ctor_get(x_43, 1);
lean_inc(x_105);
lean_dec(x_43);
x_106 = lean_st_ref_get(x_8, x_105);
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_109 = x_106;
} else {
 lean_dec_ref(x_106);
 x_109 = lean_box(0);
}
x_110 = lean_ctor_get(x_107, 0);
lean_inc(x_110);
lean_dec(x_107);
x_111 = l_Lean_getErrorExplanationRaw_x3f(x_110, x_29);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_20);
lean_dec(x_2);
lean_dec(x_1);
x_112 = l_Lean_MessageData_ofName(x_29);
x_113 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
if (lean_is_scalar(x_109)) {
 x_114 = lean_alloc_ctor(7, 2, 0);
} else {
 x_114 = x_109;
 lean_ctor_set_tag(x_114, 7);
}
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_112);
x_115 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
x_116 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
x_117 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_116, x_3, x_4, x_5, x_6, x_7, x_8, x_108);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_117;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_111, 0);
lean_inc(x_118);
lean_dec(x_111);
x_119 = lean_ctor_get(x_118, 2);
lean_inc(x_119);
lean_dec(x_118);
x_120 = lean_ctor_get(x_119, 2);
lean_inc(x_120);
lean_dec(x_119);
if (lean_obj_tag(x_120) == 0)
{
lean_object* x_121; lean_object* x_122; 
lean_dec(x_109);
lean_dec(x_29);
lean_dec(x_20);
x_121 = lean_box(0);
x_122 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_121, x_3, x_4, x_5, x_6, x_7, x_8, x_108);
return x_122;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; uint8_t x_133; uint8_t x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_123 = lean_ctor_get(x_120, 0);
lean_inc(x_123);
lean_dec(x_120);
x_124 = l_Lean_MessageData_ofName(x_29);
x_125 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
if (lean_is_scalar(x_109)) {
 x_126 = lean_alloc_ctor(7, 2, 0);
} else {
 x_126 = x_109;
 lean_ctor_set_tag(x_126, 7);
}
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_124);
x_127 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
x_128 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_128, 0, x_126);
lean_ctor_set(x_128, 1, x_127);
x_129 = l_Lean_stringToMessageData(x_123);
lean_dec(x_123);
x_130 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_130, 0, x_128);
lean_ctor_set(x_130, 1, x_129);
x_131 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_132 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_131);
x_133 = 1;
x_134 = 0;
lean_inc(x_7);
x_135 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_20, x_132, x_133, x_134, x_3, x_4, x_5, x_6, x_7, x_8, x_108);
lean_dec(x_20);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_135, 1);
lean_inc(x_137);
lean_dec(x_135);
x_138 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_136, x_3, x_4, x_5, x_6, x_7, x_8, x_137);
lean_dec(x_136);
return x_138;
}
}
}
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_139 = lean_ctor_get(x_38, 1);
lean_inc(x_139);
lean_dec(x_38);
lean_inc(x_29);
lean_inc(x_20);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_20);
lean_ctor_set(x_140, 1, x_29);
x_141 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_141, 0, x_140);
x_142 = l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_addDotCompletionInfo___spec__2(x_141, x_3, x_4, x_5, x_6, x_7, x_8, x_139);
x_143 = lean_ctor_get(x_142, 1);
lean_inc(x_143);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_144 = x_142;
} else {
 lean_dec_ref(x_142);
 x_144 = lean_box(0);
}
x_145 = lean_st_ref_get(x_8, x_143);
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_148 = x_145;
} else {
 lean_dec_ref(x_145);
 x_148 = lean_box(0);
}
x_149 = lean_ctor_get(x_146, 0);
lean_inc(x_149);
lean_dec(x_146);
x_150 = l_Lean_getErrorExplanationRaw_x3f(x_149, x_29);
if (lean_obj_tag(x_150) == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_dec(x_20);
lean_dec(x_2);
lean_dec(x_1);
x_151 = l_Lean_MessageData_ofName(x_29);
x_152 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
if (lean_is_scalar(x_148)) {
 x_153 = lean_alloc_ctor(7, 2, 0);
} else {
 x_153 = x_148;
 lean_ctor_set_tag(x_153, 7);
}
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_151);
x_154 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
if (lean_is_scalar(x_144)) {
 x_155 = lean_alloc_ctor(7, 2, 0);
} else {
 x_155 = x_144;
 lean_ctor_set_tag(x_155, 7);
}
lean_ctor_set(x_155, 0, x_153);
lean_ctor_set(x_155, 1, x_154);
x_156 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_155, x_3, x_4, x_5, x_6, x_7, x_8, x_147);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_156;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_157 = lean_ctor_get(x_150, 0);
lean_inc(x_157);
lean_dec(x_150);
x_158 = lean_ctor_get(x_157, 2);
lean_inc(x_158);
lean_dec(x_157);
x_159 = lean_ctor_get(x_158, 2);
lean_inc(x_159);
lean_dec(x_158);
if (lean_obj_tag(x_159) == 0)
{
lean_object* x_160; lean_object* x_161; 
lean_dec(x_148);
lean_dec(x_144);
lean_dec(x_29);
lean_dec(x_20);
x_160 = lean_box(0);
x_161 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_160, x_3, x_4, x_5, x_6, x_7, x_8, x_147);
return x_161;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; uint8_t x_172; uint8_t x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_162 = lean_ctor_get(x_159, 0);
lean_inc(x_162);
lean_dec(x_159);
x_163 = l_Lean_MessageData_ofName(x_29);
x_164 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
if (lean_is_scalar(x_148)) {
 x_165 = lean_alloc_ctor(7, 2, 0);
} else {
 x_165 = x_148;
 lean_ctor_set_tag(x_165, 7);
}
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_163);
x_166 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
if (lean_is_scalar(x_144)) {
 x_167 = lean_alloc_ctor(7, 2, 0);
} else {
 x_167 = x_144;
 lean_ctor_set_tag(x_167, 7);
}
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
x_168 = l_Lean_stringToMessageData(x_162);
lean_dec(x_162);
x_169 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
x_170 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_171 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_171, 0, x_169);
lean_ctor_set(x_171, 1, x_170);
x_172 = 1;
x_173 = 0;
lean_inc(x_7);
x_174 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_20, x_171, x_172, x_173, x_3, x_4, x_5, x_6, x_7, x_8, x_147);
lean_dec(x_20);
x_175 = lean_ctor_get(x_174, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_174, 1);
lean_inc(x_176);
lean_dec(x_174);
x_177 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_175, x_3, x_4, x_5, x_6, x_7, x_8, x_176);
lean_dec(x_175);
return x_177;
}
}
}
}
}
}
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; uint8_t x_181; 
x_178 = lean_unsigned_to_nat(1u);
x_179 = l_Lean_Syntax_getArg(x_1, x_178);
x_180 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__43;
lean_inc(x_179);
x_181 = l_Lean_Syntax_isOfKind(x_179, x_180);
if (x_181 == 0)
{
lean_object* x_182; 
lean_dec(x_179);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_182 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_182;
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; uint8_t x_186; 
x_183 = lean_unsigned_to_nat(2u);
x_184 = l_Lean_Syntax_getArg(x_1, x_183);
x_185 = lean_unsigned_to_nat(0u);
x_186 = l_Lean_Syntax_matchesNull(x_184, x_185);
if (x_186 == 0)
{
lean_object* x_187; 
lean_dec(x_179);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_187 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_187;
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; uint8_t x_197; 
x_188 = l_Lean_Syntax_getId(x_179);
x_189 = l_Lean_Syntax_getArgs(x_1);
x_190 = l_Lean_Syntax_getNumArgs(x_1);
x_191 = lean_nat_sub(x_190, x_178);
lean_dec(x_190);
x_192 = l_Array_toSubarray___rarg(x_189, x_185, x_191);
x_193 = l_Array_ofSubarray___rarg(x_192);
lean_dec(x_192);
lean_inc(x_1);
x_194 = l_Lean_Syntax_setArgs(x_1, x_193);
x_195 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_195, 0, x_194);
x_196 = l_Lean_Elab_addCompletionInfo___at_Lean_Elab_Term_addDotCompletionInfo___spec__1(x_195, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_197 = !lean_is_exclusive(x_196);
if (x_197 == 0)
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; uint8_t x_202; 
x_198 = lean_ctor_get(x_196, 1);
x_199 = lean_ctor_get(x_196, 0);
lean_dec(x_199);
lean_inc(x_188);
lean_inc(x_179);
lean_ctor_set(x_196, 1, x_188);
lean_ctor_set(x_196, 0, x_179);
x_200 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_200, 0, x_196);
x_201 = l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_addDotCompletionInfo___spec__2(x_200, x_3, x_4, x_5, x_6, x_7, x_8, x_198);
x_202 = !lean_is_exclusive(x_201);
if (x_202 == 0)
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; uint8_t x_206; 
x_203 = lean_ctor_get(x_201, 1);
x_204 = lean_ctor_get(x_201, 0);
lean_dec(x_204);
x_205 = lean_st_ref_get(x_8, x_203);
x_206 = !lean_is_exclusive(x_205);
if (x_206 == 0)
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_207 = lean_ctor_get(x_205, 0);
x_208 = lean_ctor_get(x_205, 1);
x_209 = lean_ctor_get(x_207, 0);
lean_inc(x_209);
lean_dec(x_207);
x_210 = l_Lean_getErrorExplanationRaw_x3f(x_209, x_188);
if (lean_obj_tag(x_210) == 0)
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
lean_dec(x_179);
lean_dec(x_2);
lean_dec(x_1);
x_211 = l_Lean_MessageData_ofName(x_188);
x_212 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
lean_ctor_set_tag(x_205, 7);
lean_ctor_set(x_205, 1, x_211);
lean_ctor_set(x_205, 0, x_212);
x_213 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
lean_ctor_set_tag(x_201, 7);
lean_ctor_set(x_201, 1, x_213);
lean_ctor_set(x_201, 0, x_205);
x_214 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_201, x_3, x_4, x_5, x_6, x_7, x_8, x_208);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_214;
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; 
x_215 = lean_ctor_get(x_210, 0);
lean_inc(x_215);
lean_dec(x_210);
x_216 = lean_ctor_get(x_215, 2);
lean_inc(x_216);
lean_dec(x_215);
x_217 = lean_ctor_get(x_216, 2);
lean_inc(x_217);
lean_dec(x_216);
if (lean_obj_tag(x_217) == 0)
{
lean_object* x_218; lean_object* x_219; 
lean_free_object(x_205);
lean_free_object(x_201);
lean_dec(x_188);
lean_dec(x_179);
x_218 = lean_box(0);
x_219 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_218, x_3, x_4, x_5, x_6, x_7, x_8, x_208);
return x_219;
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; uint8_t x_228; uint8_t x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_220 = lean_ctor_get(x_217, 0);
lean_inc(x_220);
lean_dec(x_217);
x_221 = l_Lean_MessageData_ofName(x_188);
x_222 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
lean_ctor_set_tag(x_205, 7);
lean_ctor_set(x_205, 1, x_221);
lean_ctor_set(x_205, 0, x_222);
x_223 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_ctor_set_tag(x_201, 7);
lean_ctor_set(x_201, 1, x_223);
lean_ctor_set(x_201, 0, x_205);
x_224 = l_Lean_stringToMessageData(x_220);
lean_dec(x_220);
x_225 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_225, 0, x_201);
lean_ctor_set(x_225, 1, x_224);
x_226 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_227 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_227, 0, x_225);
lean_ctor_set(x_227, 1, x_226);
x_228 = 1;
x_229 = 0;
lean_inc(x_7);
x_230 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_179, x_227, x_228, x_229, x_3, x_4, x_5, x_6, x_7, x_8, x_208);
lean_dec(x_179);
x_231 = lean_ctor_get(x_230, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_230, 1);
lean_inc(x_232);
lean_dec(x_230);
x_233 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_231, x_3, x_4, x_5, x_6, x_7, x_8, x_232);
lean_dec(x_231);
return x_233;
}
}
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_234 = lean_ctor_get(x_205, 0);
x_235 = lean_ctor_get(x_205, 1);
lean_inc(x_235);
lean_inc(x_234);
lean_dec(x_205);
x_236 = lean_ctor_get(x_234, 0);
lean_inc(x_236);
lean_dec(x_234);
x_237 = l_Lean_getErrorExplanationRaw_x3f(x_236, x_188);
if (lean_obj_tag(x_237) == 0)
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
lean_dec(x_179);
lean_dec(x_2);
lean_dec(x_1);
x_238 = l_Lean_MessageData_ofName(x_188);
x_239 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
x_240 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_240, 0, x_239);
lean_ctor_set(x_240, 1, x_238);
x_241 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
lean_ctor_set_tag(x_201, 7);
lean_ctor_set(x_201, 1, x_241);
lean_ctor_set(x_201, 0, x_240);
x_242 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_201, x_3, x_4, x_5, x_6, x_7, x_8, x_235);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_242;
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_243 = lean_ctor_get(x_237, 0);
lean_inc(x_243);
lean_dec(x_237);
x_244 = lean_ctor_get(x_243, 2);
lean_inc(x_244);
lean_dec(x_243);
x_245 = lean_ctor_get(x_244, 2);
lean_inc(x_245);
lean_dec(x_244);
if (lean_obj_tag(x_245) == 0)
{
lean_object* x_246; lean_object* x_247; 
lean_free_object(x_201);
lean_dec(x_188);
lean_dec(x_179);
x_246 = lean_box(0);
x_247 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_246, x_3, x_4, x_5, x_6, x_7, x_8, x_235);
return x_247;
}
else
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; uint8_t x_257; uint8_t x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_248 = lean_ctor_get(x_245, 0);
lean_inc(x_248);
lean_dec(x_245);
x_249 = l_Lean_MessageData_ofName(x_188);
x_250 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
x_251 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_251, 0, x_250);
lean_ctor_set(x_251, 1, x_249);
x_252 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_ctor_set_tag(x_201, 7);
lean_ctor_set(x_201, 1, x_252);
lean_ctor_set(x_201, 0, x_251);
x_253 = l_Lean_stringToMessageData(x_248);
lean_dec(x_248);
x_254 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_254, 0, x_201);
lean_ctor_set(x_254, 1, x_253);
x_255 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_256 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_256, 0, x_254);
lean_ctor_set(x_256, 1, x_255);
x_257 = 1;
x_258 = 0;
lean_inc(x_7);
x_259 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_179, x_256, x_257, x_258, x_3, x_4, x_5, x_6, x_7, x_8, x_235);
lean_dec(x_179);
x_260 = lean_ctor_get(x_259, 0);
lean_inc(x_260);
x_261 = lean_ctor_get(x_259, 1);
lean_inc(x_261);
lean_dec(x_259);
x_262 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_260, x_3, x_4, x_5, x_6, x_7, x_8, x_261);
lean_dec(x_260);
return x_262;
}
}
}
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; 
x_263 = lean_ctor_get(x_201, 1);
lean_inc(x_263);
lean_dec(x_201);
x_264 = lean_st_ref_get(x_8, x_263);
x_265 = lean_ctor_get(x_264, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_264, 1);
lean_inc(x_266);
if (lean_is_exclusive(x_264)) {
 lean_ctor_release(x_264, 0);
 lean_ctor_release(x_264, 1);
 x_267 = x_264;
} else {
 lean_dec_ref(x_264);
 x_267 = lean_box(0);
}
x_268 = lean_ctor_get(x_265, 0);
lean_inc(x_268);
lean_dec(x_265);
x_269 = l_Lean_getErrorExplanationRaw_x3f(x_268, x_188);
if (lean_obj_tag(x_269) == 0)
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
lean_dec(x_179);
lean_dec(x_2);
lean_dec(x_1);
x_270 = l_Lean_MessageData_ofName(x_188);
x_271 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
if (lean_is_scalar(x_267)) {
 x_272 = lean_alloc_ctor(7, 2, 0);
} else {
 x_272 = x_267;
 lean_ctor_set_tag(x_272, 7);
}
lean_ctor_set(x_272, 0, x_271);
lean_ctor_set(x_272, 1, x_270);
x_273 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
x_274 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_274, 0, x_272);
lean_ctor_set(x_274, 1, x_273);
x_275 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_274, x_3, x_4, x_5, x_6, x_7, x_8, x_266);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_275;
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; 
x_276 = lean_ctor_get(x_269, 0);
lean_inc(x_276);
lean_dec(x_269);
x_277 = lean_ctor_get(x_276, 2);
lean_inc(x_277);
lean_dec(x_276);
x_278 = lean_ctor_get(x_277, 2);
lean_inc(x_278);
lean_dec(x_277);
if (lean_obj_tag(x_278) == 0)
{
lean_object* x_279; lean_object* x_280; 
lean_dec(x_267);
lean_dec(x_188);
lean_dec(x_179);
x_279 = lean_box(0);
x_280 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_279, x_3, x_4, x_5, x_6, x_7, x_8, x_266);
return x_280;
}
else
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; uint8_t x_291; uint8_t x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; 
x_281 = lean_ctor_get(x_278, 0);
lean_inc(x_281);
lean_dec(x_278);
x_282 = l_Lean_MessageData_ofName(x_188);
x_283 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
if (lean_is_scalar(x_267)) {
 x_284 = lean_alloc_ctor(7, 2, 0);
} else {
 x_284 = x_267;
 lean_ctor_set_tag(x_284, 7);
}
lean_ctor_set(x_284, 0, x_283);
lean_ctor_set(x_284, 1, x_282);
x_285 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
x_286 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_286, 0, x_284);
lean_ctor_set(x_286, 1, x_285);
x_287 = l_Lean_stringToMessageData(x_281);
lean_dec(x_281);
x_288 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_288, 0, x_286);
lean_ctor_set(x_288, 1, x_287);
x_289 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_290 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_290, 0, x_288);
lean_ctor_set(x_290, 1, x_289);
x_291 = 1;
x_292 = 0;
lean_inc(x_7);
x_293 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_179, x_290, x_291, x_292, x_3, x_4, x_5, x_6, x_7, x_8, x_266);
lean_dec(x_179);
x_294 = lean_ctor_get(x_293, 0);
lean_inc(x_294);
x_295 = lean_ctor_get(x_293, 1);
lean_inc(x_295);
lean_dec(x_293);
x_296 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_294, x_3, x_4, x_5, x_6, x_7, x_8, x_295);
lean_dec(x_294);
return x_296;
}
}
}
}
else
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; 
x_297 = lean_ctor_get(x_196, 1);
lean_inc(x_297);
lean_dec(x_196);
lean_inc(x_188);
lean_inc(x_179);
x_298 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_298, 0, x_179);
lean_ctor_set(x_298, 1, x_188);
x_299 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_299, 0, x_298);
x_300 = l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_addDotCompletionInfo___spec__2(x_299, x_3, x_4, x_5, x_6, x_7, x_8, x_297);
x_301 = lean_ctor_get(x_300, 1);
lean_inc(x_301);
if (lean_is_exclusive(x_300)) {
 lean_ctor_release(x_300, 0);
 lean_ctor_release(x_300, 1);
 x_302 = x_300;
} else {
 lean_dec_ref(x_300);
 x_302 = lean_box(0);
}
x_303 = lean_st_ref_get(x_8, x_301);
x_304 = lean_ctor_get(x_303, 0);
lean_inc(x_304);
x_305 = lean_ctor_get(x_303, 1);
lean_inc(x_305);
if (lean_is_exclusive(x_303)) {
 lean_ctor_release(x_303, 0);
 lean_ctor_release(x_303, 1);
 x_306 = x_303;
} else {
 lean_dec_ref(x_303);
 x_306 = lean_box(0);
}
x_307 = lean_ctor_get(x_304, 0);
lean_inc(x_307);
lean_dec(x_304);
x_308 = l_Lean_getErrorExplanationRaw_x3f(x_307, x_188);
if (lean_obj_tag(x_308) == 0)
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; 
lean_dec(x_179);
lean_dec(x_2);
lean_dec(x_1);
x_309 = l_Lean_MessageData_ofName(x_188);
x_310 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
if (lean_is_scalar(x_306)) {
 x_311 = lean_alloc_ctor(7, 2, 0);
} else {
 x_311 = x_306;
 lean_ctor_set_tag(x_311, 7);
}
lean_ctor_set(x_311, 0, x_310);
lean_ctor_set(x_311, 1, x_309);
x_312 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
if (lean_is_scalar(x_302)) {
 x_313 = lean_alloc_ctor(7, 2, 0);
} else {
 x_313 = x_302;
 lean_ctor_set_tag(x_313, 7);
}
lean_ctor_set(x_313, 0, x_311);
lean_ctor_set(x_313, 1, x_312);
x_314 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_313, x_3, x_4, x_5, x_6, x_7, x_8, x_305);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_314;
}
else
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; 
x_315 = lean_ctor_get(x_308, 0);
lean_inc(x_315);
lean_dec(x_308);
x_316 = lean_ctor_get(x_315, 2);
lean_inc(x_316);
lean_dec(x_315);
x_317 = lean_ctor_get(x_316, 2);
lean_inc(x_317);
lean_dec(x_316);
if (lean_obj_tag(x_317) == 0)
{
lean_object* x_318; lean_object* x_319; 
lean_dec(x_306);
lean_dec(x_302);
lean_dec(x_188);
lean_dec(x_179);
x_318 = lean_box(0);
x_319 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_318, x_3, x_4, x_5, x_6, x_7, x_8, x_305);
return x_319;
}
else
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; uint8_t x_330; uint8_t x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; 
x_320 = lean_ctor_get(x_317, 0);
lean_inc(x_320);
lean_dec(x_317);
x_321 = l_Lean_MessageData_ofName(x_188);
x_322 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
if (lean_is_scalar(x_306)) {
 x_323 = lean_alloc_ctor(7, 2, 0);
} else {
 x_323 = x_306;
 lean_ctor_set_tag(x_323, 7);
}
lean_ctor_set(x_323, 0, x_322);
lean_ctor_set(x_323, 1, x_321);
x_324 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
if (lean_is_scalar(x_302)) {
 x_325 = lean_alloc_ctor(7, 2, 0);
} else {
 x_325 = x_302;
 lean_ctor_set_tag(x_325, 7);
}
lean_ctor_set(x_325, 0, x_323);
lean_ctor_set(x_325, 1, x_324);
x_326 = l_Lean_stringToMessageData(x_320);
lean_dec(x_320);
x_327 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_327, 0, x_325);
lean_ctor_set(x_327, 1, x_326);
x_328 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_329 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_329, 0, x_327);
lean_ctor_set(x_329, 1, x_328);
x_330 = 1;
x_331 = 0;
lean_inc(x_7);
x_332 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_179, x_329, x_330, x_331, x_3, x_4, x_5, x_6, x_7, x_8, x_305);
lean_dec(x_179);
x_333 = lean_ctor_get(x_332, 0);
lean_inc(x_333);
x_334 = lean_ctor_get(x_332, 1);
lean_inc(x_334);
lean_dec(x_332);
x_335 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_333, x_3, x_4, x_5, x_6, x_7, x_8, x_334);
lean_dec(x_333);
return x_335;
}
}
}
}
}
}
}
else
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; uint8_t x_339; 
x_336 = lean_unsigned_to_nat(2u);
x_337 = l_Lean_Syntax_getArg(x_1, x_336);
x_338 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__43;
lean_inc(x_337);
x_339 = l_Lean_Syntax_isOfKind(x_337, x_338);
if (x_339 == 0)
{
lean_object* x_340; 
lean_dec(x_337);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_340 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_340;
}
else
{
lean_object* x_341; lean_object* x_342; lean_object* x_343; uint8_t x_344; 
x_341 = lean_unsigned_to_nat(3u);
x_342 = l_Lean_Syntax_getArg(x_1, x_341);
x_343 = lean_unsigned_to_nat(0u);
x_344 = l_Lean_Syntax_matchesNull(x_342, x_343);
if (x_344 == 0)
{
lean_object* x_345; 
lean_dec(x_337);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_345 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_345;
}
else
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; uint8_t x_356; 
x_346 = l_Lean_Syntax_getId(x_337);
x_347 = l_Lean_Syntax_getArgs(x_1);
x_348 = l_Lean_Syntax_getNumArgs(x_1);
x_349 = lean_unsigned_to_nat(1u);
x_350 = lean_nat_sub(x_348, x_349);
lean_dec(x_348);
x_351 = l_Array_toSubarray___rarg(x_347, x_343, x_350);
x_352 = l_Array_ofSubarray___rarg(x_351);
lean_dec(x_351);
lean_inc(x_1);
x_353 = l_Lean_Syntax_setArgs(x_1, x_352);
x_354 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_354, 0, x_353);
x_355 = l_Lean_Elab_addCompletionInfo___at_Lean_Elab_Term_addDotCompletionInfo___spec__1(x_354, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_356 = !lean_is_exclusive(x_355);
if (x_356 == 0)
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; uint8_t x_361; 
x_357 = lean_ctor_get(x_355, 1);
x_358 = lean_ctor_get(x_355, 0);
lean_dec(x_358);
lean_inc(x_346);
lean_inc(x_337);
lean_ctor_set(x_355, 1, x_346);
lean_ctor_set(x_355, 0, x_337);
x_359 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_359, 0, x_355);
x_360 = l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_addDotCompletionInfo___spec__2(x_359, x_3, x_4, x_5, x_6, x_7, x_8, x_357);
x_361 = !lean_is_exclusive(x_360);
if (x_361 == 0)
{
lean_object* x_362; lean_object* x_363; lean_object* x_364; uint8_t x_365; 
x_362 = lean_ctor_get(x_360, 1);
x_363 = lean_ctor_get(x_360, 0);
lean_dec(x_363);
x_364 = lean_st_ref_get(x_8, x_362);
x_365 = !lean_is_exclusive(x_364);
if (x_365 == 0)
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; 
x_366 = lean_ctor_get(x_364, 0);
x_367 = lean_ctor_get(x_364, 1);
x_368 = lean_ctor_get(x_366, 0);
lean_inc(x_368);
lean_dec(x_366);
x_369 = l_Lean_getErrorExplanationRaw_x3f(x_368, x_346);
if (lean_obj_tag(x_369) == 0)
{
lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; 
lean_dec(x_337);
lean_dec(x_2);
lean_dec(x_1);
x_370 = l_Lean_MessageData_ofName(x_346);
x_371 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
lean_ctor_set_tag(x_364, 7);
lean_ctor_set(x_364, 1, x_370);
lean_ctor_set(x_364, 0, x_371);
x_372 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
lean_ctor_set_tag(x_360, 7);
lean_ctor_set(x_360, 1, x_372);
lean_ctor_set(x_360, 0, x_364);
x_373 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_360, x_3, x_4, x_5, x_6, x_7, x_8, x_367);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_373;
}
else
{
lean_object* x_374; lean_object* x_375; lean_object* x_376; 
x_374 = lean_ctor_get(x_369, 0);
lean_inc(x_374);
lean_dec(x_369);
x_375 = lean_ctor_get(x_374, 2);
lean_inc(x_375);
lean_dec(x_374);
x_376 = lean_ctor_get(x_375, 2);
lean_inc(x_376);
lean_dec(x_375);
if (lean_obj_tag(x_376) == 0)
{
lean_object* x_377; lean_object* x_378; 
lean_free_object(x_364);
lean_free_object(x_360);
lean_dec(x_346);
lean_dec(x_337);
x_377 = lean_box(0);
x_378 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_377, x_3, x_4, x_5, x_6, x_7, x_8, x_367);
return x_378;
}
else
{
lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; uint8_t x_387; uint8_t x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; 
x_379 = lean_ctor_get(x_376, 0);
lean_inc(x_379);
lean_dec(x_376);
x_380 = l_Lean_MessageData_ofName(x_346);
x_381 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
lean_ctor_set_tag(x_364, 7);
lean_ctor_set(x_364, 1, x_380);
lean_ctor_set(x_364, 0, x_381);
x_382 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_ctor_set_tag(x_360, 7);
lean_ctor_set(x_360, 1, x_382);
lean_ctor_set(x_360, 0, x_364);
x_383 = l_Lean_stringToMessageData(x_379);
lean_dec(x_379);
x_384 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_384, 0, x_360);
lean_ctor_set(x_384, 1, x_383);
x_385 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_386 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_386, 0, x_384);
lean_ctor_set(x_386, 1, x_385);
x_387 = 1;
x_388 = 0;
lean_inc(x_7);
x_389 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_337, x_386, x_387, x_388, x_3, x_4, x_5, x_6, x_7, x_8, x_367);
lean_dec(x_337);
x_390 = lean_ctor_get(x_389, 0);
lean_inc(x_390);
x_391 = lean_ctor_get(x_389, 1);
lean_inc(x_391);
lean_dec(x_389);
x_392 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_390, x_3, x_4, x_5, x_6, x_7, x_8, x_391);
lean_dec(x_390);
return x_392;
}
}
}
else
{
lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; 
x_393 = lean_ctor_get(x_364, 0);
x_394 = lean_ctor_get(x_364, 1);
lean_inc(x_394);
lean_inc(x_393);
lean_dec(x_364);
x_395 = lean_ctor_get(x_393, 0);
lean_inc(x_395);
lean_dec(x_393);
x_396 = l_Lean_getErrorExplanationRaw_x3f(x_395, x_346);
if (lean_obj_tag(x_396) == 0)
{
lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; 
lean_dec(x_337);
lean_dec(x_2);
lean_dec(x_1);
x_397 = l_Lean_MessageData_ofName(x_346);
x_398 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
x_399 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_399, 0, x_398);
lean_ctor_set(x_399, 1, x_397);
x_400 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
lean_ctor_set_tag(x_360, 7);
lean_ctor_set(x_360, 1, x_400);
lean_ctor_set(x_360, 0, x_399);
x_401 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_360, x_3, x_4, x_5, x_6, x_7, x_8, x_394);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_401;
}
else
{
lean_object* x_402; lean_object* x_403; lean_object* x_404; 
x_402 = lean_ctor_get(x_396, 0);
lean_inc(x_402);
lean_dec(x_396);
x_403 = lean_ctor_get(x_402, 2);
lean_inc(x_403);
lean_dec(x_402);
x_404 = lean_ctor_get(x_403, 2);
lean_inc(x_404);
lean_dec(x_403);
if (lean_obj_tag(x_404) == 0)
{
lean_object* x_405; lean_object* x_406; 
lean_free_object(x_360);
lean_dec(x_346);
lean_dec(x_337);
x_405 = lean_box(0);
x_406 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_405, x_3, x_4, x_5, x_6, x_7, x_8, x_394);
return x_406;
}
else
{
lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; uint8_t x_416; uint8_t x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; 
x_407 = lean_ctor_get(x_404, 0);
lean_inc(x_407);
lean_dec(x_404);
x_408 = l_Lean_MessageData_ofName(x_346);
x_409 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
x_410 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_410, 0, x_409);
lean_ctor_set(x_410, 1, x_408);
x_411 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_ctor_set_tag(x_360, 7);
lean_ctor_set(x_360, 1, x_411);
lean_ctor_set(x_360, 0, x_410);
x_412 = l_Lean_stringToMessageData(x_407);
lean_dec(x_407);
x_413 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_413, 0, x_360);
lean_ctor_set(x_413, 1, x_412);
x_414 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_415 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_415, 0, x_413);
lean_ctor_set(x_415, 1, x_414);
x_416 = 1;
x_417 = 0;
lean_inc(x_7);
x_418 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_337, x_415, x_416, x_417, x_3, x_4, x_5, x_6, x_7, x_8, x_394);
lean_dec(x_337);
x_419 = lean_ctor_get(x_418, 0);
lean_inc(x_419);
x_420 = lean_ctor_get(x_418, 1);
lean_inc(x_420);
lean_dec(x_418);
x_421 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_419, x_3, x_4, x_5, x_6, x_7, x_8, x_420);
lean_dec(x_419);
return x_421;
}
}
}
}
else
{
lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; 
x_422 = lean_ctor_get(x_360, 1);
lean_inc(x_422);
lean_dec(x_360);
x_423 = lean_st_ref_get(x_8, x_422);
x_424 = lean_ctor_get(x_423, 0);
lean_inc(x_424);
x_425 = lean_ctor_get(x_423, 1);
lean_inc(x_425);
if (lean_is_exclusive(x_423)) {
 lean_ctor_release(x_423, 0);
 lean_ctor_release(x_423, 1);
 x_426 = x_423;
} else {
 lean_dec_ref(x_423);
 x_426 = lean_box(0);
}
x_427 = lean_ctor_get(x_424, 0);
lean_inc(x_427);
lean_dec(x_424);
x_428 = l_Lean_getErrorExplanationRaw_x3f(x_427, x_346);
if (lean_obj_tag(x_428) == 0)
{
lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; 
lean_dec(x_337);
lean_dec(x_2);
lean_dec(x_1);
x_429 = l_Lean_MessageData_ofName(x_346);
x_430 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
if (lean_is_scalar(x_426)) {
 x_431 = lean_alloc_ctor(7, 2, 0);
} else {
 x_431 = x_426;
 lean_ctor_set_tag(x_431, 7);
}
lean_ctor_set(x_431, 0, x_430);
lean_ctor_set(x_431, 1, x_429);
x_432 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
x_433 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_433, 0, x_431);
lean_ctor_set(x_433, 1, x_432);
x_434 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_433, x_3, x_4, x_5, x_6, x_7, x_8, x_425);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_434;
}
else
{
lean_object* x_435; lean_object* x_436; lean_object* x_437; 
x_435 = lean_ctor_get(x_428, 0);
lean_inc(x_435);
lean_dec(x_428);
x_436 = lean_ctor_get(x_435, 2);
lean_inc(x_436);
lean_dec(x_435);
x_437 = lean_ctor_get(x_436, 2);
lean_inc(x_437);
lean_dec(x_436);
if (lean_obj_tag(x_437) == 0)
{
lean_object* x_438; lean_object* x_439; 
lean_dec(x_426);
lean_dec(x_346);
lean_dec(x_337);
x_438 = lean_box(0);
x_439 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_438, x_3, x_4, x_5, x_6, x_7, x_8, x_425);
return x_439;
}
else
{
lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; uint8_t x_450; uint8_t x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; 
x_440 = lean_ctor_get(x_437, 0);
lean_inc(x_440);
lean_dec(x_437);
x_441 = l_Lean_MessageData_ofName(x_346);
x_442 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
if (lean_is_scalar(x_426)) {
 x_443 = lean_alloc_ctor(7, 2, 0);
} else {
 x_443 = x_426;
 lean_ctor_set_tag(x_443, 7);
}
lean_ctor_set(x_443, 0, x_442);
lean_ctor_set(x_443, 1, x_441);
x_444 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
x_445 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_445, 0, x_443);
lean_ctor_set(x_445, 1, x_444);
x_446 = l_Lean_stringToMessageData(x_440);
lean_dec(x_440);
x_447 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_447, 0, x_445);
lean_ctor_set(x_447, 1, x_446);
x_448 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_449 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_449, 0, x_447);
lean_ctor_set(x_449, 1, x_448);
x_450 = 1;
x_451 = 0;
lean_inc(x_7);
x_452 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_337, x_449, x_450, x_451, x_3, x_4, x_5, x_6, x_7, x_8, x_425);
lean_dec(x_337);
x_453 = lean_ctor_get(x_452, 0);
lean_inc(x_453);
x_454 = lean_ctor_get(x_452, 1);
lean_inc(x_454);
lean_dec(x_452);
x_455 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_453, x_3, x_4, x_5, x_6, x_7, x_8, x_454);
lean_dec(x_453);
return x_455;
}
}
}
}
else
{
lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; 
x_456 = lean_ctor_get(x_355, 1);
lean_inc(x_456);
lean_dec(x_355);
lean_inc(x_346);
lean_inc(x_337);
x_457 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_457, 0, x_337);
lean_ctor_set(x_457, 1, x_346);
x_458 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_458, 0, x_457);
x_459 = l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_addDotCompletionInfo___spec__2(x_458, x_3, x_4, x_5, x_6, x_7, x_8, x_456);
x_460 = lean_ctor_get(x_459, 1);
lean_inc(x_460);
if (lean_is_exclusive(x_459)) {
 lean_ctor_release(x_459, 0);
 lean_ctor_release(x_459, 1);
 x_461 = x_459;
} else {
 lean_dec_ref(x_459);
 x_461 = lean_box(0);
}
x_462 = lean_st_ref_get(x_8, x_460);
x_463 = lean_ctor_get(x_462, 0);
lean_inc(x_463);
x_464 = lean_ctor_get(x_462, 1);
lean_inc(x_464);
if (lean_is_exclusive(x_462)) {
 lean_ctor_release(x_462, 0);
 lean_ctor_release(x_462, 1);
 x_465 = x_462;
} else {
 lean_dec_ref(x_462);
 x_465 = lean_box(0);
}
x_466 = lean_ctor_get(x_463, 0);
lean_inc(x_466);
lean_dec(x_463);
x_467 = l_Lean_getErrorExplanationRaw_x3f(x_466, x_346);
if (lean_obj_tag(x_467) == 0)
{
lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; 
lean_dec(x_337);
lean_dec(x_2);
lean_dec(x_1);
x_468 = l_Lean_MessageData_ofName(x_346);
x_469 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
if (lean_is_scalar(x_465)) {
 x_470 = lean_alloc_ctor(7, 2, 0);
} else {
 x_470 = x_465;
 lean_ctor_set_tag(x_470, 7);
}
lean_ctor_set(x_470, 0, x_469);
lean_ctor_set(x_470, 1, x_468);
x_471 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
if (lean_is_scalar(x_461)) {
 x_472 = lean_alloc_ctor(7, 2, 0);
} else {
 x_472 = x_461;
 lean_ctor_set_tag(x_472, 7);
}
lean_ctor_set(x_472, 0, x_470);
lean_ctor_set(x_472, 1, x_471);
x_473 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_472, x_3, x_4, x_5, x_6, x_7, x_8, x_464);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_473;
}
else
{
lean_object* x_474; lean_object* x_475; lean_object* x_476; 
x_474 = lean_ctor_get(x_467, 0);
lean_inc(x_474);
lean_dec(x_467);
x_475 = lean_ctor_get(x_474, 2);
lean_inc(x_475);
lean_dec(x_474);
x_476 = lean_ctor_get(x_475, 2);
lean_inc(x_476);
lean_dec(x_475);
if (lean_obj_tag(x_476) == 0)
{
lean_object* x_477; lean_object* x_478; 
lean_dec(x_465);
lean_dec(x_461);
lean_dec(x_346);
lean_dec(x_337);
x_477 = lean_box(0);
x_478 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_477, x_3, x_4, x_5, x_6, x_7, x_8, x_464);
return x_478;
}
else
{
lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; uint8_t x_489; uint8_t x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; 
x_479 = lean_ctor_get(x_476, 0);
lean_inc(x_479);
lean_dec(x_476);
x_480 = l_Lean_MessageData_ofName(x_346);
x_481 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
if (lean_is_scalar(x_465)) {
 x_482 = lean_alloc_ctor(7, 2, 0);
} else {
 x_482 = x_465;
 lean_ctor_set_tag(x_482, 7);
}
lean_ctor_set(x_482, 0, x_481);
lean_ctor_set(x_482, 1, x_480);
x_483 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
if (lean_is_scalar(x_461)) {
 x_484 = lean_alloc_ctor(7, 2, 0);
} else {
 x_484 = x_461;
 lean_ctor_set_tag(x_484, 7);
}
lean_ctor_set(x_484, 0, x_482);
lean_ctor_set(x_484, 1, x_483);
x_485 = l_Lean_stringToMessageData(x_479);
lean_dec(x_479);
x_486 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_486, 0, x_484);
lean_ctor_set(x_486, 1, x_485);
x_487 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_488 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_488, 0, x_486);
lean_ctor_set(x_488, 1, x_487);
x_489 = 1;
x_490 = 0;
lean_inc(x_7);
x_491 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_337, x_488, x_489, x_490, x_3, x_4, x_5, x_6, x_7, x_8, x_464);
lean_dec(x_337);
x_492 = lean_ctor_get(x_491, 0);
lean_inc(x_492);
x_493 = lean_ctor_get(x_491, 1);
lean_inc(x_493);
lean_dec(x_491);
x_494 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_492, x_3, x_4, x_5, x_6, x_7, x_8, x_493);
lean_dec(x_492);
return x_494;
}
}
}
}
}
}
}
else
{
lean_object* x_495; lean_object* x_496; lean_object* x_497; uint8_t x_498; 
x_495 = lean_unsigned_to_nat(1u);
x_496 = l_Lean_Syntax_getArg(x_1, x_495);
x_497 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__43;
lean_inc(x_496);
x_498 = l_Lean_Syntax_isOfKind(x_496, x_497);
if (x_498 == 0)
{
lean_object* x_499; 
lean_dec(x_496);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_499 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_499;
}
else
{
lean_object* x_500; lean_object* x_501; lean_object* x_502; uint8_t x_503; 
x_500 = lean_unsigned_to_nat(2u);
x_501 = l_Lean_Syntax_getArg(x_1, x_500);
x_502 = lean_unsigned_to_nat(0u);
x_503 = l_Lean_Syntax_matchesNull(x_501, x_502);
if (x_503 == 0)
{
lean_object* x_504; 
lean_dec(x_496);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_504 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_504;
}
else
{
lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; uint8_t x_514; 
x_505 = l_Lean_Syntax_getId(x_496);
x_506 = l_Lean_Syntax_getArgs(x_1);
x_507 = l_Lean_Syntax_getNumArgs(x_1);
x_508 = lean_nat_sub(x_507, x_495);
lean_dec(x_507);
x_509 = l_Array_toSubarray___rarg(x_506, x_502, x_508);
x_510 = l_Array_ofSubarray___rarg(x_509);
lean_dec(x_509);
lean_inc(x_1);
x_511 = l_Lean_Syntax_setArgs(x_1, x_510);
x_512 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_512, 0, x_511);
x_513 = l_Lean_Elab_addCompletionInfo___at_Lean_Elab_Term_addDotCompletionInfo___spec__1(x_512, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_514 = !lean_is_exclusive(x_513);
if (x_514 == 0)
{
lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; uint8_t x_519; 
x_515 = lean_ctor_get(x_513, 1);
x_516 = lean_ctor_get(x_513, 0);
lean_dec(x_516);
lean_inc(x_505);
lean_inc(x_496);
lean_ctor_set(x_513, 1, x_505);
lean_ctor_set(x_513, 0, x_496);
x_517 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_517, 0, x_513);
x_518 = l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_addDotCompletionInfo___spec__2(x_517, x_3, x_4, x_5, x_6, x_7, x_8, x_515);
x_519 = !lean_is_exclusive(x_518);
if (x_519 == 0)
{
lean_object* x_520; lean_object* x_521; lean_object* x_522; uint8_t x_523; 
x_520 = lean_ctor_get(x_518, 1);
x_521 = lean_ctor_get(x_518, 0);
lean_dec(x_521);
x_522 = lean_st_ref_get(x_8, x_520);
x_523 = !lean_is_exclusive(x_522);
if (x_523 == 0)
{
lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; 
x_524 = lean_ctor_get(x_522, 0);
x_525 = lean_ctor_get(x_522, 1);
x_526 = lean_ctor_get(x_524, 0);
lean_inc(x_526);
lean_dec(x_524);
x_527 = l_Lean_getErrorExplanationRaw_x3f(x_526, x_505);
if (lean_obj_tag(x_527) == 0)
{
lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; 
lean_dec(x_496);
lean_dec(x_2);
lean_dec(x_1);
x_528 = l_Lean_MessageData_ofName(x_505);
x_529 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
lean_ctor_set_tag(x_522, 7);
lean_ctor_set(x_522, 1, x_528);
lean_ctor_set(x_522, 0, x_529);
x_530 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
lean_ctor_set_tag(x_518, 7);
lean_ctor_set(x_518, 1, x_530);
lean_ctor_set(x_518, 0, x_522);
x_531 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_518, x_3, x_4, x_5, x_6, x_7, x_8, x_525);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_531;
}
else
{
lean_object* x_532; lean_object* x_533; lean_object* x_534; 
x_532 = lean_ctor_get(x_527, 0);
lean_inc(x_532);
lean_dec(x_527);
x_533 = lean_ctor_get(x_532, 2);
lean_inc(x_533);
lean_dec(x_532);
x_534 = lean_ctor_get(x_533, 2);
lean_inc(x_534);
lean_dec(x_533);
if (lean_obj_tag(x_534) == 0)
{
lean_object* x_535; lean_object* x_536; 
lean_free_object(x_522);
lean_free_object(x_518);
lean_dec(x_505);
lean_dec(x_496);
x_535 = lean_box(0);
x_536 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_535, x_3, x_4, x_5, x_6, x_7, x_8, x_525);
return x_536;
}
else
{
lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; uint8_t x_545; uint8_t x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; 
x_537 = lean_ctor_get(x_534, 0);
lean_inc(x_537);
lean_dec(x_534);
x_538 = l_Lean_MessageData_ofName(x_505);
x_539 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
lean_ctor_set_tag(x_522, 7);
lean_ctor_set(x_522, 1, x_538);
lean_ctor_set(x_522, 0, x_539);
x_540 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_ctor_set_tag(x_518, 7);
lean_ctor_set(x_518, 1, x_540);
lean_ctor_set(x_518, 0, x_522);
x_541 = l_Lean_stringToMessageData(x_537);
lean_dec(x_537);
x_542 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_542, 0, x_518);
lean_ctor_set(x_542, 1, x_541);
x_543 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_544 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_544, 0, x_542);
lean_ctor_set(x_544, 1, x_543);
x_545 = 1;
x_546 = 0;
lean_inc(x_7);
x_547 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_496, x_544, x_545, x_546, x_3, x_4, x_5, x_6, x_7, x_8, x_525);
lean_dec(x_496);
x_548 = lean_ctor_get(x_547, 0);
lean_inc(x_548);
x_549 = lean_ctor_get(x_547, 1);
lean_inc(x_549);
lean_dec(x_547);
x_550 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_548, x_3, x_4, x_5, x_6, x_7, x_8, x_549);
lean_dec(x_548);
return x_550;
}
}
}
else
{
lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; 
x_551 = lean_ctor_get(x_522, 0);
x_552 = lean_ctor_get(x_522, 1);
lean_inc(x_552);
lean_inc(x_551);
lean_dec(x_522);
x_553 = lean_ctor_get(x_551, 0);
lean_inc(x_553);
lean_dec(x_551);
x_554 = l_Lean_getErrorExplanationRaw_x3f(x_553, x_505);
if (lean_obj_tag(x_554) == 0)
{
lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; 
lean_dec(x_496);
lean_dec(x_2);
lean_dec(x_1);
x_555 = l_Lean_MessageData_ofName(x_505);
x_556 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
x_557 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_557, 0, x_556);
lean_ctor_set(x_557, 1, x_555);
x_558 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
lean_ctor_set_tag(x_518, 7);
lean_ctor_set(x_518, 1, x_558);
lean_ctor_set(x_518, 0, x_557);
x_559 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_518, x_3, x_4, x_5, x_6, x_7, x_8, x_552);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_559;
}
else
{
lean_object* x_560; lean_object* x_561; lean_object* x_562; 
x_560 = lean_ctor_get(x_554, 0);
lean_inc(x_560);
lean_dec(x_554);
x_561 = lean_ctor_get(x_560, 2);
lean_inc(x_561);
lean_dec(x_560);
x_562 = lean_ctor_get(x_561, 2);
lean_inc(x_562);
lean_dec(x_561);
if (lean_obj_tag(x_562) == 0)
{
lean_object* x_563; lean_object* x_564; 
lean_free_object(x_518);
lean_dec(x_505);
lean_dec(x_496);
x_563 = lean_box(0);
x_564 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_563, x_3, x_4, x_5, x_6, x_7, x_8, x_552);
return x_564;
}
else
{
lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; uint8_t x_574; uint8_t x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; 
x_565 = lean_ctor_get(x_562, 0);
lean_inc(x_565);
lean_dec(x_562);
x_566 = l_Lean_MessageData_ofName(x_505);
x_567 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
x_568 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_568, 0, x_567);
lean_ctor_set(x_568, 1, x_566);
x_569 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_ctor_set_tag(x_518, 7);
lean_ctor_set(x_518, 1, x_569);
lean_ctor_set(x_518, 0, x_568);
x_570 = l_Lean_stringToMessageData(x_565);
lean_dec(x_565);
x_571 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_571, 0, x_518);
lean_ctor_set(x_571, 1, x_570);
x_572 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_573 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_573, 0, x_571);
lean_ctor_set(x_573, 1, x_572);
x_574 = 1;
x_575 = 0;
lean_inc(x_7);
x_576 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_496, x_573, x_574, x_575, x_3, x_4, x_5, x_6, x_7, x_8, x_552);
lean_dec(x_496);
x_577 = lean_ctor_get(x_576, 0);
lean_inc(x_577);
x_578 = lean_ctor_get(x_576, 1);
lean_inc(x_578);
lean_dec(x_576);
x_579 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_577, x_3, x_4, x_5, x_6, x_7, x_8, x_578);
lean_dec(x_577);
return x_579;
}
}
}
}
else
{
lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; 
x_580 = lean_ctor_get(x_518, 1);
lean_inc(x_580);
lean_dec(x_518);
x_581 = lean_st_ref_get(x_8, x_580);
x_582 = lean_ctor_get(x_581, 0);
lean_inc(x_582);
x_583 = lean_ctor_get(x_581, 1);
lean_inc(x_583);
if (lean_is_exclusive(x_581)) {
 lean_ctor_release(x_581, 0);
 lean_ctor_release(x_581, 1);
 x_584 = x_581;
} else {
 lean_dec_ref(x_581);
 x_584 = lean_box(0);
}
x_585 = lean_ctor_get(x_582, 0);
lean_inc(x_585);
lean_dec(x_582);
x_586 = l_Lean_getErrorExplanationRaw_x3f(x_585, x_505);
if (lean_obj_tag(x_586) == 0)
{
lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; 
lean_dec(x_496);
lean_dec(x_2);
lean_dec(x_1);
x_587 = l_Lean_MessageData_ofName(x_505);
x_588 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
if (lean_is_scalar(x_584)) {
 x_589 = lean_alloc_ctor(7, 2, 0);
} else {
 x_589 = x_584;
 lean_ctor_set_tag(x_589, 7);
}
lean_ctor_set(x_589, 0, x_588);
lean_ctor_set(x_589, 1, x_587);
x_590 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
x_591 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_591, 0, x_589);
lean_ctor_set(x_591, 1, x_590);
x_592 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_591, x_3, x_4, x_5, x_6, x_7, x_8, x_583);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_592;
}
else
{
lean_object* x_593; lean_object* x_594; lean_object* x_595; 
x_593 = lean_ctor_get(x_586, 0);
lean_inc(x_593);
lean_dec(x_586);
x_594 = lean_ctor_get(x_593, 2);
lean_inc(x_594);
lean_dec(x_593);
x_595 = lean_ctor_get(x_594, 2);
lean_inc(x_595);
lean_dec(x_594);
if (lean_obj_tag(x_595) == 0)
{
lean_object* x_596; lean_object* x_597; 
lean_dec(x_584);
lean_dec(x_505);
lean_dec(x_496);
x_596 = lean_box(0);
x_597 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_596, x_3, x_4, x_5, x_6, x_7, x_8, x_583);
return x_597;
}
else
{
lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; uint8_t x_608; uint8_t x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; 
x_598 = lean_ctor_get(x_595, 0);
lean_inc(x_598);
lean_dec(x_595);
x_599 = l_Lean_MessageData_ofName(x_505);
x_600 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
if (lean_is_scalar(x_584)) {
 x_601 = lean_alloc_ctor(7, 2, 0);
} else {
 x_601 = x_584;
 lean_ctor_set_tag(x_601, 7);
}
lean_ctor_set(x_601, 0, x_600);
lean_ctor_set(x_601, 1, x_599);
x_602 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
x_603 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_603, 0, x_601);
lean_ctor_set(x_603, 1, x_602);
x_604 = l_Lean_stringToMessageData(x_598);
lean_dec(x_598);
x_605 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_605, 0, x_603);
lean_ctor_set(x_605, 1, x_604);
x_606 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_607 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_607, 0, x_605);
lean_ctor_set(x_607, 1, x_606);
x_608 = 1;
x_609 = 0;
lean_inc(x_7);
x_610 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_496, x_607, x_608, x_609, x_3, x_4, x_5, x_6, x_7, x_8, x_583);
lean_dec(x_496);
x_611 = lean_ctor_get(x_610, 0);
lean_inc(x_611);
x_612 = lean_ctor_get(x_610, 1);
lean_inc(x_612);
lean_dec(x_610);
x_613 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_611, x_3, x_4, x_5, x_6, x_7, x_8, x_612);
lean_dec(x_611);
return x_613;
}
}
}
}
else
{
lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; 
x_614 = lean_ctor_get(x_513, 1);
lean_inc(x_614);
lean_dec(x_513);
lean_inc(x_505);
lean_inc(x_496);
x_615 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_615, 0, x_496);
lean_ctor_set(x_615, 1, x_505);
x_616 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_616, 0, x_615);
x_617 = l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_addDotCompletionInfo___spec__2(x_616, x_3, x_4, x_5, x_6, x_7, x_8, x_614);
x_618 = lean_ctor_get(x_617, 1);
lean_inc(x_618);
if (lean_is_exclusive(x_617)) {
 lean_ctor_release(x_617, 0);
 lean_ctor_release(x_617, 1);
 x_619 = x_617;
} else {
 lean_dec_ref(x_617);
 x_619 = lean_box(0);
}
x_620 = lean_st_ref_get(x_8, x_618);
x_621 = lean_ctor_get(x_620, 0);
lean_inc(x_621);
x_622 = lean_ctor_get(x_620, 1);
lean_inc(x_622);
if (lean_is_exclusive(x_620)) {
 lean_ctor_release(x_620, 0);
 lean_ctor_release(x_620, 1);
 x_623 = x_620;
} else {
 lean_dec_ref(x_620);
 x_623 = lean_box(0);
}
x_624 = lean_ctor_get(x_621, 0);
lean_inc(x_624);
lean_dec(x_621);
x_625 = l_Lean_getErrorExplanationRaw_x3f(x_624, x_505);
if (lean_obj_tag(x_625) == 0)
{
lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; 
lean_dec(x_496);
lean_dec(x_2);
lean_dec(x_1);
x_626 = l_Lean_MessageData_ofName(x_505);
x_627 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
if (lean_is_scalar(x_623)) {
 x_628 = lean_alloc_ctor(7, 2, 0);
} else {
 x_628 = x_623;
 lean_ctor_set_tag(x_628, 7);
}
lean_ctor_set(x_628, 0, x_627);
lean_ctor_set(x_628, 1, x_626);
x_629 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
if (lean_is_scalar(x_619)) {
 x_630 = lean_alloc_ctor(7, 2, 0);
} else {
 x_630 = x_619;
 lean_ctor_set_tag(x_630, 7);
}
lean_ctor_set(x_630, 0, x_628);
lean_ctor_set(x_630, 1, x_629);
x_631 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_630, x_3, x_4, x_5, x_6, x_7, x_8, x_622);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_631;
}
else
{
lean_object* x_632; lean_object* x_633; lean_object* x_634; 
x_632 = lean_ctor_get(x_625, 0);
lean_inc(x_632);
lean_dec(x_625);
x_633 = lean_ctor_get(x_632, 2);
lean_inc(x_633);
lean_dec(x_632);
x_634 = lean_ctor_get(x_633, 2);
lean_inc(x_634);
lean_dec(x_633);
if (lean_obj_tag(x_634) == 0)
{
lean_object* x_635; lean_object* x_636; 
lean_dec(x_623);
lean_dec(x_619);
lean_dec(x_505);
lean_dec(x_496);
x_635 = lean_box(0);
x_636 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_635, x_3, x_4, x_5, x_6, x_7, x_8, x_622);
return x_636;
}
else
{
lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; uint8_t x_647; uint8_t x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; 
x_637 = lean_ctor_get(x_634, 0);
lean_inc(x_637);
lean_dec(x_634);
x_638 = l_Lean_MessageData_ofName(x_505);
x_639 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
if (lean_is_scalar(x_623)) {
 x_640 = lean_alloc_ctor(7, 2, 0);
} else {
 x_640 = x_623;
 lean_ctor_set_tag(x_640, 7);
}
lean_ctor_set(x_640, 0, x_639);
lean_ctor_set(x_640, 1, x_638);
x_641 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
if (lean_is_scalar(x_619)) {
 x_642 = lean_alloc_ctor(7, 2, 0);
} else {
 x_642 = x_619;
 lean_ctor_set_tag(x_642, 7);
}
lean_ctor_set(x_642, 0, x_640);
lean_ctor_set(x_642, 1, x_641);
x_643 = l_Lean_stringToMessageData(x_637);
lean_dec(x_637);
x_644 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_644, 0, x_642);
lean_ctor_set(x_644, 1, x_643);
x_645 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_646 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_646, 0, x_644);
lean_ctor_set(x_646, 1, x_645);
x_647 = 1;
x_648 = 0;
lean_inc(x_7);
x_649 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_496, x_646, x_647, x_648, x_3, x_4, x_5, x_6, x_7, x_8, x_622);
lean_dec(x_496);
x_650 = lean_ctor_get(x_649, 0);
lean_inc(x_650);
x_651 = lean_ctor_get(x_649, 1);
lean_inc(x_651);
lean_dec(x_649);
x_652 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_650, x_3, x_4, x_5, x_6, x_7, x_8, x_651);
lean_dec(x_650);
return x_652;
}
}
}
}
}
}
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
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_errorExplanationExt;
return x_1;
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
x_15 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___closed__1;
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
x_36 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___closed__1;
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
x_59 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___closed__1;
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
x_25 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___closed__1;
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
x_45 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___closed__1;
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
x_76 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___closed__1;
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
x_17 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__43;
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
l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__9 = _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__9();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__9);
l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10 = _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10);
l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__1 = _init_l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__1();
lean_mark_persistent(l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__1);
l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__2 = _init_l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__2();
lean_mark_persistent(l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__2);
l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__3 = _init_l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__3();
lean_mark_persistent(l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__3);
l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__4 = _init_l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__4();
lean_mark_persistent(l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__4);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___closed__1 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___closed__1);
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
