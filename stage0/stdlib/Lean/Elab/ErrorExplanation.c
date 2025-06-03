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
lean_object* l_Lean_Elab_Command_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__5;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__3;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__38;
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__36;
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__16;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__6;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__20;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__42;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_ofRange(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__13;
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__6;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__7;
lean_object* l_Lean_MessageData_note(lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__4;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__3;
lean_object* lean_string_utf8_byte_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__1;
static lean_object* l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___closed__4;
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__8;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__3;
lean_object* l_Lean_FileMap_ofPosition(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__1;
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__4;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1(lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__3;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__46;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__21;
lean_object* l_Lean_Server_documentUriFromModule_x3f(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_NameMap_contains___rarg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_quoteNameMk(lean_object*);
static lean_object* l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__2;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__5;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__7;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__10;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_utf8PosToLspPos(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__17;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__1;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_addDotCompletionInfo___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__11;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__3;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__33;
lean_object* l_Lean_SourceInfo_getPos_x3f(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__4;
extern lean_object* l_Lean_errorDescriptionWidget;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__31;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__15;
lean_object* l_Lean_Syntax_setArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
static lean_object* l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__48;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__3;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__12;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__1;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__49;
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__39;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__2;
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
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__2;
lean_object* l_Array_ofSubarray___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
static lean_object* l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__44;
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__6;
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
lean_object* x_10; lean_object* x_11; lean_object* x_169; uint8_t x_170; 
x_169 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__6;
lean_inc(x_1);
x_170 = l_Lean_Syntax_isOfKind(x_1, x_169);
if (x_170 == 0)
{
lean_object* x_171; uint8_t x_172; 
x_171 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__10;
lean_inc(x_1);
x_172 = l_Lean_Syntax_isOfKind(x_1, x_171);
if (x_172 == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_173 = lean_unsigned_to_nat(1u);
x_174 = l_Lean_Syntax_getArg(x_1, x_173);
x_175 = lean_unsigned_to_nat(4u);
x_10 = x_174;
x_11 = x_175;
goto block_168;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_176 = lean_unsigned_to_nat(2u);
x_177 = l_Lean_Syntax_getArg(x_1, x_176);
x_178 = lean_unsigned_to_nat(5u);
x_10 = x_177;
x_11 = x_178;
goto block_168;
}
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_179 = lean_unsigned_to_nat(2u);
x_180 = l_Lean_Syntax_getArg(x_1, x_179);
x_181 = lean_unsigned_to_nat(5u);
x_10 = x_180;
x_11 = x_181;
goto block_168;
}
block_168:
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_12 = l_Lean_Syntax_getNumArgs(x_1);
x_13 = lean_nat_dec_eq(x_12, x_11);
if (x_13 == 0)
{
lean_dec(x_12);
lean_inc(x_1);
x_14 = x_1;
goto block_160;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_161 = l_Lean_Syntax_getArgs(x_1);
x_162 = lean_unsigned_to_nat(1u);
x_163 = lean_nat_sub(x_12, x_162);
lean_dec(x_12);
x_164 = lean_unsigned_to_nat(0u);
x_165 = l_Array_toSubarray___rarg(x_161, x_164, x_163);
x_166 = l_Array_ofSubarray___rarg(x_165);
lean_dec(x_165);
lean_inc(x_1);
x_167 = l_Lean_Syntax_setArgs(x_1, x_166);
x_14 = x_167;
goto block_160;
}
block_160:
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = l_Lean_Elab_addCompletionInfo___at_Lean_Elab_Term_addDotCompletionInfo___spec__1(x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_18 = lean_ctor_get(x_16, 1);
x_19 = lean_ctor_get(x_16, 0);
lean_dec(x_19);
x_20 = l_Lean_Syntax_getId(x_10);
x_21 = lean_erase_macro_scopes(x_20);
lean_inc(x_21);
lean_inc(x_10);
lean_ctor_set(x_16, 1, x_21);
lean_ctor_set(x_16, 0, x_10);
x_22 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_22, 0, x_16);
x_23 = l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_addDotCompletionInfo___spec__2(x_22, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_ctor_get(x_23, 1);
x_26 = lean_ctor_get(x_23, 0);
lean_dec(x_26);
x_27 = lean_st_ref_get(x_8, x_25);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_ctor_get(x_27, 1);
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_getErrorExplanationRaw_x3f(x_31, x_21);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_33 = l_Lean_MessageData_ofName(x_21);
x_34 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
lean_ctor_set_tag(x_27, 7);
lean_ctor_set(x_27, 1, x_33);
lean_ctor_set(x_27, 0, x_34);
x_35 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
lean_ctor_set_tag(x_23, 7);
lean_ctor_set(x_23, 1, x_35);
lean_ctor_set(x_23, 0, x_27);
x_36 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_32, 0);
lean_inc(x_37);
lean_dec(x_32);
x_38 = lean_ctor_get(x_37, 2);
lean_inc(x_38);
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 2);
lean_inc(x_39);
lean_dec(x_38);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; 
lean_free_object(x_27);
lean_free_object(x_23);
lean_dec(x_21);
lean_dec(x_10);
x_40 = lean_box(0);
x_41 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_40, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; uint8_t x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_42 = lean_ctor_get(x_39, 0);
lean_inc(x_42);
lean_dec(x_39);
x_43 = l_Lean_MessageData_ofName(x_21);
x_44 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
lean_ctor_set_tag(x_27, 7);
lean_ctor_set(x_27, 1, x_43);
lean_ctor_set(x_27, 0, x_44);
x_45 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_ctor_set_tag(x_23, 7);
lean_ctor_set(x_23, 1, x_45);
lean_ctor_set(x_23, 0, x_27);
x_46 = l_Lean_stringToMessageData(x_42);
lean_dec(x_42);
x_47 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_47, 0, x_23);
lean_ctor_set(x_47, 1, x_46);
x_48 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_49 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = 1;
x_51 = 0;
lean_inc(x_7);
x_52 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_10, x_49, x_50, x_51, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
lean_dec(x_10);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_53, x_3, x_4, x_5, x_6, x_7, x_8, x_54);
lean_dec(x_53);
return x_55;
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_56 = lean_ctor_get(x_27, 0);
x_57 = lean_ctor_get(x_27, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_27);
x_58 = lean_ctor_get(x_56, 0);
lean_inc(x_58);
lean_dec(x_56);
x_59 = l_Lean_getErrorExplanationRaw_x3f(x_58, x_21);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_60 = l_Lean_MessageData_ofName(x_21);
x_61 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
x_62 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_60);
x_63 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
lean_ctor_set_tag(x_23, 7);
lean_ctor_set(x_23, 1, x_63);
lean_ctor_set(x_23, 0, x_62);
x_64 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_57);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_59, 0);
lean_inc(x_65);
lean_dec(x_59);
x_66 = lean_ctor_get(x_65, 2);
lean_inc(x_66);
lean_dec(x_65);
x_67 = lean_ctor_get(x_66, 2);
lean_inc(x_67);
lean_dec(x_66);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; 
lean_free_object(x_23);
lean_dec(x_21);
lean_dec(x_10);
x_68 = lean_box(0);
x_69 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_68, x_3, x_4, x_5, x_6, x_7, x_8, x_57);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; uint8_t x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_70 = lean_ctor_get(x_67, 0);
lean_inc(x_70);
lean_dec(x_67);
x_71 = l_Lean_MessageData_ofName(x_21);
x_72 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
x_73 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_71);
x_74 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
lean_ctor_set_tag(x_23, 7);
lean_ctor_set(x_23, 1, x_74);
lean_ctor_set(x_23, 0, x_73);
x_75 = l_Lean_stringToMessageData(x_70);
lean_dec(x_70);
x_76 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_76, 0, x_23);
lean_ctor_set(x_76, 1, x_75);
x_77 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_78 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
x_79 = 1;
x_80 = 0;
lean_inc(x_7);
x_81 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_10, x_78, x_79, x_80, x_3, x_4, x_5, x_6, x_7, x_8, x_57);
lean_dec(x_10);
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_84 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_82, x_3, x_4, x_5, x_6, x_7, x_8, x_83);
lean_dec(x_82);
return x_84;
}
}
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_85 = lean_ctor_get(x_23, 1);
lean_inc(x_85);
lean_dec(x_23);
x_86 = lean_st_ref_get(x_8, x_85);
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
x_90 = lean_ctor_get(x_87, 0);
lean_inc(x_90);
lean_dec(x_87);
x_91 = l_Lean_getErrorExplanationRaw_x3f(x_90, x_21);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_92 = l_Lean_MessageData_ofName(x_21);
x_93 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
if (lean_is_scalar(x_89)) {
 x_94 = lean_alloc_ctor(7, 2, 0);
} else {
 x_94 = x_89;
 lean_ctor_set_tag(x_94, 7);
}
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_92);
x_95 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
x_96 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
x_97 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_96, x_3, x_4, x_5, x_6, x_7, x_8, x_88);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_97;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_91, 0);
lean_inc(x_98);
lean_dec(x_91);
x_99 = lean_ctor_get(x_98, 2);
lean_inc(x_99);
lean_dec(x_98);
x_100 = lean_ctor_get(x_99, 2);
lean_inc(x_100);
lean_dec(x_99);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; lean_object* x_102; 
lean_dec(x_89);
lean_dec(x_21);
lean_dec(x_10);
x_101 = lean_box(0);
x_102 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_101, x_3, x_4, x_5, x_6, x_7, x_8, x_88);
return x_102;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; uint8_t x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_103 = lean_ctor_get(x_100, 0);
lean_inc(x_103);
lean_dec(x_100);
x_104 = l_Lean_MessageData_ofName(x_21);
x_105 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
if (lean_is_scalar(x_89)) {
 x_106 = lean_alloc_ctor(7, 2, 0);
} else {
 x_106 = x_89;
 lean_ctor_set_tag(x_106, 7);
}
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_104);
x_107 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
x_108 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
x_109 = l_Lean_stringToMessageData(x_103);
lean_dec(x_103);
x_110 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
x_111 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_112 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
x_113 = 1;
x_114 = 0;
lean_inc(x_7);
x_115 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_10, x_112, x_113, x_114, x_3, x_4, x_5, x_6, x_7, x_8, x_88);
lean_dec(x_10);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
lean_dec(x_115);
x_118 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_116, x_3, x_4, x_5, x_6, x_7, x_8, x_117);
lean_dec(x_116);
return x_118;
}
}
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_119 = lean_ctor_get(x_16, 1);
lean_inc(x_119);
lean_dec(x_16);
x_120 = l_Lean_Syntax_getId(x_10);
x_121 = lean_erase_macro_scopes(x_120);
lean_inc(x_121);
lean_inc(x_10);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_10);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_123, 0, x_122);
x_124 = l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_addDotCompletionInfo___spec__2(x_123, x_3, x_4, x_5, x_6, x_7, x_8, x_119);
x_125 = lean_ctor_get(x_124, 1);
lean_inc(x_125);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_126 = x_124;
} else {
 lean_dec_ref(x_124);
 x_126 = lean_box(0);
}
x_127 = lean_st_ref_get(x_8, x_125);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_130 = x_127;
} else {
 lean_dec_ref(x_127);
 x_130 = lean_box(0);
}
x_131 = lean_ctor_get(x_128, 0);
lean_inc(x_131);
lean_dec(x_128);
x_132 = l_Lean_getErrorExplanationRaw_x3f(x_131, x_121);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_133 = l_Lean_MessageData_ofName(x_121);
x_134 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2;
if (lean_is_scalar(x_130)) {
 x_135 = lean_alloc_ctor(7, 2, 0);
} else {
 x_135 = x_130;
 lean_ctor_set_tag(x_135, 7);
}
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_133);
x_136 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4;
if (lean_is_scalar(x_126)) {
 x_137 = lean_alloc_ctor(7, 2, 0);
} else {
 x_137 = x_126;
 lean_ctor_set_tag(x_137, 7);
}
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
x_138 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_137, x_3, x_4, x_5, x_6, x_7, x_8, x_129);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_138;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_139 = lean_ctor_get(x_132, 0);
lean_inc(x_139);
lean_dec(x_132);
x_140 = lean_ctor_get(x_139, 2);
lean_inc(x_140);
lean_dec(x_139);
x_141 = lean_ctor_get(x_140, 2);
lean_inc(x_141);
lean_dec(x_140);
if (lean_obj_tag(x_141) == 0)
{
lean_object* x_142; lean_object* x_143; 
lean_dec(x_130);
lean_dec(x_126);
lean_dec(x_121);
lean_dec(x_10);
x_142 = lean_box(0);
x_143 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_142, x_3, x_4, x_5, x_6, x_7, x_8, x_129);
return x_143;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; uint8_t x_154; uint8_t x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_144 = lean_ctor_get(x_141, 0);
lean_inc(x_144);
lean_dec(x_141);
x_145 = l_Lean_MessageData_ofName(x_121);
x_146 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6;
if (lean_is_scalar(x_130)) {
 x_147 = lean_alloc_ctor(7, 2, 0);
} else {
 x_147 = x_130;
 lean_ctor_set_tag(x_147, 7);
}
lean_ctor_set(x_147, 0, x_146);
lean_ctor_set(x_147, 1, x_145);
x_148 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8;
if (lean_is_scalar(x_126)) {
 x_149 = lean_alloc_ctor(7, 2, 0);
} else {
 x_149 = x_126;
 lean_ctor_set_tag(x_149, 7);
}
lean_ctor_set(x_149, 0, x_147);
lean_ctor_set(x_149, 1, x_148);
x_150 = l_Lean_stringToMessageData(x_144);
lean_dec(x_144);
x_151 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_150);
x_152 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10;
x_153 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_153, 0, x_151);
lean_ctor_set(x_153, 1, x_152);
x_154 = 1;
x_155 = 0;
lean_inc(x_7);
x_156 = l_Lean_logAt___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__2(x_10, x_153, x_154, x_155, x_3, x_4, x_5, x_6, x_7, x_8, x_129);
lean_dec(x_10);
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_156, 1);
lean_inc(x_158);
lean_dec(x_156);
x_159 = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___lambda__1(x_1, x_2, x_157, x_3, x_4, x_5, x_6, x_7, x_8, x_158);
lean_dec(x_157);
return x_159;
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
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_st_ref_take(x_7, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_13 = lean_ctor_get(x_9, 1);
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_2);
lean_ctor_set(x_15, 2, x_3);
lean_ctor_set(x_15, 3, x_5);
lean_ctor_set(x_9, 1, x_15);
lean_ctor_set(x_9, 0, x_4);
x_16 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___closed__1;
x_17 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_16, x_14, x_9);
lean_ctor_set(x_11, 0, x_17);
x_18 = lean_st_ref_set(x_7, x_11, x_13);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
x_21 = lean_box(0);
lean_ctor_set(x_18, 0, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_25 = lean_ctor_get(x_9, 1);
x_26 = lean_ctor_get(x_11, 0);
x_27 = lean_ctor_get(x_11, 1);
x_28 = lean_ctor_get(x_11, 2);
x_29 = lean_ctor_get(x_11, 3);
x_30 = lean_ctor_get(x_11, 4);
x_31 = lean_ctor_get(x_11, 5);
x_32 = lean_ctor_get(x_11, 6);
x_33 = lean_ctor_get(x_11, 7);
x_34 = lean_ctor_get(x_11, 8);
x_35 = lean_ctor_get(x_11, 9);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_11);
x_36 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_36, 0, x_1);
lean_ctor_set(x_36, 1, x_2);
lean_ctor_set(x_36, 2, x_3);
lean_ctor_set(x_36, 3, x_5);
lean_ctor_set(x_9, 1, x_36);
lean_ctor_set(x_9, 0, x_4);
x_37 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___closed__1;
x_38 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_37, x_26, x_9);
x_39 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_27);
lean_ctor_set(x_39, 2, x_28);
lean_ctor_set(x_39, 3, x_29);
lean_ctor_set(x_39, 4, x_30);
lean_ctor_set(x_39, 5, x_31);
lean_ctor_set(x_39, 6, x_32);
lean_ctor_set(x_39, 7, x_33);
lean_ctor_set(x_39, 8, x_34);
lean_ctor_set(x_39, 9, x_35);
x_40 = lean_st_ref_set(x_7, x_39, x_25);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_42 = x_40;
} else {
 lean_dec_ref(x_40);
 x_42 = lean_box(0);
}
x_43 = lean_box(0);
if (lean_is_scalar(x_42)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_42;
}
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_41);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_45 = lean_ctor_get(x_9, 0);
x_46 = lean_ctor_get(x_9, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_9);
x_47 = lean_ctor_get(x_45, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
x_49 = lean_ctor_get(x_45, 2);
lean_inc(x_49);
x_50 = lean_ctor_get(x_45, 3);
lean_inc(x_50);
x_51 = lean_ctor_get(x_45, 4);
lean_inc(x_51);
x_52 = lean_ctor_get(x_45, 5);
lean_inc(x_52);
x_53 = lean_ctor_get(x_45, 6);
lean_inc(x_53);
x_54 = lean_ctor_get(x_45, 7);
lean_inc(x_54);
x_55 = lean_ctor_get(x_45, 8);
lean_inc(x_55);
x_56 = lean_ctor_get(x_45, 9);
lean_inc(x_56);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 lean_ctor_release(x_45, 2);
 lean_ctor_release(x_45, 3);
 lean_ctor_release(x_45, 4);
 lean_ctor_release(x_45, 5);
 lean_ctor_release(x_45, 6);
 lean_ctor_release(x_45, 7);
 lean_ctor_release(x_45, 8);
 lean_ctor_release(x_45, 9);
 x_57 = x_45;
} else {
 lean_dec_ref(x_45);
 x_57 = lean_box(0);
}
x_58 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_58, 0, x_1);
lean_ctor_set(x_58, 1, x_2);
lean_ctor_set(x_58, 2, x_3);
lean_ctor_set(x_58, 3, x_5);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_4);
lean_ctor_set(x_59, 1, x_58);
x_60 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___closed__1;
x_61 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_60, x_47, x_59);
if (lean_is_scalar(x_57)) {
 x_62 = lean_alloc_ctor(0, 10, 0);
} else {
 x_62 = x_57;
}
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_48);
lean_ctor_set(x_62, 2, x_49);
lean_ctor_set(x_62, 3, x_50);
lean_ctor_set(x_62, 4, x_51);
lean_ctor_set(x_62, 5, x_52);
lean_ctor_set(x_62, 6, x_53);
lean_ctor_set(x_62, 7, x_54);
lean_ctor_set(x_62, 8, x_55);
lean_ctor_set(x_62, 9, x_56);
x_63 = lean_st_ref_set(x_7, x_62, x_46);
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_65 = x_63;
} else {
 lean_dec_ref(x_63);
 x_65 = lean_box(0);
}
x_66 = lean_box(0);
if (lean_is_scalar(x_65)) {
 x_67 = lean_alloc_ctor(0, 2, 0);
} else {
 x_67 = x_65;
}
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_64);
return x_67;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Lean_Elab_Command_getMainModule___rarg(x_7, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
x_13 = l_Lean_Server_documentUriFromModule_x3f(x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
lean_free_object(x_9);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_box(0);
x_17 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_16, x_6, x_7, x_15);
lean_dec(x_6);
return x_17;
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_6, 1);
lean_inc(x_21);
x_22 = 0;
x_23 = l_Lean_Syntax_getPos_x3f(x_4, x_22);
x_24 = l_Lean_Syntax_getTailPos_x3f(x_4, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_unsigned_to_nat(0u);
lean_inc(x_21);
x_26 = l_Lean_FileMap_utf8PosToLspPos(x_21, x_25);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_21);
lean_inc(x_26);
x_28 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_28, 0, x_20);
lean_ctor_set(x_28, 1, x_26);
lean_ctor_set(x_28, 2, x_26);
lean_ctor_set(x_14, 0, x_28);
x_29 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_14, x_6, x_7, x_18);
lean_dec(x_6);
return x_29;
}
else
{
uint8_t x_30; 
lean_free_object(x_14);
x_30 = !lean_is_exclusive(x_24);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_24, 0);
x_32 = l_Lean_FileMap_utf8PosToLspPos(x_21, x_31);
lean_dec(x_31);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_20);
lean_ctor_set(x_34, 1, x_26);
lean_ctor_set(x_34, 2, x_32);
lean_ctor_set(x_24, 0, x_34);
x_35 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_24, x_6, x_7, x_18);
lean_dec(x_6);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_32, 0);
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_32);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_39, 0, x_20);
lean_ctor_set(x_39, 1, x_26);
lean_ctor_set(x_39, 2, x_38);
lean_ctor_set(x_24, 0, x_39);
x_40 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_24, x_6, x_7, x_18);
lean_dec(x_6);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_41 = lean_ctor_get(x_24, 0);
lean_inc(x_41);
lean_dec(x_24);
x_42 = l_Lean_FileMap_utf8PosToLspPos(x_21, x_41);
lean_dec(x_41);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_45 = x_42;
} else {
 lean_dec_ref(x_42);
 x_45 = lean_box(0);
}
if (lean_is_scalar(x_45)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_45;
}
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_44);
x_47 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_47, 0, x_20);
lean_ctor_set(x_47, 1, x_26);
lean_ctor_set(x_47, 2, x_46);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_48, x_6, x_7, x_18);
lean_dec(x_6);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_26, 0);
x_51 = lean_ctor_get(x_26, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_26);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_21);
lean_inc(x_52);
x_53 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_53, 0, x_20);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_53, 2, x_52);
lean_ctor_set(x_14, 0, x_53);
x_54 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_14, x_6, x_7, x_18);
lean_dec(x_6);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_free_object(x_14);
x_55 = lean_ctor_get(x_24, 0);
lean_inc(x_55);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 x_56 = x_24;
} else {
 lean_dec_ref(x_24);
 x_56 = lean_box(0);
}
x_57 = l_Lean_FileMap_utf8PosToLspPos(x_21, x_55);
lean_dec(x_55);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_60 = x_57;
} else {
 lean_dec_ref(x_57);
 x_60 = lean_box(0);
}
if (lean_is_scalar(x_60)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_60;
}
lean_ctor_set(x_61, 0, x_58);
lean_ctor_set(x_61, 1, x_59);
x_62 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_62, 0, x_20);
lean_ctor_set(x_62, 1, x_52);
lean_ctor_set(x_62, 2, x_61);
if (lean_is_scalar(x_56)) {
 x_63 = lean_alloc_ctor(1, 1, 0);
} else {
 x_63 = x_56;
}
lean_ctor_set(x_63, 0, x_62);
x_64 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_63, x_6, x_7, x_18);
lean_dec(x_6);
return x_64;
}
}
}
else
{
uint8_t x_65; 
lean_free_object(x_14);
x_65 = !lean_is_exclusive(x_23);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_66 = lean_ctor_get(x_23, 0);
lean_inc(x_21);
x_67 = l_Lean_FileMap_utf8PosToLspPos(x_21, x_66);
lean_dec(x_66);
x_68 = !lean_is_exclusive(x_67);
if (x_68 == 0)
{
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_69; lean_object* x_70; 
lean_dec(x_21);
lean_inc(x_67);
x_69 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_69, 0, x_20);
lean_ctor_set(x_69, 1, x_67);
lean_ctor_set(x_69, 2, x_67);
lean_ctor_set(x_23, 0, x_69);
x_70 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_23, x_6, x_7, x_18);
lean_dec(x_6);
return x_70;
}
else
{
uint8_t x_71; 
lean_free_object(x_23);
x_71 = !lean_is_exclusive(x_24);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_72 = lean_ctor_get(x_24, 0);
x_73 = l_Lean_FileMap_utf8PosToLspPos(x_21, x_72);
lean_dec(x_72);
x_74 = !lean_is_exclusive(x_73);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; 
x_75 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_75, 0, x_20);
lean_ctor_set(x_75, 1, x_67);
lean_ctor_set(x_75, 2, x_73);
lean_ctor_set(x_24, 0, x_75);
x_76 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_24, x_6, x_7, x_18);
lean_dec(x_6);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_77 = lean_ctor_get(x_73, 0);
x_78 = lean_ctor_get(x_73, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_73);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_80, 0, x_20);
lean_ctor_set(x_80, 1, x_67);
lean_ctor_set(x_80, 2, x_79);
lean_ctor_set(x_24, 0, x_80);
x_81 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_24, x_6, x_7, x_18);
lean_dec(x_6);
return x_81;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_82 = lean_ctor_get(x_24, 0);
lean_inc(x_82);
lean_dec(x_24);
x_83 = l_Lean_FileMap_utf8PosToLspPos(x_21, x_82);
lean_dec(x_82);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_86 = x_83;
} else {
 lean_dec_ref(x_83);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_85);
