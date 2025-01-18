// Lean compiler output
// Module: Lean.Meta.AtomAssignment
// Imports: Lean.Meta.Basic Lean.Meta.AppBuilder Lean.PrettyPrinter.Delaborator
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
static lean_object* l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__3;
static lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__3;
static lean_object* l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__2;
static lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__4;
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__3;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__5(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf___boxed(lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__12;
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___closed__2;
static lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__1;
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__12;
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM___aux__Lean__Meta__AtomAssignment______macroRules__Lean__Meta__AtomAssignmentM__term_uff62___uff63__1___boxed(lean_object*, lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_getAtomAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__3;
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__2;
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
static lean_object* l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__7;
lean_object* lean_array_fget(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__8;
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4_(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___lambda__2___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__8;
static lean_object* l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__15;
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_assignableAtom(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__2;
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__4;
lean_object* lean_string_push(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_assignableAtom___rarg___boxed(lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__10;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withTrackingAtomAssignment___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf(lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__9;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
static lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__1;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
static lean_object* l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__1;
lean_object* lean_nat_div(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__10;
LEAN_EXPORT lean_object* l_pp_inlineAssignmentAtoms;
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__4(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf___closed__2;
static lean_object* l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_assignableAtom___rarg(lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__13;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__4;
static lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__6;
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__3;
static lean_object* l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___closed__1;
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Meta_AtomAssignmentM_mkAssignableAtom___spec__1___boxed(lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__5;
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__6;
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__2___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__1;
uint64_t l_Lean_Expr_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__2;
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__14;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___closed__1;
static lean_object* l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__4;
static lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_assignableAtom___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__8;
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__1;
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Option_register___at_Lean_Elab_initFn____x40_Lean_Elab_AutoBound___hyg_6____spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___closed__1;
static lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__6;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__2(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___closed__2;
static lean_object* l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Meta_AtomAssignmentM_mkAssignableAtom___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__2;
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__2;
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__9;
static lean_object* l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_withTrackingAtomAssignment(lean_object*);
LEAN_EXPORT uint8_t l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___lambda__1(lean_object*);
static lean_object* l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__3;
lean_object* l_String_toName(lean_object*);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_term_uff62___uff63;
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__5;
lean_object* lean_nat_mul(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__4;
LEAN_EXPORT uint8_t l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___lambda__2(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_0__Array_qpartition___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__2;
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__6;
static lean_object* l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__1;
lean_object* l___private_Lean_ToExpr_0__Lean_Name_toExprAux(lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__11;
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
size_t lean_usize_add(size_t, size_t);
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__14;
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__16;
lean_object* lean_array_uget(lean_object*, size_t);
static lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__2;
size_t lean_array_size(lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__13;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__4;
static lean_object* l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__5;
static lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__9;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__5;
lean_object* l_String_toSubstring_x27(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM___aux__Lean__Meta__AtomAssignment______macroRules__Lean__Meta__AtomAssignmentM__term_uff62___uff63__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__17;
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l___private_Init_Data_Repr_0__Nat_reprFast(lean_object*);
static lean_object* l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__1;
lean_object* l_Char_ofNat(lean_object*);
size_t lean_usize_land(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_getAtomAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__1(lean_object*, lean_object*);
static lean_object* _init_l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("pp", 2, 2);
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("inlineAssignmentAtoms", 21, 21);
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__1;
x_2 = l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(pretty printer) display atomic values in equational assignments inline rather than as variable names", 101, 101);
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__5() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 1;
x_2 = l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__1;
x_3 = l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__4;
x_4 = lean_box(x_1);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__3;
x_3 = l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__5;
x_4 = l_Lean_Option_register___at_Lean_Elab_initFn____x40_Lean_Elab_AutoBound___hyg_6____spec__1(x_2, x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Meta", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("AtomAssignmentM", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term｢_｣", 11, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__1;
x_2 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__2;
x_3 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__3;
x_4 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("｢", 3, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__8;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__10;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__11;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__7;
x_2 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__9;
x_3 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__12;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("｣", 3, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__14;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__7;
x_2 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__13;
x_3 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__15;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__5;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__16;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__17;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM___aux__Lean__Meta__AtomAssignment______macroRules__Lean__Meta__AtomAssignmentM__term_uff62___uff63__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__5;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM___aux__Lean__Meta__AtomAssignment______macroRules__Lean__Meta__AtomAssignmentM__term_uff62___uff63__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_AtomAssignmentM___aux__Lean__Meta__AtomAssignment______macroRules__Lean__Meta__AtomAssignmentM__term_uff62___uff63__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_assignableAtom___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_assignableAtom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_AtomAssignmentM_assignableAtom___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_assignableAtom___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_AtomAssignmentM_assignableAtom___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_assignableAtom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_AtomAssignmentM_assignableAtom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_getAtomAssignment(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_getAtomAssignment___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_AtomAssignmentM_getAtomAssignment(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
static lean_object* _init_l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint32_t x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_2 = lean_unsigned_to_nat(26u);
x_3 = lean_nat_mod(x_1, x_2);
x_4 = lean_unsigned_to_nat(97u);
x_5 = lean_nat_add(x_4, x_3);
lean_dec(x_3);
x_6 = l_Char_ofNat(x_5);
lean_dec(x_5);
x_7 = lean_unbox_uint32(x_6);
lean_dec(x_6);
x_8 = lean_nat_dec_lt(x_1, x_2);
x_9 = l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf___closed__1;
x_10 = lean_string_push(x_9, x_7);
x_11 = lean_string_append(x_9, x_10);
lean_dec(x_10);
x_12 = lean_string_append(x_11, x_9);
if (x_8 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_nat_div(x_1, x_2);
x_14 = l___private_Init_Data_Repr_0__Nat_reprFast(x_13);
x_15 = l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf___closed__2;
x_16 = lean_string_append(x_15, x_14);
lean_dec(x_14);
x_17 = lean_string_append(x_16, x_9);
x_18 = lean_string_append(x_12, x_17);
lean_dec(x_17);
x_19 = lean_string_append(x_18, x_9);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_string_append(x_12, x_9);
x_21 = lean_string_append(x_20, x_9);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_4, 6);
lean_inc(x_11);
x_12 = lean_ctor_get(x_4, 7);
lean_inc(x_12);
lean_dec(x_4);
x_13 = l_Lean_ResolveName_resolveGlobalName(x_10, x_11, x_12, x_1);
lean_ctor_set(x_7, 0, x_13);
return x_7;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_4, 6);
lean_inc(x_17);
x_18 = lean_ctor_get(x_4, 7);
lean_inc(x_18);
lean_dec(x_4);
x_19 = l_Lean_ResolveName_resolveGlobalName(x_16, x_17, x_18, x_1);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_15);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_7 = 1;
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
}
static lean_object* _init_l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___lambda__1___boxed), 6, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_box(0);
x_8 = l_Lean_Name_str___override(x_7, x_1);
lean_inc(x_4);
lean_inc(x_8);
x_9 = l_Lean_resolveGlobalName___at___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___spec__1(x_8, x_2, x_3, x_4, x_5, x_6);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
x_13 = l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___closed__1;
x_14 = l_List_isEmpty___rarg(x_11);
lean_dec(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_free_object(x_9);
lean_dec(x_8);
x_15 = lean_box(0);
x_16 = lean_apply_6(x_13, x_15, x_2, x_3, x_4, x_5, x_12);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_2, 2);
lean_inc(x_17);
x_18 = l_Lean_LocalContext_findFromUserName_x3f(x_17, x_8);
lean_dec(x_8);
lean_dec(x_17);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; lean_object* x_20; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = 0;
x_20 = lean_box(x_19);
lean_ctor_set(x_9, 0, x_20);
return x_9;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_18);
lean_free_object(x_9);
x_21 = lean_box(0);
x_22 = lean_apply_6(x_13, x_21, x_2, x_3, x_4, x_5, x_12);
return x_22;
}
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = lean_ctor_get(x_9, 0);
x_24 = lean_ctor_get(x_9, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_9);
x_25 = l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___closed__1;
x_26 = l_List_isEmpty___rarg(x_23);
lean_dec(x_23);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_8);
x_27 = lean_box(0);
x_28 = lean_apply_6(x_25, x_27, x_2, x_3, x_4, x_5, x_24);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_2, 2);
lean_inc(x_29);
x_30 = l_Lean_LocalContext_findFromUserName_x3f(x_29, x_8);
lean_dec(x_8);
lean_dec(x_29);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = 0;
x_32 = lean_box(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_24);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_30);
x_34 = lean_box(0);
x_35 = lean_apply_6(x_25, x_34, x_2, x_3, x_4, x_5, x_24);
return x_35;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_resolveGlobalName___at___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf(x_1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_9 = l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope(x_8, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
uint8_t x_12; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_9, 0);
lean_dec(x_13);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_2);
lean_ctor_set(x_9, 0, x_14);
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_dec(x_9);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_dec(x_9);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_1, x_19);
lean_dec(x_1);
x_1 = x_20;
x_7 = x_18;
goto _start;
}
}
else
{
uint8_t x_22; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_9);
if (x_22 == 0)
{
return x_9;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_9, 0);
x_24 = lean_ctor_get(x_9, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_9);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_expr_eqv(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Expr_hash(x_4);
x_8 = 32;
x_9 = lean_uint64_shift_right(x_7, x_8);
x_10 = lean_uint64_xor(x_7, x_9);
x_11 = 16;
x_12 = lean_uint64_shift_right(x_10, x_11);
x_13 = lean_uint64_xor(x_10, x_12);
x_14 = lean_uint64_to_usize(x_13);
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 1;
x_17 = lean_usize_sub(x_15, x_16);
x_18 = lean_usize_land(x_14, x_17);
x_19 = lean_array_uget(x_1, x_18);
lean_ctor_set(x_2, 2, x_19);
x_20 = lean_array_uset(x_1, x_18, x_2);
x_1 = x_20;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = lean_ctor_get(x_2, 1);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_2);
x_25 = lean_array_get_size(x_1);
x_26 = l_Lean_Expr_hash(x_22);
x_27 = 32;
x_28 = lean_uint64_shift_right(x_26, x_27);
x_29 = lean_uint64_xor(x_26, x_28);
x_30 = 16;
x_31 = lean_uint64_shift_right(x_29, x_30);
x_32 = lean_uint64_xor(x_29, x_31);
x_33 = lean_uint64_to_usize(x_32);
x_34 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_35 = 1;
x_36 = lean_usize_sub(x_34, x_35);
x_37 = lean_usize_land(x_33, x_36);
x_38 = lean_array_uget(x_1, x_37);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_22);
lean_ctor_set(x_39, 1, x_23);
lean_ctor_set(x_39, 2, x_38);
x_40 = lean_array_uset(x_1, x_37, x_39);
x_1 = x_40;
x_2 = x_24;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__5(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_mul(x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_mk_array(x_4, x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__4(x_7, x_1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_expr_eqv(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__6(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_expr_eqv(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__6(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_8, x_9);
x_11 = l_Lean_Loop_forIn_loop___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__1(x_10, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
x_17 = l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf(x_8);
lean_dec(x_8);
x_18 = l_String_toName(x_17);
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
lean_dec(x_21);
x_22 = !lean_is_exclusive(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; size_t x_37; lean_object* x_38; uint8_t x_39; 
x_23 = lean_ctor_get(x_20, 0);
x_24 = lean_ctor_get(x_20, 1);
x_25 = lean_array_get_size(x_24);
x_26 = l_Lean_Expr_hash(x_1);
x_27 = 32;
x_28 = lean_uint64_shift_right(x_26, x_27);
x_29 = lean_uint64_xor(x_26, x_28);
x_30 = 16;
x_31 = lean_uint64_shift_right(x_29, x_30);
x_32 = lean_uint64_xor(x_29, x_31);
x_33 = lean_uint64_to_usize(x_32);
x_34 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_35 = 1;
x_36 = lean_usize_sub(x_34, x_35);
x_37 = lean_usize_land(x_33, x_36);
x_38 = lean_array_uget(x_24, x_37);
x_39 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__2(x_1, x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_40 = lean_nat_add(x_23, x_9);
lean_dec(x_23);
lean_inc(x_18);
x_41 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_41, 0, x_1);
lean_ctor_set(x_41, 1, x_18);
lean_ctor_set(x_41, 2, x_38);
x_42 = lean_array_uset(x_24, x_37, x_41);
x_43 = lean_unsigned_to_nat(4u);
x_44 = lean_nat_mul(x_40, x_43);
x_45 = lean_unsigned_to_nat(3u);
x_46 = lean_nat_div(x_44, x_45);
lean_dec(x_44);
x_47 = lean_array_get_size(x_42);
x_48 = lean_nat_dec_le(x_46, x_47);
lean_dec(x_47);
lean_dec(x_46);
if (x_48 == 0)
{
lean_object* x_49; 
x_49 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__3(x_42);
lean_ctor_set(x_20, 1, x_49);
lean_ctor_set(x_20, 0, x_40);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_13, 0, x_18);
return x_11;
}
else
{
lean_ctor_set(x_20, 1, x_42);
lean_ctor_set(x_20, 0, x_40);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_13, 0, x_18);
return x_11;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_box(0);
x_51 = lean_array_uset(x_24, x_37, x_50);
lean_inc(x_18);
x_52 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__6(x_1, x_18, x_38);
x_53 = lean_array_uset(x_51, x_37, x_52);
lean_ctor_set(x_20, 1, x_53);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_13, 0, x_18);
return x_11;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; uint64_t x_57; uint64_t x_58; uint64_t x_59; uint64_t x_60; uint64_t x_61; uint64_t x_62; uint64_t x_63; size_t x_64; size_t x_65; size_t x_66; size_t x_67; size_t x_68; lean_object* x_69; uint8_t x_70; 
x_54 = lean_ctor_get(x_20, 0);
x_55 = lean_ctor_get(x_20, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_20);
x_56 = lean_array_get_size(x_55);
x_57 = l_Lean_Expr_hash(x_1);
x_58 = 32;
x_59 = lean_uint64_shift_right(x_57, x_58);
x_60 = lean_uint64_xor(x_57, x_59);
x_61 = 16;
x_62 = lean_uint64_shift_right(x_60, x_61);
x_63 = lean_uint64_xor(x_60, x_62);
x_64 = lean_uint64_to_usize(x_63);
x_65 = lean_usize_of_nat(x_56);
lean_dec(x_56);
x_66 = 1;
x_67 = lean_usize_sub(x_65, x_66);
x_68 = lean_usize_land(x_64, x_67);
x_69 = lean_array_uget(x_55, x_68);
x_70 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__2(x_1, x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; 
x_71 = lean_nat_add(x_54, x_9);
lean_dec(x_54);
lean_inc(x_18);
x_72 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_72, 0, x_1);
lean_ctor_set(x_72, 1, x_18);
lean_ctor_set(x_72, 2, x_69);
x_73 = lean_array_uset(x_55, x_68, x_72);
x_74 = lean_unsigned_to_nat(4u);
x_75 = lean_nat_mul(x_71, x_74);
x_76 = lean_unsigned_to_nat(3u);
x_77 = lean_nat_div(x_75, x_76);
lean_dec(x_75);
x_78 = lean_array_get_size(x_73);
x_79 = lean_nat_dec_le(x_77, x_78);
lean_dec(x_78);
lean_dec(x_77);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; 
x_80 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__3(x_73);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_71);
lean_ctor_set(x_81, 1, x_80);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_16, 0, x_81);
lean_ctor_set(x_13, 0, x_18);
return x_11;
}
else
{
lean_object* x_82; 
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_71);
lean_ctor_set(x_82, 1, x_73);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_16, 0, x_82);
lean_ctor_set(x_13, 0, x_18);
return x_11;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_83 = lean_box(0);
x_84 = lean_array_uset(x_55, x_68, x_83);
lean_inc(x_18);
x_85 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__6(x_1, x_18, x_69);
x_86 = lean_array_uset(x_84, x_68, x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_54);
lean_ctor_set(x_87, 1, x_86);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_16, 0, x_87);
lean_ctor_set(x_13, 0, x_18);
return x_11;
}
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint64_t x_93; uint64_t x_94; uint64_t x_95; uint64_t x_96; uint64_t x_97; uint64_t x_98; uint64_t x_99; size_t x_100; size_t x_101; size_t x_102; size_t x_103; size_t x_104; lean_object* x_105; uint8_t x_106; 
x_88 = lean_ctor_get(x_16, 0);
lean_inc(x_88);
lean_dec(x_16);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_91 = x_88;
} else {
 lean_dec_ref(x_88);
 x_91 = lean_box(0);
}
x_92 = lean_array_get_size(x_90);
x_93 = l_Lean_Expr_hash(x_1);
x_94 = 32;
x_95 = lean_uint64_shift_right(x_93, x_94);
x_96 = lean_uint64_xor(x_93, x_95);
x_97 = 16;
x_98 = lean_uint64_shift_right(x_96, x_97);
x_99 = lean_uint64_xor(x_96, x_98);
x_100 = lean_uint64_to_usize(x_99);
x_101 = lean_usize_of_nat(x_92);
lean_dec(x_92);
x_102 = 1;
x_103 = lean_usize_sub(x_101, x_102);
x_104 = lean_usize_land(x_100, x_103);
x_105 = lean_array_uget(x_90, x_104);
x_106 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__2(x_1, x_105);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_107 = lean_nat_add(x_89, x_9);
lean_dec(x_89);
lean_inc(x_18);
x_108 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_108, 0, x_1);
lean_ctor_set(x_108, 1, x_18);
lean_ctor_set(x_108, 2, x_105);
x_109 = lean_array_uset(x_90, x_104, x_108);
x_110 = lean_unsigned_to_nat(4u);
x_111 = lean_nat_mul(x_107, x_110);
x_112 = lean_unsigned_to_nat(3u);
x_113 = lean_nat_div(x_111, x_112);
lean_dec(x_111);
x_114 = lean_array_get_size(x_109);
x_115 = lean_nat_dec_le(x_113, x_114);
lean_dec(x_114);
lean_dec(x_113);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__3(x_109);
if (lean_is_scalar(x_91)) {
 x_117 = lean_alloc_ctor(0, 2, 0);
} else {
 x_117 = x_91;
}
lean_ctor_set(x_117, 0, x_107);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_15);
lean_ctor_set(x_13, 1, x_118);
lean_ctor_set(x_13, 0, x_18);
return x_11;
}
else
{
lean_object* x_119; lean_object* x_120; 
if (lean_is_scalar(x_91)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_91;
}
lean_ctor_set(x_119, 0, x_107);
lean_ctor_set(x_119, 1, x_109);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_15);
lean_ctor_set(x_13, 1, x_120);
lean_ctor_set(x_13, 0, x_18);
return x_11;
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_121 = lean_box(0);
x_122 = lean_array_uset(x_90, x_104, x_121);
lean_inc(x_18);
x_123 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__6(x_1, x_18, x_105);
x_124 = lean_array_uset(x_122, x_104, x_123);
if (lean_is_scalar(x_91)) {
 x_125 = lean_alloc_ctor(0, 2, 0);
} else {
 x_125 = x_91;
}
lean_ctor_set(x_125, 0, x_89);
lean_ctor_set(x_125, 1, x_124);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_15);
lean_ctor_set(x_13, 1, x_126);
lean_ctor_set(x_13, 0, x_18);
return x_11;
}
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; uint64_t x_137; uint64_t x_138; uint64_t x_139; uint64_t x_140; uint64_t x_141; uint64_t x_142; uint64_t x_143; size_t x_144; size_t x_145; size_t x_146; size_t x_147; size_t x_148; lean_object* x_149; uint8_t x_150; 
x_127 = lean_ctor_get(x_13, 0);
x_128 = lean_ctor_get(x_13, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_13);
x_129 = l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf(x_8);
lean_dec(x_8);
x_130 = l_String_toName(x_129);
x_131 = lean_ctor_get(x_128, 0);
lean_inc(x_131);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_132 = x_128;
} else {
 lean_dec_ref(x_128);
 x_132 = lean_box(0);
}
x_133 = lean_ctor_get(x_131, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_131, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 lean_ctor_release(x_131, 1);
 x_135 = x_131;
} else {
 lean_dec_ref(x_131);
 x_135 = lean_box(0);
}
x_136 = lean_array_get_size(x_134);
x_137 = l_Lean_Expr_hash(x_1);
x_138 = 32;
x_139 = lean_uint64_shift_right(x_137, x_138);
x_140 = lean_uint64_xor(x_137, x_139);
x_141 = 16;
x_142 = lean_uint64_shift_right(x_140, x_141);
x_143 = lean_uint64_xor(x_140, x_142);
x_144 = lean_uint64_to_usize(x_143);
x_145 = lean_usize_of_nat(x_136);
lean_dec(x_136);
x_146 = 1;
x_147 = lean_usize_sub(x_145, x_146);
x_148 = lean_usize_land(x_144, x_147);
x_149 = lean_array_uget(x_134, x_148);
x_150 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__2(x_1, x_149);
if (x_150 == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_159; 
x_151 = lean_nat_add(x_133, x_9);
lean_dec(x_133);
lean_inc(x_130);
x_152 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_152, 0, x_1);
lean_ctor_set(x_152, 1, x_130);
lean_ctor_set(x_152, 2, x_149);
x_153 = lean_array_uset(x_134, x_148, x_152);
x_154 = lean_unsigned_to_nat(4u);
x_155 = lean_nat_mul(x_151, x_154);
x_156 = lean_unsigned_to_nat(3u);
x_157 = lean_nat_div(x_155, x_156);
lean_dec(x_155);
x_158 = lean_array_get_size(x_153);
x_159 = lean_nat_dec_le(x_157, x_158);
lean_dec(x_158);
lean_dec(x_157);
if (x_159 == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_160 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__3(x_153);
if (lean_is_scalar(x_135)) {
 x_161 = lean_alloc_ctor(0, 2, 0);
} else {
 x_161 = x_135;
}
lean_ctor_set(x_161, 0, x_151);
lean_ctor_set(x_161, 1, x_160);
if (lean_is_scalar(x_132)) {
 x_162 = lean_alloc_ctor(0, 2, 0);
} else {
 x_162 = x_132;
}
lean_ctor_set(x_162, 0, x_161);
lean_ctor_set(x_162, 1, x_127);
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_130);
lean_ctor_set(x_163, 1, x_162);
lean_ctor_set(x_11, 0, x_163);
return x_11;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
if (lean_is_scalar(x_135)) {
 x_164 = lean_alloc_ctor(0, 2, 0);
} else {
 x_164 = x_135;
}
lean_ctor_set(x_164, 0, x_151);
lean_ctor_set(x_164, 1, x_153);
if (lean_is_scalar(x_132)) {
 x_165 = lean_alloc_ctor(0, 2, 0);
} else {
 x_165 = x_132;
}
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_127);
x_166 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_166, 0, x_130);
lean_ctor_set(x_166, 1, x_165);
lean_ctor_set(x_11, 0, x_166);
return x_11;
}
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_167 = lean_box(0);
x_168 = lean_array_uset(x_134, x_148, x_167);
lean_inc(x_130);
x_169 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__6(x_1, x_130, x_149);
x_170 = lean_array_uset(x_168, x_148, x_169);
if (lean_is_scalar(x_135)) {
 x_171 = lean_alloc_ctor(0, 2, 0);
} else {
 x_171 = x_135;
}
lean_ctor_set(x_171, 0, x_133);
lean_ctor_set(x_171, 1, x_170);
if (lean_is_scalar(x_132)) {
 x_172 = lean_alloc_ctor(0, 2, 0);
} else {
 x_172 = x_132;
}
lean_ctor_set(x_172, 0, x_171);
lean_ctor_set(x_172, 1, x_127);
x_173 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_173, 0, x_130);
lean_ctor_set(x_173, 1, x_172);
lean_ctor_set(x_11, 0, x_173);
return x_11;
}
}
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; uint64_t x_187; uint64_t x_188; uint64_t x_189; uint64_t x_190; uint64_t x_191; uint64_t x_192; uint64_t x_193; size_t x_194; size_t x_195; size_t x_196; size_t x_197; size_t x_198; lean_object* x_199; uint8_t x_200; 
x_174 = lean_ctor_get(x_11, 0);
x_175 = lean_ctor_get(x_11, 1);
lean_inc(x_175);
lean_inc(x_174);
lean_dec(x_11);
x_176 = lean_ctor_get(x_174, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_174, 1);
lean_inc(x_177);
if (lean_is_exclusive(x_174)) {
 lean_ctor_release(x_174, 0);
 lean_ctor_release(x_174, 1);
 x_178 = x_174;
} else {
 lean_dec_ref(x_174);
 x_178 = lean_box(0);
}
x_179 = l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf(x_8);
lean_dec(x_8);
x_180 = l_String_toName(x_179);
x_181 = lean_ctor_get(x_177, 0);
lean_inc(x_181);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 x_182 = x_177;
} else {
 lean_dec_ref(x_177);
 x_182 = lean_box(0);
}
x_183 = lean_ctor_get(x_181, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_181, 1);
lean_inc(x_184);
if (lean_is_exclusive(x_181)) {
 lean_ctor_release(x_181, 0);
 lean_ctor_release(x_181, 1);
 x_185 = x_181;
} else {
 lean_dec_ref(x_181);
 x_185 = lean_box(0);
}
x_186 = lean_array_get_size(x_184);
x_187 = l_Lean_Expr_hash(x_1);
x_188 = 32;
x_189 = lean_uint64_shift_right(x_187, x_188);
x_190 = lean_uint64_xor(x_187, x_189);
x_191 = 16;
x_192 = lean_uint64_shift_right(x_190, x_191);
x_193 = lean_uint64_xor(x_190, x_192);
x_194 = lean_uint64_to_usize(x_193);
x_195 = lean_usize_of_nat(x_186);
lean_dec(x_186);
x_196 = 1;
x_197 = lean_usize_sub(x_195, x_196);
x_198 = lean_usize_land(x_194, x_197);
x_199 = lean_array_uget(x_184, x_198);
x_200 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__2(x_1, x_199);
if (x_200 == 0)
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; uint8_t x_209; 
x_201 = lean_nat_add(x_183, x_9);
lean_dec(x_183);
lean_inc(x_180);
x_202 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_202, 0, x_1);
lean_ctor_set(x_202, 1, x_180);
lean_ctor_set(x_202, 2, x_199);
x_203 = lean_array_uset(x_184, x_198, x_202);
x_204 = lean_unsigned_to_nat(4u);
x_205 = lean_nat_mul(x_201, x_204);
x_206 = lean_unsigned_to_nat(3u);
x_207 = lean_nat_div(x_205, x_206);
lean_dec(x_205);
x_208 = lean_array_get_size(x_203);
x_209 = lean_nat_dec_le(x_207, x_208);
lean_dec(x_208);
lean_dec(x_207);
if (x_209 == 0)
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_210 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__3(x_203);
if (lean_is_scalar(x_185)) {
 x_211 = lean_alloc_ctor(0, 2, 0);
} else {
 x_211 = x_185;
}
lean_ctor_set(x_211, 0, x_201);
lean_ctor_set(x_211, 1, x_210);
if (lean_is_scalar(x_182)) {
 x_212 = lean_alloc_ctor(0, 2, 0);
} else {
 x_212 = x_182;
}
lean_ctor_set(x_212, 0, x_211);
lean_ctor_set(x_212, 1, x_176);
if (lean_is_scalar(x_178)) {
 x_213 = lean_alloc_ctor(0, 2, 0);
} else {
 x_213 = x_178;
}
lean_ctor_set(x_213, 0, x_180);
lean_ctor_set(x_213, 1, x_212);
x_214 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_175);
return x_214;
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; 
if (lean_is_scalar(x_185)) {
 x_215 = lean_alloc_ctor(0, 2, 0);
} else {
 x_215 = x_185;
}
lean_ctor_set(x_215, 0, x_201);
lean_ctor_set(x_215, 1, x_203);
if (lean_is_scalar(x_182)) {
 x_216 = lean_alloc_ctor(0, 2, 0);
} else {
 x_216 = x_182;
}
lean_ctor_set(x_216, 0, x_215);
lean_ctor_set(x_216, 1, x_176);
if (lean_is_scalar(x_178)) {
 x_217 = lean_alloc_ctor(0, 2, 0);
} else {
 x_217 = x_178;
}
lean_ctor_set(x_217, 0, x_180);
lean_ctor_set(x_217, 1, x_216);
x_218 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_218, 0, x_217);
lean_ctor_set(x_218, 1, x_175);
return x_218;
}
}
else
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; 
x_219 = lean_box(0);
x_220 = lean_array_uset(x_184, x_198, x_219);
lean_inc(x_180);
x_221 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__6(x_1, x_180, x_199);
x_222 = lean_array_uset(x_220, x_198, x_221);
if (lean_is_scalar(x_185)) {
 x_223 = lean_alloc_ctor(0, 2, 0);
} else {
 x_223 = x_185;
}
lean_ctor_set(x_223, 0, x_183);
lean_ctor_set(x_223, 1, x_222);
if (lean_is_scalar(x_182)) {
 x_224 = lean_alloc_ctor(0, 2, 0);
} else {
 x_224 = x_182;
}
lean_ctor_set(x_224, 0, x_223);
lean_ctor_set(x_224, 1, x_176);
if (lean_is_scalar(x_178)) {
 x_225 = lean_alloc_ctor(0, 2, 0);
} else {
 x_225 = x_178;
}
lean_ctor_set(x_225, 0, x_180);
lean_ctor_set(x_225, 1, x_224);
x_226 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_226, 0, x_225);
lean_ctor_set(x_226, 1, x_175);
return x_226;
}
}
}
else
{
uint8_t x_227; 
lean_dec(x_8);
lean_dec(x_1);
x_227 = !lean_is_exclusive(x_11);
if (x_227 == 0)
{
return x_11;
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; 
x_228 = lean_ctor_get(x_11, 0);
x_229 = lean_ctor_get(x_11, 1);
lean_inc(x_229);
lean_inc(x_228);
lean_dec(x_11);
x_230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_230, 0, x_228);
lean_ctor_set(x_230, 1, x_229);
return x_230;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_array_push(x_1, x_6);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" := ", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_usize_dec_lt(x_6, x_5);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_8);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_uget(x_4, x_6);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; size_t x_29; size_t x_30; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
x_21 = l_Lean_MessageData_ofName(x_20);
x_22 = l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__2;
lean_ctor_set_tag(x_17, 7);
lean_ctor_set(x_17, 1, x_21);
lean_ctor_set(x_17, 0, x_22);
x_23 = l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__4;
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_17);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_MessageData_ofExpr(x_19);
x_26 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
lean_inc(x_1);
x_27 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_1);
x_28 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_28, 0, x_7);
lean_ctor_set(x_28, 1, x_27);
x_29 = 1;
x_30 = lean_usize_add(x_6, x_29);
x_6 = x_30;
x_7 = x_28;
goto _start;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; size_t x_43; size_t x_44; 
x_32 = lean_ctor_get(x_17, 0);
x_33 = lean_ctor_get(x_17, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_17);
x_34 = l_Lean_MessageData_ofName(x_33);
x_35 = l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__2;
x_36 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__4;
x_38 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Lean_MessageData_ofExpr(x_32);
x_40 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
lean_inc(x_1);
x_41 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_1);
x_42 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_42, 0, x_7);
lean_ctor_set(x_42, 1, x_41);
x_43 = 1;
x_44 = lean_usize_add(x_6, x_43);
x_6 = x_44;
x_7 = x_42;
goto _start;
}
}
}
}
LEAN_EXPORT uint8_t l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
static lean_object* _init_l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT uint8_t l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = 1;
x_5 = l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___lambda__2___closed__1;
x_6 = l_Lean_Name_toString(x_3, x_4, x_5);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_Lean_Name_toString(x_7, x_4, x_5);
x_9 = lean_string_dec_lt(x_6, x_8);
lean_dec(x_8);
lean_dec(x_6);
return x_9;
}
}
static lean_object* _init_l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___lambda__2___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_nat_dec_lt(x_3, x_4);
if (x_7 == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___closed__1;
lean_inc(x_3);
x_9 = l___private_Init_Data_Array_QSort_0__Array_qpartition___rarg(x_1, x_2, x_8, x_3, x_4, lean_box(0), lean_box(0));
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_nat_dec_le(x_4, x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3(x_1, x_11, x_3, x_10, lean_box(0), lean_box(0));
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_10, x_14);
lean_dec(x_10);
x_2 = x_13;
x_3 = x_15;
x_5 = lean_box(0);
x_6 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_10);
lean_dec(x_3);
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__4(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__1(x_4, x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nwhere\n", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; size_t x_20; lean_object* x_21; lean_object* x_49; 
x_8 = l_Lean_Meta_AtomAssignmentM_getAtomAssignment(x_2, x_3, x_4, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
if (lean_is_exclusive(x_8)) {
 lean_ctor_release(x_8, 0);
 lean_ctor_release(x_8, 1);
 x_11 = x_8;
} else {
 lean_dec_ref(x_8);
 x_11 = lean_box(0);
}
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_14 = x_9;
} else {
 lean_dec_ref(x_9);
 x_14 = lean_box(0);
}
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_array_get_size(x_15);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_nat_dec_lt(x_17, x_16);
x_19 = lean_box(0);
x_20 = 0;
if (x_18 == 0)
{
lean_object* x_58; 
lean_dec(x_16);
lean_dec(x_15);
x_58 = l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__1;
x_49 = x_58;
goto block_57;
}
else
{
uint8_t x_59; 
x_59 = lean_nat_dec_le(x_16, x_16);
if (x_59 == 0)
{
lean_object* x_60; 
lean_dec(x_16);
lean_dec(x_15);
x_60 = l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__1;
x_49 = x_60;
goto block_57;
}
else
{
size_t x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_62 = l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__1;
x_63 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__4(x_15, x_20, x_61, x_62);
lean_dec(x_15);
x_49 = x_63;
goto block_57;
}
}
block_48:
{
size_t x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_array_size(x_21);
x_23 = l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__2;
x_24 = l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2(x_23, x_19, x_21, x_21, x_22, x_20, x_23, x_13, x_3, x_4, x_5, x_6, x_10);
lean_dec(x_21);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_26, 0);
x_29 = l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__4;
if (lean_is_scalar(x_14)) {
 x_30 = lean_alloc_ctor(7, 2, 0);
} else {
 x_30 = x_14;
 lean_ctor_set_tag(x_30, 7);
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
if (lean_is_scalar(x_11)) {
 x_31 = lean_alloc_ctor(7, 2, 0);
} else {
 x_31 = x_11;
 lean_ctor_set_tag(x_31, 7);
}
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_23);
lean_ctor_set(x_26, 0, x_31);
return x_24;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_ctor_get(x_26, 0);
x_33 = lean_ctor_get(x_26, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_26);
x_34 = l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__4;
if (lean_is_scalar(x_14)) {
 x_35 = lean_alloc_ctor(7, 2, 0);
} else {
 x_35 = x_14;
 lean_ctor_set_tag(x_35, 7);
}
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
if (lean_is_scalar(x_11)) {
 x_36 = lean_alloc_ctor(7, 2, 0);
} else {
 x_36 = x_11;
 lean_ctor_set_tag(x_36, 7);
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_23);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_33);
lean_ctor_set(x_24, 0, x_37);
return x_24;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_38 = lean_ctor_get(x_24, 0);
x_39 = lean_ctor_get(x_24, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_24);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_42 = x_38;
} else {
 lean_dec_ref(x_38);
 x_42 = lean_box(0);
}
x_43 = l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__4;
if (lean_is_scalar(x_14)) {
 x_44 = lean_alloc_ctor(7, 2, 0);
} else {
 x_44 = x_14;
 lean_ctor_set_tag(x_44, 7);
}
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_40);
if (lean_is_scalar(x_11)) {
 x_45 = lean_alloc_ctor(7, 2, 0);
} else {
 x_45 = x_11;
 lean_ctor_set_tag(x_45, 7);
}
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_23);
if (lean_is_scalar(x_42)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_42;
}
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_41);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_39);
return x_47;
}
}
block_57:
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_50 = lean_array_get_size(x_49);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_sub(x_50, x_51);
x_53 = lean_nat_dec_eq(x_50, x_17);
if (x_53 == 0)
{
uint8_t x_54; 
x_54 = lean_nat_dec_le(x_17, x_52);
if (x_54 == 0)
{
lean_object* x_55; 
lean_inc(x_52);
x_55 = l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3(x_50, x_49, x_52, x_52, lean_box(0), lean_box(0));
lean_dec(x_52);
lean_dec(x_50);
x_21 = x_55;
goto block_48;
}
else
{
lean_object* x_56; 
x_56 = l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3(x_50, x_49, x_17, x_52, lean_box(0), lean_box(0));
lean_dec(x_52);
lean_dec(x_50);
x_21 = x_56;
goto block_48;
}
}
else
{
lean_dec(x_52);
lean_dec(x_50);
x_21 = x_49;
goto block_48;
}
}
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___boxed), 7, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_pp_inlineAssignmentAtoms;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
x_8 = l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___closed__1;
x_9 = l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___closed__2;
x_10 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_7, x_9);
lean_dec(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = lean_apply_7(x_8, x_11, x_1, x_2, x_3, x_4, x_5, x_6);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__2;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_6);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_15 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_16 = l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2(x_1, x_2, x_3, x_4, x_14, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___lambda__2(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__4(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Meta_AtomAssignmentM_mkAssignableAtom___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_expr_eqv(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("assignableAtom", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__1;
x_2 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__2;
x_3 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__3;
x_4 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Name", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__1;
x_2 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__3;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__4;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Option", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("none", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__6;
x_2 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__7;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__8;
x_2 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__9;
x_3 = l_Lean_Expr_const___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__10;
x_2 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__5;
x_3 = l_Lean_Expr_app___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("some", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__6;
x_2 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__12;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__13;
x_2 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__9;
x_3 = l_Lean_Expr_const___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__11;
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = lean_array_mk(x_12);
x_14 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__2;
x_15 = l_Lean_Meta_mkAppM(x_14, x_13, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_3);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_3);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_3);
x_23 = !lean_is_exclusive(x_15);
if (x_23 == 0)
{
return x_15;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_27 = lean_ctor_get(x_2, 0);
lean_inc(x_27);
lean_dec(x_2);
x_28 = l___private_Lean_ToExpr_0__Lean_Name_toExprAux(x_27);
x_29 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__14;
x_30 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__5;
x_31 = l_Lean_mkAppB(x_29, x_30, x_28);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_10);
x_33 = lean_array_mk(x_32);
x_34 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__2;
x_35 = l_Lean_Meta_mkAppM(x_34, x_33, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_35) == 0)
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_3);
lean_ctor_set(x_35, 0, x_38);
return x_35;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_35, 0);
x_40 = lean_ctor_get(x_35, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_35);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_3);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
else
{
uint8_t x_43; 
lean_dec(x_3);
x_43 = !lean_is_exclusive(x_35);
if (x_43 == 0)
{
return x_35;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_35, 0);
x_45 = lean_ctor_get(x_35, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_35);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(masked)", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___closed__1;
x_2 = l_String_toName(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_6, 2);
lean_inc(x_9);
x_10 = l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___closed__2;
x_11 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_9, x_10);
lean_dec(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_box(0);
x_13 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8);
return x_13;
}
else
{
if (x_2 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint64_t x_21; uint64_t x_22; uint64_t x_23; uint64_t x_24; uint64_t x_25; uint64_t x_26; uint64_t x_27; size_t x_28; size_t x_29; size_t x_30; size_t x_31; size_t x_32; lean_object* x_33; lean_object* x_34; 
x_14 = l_Lean_Meta_AtomAssignmentM_getAtomAssignment(x_3, x_4, x_5, x_6, x_7, x_8);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_array_get_size(x_19);
x_21 = l_Lean_Expr_hash(x_1);
x_22 = 32;
x_23 = lean_uint64_shift_right(x_21, x_22);
x_24 = lean_uint64_xor(x_21, x_23);
x_25 = 16;
x_26 = lean_uint64_shift_right(x_24, x_25);
x_27 = lean_uint64_xor(x_24, x_26);
x_28 = lean_uint64_to_usize(x_27);
x_29 = lean_usize_of_nat(x_20);
lean_dec(x_20);
x_30 = 1;
x_31 = lean_usize_sub(x_29, x_30);
x_32 = lean_usize_land(x_28, x_31);
x_33 = lean_array_uget(x_19, x_32);
lean_dec(x_19);
x_34 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Meta_AtomAssignmentM_mkAssignableAtom___spec__1(x_1, x_33);
lean_dec(x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_35 = l_Lean_Meta_AtomAssignmentM_getNewAssignmentAtomName(x_1, x_18, x_4, x_5, x_6, x_7, x_17);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_38);
x_41 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1(x_1, x_40, x_39, x_4, x_5, x_6, x_7, x_37);
return x_41;
}
else
{
uint8_t x_42; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_35);
if (x_42 == 0)
{
return x_35;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_35, 0);
x_44 = lean_ctor_get(x_35, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_35);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_34);
if (x_46 == 0)
{
lean_object* x_47; 
x_47 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1(x_1, x_34, x_18, x_4, x_5, x_6, x_7, x_17);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_34, 0);
lean_inc(x_48);
lean_dec(x_34);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_48);
x_50 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1(x_1, x_49, x_18, x_4, x_5, x_6, x_7, x_17);
return x_50;
}
}
}
else
{
lean_object* x_51; lean_object* x_52; 
x_51 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___closed__3;
x_52 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1(x_1, x_51, x_3, x_4, x_5, x_6, x_7, x_8);
return x_52;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Meta_AtomAssignmentM_mkAssignableAtom___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Meta_AtomAssignmentM_mkAssignableAtom___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom(x_1, x_9, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_fakeMod", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("name", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__3;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__2;
x_2 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__5;
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Lean_addMacroScope(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = 0;
x_6 = l_Lean_SourceInfo_fromRef(x_3, x_5);
x_7 = lean_box(0);
x_8 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__4;
x_9 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__6;
x_10 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
lean_ctor_set(x_10, 3, x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_4);
return x_11;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("app", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__1;
x_2 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__1;
x_3 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__2;
x_4 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__3;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("paren", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__1;
x_2 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__1;
x_3 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__2;
x_4 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__7;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__12;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__4;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Lean_Syntax_getArg(x_1, x_7);
x_9 = lean_unsigned_to_nat(2u);
lean_inc(x_8);
x_10 = l_Lean_Syntax_matchesNull(x_8, x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Syntax_getArg(x_8, x_12);
x_14 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__5;
x_15 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__6;
x_16 = l_Lean_Syntax_matchesIdent(x_13, x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__8;
lean_inc(x_13);
x_18 = l_Lean_Syntax_isOfKind(x_13, x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_2);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
else
{
lean_object* x_20; uint8_t x_21; 
x_20 = l_Lean_Syntax_getArg(x_13, x_7);
lean_dec(x_13);
lean_inc(x_20);
x_21 = l_Lean_Syntax_isOfKind(x_20, x_4);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_2);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_3);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = l_Lean_Syntax_getArg(x_20, x_12);
x_24 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__9;
x_25 = l_Lean_Syntax_matchesIdent(x_23, x_24);
lean_dec(x_23);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_2);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_1);
lean_ctor_set(x_26, 1, x_3);
return x_26;
}
else
{
lean_object* x_27; uint8_t x_28; 
x_27 = l_Lean_Syntax_getArg(x_20, x_7);
lean_dec(x_20);
lean_inc(x_27);
x_28 = l_Lean_Syntax_matchesNull(x_27, x_7);
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_27);
lean_dec(x_8);
lean_dec(x_2);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_1);
lean_ctor_set(x_29, 1, x_3);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_1);
x_30 = l_Lean_Syntax_getArg(x_27, x_12);
lean_dec(x_27);
x_31 = l_Lean_Syntax_getArg(x_8, x_7);
lean_dec(x_8);
x_32 = lean_apply_4(x_14, x_30, x_31, x_2, x_3);
return x_32;
}
}
}
}
}
else
{
lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_13);
lean_dec(x_1);
x_33 = l_Lean_Syntax_getArg(x_8, x_7);
lean_dec(x_8);
x_34 = 0;
x_35 = l_Lean_SourceInfo_fromRef(x_2, x_34);
lean_dec(x_2);
x_36 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__8;
lean_inc(x_35);
x_37 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__14;
lean_inc(x_35);
x_39 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_39, 0, x_35);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__5;
x_41 = l_Lean_Syntax_node3(x_35, x_40, x_37, x_33, x_39);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_3);
return x_42;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Nat_nextPowerOfTwo_go(x_1, x_2, lean_box(0));
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__1;
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__3;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withTrackingAtomAssignment___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__4;
x_8 = lean_apply_6(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_8);
if (x_16 == 0)
{
return x_8;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_8, 0);
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_8);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withTrackingAtomAssignment(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withTrackingAtomAssignment___rarg), 6, 0);
return x_2;
}
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_PrettyPrinter_Delaborator(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_AtomAssignment(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Delaborator(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__1 = _init_l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__1();
lean_mark_persistent(l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__1);
l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__2 = _init_l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__2();
lean_mark_persistent(l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__2);
l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__3 = _init_l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__3();
lean_mark_persistent(l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__3);
l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__4 = _init_l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__4();
lean_mark_persistent(l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__4);
l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__5 = _init_l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__5();
lean_mark_persistent(l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4____closed__5);
if (builtin) {res = l_initFn____x40_Lean_Meta_AtomAssignment___hyg_4_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_pp_inlineAssignmentAtoms = lean_io_result_get_value(res);
lean_mark_persistent(l_pp_inlineAssignmentAtoms);
lean_dec_ref(res);
}l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__1 = _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__1();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__1);
l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__2 = _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__2();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__2);
l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__3 = _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__3();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__3);
l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__4 = _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__4();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__4);
l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__5 = _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__5();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__5);
l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__6 = _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__6();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__6);
l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__7 = _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__7();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__7);
l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__8 = _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__8();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__8);
l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__9 = _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__9();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__9);
l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__10 = _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__10();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__10);
l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__11 = _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__11();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__11);
l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__12 = _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__12();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__12);
l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__13 = _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__13();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__13);
l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__14 = _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__14();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__14);
l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__15 = _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__15();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__15);
l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__16 = _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__16();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__16);
l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__17 = _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__17();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_term_uff62___uff63___closed__17);
l_Lean_Meta_AtomAssignmentM_term_uff62___uff63 = _init_l_Lean_Meta_AtomAssignmentM_term_uff62___uff63();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_term_uff62___uff63);
l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf___closed__1 = _init_l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf___closed__1();
lean_mark_persistent(l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf___closed__1);
l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf___closed__2 = _init_l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf___closed__2();
lean_mark_persistent(l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_varNameOf___closed__2);
l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___closed__1 = _init_l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___closed__1();
lean_mark_persistent(l___private_Lean_Meta_AtomAssignment_0__Lean_Meta_AtomAssignmentM_inScope___closed__1);
l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__1 = _init_l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__1();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__1);
l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__2 = _init_l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__2();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__2);
l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__3 = _init_l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__3();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__3);
l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__4 = _init_l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__4();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__2___closed__4);
l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___lambda__2___closed__1 = _init_l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___lambda__2___closed__1();
lean_mark_persistent(l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___lambda__2___closed__1);
l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___closed__1 = _init_l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___closed__1();
lean_mark_persistent(l_Array_qsort_sort___at_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___spec__3___closed__1);
l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__1 = _init_l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__1);
l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__2 = _init_l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__2);
l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__3 = _init_l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__3);
l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__4 = _init_l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___lambda__1___closed__4);
l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___closed__1 = _init_l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___closed__1();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___closed__1);
l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___closed__2 = _init_l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___closed__2();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAtomAssignmentMessageData___closed__2);
l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__1 = _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__1);
l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__2 = _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__2);
l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__3 = _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__3);
l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__4 = _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__4);
l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__5 = _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__5);
l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__6 = _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__6();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__6);
l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__7 = _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__7();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__7);
l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__8 = _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__8();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__8);
l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__9 = _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__9();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__9);
l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__10 = _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__10();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__10);
l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__11 = _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__11();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__11);
l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__12 = _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__12();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__12);
l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__13 = _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__13();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__13);
l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__14 = _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__14();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___lambda__1___closed__14);
l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___closed__1 = _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___closed__1();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___closed__1);
l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___closed__2 = _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___closed__2();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___closed__2);
l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___closed__3 = _init_l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___closed__3();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_mkAssignableAtom___closed__3);
l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__1 = _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__1);
l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__2 = _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__2);
l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__3 = _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__3);
l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__4 = _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__4();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__4);
l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__5 = _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__5();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__5);
l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__6 = _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__6();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___lambda__2___closed__6);
l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__1 = _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__1();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__1);
l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__2 = _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__2();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__2);
l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__3 = _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__3();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__3);
l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__4 = _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__4();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__4);
l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__5 = _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__5();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__5);
l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__6 = _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__6();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__6);
l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__7 = _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__7();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__7);
l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__8 = _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__8();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__8);
l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__9 = _init_l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__9();
lean_mark_persistent(l_Lean_Meta_AtomAssignmentM_unexpandAssignmentAtom___closed__9);
l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__1 = _init_l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__1);
l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__2 = _init_l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__2);
l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__3 = _init_l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__3();
lean_mark_persistent(l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__3);
l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__4 = _init_l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__4();
lean_mark_persistent(l_Lean_Meta_withTrackingAtomAssignment___rarg___closed__4);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