x_88 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_88, 0, x_20);
lean_ctor_set(x_88, 1, x_67);
lean_ctor_set(x_88, 2, x_87);
x_89 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_89, 0, x_88);
x_90 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_89, x_6, x_7, x_18);
lean_dec(x_6);
return x_90;
}
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_67, 0);
x_92 = lean_ctor_get(x_67, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_67);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_94; lean_object* x_95; 
lean_dec(x_21);
lean_inc(x_93);
x_94 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_94, 0, x_20);
lean_ctor_set(x_94, 1, x_93);
lean_ctor_set(x_94, 2, x_93);
lean_ctor_set(x_23, 0, x_94);
x_95 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_23, x_6, x_7, x_18);
lean_dec(x_6);
return x_95;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
lean_free_object(x_23);
x_96 = lean_ctor_get(x_24, 0);
lean_inc(x_96);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 x_97 = x_24;
} else {
 lean_dec_ref(x_24);
 x_97 = lean_box(0);
}
x_98 = l_Lean_FileMap_utf8PosToLspPos(x_21, x_96);
lean_dec(x_96);
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_101 = x_98;
} else {
 lean_dec_ref(x_98);
 x_101 = lean_box(0);
}
if (lean_is_scalar(x_101)) {
 x_102 = lean_alloc_ctor(0, 2, 0);
} else {
 x_102 = x_101;
}
lean_ctor_set(x_102, 0, x_99);
lean_ctor_set(x_102, 1, x_100);
x_103 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_103, 0, x_20);
lean_ctor_set(x_103, 1, x_93);
lean_ctor_set(x_103, 2, x_102);
if (lean_is_scalar(x_97)) {
 x_104 = lean_alloc_ctor(1, 1, 0);
} else {
 x_104 = x_97;
}
lean_ctor_set(x_104, 0, x_103);
x_105 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_104, x_6, x_7, x_18);
lean_dec(x_6);
return x_105;
}
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_106 = lean_ctor_get(x_23, 0);
lean_inc(x_106);
lean_dec(x_23);
lean_inc(x_21);
x_107 = l_Lean_FileMap_utf8PosToLspPos(x_21, x_106);
lean_dec(x_106);
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_107, 1);
lean_inc(x_109);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 x_110 = x_107;
} else {
 lean_dec_ref(x_107);
 x_110 = lean_box(0);
}
if (lean_is_scalar(x_110)) {
 x_111 = lean_alloc_ctor(0, 2, 0);
} else {
 x_111 = x_110;
}
lean_ctor_set(x_111, 0, x_108);
lean_ctor_set(x_111, 1, x_109);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
lean_dec(x_21);
lean_inc(x_111);
x_112 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_112, 0, x_20);
lean_ctor_set(x_112, 1, x_111);
lean_ctor_set(x_112, 2, x_111);
x_113 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_113, 0, x_112);
x_114 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_113, x_6, x_7, x_18);
lean_dec(x_6);
return x_114;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_115 = lean_ctor_get(x_24, 0);
lean_inc(x_115);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 x_116 = x_24;
} else {
 lean_dec_ref(x_24);
 x_116 = lean_box(0);
}
x_117 = l_Lean_FileMap_utf8PosToLspPos(x_21, x_115);
lean_dec(x_115);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 lean_ctor_release(x_117, 1);
 x_120 = x_117;
} else {
 lean_dec_ref(x_117);
 x_120 = lean_box(0);
}
if (lean_is_scalar(x_120)) {
 x_121 = lean_alloc_ctor(0, 2, 0);
} else {
 x_121 = x_120;
}
lean_ctor_set(x_121, 0, x_118);
lean_ctor_set(x_121, 1, x_119);
x_122 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_122, 0, x_20);
lean_ctor_set(x_122, 1, x_111);
lean_ctor_set(x_122, 2, x_121);
if (lean_is_scalar(x_116)) {
 x_123 = lean_alloc_ctor(1, 1, 0);
} else {
 x_123 = x_116;
}
lean_ctor_set(x_123, 0, x_122);
x_124 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_123, x_6, x_7, x_18);
lean_dec(x_6);
return x_124;
}
}
}
}
else
{
lean_object* x_125; lean_object* x_126; uint8_t x_127; lean_object* x_128; lean_object* x_129; 
x_125 = lean_ctor_get(x_14, 0);
lean_inc(x_125);
lean_dec(x_14);
x_126 = lean_ctor_get(x_6, 1);
lean_inc(x_126);
x_127 = 0;
x_128 = l_Lean_Syntax_getPos_x3f(x_4, x_127);
x_129 = l_Lean_Syntax_getTailPos_x3f(x_4, x_127);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_130 = lean_unsigned_to_nat(0u);
lean_inc(x_126);
x_131 = l_Lean_FileMap_utf8PosToLspPos(x_126, x_130);
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
 x_135 = lean_alloc_ctor(0, 2, 0);
} else {
 x_135 = x_134;
}
lean_ctor_set(x_135, 0, x_132);
lean_ctor_set(x_135, 1, x_133);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_126);
lean_inc(x_135);
x_136 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_136, 0, x_125);
lean_ctor_set(x_136, 1, x_135);
lean_ctor_set(x_136, 2, x_135);
x_137 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_137, 0, x_136);
x_138 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_137, x_6, x_7, x_18);
lean_dec(x_6);
return x_138;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_139 = lean_ctor_get(x_129, 0);
lean_inc(x_139);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 x_140 = x_129;
} else {
 lean_dec_ref(x_129);
 x_140 = lean_box(0);
}
x_141 = l_Lean_FileMap_utf8PosToLspPos(x_126, x_139);
lean_dec(x_139);
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_141, 1);
lean_inc(x_143);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_144 = x_141;
} else {
 lean_dec_ref(x_141);
 x_144 = lean_box(0);
}
if (lean_is_scalar(x_144)) {
 x_145 = lean_alloc_ctor(0, 2, 0);
} else {
 x_145 = x_144;
}
lean_ctor_set(x_145, 0, x_142);
lean_ctor_set(x_145, 1, x_143);
x_146 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_146, 0, x_125);
lean_ctor_set(x_146, 1, x_135);
lean_ctor_set(x_146, 2, x_145);
if (lean_is_scalar(x_140)) {
 x_147 = lean_alloc_ctor(1, 1, 0);
} else {
 x_147 = x_140;
}
lean_ctor_set(x_147, 0, x_146);
x_148 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_147, x_6, x_7, x_18);
lean_dec(x_6);
return x_148;
}
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_149 = lean_ctor_get(x_128, 0);
lean_inc(x_149);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 x_150 = x_128;
} else {
 lean_dec_ref(x_128);
 x_150 = lean_box(0);
}
lean_inc(x_126);
x_151 = l_Lean_FileMap_utf8PosToLspPos(x_126, x_149);
lean_dec(x_149);
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_151, 1);
lean_inc(x_153);
if (lean_is_exclusive(x_151)) {
 lean_ctor_release(x_151, 0);
 lean_ctor_release(x_151, 1);
 x_154 = x_151;
} else {
 lean_dec_ref(x_151);
 x_154 = lean_box(0);
}
if (lean_is_scalar(x_154)) {
 x_155 = lean_alloc_ctor(0, 2, 0);
} else {
 x_155 = x_154;
}
lean_ctor_set(x_155, 0, x_152);
lean_ctor_set(x_155, 1, x_153);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
lean_dec(x_126);
lean_inc(x_155);
x_156 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_156, 0, x_125);
lean_ctor_set(x_156, 1, x_155);
lean_ctor_set(x_156, 2, x_155);
if (lean_is_scalar(x_150)) {
 x_157 = lean_alloc_ctor(1, 1, 0);
} else {
 x_157 = x_150;
}
lean_ctor_set(x_157, 0, x_156);
x_158 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_157, x_6, x_7, x_18);
lean_dec(x_6);
return x_158;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
lean_dec(x_150);
x_159 = lean_ctor_get(x_129, 0);
lean_inc(x_159);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 x_160 = x_129;
} else {
 lean_dec_ref(x_129);
 x_160 = lean_box(0);
}
x_161 = l_Lean_FileMap_utf8PosToLspPos(x_126, x_159);
lean_dec(x_159);
x_162 = lean_ctor_get(x_161, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_161, 1);
lean_inc(x_163);
if (lean_is_exclusive(x_161)) {
 lean_ctor_release(x_161, 0);
 lean_ctor_release(x_161, 1);
 x_164 = x_161;
} else {
 lean_dec_ref(x_161);
 x_164 = lean_box(0);
}
if (lean_is_scalar(x_164)) {
 x_165 = lean_alloc_ctor(0, 2, 0);
} else {
 x_165 = x_164;
}
lean_ctor_set(x_165, 0, x_162);
lean_ctor_set(x_165, 1, x_163);
x_166 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_166, 0, x_125);
lean_ctor_set(x_166, 1, x_155);
lean_ctor_set(x_166, 2, x_165);
if (lean_is_scalar(x_160)) {
 x_167 = lean_alloc_ctor(1, 1, 0);
} else {
 x_167 = x_160;
}
lean_ctor_set(x_167, 0, x_166);
x_168 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_167, x_6, x_7, x_18);
lean_dec(x_6);
return x_168;
}
}
}
}
}
else
{
uint8_t x_169; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_169 = !lean_is_exclusive(x_13);
if (x_169 == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_170 = lean_ctor_get(x_13, 0);
x_171 = lean_ctor_get(x_6, 6);
lean_inc(x_171);
lean_dec(x_6);
x_172 = lean_io_error_to_string(x_170);
x_173 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_173, 0, x_172);
x_174 = l_Lean_MessageData_ofFormat(x_173);
lean_ctor_set(x_9, 1, x_174);
lean_ctor_set(x_9, 0, x_171);
lean_ctor_set(x_13, 0, x_9);
return x_13;
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_175 = lean_ctor_get(x_13, 0);
x_176 = lean_ctor_get(x_13, 1);
lean_inc(x_176);
lean_inc(x_175);
lean_dec(x_13);
x_177 = lean_ctor_get(x_6, 6);
lean_inc(x_177);
lean_dec(x_6);
x_178 = lean_io_error_to_string(x_175);
x_179 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_179, 0, x_178);
x_180 = l_Lean_MessageData_ofFormat(x_179);
lean_ctor_set(x_9, 1, x_180);
lean_ctor_set(x_9, 0, x_177);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_9);
lean_ctor_set(x_181, 1, x_176);
return x_181;
}
}
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_9, 0);
x_183 = lean_ctor_get(x_9, 1);
lean_inc(x_183);
lean_inc(x_182);
lean_dec(x_9);
x_184 = l_Lean_Server_documentUriFromModule_x3f(x_182, x_183);
if (lean_obj_tag(x_184) == 0)
{
lean_object* x_185; 
x_185 = lean_ctor_get(x_184, 0);
lean_inc(x_185);
if (lean_obj_tag(x_185) == 0)
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_186 = lean_ctor_get(x_184, 1);
lean_inc(x_186);
lean_dec(x_184);
x_187 = lean_box(0);
x_188 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_187, x_6, x_7, x_186);
lean_dec(x_6);
return x_188;
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; uint8_t x_193; lean_object* x_194; lean_object* x_195; 
x_189 = lean_ctor_get(x_184, 1);
lean_inc(x_189);
lean_dec(x_184);
x_190 = lean_ctor_get(x_185, 0);
lean_inc(x_190);
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 x_191 = x_185;
} else {
 lean_dec_ref(x_185);
 x_191 = lean_box(0);
}
x_192 = lean_ctor_get(x_6, 1);
lean_inc(x_192);
x_193 = 0;
x_194 = l_Lean_Syntax_getPos_x3f(x_4, x_193);
x_195 = l_Lean_Syntax_getTailPos_x3f(x_4, x_193);
if (lean_obj_tag(x_194) == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_196 = lean_unsigned_to_nat(0u);
lean_inc(x_192);
x_197 = l_Lean_FileMap_utf8PosToLspPos(x_192, x_196);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 lean_ctor_release(x_197, 1);
 x_200 = x_197;
} else {
 lean_dec_ref(x_197);
 x_200 = lean_box(0);
}
if (lean_is_scalar(x_200)) {
 x_201 = lean_alloc_ctor(0, 2, 0);
} else {
 x_201 = x_200;
}
lean_ctor_set(x_201, 0, x_198);
lean_ctor_set(x_201, 1, x_199);
if (lean_obj_tag(x_195) == 0)
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; 
lean_dec(x_192);
lean_inc(x_201);
x_202 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_202, 0, x_190);
lean_ctor_set(x_202, 1, x_201);
lean_ctor_set(x_202, 2, x_201);
if (lean_is_scalar(x_191)) {
 x_203 = lean_alloc_ctor(1, 1, 0);
} else {
 x_203 = x_191;
}
lean_ctor_set(x_203, 0, x_202);
x_204 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_203, x_6, x_7, x_189);
lean_dec(x_6);
return x_204;
}
else
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
lean_dec(x_191);
x_205 = lean_ctor_get(x_195, 0);
lean_inc(x_205);
if (lean_is_exclusive(x_195)) {
 lean_ctor_release(x_195, 0);
 x_206 = x_195;
} else {
 lean_dec_ref(x_195);
 x_206 = lean_box(0);
}
x_207 = l_Lean_FileMap_utf8PosToLspPos(x_192, x_205);
lean_dec(x_205);
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
 x_211 = lean_alloc_ctor(0, 2, 0);
} else {
 x_211 = x_210;
}
lean_ctor_set(x_211, 0, x_208);
lean_ctor_set(x_211, 1, x_209);
x_212 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_212, 0, x_190);
lean_ctor_set(x_212, 1, x_201);
lean_ctor_set(x_212, 2, x_211);
if (lean_is_scalar(x_206)) {
 x_213 = lean_alloc_ctor(1, 1, 0);
} else {
 x_213 = x_206;
}
lean_ctor_set(x_213, 0, x_212);
x_214 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_213, x_6, x_7, x_189);
lean_dec(x_6);
return x_214;
}
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
lean_dec(x_191);
x_215 = lean_ctor_get(x_194, 0);
lean_inc(x_215);
if (lean_is_exclusive(x_194)) {
 lean_ctor_release(x_194, 0);
 x_216 = x_194;
} else {
 lean_dec_ref(x_194);
 x_216 = lean_box(0);
}
lean_inc(x_192);
x_217 = l_Lean_FileMap_utf8PosToLspPos(x_192, x_215);
lean_dec(x_215);
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_217, 1);
lean_inc(x_219);
if (lean_is_exclusive(x_217)) {
 lean_ctor_release(x_217, 0);
 lean_ctor_release(x_217, 1);
 x_220 = x_217;
} else {
 lean_dec_ref(x_217);
 x_220 = lean_box(0);
}
if (lean_is_scalar(x_220)) {
 x_221 = lean_alloc_ctor(0, 2, 0);
} else {
 x_221 = x_220;
}
lean_ctor_set(x_221, 0, x_218);
lean_ctor_set(x_221, 1, x_219);
if (lean_obj_tag(x_195) == 0)
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; 
lean_dec(x_192);
lean_inc(x_221);
x_222 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_222, 0, x_190);
lean_ctor_set(x_222, 1, x_221);
lean_ctor_set(x_222, 2, x_221);
if (lean_is_scalar(x_216)) {
 x_223 = lean_alloc_ctor(1, 1, 0);
} else {
 x_223 = x_216;
}
lean_ctor_set(x_223, 0, x_222);
x_224 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_223, x_6, x_7, x_189);
lean_dec(x_6);
return x_224;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
lean_dec(x_216);
x_225 = lean_ctor_get(x_195, 0);
lean_inc(x_225);
if (lean_is_exclusive(x_195)) {
 lean_ctor_release(x_195, 0);
 x_226 = x_195;
} else {
 lean_dec_ref(x_195);
 x_226 = lean_box(0);
}
x_227 = l_Lean_FileMap_utf8PosToLspPos(x_192, x_225);
lean_dec(x_225);
x_228 = lean_ctor_get(x_227, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_227, 1);
lean_inc(x_229);
if (lean_is_exclusive(x_227)) {
 lean_ctor_release(x_227, 0);
 lean_ctor_release(x_227, 1);
 x_230 = x_227;
} else {
 lean_dec_ref(x_227);
 x_230 = lean_box(0);
}
if (lean_is_scalar(x_230)) {
 x_231 = lean_alloc_ctor(0, 2, 0);
} else {
 x_231 = x_230;
}
lean_ctor_set(x_231, 0, x_228);
lean_ctor_set(x_231, 1, x_229);
x_232 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_232, 0, x_190);
lean_ctor_set(x_232, 1, x_221);
lean_ctor_set(x_232, 2, x_231);
if (lean_is_scalar(x_226)) {
 x_233 = lean_alloc_ctor(1, 1, 0);
} else {
 x_233 = x_226;
}
lean_ctor_set(x_233, 0, x_232);
x_234 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_5, x_2, x_3, x_233, x_6, x_7, x_189);
lean_dec(x_6);
return x_234;
}
}
}
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_235 = lean_ctor_get(x_184, 0);
lean_inc(x_235);
x_236 = lean_ctor_get(x_184, 1);
lean_inc(x_236);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_237 = x_184;
} else {
 lean_dec_ref(x_184);
 x_237 = lean_box(0);
}
x_238 = lean_ctor_get(x_6, 6);
lean_inc(x_238);
lean_dec(x_6);
x_239 = lean_io_error_to_string(x_235);
x_240 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_240, 0, x_239);
x_241 = l_Lean_MessageData_ofFormat(x_240);
x_242 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_242, 0, x_238);
lean_ctor_set(x_242, 1, x_241);
if (lean_is_scalar(x_237)) {
 x_243 = lean_alloc_ctor(1, 2, 0);
} else {
 x_243 = x_237;
}
lean_ctor_set(x_243, 0, x_242);
lean_ctor_set(x_243, 1, x_236);
return x_243;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_1);
x_10 = l_Lean_ErrorExplanation_processDoc(x_1);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
x_16 = lean_unsigned_to_nat(1u);
x_17 = l_Lean_Syntax_getArg(x_5, x_16);
x_18 = 0;
x_19 = l_Lean_Syntax_getRange_x3f(x_17, x_18);
lean_dec(x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_free_object(x_12);
lean_dec(x_14);
lean_ctor_set_tag(x_10, 3);
lean_ctor_set(x_10, 0, x_15);
x_20 = l_Lean_MessageData_ofFormat(x_10);
x_21 = l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__6(x_20, x_7, x_8, x_9);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_21);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_free_object(x_10);
x_26 = !lean_is_exclusive(x_19);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_ctor_get(x_19, 0);
x_28 = lean_ctor_get(x_7, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_28);
x_30 = l_Lean_FileMap_toPosition(x_28, x_29);
lean_dec(x_29);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_ctor_get(x_30, 1);
lean_dec(x_33);
x_34 = lean_nat_add(x_32, x_14);
lean_dec(x_14);
lean_dec(x_32);
x_35 = lean_unsigned_to_nat(0u);
lean_inc(x_34);
lean_ctor_set(x_30, 1, x_35);
lean_ctor_set(x_30, 0, x_34);
lean_inc(x_28);
x_36 = l_Lean_FileMap_ofPosition(x_28, x_30);
x_37 = lean_nat_add(x_34, x_16);
lean_dec(x_34);
lean_ctor_set(x_12, 1, x_35);
lean_ctor_set(x_12, 0, x_37);
x_38 = l_Lean_FileMap_ofPosition(x_28, x_12);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_36);
lean_ctor_set(x_39, 1, x_38);
x_40 = 1;
x_41 = l_Lean_Syntax_ofRange(x_39, x_40);
lean_ctor_set_tag(x_19, 3);
lean_ctor_set(x_19, 0, x_15);
x_42 = l_Lean_MessageData_ofFormat(x_19);
x_43 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__7(x_41, x_42, x_7, x_8, x_9);
lean_dec(x_41);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
return x_43;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_48 = lean_ctor_get(x_30, 0);
lean_inc(x_48);
lean_dec(x_30);
x_49 = lean_nat_add(x_48, x_14);
lean_dec(x_14);
lean_dec(x_48);
x_50 = lean_unsigned_to_nat(0u);
lean_inc(x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
lean_inc(x_28);
x_52 = l_Lean_FileMap_ofPosition(x_28, x_51);
x_53 = lean_nat_add(x_49, x_16);
lean_dec(x_49);
lean_ctor_set(x_12, 1, x_50);
lean_ctor_set(x_12, 0, x_53);
x_54 = l_Lean_FileMap_ofPosition(x_28, x_12);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_54);
x_56 = 1;
x_57 = l_Lean_Syntax_ofRange(x_55, x_56);
lean_ctor_set_tag(x_19, 3);
lean_ctor_set(x_19, 0, x_15);
x_58 = l_Lean_MessageData_ofFormat(x_19);
x_59 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__7(x_57, x_58, x_7, x_8, x_9);
lean_dec(x_57);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_62 = x_59;
} else {
 lean_dec_ref(x_59);
 x_62 = lean_box(0);
}
if (lean_is_scalar(x_62)) {
 x_63 = lean_alloc_ctor(1, 2, 0);
} else {
 x_63 = x_62;
}
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_61);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_64 = lean_ctor_get(x_19, 0);
lean_inc(x_64);
lean_dec(x_19);
x_65 = lean_ctor_get(x_7, 1);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 0);
lean_inc(x_66);
lean_dec(x_64);
lean_inc(x_65);
x_67 = l_Lean_FileMap_toPosition(x_65, x_66);
lean_dec(x_66);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_69 = x_67;
} else {
 lean_dec_ref(x_67);
 x_69 = lean_box(0);
}
x_70 = lean_nat_add(x_68, x_14);
lean_dec(x_14);
lean_dec(x_68);
x_71 = lean_unsigned_to_nat(0u);
lean_inc(x_70);
if (lean_is_scalar(x_69)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_69;
}
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
lean_inc(x_65);
x_73 = l_Lean_FileMap_ofPosition(x_65, x_72);
x_74 = lean_nat_add(x_70, x_16);
lean_dec(x_70);
lean_ctor_set(x_12, 1, x_71);
lean_ctor_set(x_12, 0, x_74);
x_75 = l_Lean_FileMap_ofPosition(x_65, x_12);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_75);
x_77 = 1;
x_78 = l_Lean_Syntax_ofRange(x_76, x_77);
x_79 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_79, 0, x_15);
x_80 = l_Lean_MessageData_ofFormat(x_79);
x_81 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__7(x_78, x_80, x_7, x_8, x_9);
lean_dec(x_78);
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_84 = x_81;
} else {
 lean_dec_ref(x_81);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(1, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; lean_object* x_91; 
x_86 = lean_ctor_get(x_12, 0);
x_87 = lean_ctor_get(x_12, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_12);
x_88 = lean_unsigned_to_nat(1u);
x_89 = l_Lean_Syntax_getArg(x_5, x_88);
x_90 = 0;
x_91 = l_Lean_Syntax_getRange_x3f(x_89, x_90);
lean_dec(x_89);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_86);
lean_ctor_set_tag(x_10, 3);
lean_ctor_set(x_10, 0, x_87);
x_92 = l_Lean_MessageData_ofFormat(x_10);
x_93 = l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__6(x_92, x_7, x_8, x_9);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_96 = x_93;
} else {
 lean_dec_ref(x_93);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(1, 2, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
lean_free_object(x_10);
x_98 = lean_ctor_get(x_91, 0);
lean_inc(x_98);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 x_99 = x_91;
} else {
 lean_dec_ref(x_91);
 x_99 = lean_box(0);
}
x_100 = lean_ctor_get(x_7, 1);
lean_inc(x_100);
x_101 = lean_ctor_get(x_98, 0);
lean_inc(x_101);
lean_dec(x_98);
lean_inc(x_100);
x_102 = l_Lean_FileMap_toPosition(x_100, x_101);
lean_dec(x_101);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_104 = x_102;
} else {
 lean_dec_ref(x_102);
 x_104 = lean_box(0);
}
x_105 = lean_nat_add(x_103, x_86);
lean_dec(x_86);
lean_dec(x_103);
x_106 = lean_unsigned_to_nat(0u);
lean_inc(x_105);
if (lean_is_scalar(x_104)) {
 x_107 = lean_alloc_ctor(0, 2, 0);
} else {
 x_107 = x_104;
}
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
lean_inc(x_100);
x_108 = l_Lean_FileMap_ofPosition(x_100, x_107);
x_109 = lean_nat_add(x_105, x_88);
lean_dec(x_105);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_106);
x_111 = l_Lean_FileMap_ofPosition(x_100, x_110);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_108);
lean_ctor_set(x_112, 1, x_111);
x_113 = 1;
x_114 = l_Lean_Syntax_ofRange(x_112, x_113);
if (lean_is_scalar(x_99)) {
 x_115 = lean_alloc_ctor(3, 1, 0);
} else {
 x_115 = x_99;
 lean_ctor_set_tag(x_115, 3);
}
lean_ctor_set(x_115, 0, x_87);
x_116 = l_Lean_MessageData_ofFormat(x_115);
x_117 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__7(x_114, x_116, x_7, x_8, x_9);
lean_dec(x_114);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 lean_ctor_release(x_117, 1);
 x_120 = x_117;
} else {
 lean_dec_ref(x_117);
 x_120 = lean_box(0);
}
if (lean_is_scalar(x_120)) {
 x_121 = lean_alloc_ctor(1, 2, 0);
} else {
 x_121 = x_120;
}
lean_ctor_set(x_121, 0, x_118);
lean_ctor_set(x_121, 1, x_119);
return x_121;
}
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; lean_object* x_129; 
x_122 = lean_ctor_get(x_10, 0);
lean_inc(x_122);
lean_dec(x_10);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
if (lean_is_exclusive(x_122)) {
 lean_ctor_release(x_122, 0);
 lean_ctor_release(x_122, 1);
 x_125 = x_122;
} else {
 lean_dec_ref(x_122);
 x_125 = lean_box(0);
}
x_126 = lean_unsigned_to_nat(1u);
x_127 = l_Lean_Syntax_getArg(x_5, x_126);
x_128 = 0;
x_129 = l_Lean_Syntax_getRange_x3f(x_127, x_128);
lean_dec(x_127);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_125);
lean_dec(x_123);
x_130 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_130, 0, x_124);
x_131 = l_Lean_MessageData_ofFormat(x_130);
x_132 = l_Lean_throwError___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__6(x_131, x_7, x_8, x_9);
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_132, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_135 = x_132;
} else {
 lean_dec_ref(x_132);
 x_135 = lean_box(0);
}
if (lean_is_scalar(x_135)) {
 x_136 = lean_alloc_ctor(1, 2, 0);
} else {
 x_136 = x_135;
}
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_134);
return x_136;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; uint8_t x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_137 = lean_ctor_get(x_129, 0);
lean_inc(x_137);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 x_138 = x_129;
} else {
 lean_dec_ref(x_129);
 x_138 = lean_box(0);
}
x_139 = lean_ctor_get(x_7, 1);
lean_inc(x_139);
x_140 = lean_ctor_get(x_137, 0);
lean_inc(x_140);
lean_dec(x_137);
lean_inc(x_139);
x_141 = l_Lean_FileMap_toPosition(x_139, x_140);
lean_dec(x_140);
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_143 = x_141;
} else {
 lean_dec_ref(x_141);
 x_143 = lean_box(0);
}
x_144 = lean_nat_add(x_142, x_123);
lean_dec(x_123);
lean_dec(x_142);
x_145 = lean_unsigned_to_nat(0u);
lean_inc(x_144);
if (lean_is_scalar(x_143)) {
 x_146 = lean_alloc_ctor(0, 2, 0);
} else {
 x_146 = x_143;
}
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
lean_inc(x_139);
x_147 = l_Lean_FileMap_ofPosition(x_139, x_146);
x_148 = lean_nat_add(x_144, x_126);
lean_dec(x_144);
if (lean_is_scalar(x_125)) {
 x_149 = lean_alloc_ctor(0, 2, 0);
} else {
 x_149 = x_125;
}
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_145);
x_150 = l_Lean_FileMap_ofPosition(x_139, x_149);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_147);
lean_ctor_set(x_151, 1, x_150);
x_152 = 1;
x_153 = l_Lean_Syntax_ofRange(x_151, x_152);
if (lean_is_scalar(x_138)) {
 x_154 = lean_alloc_ctor(3, 1, 0);
} else {
 x_154 = x_138;
 lean_ctor_set_tag(x_154, 3);
}
lean_ctor_set(x_154, 0, x_124);
x_155 = l_Lean_MessageData_ofFormat(x_154);
x_156 = l_Lean_throwErrorAt___at_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___spec__7(x_153, x_155, x_7, x_8, x_9);
lean_dec(x_153);
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_156, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_156)) {
 lean_ctor_release(x_156, 0);
 lean_ctor_release(x_156, 1);
 x_159 = x_156;
} else {
 lean_dec_ref(x_156);
 x_159 = lean_box(0);
}
if (lean_is_scalar(x_159)) {
 x_160 = lean_alloc_ctor(1, 2, 0);
} else {
 x_160 = x_159;
}
lean_ctor_set(x_160, 0, x_157);
lean_ctor_set(x_160, 1, x_158);
return x_160;
}
}
}
else
{
lean_object* x_161; lean_object* x_162; 
x_161 = lean_ctor_get(x_10, 0);
lean_inc(x_161);
lean_dec(x_10);
x_162 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__3(x_1, x_2, x_3, x_4, x_161, x_7, x_8, x_9);
return x_162;
}
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Cannot add explanation: An error explanation already exists for `", 65, 65);
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
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_expandThrowNamedError___closed__26;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
x_29 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4(x_14, x_2, x_3, x_4, x_1, x_28, x_6, x_7, x_19);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
lean_dec(x_14);
lean_dec(x_2);
x_30 = l_Lean_MessageData_ofName(x_3);
x_31 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__2;
lean_ctor_set_tag(x_16, 7);
lean_ctor_set(x_16, 1, x_30);
lean_ctor_set(x_16, 0, x_31);
x_32 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__3;
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
x_49 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4(x_14, x_2, x_3, x_4, x_1, x_48, x_6, x_7, x_39);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_14);
lean_dec(x_2);
x_50 = l_Lean_MessageData_ofName(x_3);
x_51 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__2;
x_52 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
x_53 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__3;
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
x_80 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4(x_65, x_2, x_3, x_4, x_1, x_79, x_6, x_7, x_69);
return x_80;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_65);
lean_dec(x_2);
x_81 = l_Lean_MessageData_ofName(x_3);
x_82 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__2;
if (lean_is_scalar(x_70)) {
 x_83 = lean_alloc_ctor(7, 2, 0);
} else {
 x_83 = x_70;
 lean_ctor_set_tag(x_83, 7);
}
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
x_84 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__3;
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
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Invalid name `", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("`: Error explanation names must have two components", 51, 51);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("The first component of an error explanation name identifies the package from which the error originates, and the second identifies the error itself.", 148, 148);
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
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__6;
x_2 = l_Lean_MessageData_note(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
x_13 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__2;
x_14 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
x_15 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__4;
x_16 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__7;
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
x_25 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5(x_1, x_2, x_3, x_4, x_24, x_6, x_7, x_8);
lean_dec(x_4);
return x_25;
}
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ErrorExplanation", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Metadata", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1;
x_2 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__1;
x_3 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__2;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__3;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Invalid name for error explanation: `", 37, 37);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__4;
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
x_16 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6(x_3, x_11, x_13, x_2, x_15, x_5, x_6, x_12);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_13);
lean_dec(x_11);
lean_inc(x_2);
x_17 = l_Lean_MessageData_ofSyntax(x_2);
x_18 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__6;
x_19 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__3;
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
x_2 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__1;
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
x_42 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7(x_21, x_16, x_9, x_41, x_2, x_3, x_30);
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
x_67 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7(x_21, x_16, x_9, x_66, x_52, x_3, x_55);
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
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
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
x_3 = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__1;
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
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__1 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__1();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__1);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__2 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__2();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__2);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__3 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__3();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__5___closed__3);
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
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__7 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__7();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__6___closed__7);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__1 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__1();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__1);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__2 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__2();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__2);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__3 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__3();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__3);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__4 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__4();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__4);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__5 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__5();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__5);
l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__6 = _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__6();
lean_mark_persistent(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lambda__7___closed__6);
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
