// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Cutsat.Util
// Imports: Lean.Meta.Tactic.Grind.Types Lean.Meta.Tactic.Grind.Arith.Util
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
uint8_t l_Int_decidableDvd(lean_object*, lean_object*);
lean_object* l_Std_Internal_Rat_add(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
static lean_object* l_Int_Linear_Poly_pp_go___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__10;
lean_object* l_Int_gcd(lean_object*, lean_object*);
uint8_t l_Bool_toLBool(uint8_t);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__2(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_numCases(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isTrivial___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__1(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_Meta_Grind_Arith_quoteIfArithTerm(lean_object*);
static size_t l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__2___closed__2;
lean_object* l_Int_lcm(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_eval_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Linear_Poly_leadCoeff(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_updateOccs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___closed__2;
uint8_t l_Lean_RBNode_isRed___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Int_Linear_Poly_updateOccs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial(lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_satisfiedLe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___closed__1;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___closed__1;
lean_object* lean_grind_cutsat_mk_var(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
static lean_object* l_Int_Linear_Poly_isZero___closed__1;
extern lean_object* l___private_Lean_Expr_0__Lean_intLEPred;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Int_Linear_Poly_isUnsatLe(lean_object*);
extern lean_object* l___private_Lean_Expr_0__Lean_intEqPred;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__2;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___closed__2;
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Int_Linear_Poly_isZero(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_addOcc___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected(lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__12;
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_mkIntDvd(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___closed__1;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__4;
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Int_Linear_Poly_isSorted_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_isTrivial___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial___boxed(lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial___boxed(lean_object*);
static lean_object* l_Int_Linear_Poly_eval_x3f___closed__1;
uint8_t lean_expr_eqv(lean_object*, lean_object*);
static uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___closed__2;
static lean_object* l_Int_Linear_Poly_pp_go___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___spec__1(lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__9;
lean_object* l_Lean_RBNode_setBlack___rarg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_isSorted___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isTrivial(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Int_Linear_Poly_updateOccs___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_mkVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
static lean_object* l_Int_Linear_Poly_pp_go___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__4;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial(lean_object*);
lean_object* l_outOfBounds___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_isTrivial(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Int_Linear_Poly_pp_go___closed__5;
lean_object* l_Std_Internal_Rat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__11;
lean_object* lean_grind_cutsat_assert_eq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_pp_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Int_Linear_Poly_pp_go___closed__2;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___closed__1;
uint8_t l_Lean_Meta_Grind_isSameExpr_unsafe__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_instInhabitedIndexSet;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_findVarToSubst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected(lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_findCore___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_shrink(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___closed__1;
lean_object* l_Lean_mkIntLit(lean_object*);
uint8_t l_Std_Internal_Rat_instDecidableLe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_isZero___boxed(lean_object*);
lean_object* lean_usize_to_nat(size_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_numCases___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_findVarToSubst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_ins___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_pp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Linear_Poly_getConst(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
static size_t l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__2___closed__1;
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isUnsat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Int_Linear_Poly_pp_go___closed__8;
lean_object* lean_int_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_insert___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__2(lean_object*, lean_object*, lean_object*);
static lean_object* l_Int_Linear_Poly_pp_go___closed__7;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_Int_mkType;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__2___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Int_Linear_Poly_isUnsatDvd(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_satisfiedLe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Linear_Poly_denoteExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
LEAN_EXPORT uint8_t l_Int_Linear_Poly_isSorted(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Linear_Poly_gcdCoeffs_x27(lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_eval_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__1;
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__7;
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isUnsat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Nat_mkType;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__4;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Lean_PersistentArray_get_x21___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___closed__2;
LEAN_EXPORT lean_object* l_Int_Linear_Poly_isSorted_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Internal_instInhabitedRat;
LEAN_EXPORT lean_object* l_Int_Linear_Poly_updateOccs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instToExprInt_mkNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_findCore___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__1(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_grind_cutsat_assert_le(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_assert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l_Int_Linear_Poly_updateOccs___closed__2;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__3;
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_updateOccs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isUnsat___boxed(lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Int_Linear_Poly_updateOccs___closed__1;
LEAN_EXPORT lean_object* l_Int_Linear_Poly_updateOccs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Meta_Grind_hashPtrExpr_unsafe__1(lean_object*);
lean_object* l_Lean_Meta_Grind_isInconsistent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Int_Linear_Poly_pp_go___closed__4;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isUnsat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_eval_x3f_go(lean_object*, lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__1;
uint8_t l_Std_Internal_beqRat____x40_Std_Internal_Rat___hyg_42_(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__2;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Int_Linear_Poly_isZero___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Int_Linear_Poly_isZero(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = l_Int_Linear_Poly_isZero___closed__1;
x_4 = lean_int_dec_eq(x_2, x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_isZero___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Int_Linear_Poly_isZero(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Int_Linear_Poly_isSorted_go(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_4);
x_1 = x_6;
x_2 = x_5;
goto _start;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_8; 
lean_dec(x_1);
x_8 = 1;
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_ctor_get(x_2, 2);
x_13 = lean_nat_dec_lt(x_11, x_10);
lean_dec(x_10);
if (x_13 == 0)
{
uint8_t x_14; 
lean_free_object(x_1);
x_14 = 0;
return x_14;
}
else
{
lean_inc(x_11);
lean_ctor_set(x_1, 0, x_11);
x_2 = x_12;
goto _start;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_ctor_get(x_2, 1);
x_18 = lean_ctor_get(x_2, 2);
x_19 = lean_nat_dec_lt(x_17, x_16);
lean_dec(x_16);
if (x_19 == 0)
{
uint8_t x_20; 
x_20 = 0;
return x_20;
}
else
{
lean_object* x_21; 
lean_inc(x_17);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_17);
x_1 = x_21;
x_2 = x_18;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_isSorted_go___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Int_Linear_Poly_isSorted_go(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Int_Linear_Poly_isSorted(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_box(0);
x_3 = l_Int_Linear_Poly_isSorted_go(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_isSorted___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Int_Linear_Poly_isSorted(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_Nat_mkType;
x_3 = lean_expr_eqv(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Int_mkType;
x_5 = lean_expr_eqv(x_1, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_st_ref_get(x_1, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_12, 14);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_ctor_get(x_15, 14);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_Grind_Arith_Cutsat_get_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_st_ref_take(x_2, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 14);
lean_inc(x_13);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_12, 14);
lean_dec(x_16);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_13, 1);
x_19 = lean_apply_1(x_1, x_18);
lean_ctor_set(x_13, 1, x_19);
x_20 = lean_st_ref_set(x_2, x_12, x_14);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
x_23 = lean_box(0);
lean_ctor_set(x_20, 0, x_23);
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
lean_dec(x_20);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_27 = lean_ctor_get(x_13, 0);
x_28 = lean_ctor_get(x_13, 2);
x_29 = lean_ctor_get(x_13, 3);
x_30 = lean_ctor_get(x_13, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_30);
lean_inc(x_27);
lean_dec(x_13);
x_31 = lean_apply_1(x_1, x_30);
x_32 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_32, 0, x_27);
lean_ctor_set(x_32, 1, x_31);
lean_ctor_set(x_32, 2, x_28);
lean_ctor_set(x_32, 3, x_29);
lean_ctor_set(x_12, 14, x_32);
x_33 = lean_st_ref_set(x_2, x_12, x_14);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_35 = x_33;
} else {
 lean_dec_ref(x_33);
 x_35 = lean_box(0);
}
x_36 = lean_box(0);
if (lean_is_scalar(x_35)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_35;
}
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_38 = lean_ctor_get(x_12, 0);
x_39 = lean_ctor_get(x_12, 1);
x_40 = lean_ctor_get(x_12, 2);
x_41 = lean_ctor_get(x_12, 3);
x_42 = lean_ctor_get(x_12, 4);
x_43 = lean_ctor_get(x_12, 5);
x_44 = lean_ctor_get(x_12, 6);
x_45 = lean_ctor_get(x_12, 7);
x_46 = lean_ctor_get_uint8(x_12, sizeof(void*)*16);
x_47 = lean_ctor_get(x_12, 8);
x_48 = lean_ctor_get(x_12, 9);
x_49 = lean_ctor_get(x_12, 10);
x_50 = lean_ctor_get(x_12, 11);
x_51 = lean_ctor_get(x_12, 12);
x_52 = lean_ctor_get(x_12, 13);
x_53 = lean_ctor_get(x_12, 15);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_12);
x_54 = lean_ctor_get(x_13, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_13, 2);
lean_inc(x_55);
x_56 = lean_ctor_get(x_13, 3);
lean_inc(x_56);
x_57 = lean_ctor_get(x_13, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 lean_ctor_release(x_13, 2);
 lean_ctor_release(x_13, 3);
 x_58 = x_13;
} else {
 lean_dec_ref(x_13);
 x_58 = lean_box(0);
}
x_59 = lean_apply_1(x_1, x_57);
if (lean_is_scalar(x_58)) {
 x_60 = lean_alloc_ctor(0, 4, 0);
} else {
 x_60 = x_58;
}
lean_ctor_set(x_60, 0, x_54);
lean_ctor_set(x_60, 1, x_59);
lean_ctor_set(x_60, 2, x_55);
lean_ctor_set(x_60, 3, x_56);
x_61 = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(x_61, 0, x_38);
lean_ctor_set(x_61, 1, x_39);
lean_ctor_set(x_61, 2, x_40);
lean_ctor_set(x_61, 3, x_41);
lean_ctor_set(x_61, 4, x_42);
lean_ctor_set(x_61, 5, x_43);
lean_ctor_set(x_61, 6, x_44);
lean_ctor_set(x_61, 7, x_45);
lean_ctor_set(x_61, 8, x_47);
lean_ctor_set(x_61, 9, x_48);
lean_ctor_set(x_61, 10, x_49);
lean_ctor_set(x_61, 11, x_50);
lean_ctor_set(x_61, 12, x_51);
lean_ctor_set(x_61, 13, x_52);
lean_ctor_set(x_61, 14, x_60);
lean_ctor_set(x_61, 15, x_53);
lean_ctor_set_uint8(x_61, sizeof(void*)*16, x_46);
x_62 = lean_st_ref_set(x_2, x_61, x_14);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_modify_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_get_x27(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 14);
lean_inc(x_13);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_11, 0);
lean_dec(x_15);
x_16 = 0;
x_17 = lean_box(x_16);
lean_ctor_set(x_11, 0, x_17);
return x_11;
}
else
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_dec(x_11);
x_19 = 0;
x_20 = lean_box(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_13);
x_22 = !lean_is_exclusive(x_11);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_11, 0);
lean_dec(x_23);
x_24 = 1;
x_25 = lean_box(x_24);
lean_ctor_set(x_11, 0, x_25);
return x_11;
}
else
{
lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_11, 1);
lean_inc(x_26);
lean_dec(x_11);
x_27 = 1;
x_28 = lean_box(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_26);
return x_29;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___lambda__1___boxed), 10, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Lean_Meta_Grind_isInconsistent(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___closed__1;
x_15 = lean_box(0);
x_16 = lean_apply_10(x_14, x_15, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_10);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_10, 0);
lean_dec(x_18);
x_19 = 1;
x_20 = lean_box(x_19);
lean_ctor_set(x_10, 0, x_20);
return x_10;
}
else
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_10, 1);
lean_inc(x_21);
lean_dec(x_10);
x_22 = 1;
x_23 = lean_box(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_21);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_mkVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_grind_cutsat_mk_var(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Meta_Grind_Arith_Cutsat_get_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_Grind_Arith_Cutsat_getVars(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_get_x27(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 2);
lean_inc(x_15);
x_16 = lean_nat_dec_lt(x_1, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_14);
x_17 = l_Lean_instInhabitedExpr;
x_18 = l_outOfBounds___rarg(x_17);
lean_ctor_set(x_11, 0, x_18);
return x_11;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = l_Lean_instInhabitedExpr;
x_20 = l_Lean_PersistentArray_get_x21___rarg(x_19, x_14, x_1);
lean_ctor_set(x_11, 0, x_20);
return x_11;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_11, 0);
x_22 = lean_ctor_get(x_11, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_11);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_23, 2);
lean_inc(x_24);
x_25 = lean_nat_dec_lt(x_1, x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_23);
x_26 = l_Lean_instInhabitedExpr;
x_27 = l_outOfBounds___rarg(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_22);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_Lean_instInhabitedExpr;
x_30 = l_Lean_PersistentArray_get_x21___rarg(x_29, x_23, x_1);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_22);
return x_31;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_getVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = l_Lean_Meta_Grind_isSameExpr_unsafe__1(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_4);
x_14 = 1;
return x_14;
}
}
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__2___closed__1() {
_start:
{
size_t x_1; size_t x_2; size_t x_3; 
x_1 = 1;
x_2 = 5;
x_3 = lean_usize_shift_left(x_1, x_2);
return x_3;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__2___closed__2() {
_start:
{
size_t x_1; size_t x_2; size_t x_3; 
x_1 = 1;
x_2 = l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__2___closed__1;
x_3 = lean_usize_sub(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__2___closed__2;
x_7 = lean_usize_land(x_2, x_6);
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_Meta_Grind_isSameExpr_unsafe__1(x_3, x_11);
lean_dec(x_11);
return x_12;
}
case 1:
{
lean_object* x_13; size_t x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_usize_shift_right(x_2, x_5);
x_1 = x_13;
x_2 = x_14;
goto _start;
}
default: 
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_unsigned_to_nat(0u);
x_20 = l_Lean_PersistentHashMap_containsAtAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__3(x_17, x_18, lean_box(0), x_19, x_3);
lean_dec(x_18);
lean_dec(x_17);
return x_20;
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; size_t x_4; uint8_t x_5; 
x_3 = l_Lean_Meta_Grind_hashPtrExpr_unsafe__1(x_2);
x_4 = lean_uint64_to_usize(x_3);
x_5 = l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__2(x_1, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_get_x27(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_PersistentHashMap_contains___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__1(x_14, x_1);
x_16 = lean_box(x_15);
lean_ctor_set(x_11, 0, x_16);
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_PersistentHashMap_contains___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__1(x_19, x_1);
x_21 = lean_box(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Lean_PersistentHashMap_containsAtAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_PersistentHashMap_contains___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__1(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_hasVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_get_x27(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_box(0);
x_15 = lean_ctor_get(x_13, 9);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_15, 2);
lean_inc(x_16);
x_17 = lean_nat_dec_lt(x_1, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_15);
x_18 = l_outOfBounds___rarg(x_14);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; lean_object* x_20; 
x_19 = 0;
x_20 = lean_box(x_19);
lean_ctor_set(x_11, 0, x_20);
return x_11;
}
else
{
uint8_t x_21; lean_object* x_22; 
lean_dec(x_18);
x_21 = 1;
x_22 = lean_box(x_21);
lean_ctor_set(x_11, 0, x_22);
return x_11;
}
}
else
{
lean_object* x_23; 
x_23 = l_Lean_PersistentArray_get_x21___rarg(x_14, x_15, x_1);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; lean_object* x_25; 
x_24 = 0;
x_25 = lean_box(x_24);
lean_ctor_set(x_11, 0, x_25);
return x_11;
}
else
{
uint8_t x_26; lean_object* x_27; 
lean_dec(x_23);
x_26 = 1;
x_27 = lean_box(x_26);
lean_ctor_set(x_11, 0, x_27);
return x_11;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_28 = lean_ctor_get(x_11, 0);
x_29 = lean_ctor_get(x_11, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_11);
x_30 = lean_box(0);
x_31 = lean_ctor_get(x_28, 9);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_ctor_get(x_31, 2);
lean_inc(x_32);
x_33 = lean_nat_dec_lt(x_1, x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_31);
x_34 = l_outOfBounds___rarg(x_30);
if (lean_obj_tag(x_34) == 0)
{
uint8_t x_35; lean_object* x_36; lean_object* x_37; 
x_35 = 0;
x_36 = lean_box(x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_29);
return x_37;
}
else
{
uint8_t x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_34);
x_38 = 1;
x_39 = lean_box(x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_29);
return x_40;
}
}
else
{
lean_object* x_41; 
x_41 = l_Lean_PersistentArray_get_x21___rarg(x_30, x_31, x_1);
if (lean_obj_tag(x_41) == 0)
{
uint8_t x_42; lean_object* x_43; lean_object* x_44; 
x_42 = 0;
x_43 = lean_box(x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_29);
return x_44;
}
else
{
uint8_t x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_41);
x_45 = 1;
x_46 = lean_box(x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_29);
return x_47;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_eliminated(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_assert___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_grind_cutsat_assert_eq(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_11 = lean_st_ref_take(x_2, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 14);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_12, 14);
lean_dec(x_17);
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_13, 1);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_14);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_14, 12);
x_22 = l_Lean_Meta_Grind_Arith_shrink(x_21, x_1);
lean_ctor_set(x_14, 12, x_22);
x_23 = lean_st_ref_set(x_2, x_12, x_15);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
x_26 = lean_box(0);
lean_ctor_set(x_23, 0, x_26);
return x_23;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
lean_dec(x_23);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_30 = lean_ctor_get(x_14, 0);
x_31 = lean_ctor_get(x_14, 1);
x_32 = lean_ctor_get(x_14, 2);
x_33 = lean_ctor_get(x_14, 3);
x_34 = lean_ctor_get(x_14, 4);
x_35 = lean_ctor_get(x_14, 5);
x_36 = lean_ctor_get(x_14, 6);
x_37 = lean_ctor_get(x_14, 7);
x_38 = lean_ctor_get(x_14, 8);
x_39 = lean_ctor_get(x_14, 9);
x_40 = lean_ctor_get(x_14, 10);
x_41 = lean_ctor_get(x_14, 11);
x_42 = lean_ctor_get(x_14, 12);
x_43 = lean_ctor_get(x_14, 13);
x_44 = lean_ctor_get_uint8(x_14, sizeof(void*)*17);
x_45 = lean_ctor_get(x_14, 14);
x_46 = lean_ctor_get(x_14, 15);
x_47 = lean_ctor_get(x_14, 16);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_14);
x_48 = l_Lean_Meta_Grind_Arith_shrink(x_42, x_1);
x_49 = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(x_49, 0, x_30);
lean_ctor_set(x_49, 1, x_31);
lean_ctor_set(x_49, 2, x_32);
lean_ctor_set(x_49, 3, x_33);
lean_ctor_set(x_49, 4, x_34);
lean_ctor_set(x_49, 5, x_35);
lean_ctor_set(x_49, 6, x_36);
lean_ctor_set(x_49, 7, x_37);
lean_ctor_set(x_49, 8, x_38);
lean_ctor_set(x_49, 9, x_39);
lean_ctor_set(x_49, 10, x_40);
lean_ctor_set(x_49, 11, x_41);
lean_ctor_set(x_49, 12, x_48);
lean_ctor_set(x_49, 13, x_43);
lean_ctor_set(x_49, 14, x_45);
lean_ctor_set(x_49, 15, x_46);
lean_ctor_set(x_49, 16, x_47);
lean_ctor_set_uint8(x_49, sizeof(void*)*17, x_44);
lean_ctor_set(x_13, 1, x_49);
x_50 = lean_st_ref_set(x_2, x_12, x_15);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_52 = x_50;
} else {
 lean_dec_ref(x_50);
 x_52 = lean_box(0);
}
x_53 = lean_box(0);
if (lean_is_scalar(x_52)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_52;
}
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_51);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_55 = lean_ctor_get(x_13, 0);
x_56 = lean_ctor_get(x_13, 2);
x_57 = lean_ctor_get(x_13, 3);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_13);
x_58 = lean_ctor_get(x_14, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_14, 1);
lean_inc(x_59);
x_60 = lean_ctor_get(x_14, 2);
lean_inc(x_60);
x_61 = lean_ctor_get(x_14, 3);
lean_inc(x_61);
x_62 = lean_ctor_get(x_14, 4);
lean_inc(x_62);
x_63 = lean_ctor_get(x_14, 5);
lean_inc(x_63);
x_64 = lean_ctor_get(x_14, 6);
lean_inc(x_64);
x_65 = lean_ctor_get(x_14, 7);
lean_inc(x_65);
x_66 = lean_ctor_get(x_14, 8);
lean_inc(x_66);
x_67 = lean_ctor_get(x_14, 9);
lean_inc(x_67);
x_68 = lean_ctor_get(x_14, 10);
lean_inc(x_68);
x_69 = lean_ctor_get(x_14, 11);
lean_inc(x_69);
x_70 = lean_ctor_get(x_14, 12);
lean_inc(x_70);
x_71 = lean_ctor_get(x_14, 13);
lean_inc(x_71);
x_72 = lean_ctor_get_uint8(x_14, sizeof(void*)*17);
x_73 = lean_ctor_get(x_14, 14);
lean_inc(x_73);
x_74 = lean_ctor_get(x_14, 15);
lean_inc(x_74);
x_75 = lean_ctor_get(x_14, 16);
lean_inc(x_75);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 lean_ctor_release(x_14, 2);
 lean_ctor_release(x_14, 3);
 lean_ctor_release(x_14, 4);
 lean_ctor_release(x_14, 5);
 lean_ctor_release(x_14, 6);
 lean_ctor_release(x_14, 7);
 lean_ctor_release(x_14, 8);
 lean_ctor_release(x_14, 9);
 lean_ctor_release(x_14, 10);
 lean_ctor_release(x_14, 11);
 lean_ctor_release(x_14, 12);
 lean_ctor_release(x_14, 13);
 lean_ctor_release(x_14, 14);
 lean_ctor_release(x_14, 15);
 lean_ctor_release(x_14, 16);
 x_76 = x_14;
} else {
 lean_dec_ref(x_14);
 x_76 = lean_box(0);
}
x_77 = l_Lean_Meta_Grind_Arith_shrink(x_70, x_1);
if (lean_is_scalar(x_76)) {
 x_78 = lean_alloc_ctor(0, 17, 1);
} else {
 x_78 = x_76;
}
lean_ctor_set(x_78, 0, x_58);
lean_ctor_set(x_78, 1, x_59);
lean_ctor_set(x_78, 2, x_60);
lean_ctor_set(x_78, 3, x_61);
lean_ctor_set(x_78, 4, x_62);
lean_ctor_set(x_78, 5, x_63);
lean_ctor_set(x_78, 6, x_64);
lean_ctor_set(x_78, 7, x_65);
lean_ctor_set(x_78, 8, x_66);
lean_ctor_set(x_78, 9, x_67);
lean_ctor_set(x_78, 10, x_68);
lean_ctor_set(x_78, 11, x_69);
lean_ctor_set(x_78, 12, x_77);
lean_ctor_set(x_78, 13, x_71);
lean_ctor_set(x_78, 14, x_73);
lean_ctor_set(x_78, 15, x_74);
lean_ctor_set(x_78, 16, x_75);
lean_ctor_set_uint8(x_78, sizeof(void*)*17, x_72);
x_79 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_79, 0, x_55);
lean_ctor_set(x_79, 1, x_78);
lean_ctor_set(x_79, 2, x_56);
lean_ctor_set(x_79, 3, x_57);
lean_ctor_set(x_12, 14, x_79);
x_80 = lean_st_ref_set(x_2, x_12, x_15);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_82 = x_80;
} else {
 lean_dec_ref(x_80);
 x_82 = lean_box(0);
}
x_83 = lean_box(0);
if (lean_is_scalar(x_82)) {
 x_84 = lean_alloc_ctor(0, 2, 0);
} else {
 x_84 = x_82;
}
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_81);
return x_84;
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; uint8_t x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_85 = lean_ctor_get(x_12, 0);
x_86 = lean_ctor_get(x_12, 1);
x_87 = lean_ctor_get(x_12, 2);
x_88 = lean_ctor_get(x_12, 3);
x_89 = lean_ctor_get(x_12, 4);
x_90 = lean_ctor_get(x_12, 5);
x_91 = lean_ctor_get(x_12, 6);
x_92 = lean_ctor_get(x_12, 7);
x_93 = lean_ctor_get_uint8(x_12, sizeof(void*)*16);
x_94 = lean_ctor_get(x_12, 8);
x_95 = lean_ctor_get(x_12, 9);
x_96 = lean_ctor_get(x_12, 10);
x_97 = lean_ctor_get(x_12, 11);
x_98 = lean_ctor_get(x_12, 12);
x_99 = lean_ctor_get(x_12, 13);
x_100 = lean_ctor_get(x_12, 15);
lean_inc(x_100);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_97);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_inc(x_92);
lean_inc(x_91);
lean_inc(x_90);
lean_inc(x_89);
lean_inc(x_88);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_12);
x_101 = lean_ctor_get(x_13, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_13, 2);
lean_inc(x_102);
x_103 = lean_ctor_get(x_13, 3);
lean_inc(x_103);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 lean_ctor_release(x_13, 2);
 lean_ctor_release(x_13, 3);
 x_104 = x_13;
} else {
 lean_dec_ref(x_13);
 x_104 = lean_box(0);
}
x_105 = lean_ctor_get(x_14, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_14, 1);
lean_inc(x_106);
x_107 = lean_ctor_get(x_14, 2);
lean_inc(x_107);
x_108 = lean_ctor_get(x_14, 3);
lean_inc(x_108);
x_109 = lean_ctor_get(x_14, 4);
lean_inc(x_109);
x_110 = lean_ctor_get(x_14, 5);
lean_inc(x_110);
x_111 = lean_ctor_get(x_14, 6);
lean_inc(x_111);
x_112 = lean_ctor_get(x_14, 7);
lean_inc(x_112);
x_113 = lean_ctor_get(x_14, 8);
lean_inc(x_113);
x_114 = lean_ctor_get(x_14, 9);
lean_inc(x_114);
x_115 = lean_ctor_get(x_14, 10);
lean_inc(x_115);
x_116 = lean_ctor_get(x_14, 11);
lean_inc(x_116);
x_117 = lean_ctor_get(x_14, 12);
lean_inc(x_117);
x_118 = lean_ctor_get(x_14, 13);
lean_inc(x_118);
x_119 = lean_ctor_get_uint8(x_14, sizeof(void*)*17);
x_120 = lean_ctor_get(x_14, 14);
lean_inc(x_120);
x_121 = lean_ctor_get(x_14, 15);
lean_inc(x_121);
x_122 = lean_ctor_get(x_14, 16);
lean_inc(x_122);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 lean_ctor_release(x_14, 2);
 lean_ctor_release(x_14, 3);
 lean_ctor_release(x_14, 4);
 lean_ctor_release(x_14, 5);
 lean_ctor_release(x_14, 6);
 lean_ctor_release(x_14, 7);
 lean_ctor_release(x_14, 8);
 lean_ctor_release(x_14, 9);
 lean_ctor_release(x_14, 10);
 lean_ctor_release(x_14, 11);
 lean_ctor_release(x_14, 12);
 lean_ctor_release(x_14, 13);
 lean_ctor_release(x_14, 14);
 lean_ctor_release(x_14, 15);
 lean_ctor_release(x_14, 16);
 x_123 = x_14;
} else {
 lean_dec_ref(x_14);
 x_123 = lean_box(0);
}
x_124 = l_Lean_Meta_Grind_Arith_shrink(x_117, x_1);
if (lean_is_scalar(x_123)) {
 x_125 = lean_alloc_ctor(0, 17, 1);
} else {
 x_125 = x_123;
}
lean_ctor_set(x_125, 0, x_105);
lean_ctor_set(x_125, 1, x_106);
lean_ctor_set(x_125, 2, x_107);
lean_ctor_set(x_125, 3, x_108);
lean_ctor_set(x_125, 4, x_109);
lean_ctor_set(x_125, 5, x_110);
lean_ctor_set(x_125, 6, x_111);
lean_ctor_set(x_125, 7, x_112);
lean_ctor_set(x_125, 8, x_113);
lean_ctor_set(x_125, 9, x_114);
lean_ctor_set(x_125, 10, x_115);
lean_ctor_set(x_125, 11, x_116);
lean_ctor_set(x_125, 12, x_124);
lean_ctor_set(x_125, 13, x_118);
lean_ctor_set(x_125, 14, x_120);
lean_ctor_set(x_125, 15, x_121);
lean_ctor_set(x_125, 16, x_122);
lean_ctor_set_uint8(x_125, sizeof(void*)*17, x_119);
if (lean_is_scalar(x_104)) {
 x_126 = lean_alloc_ctor(0, 4, 0);
} else {
 x_126 = x_104;
}
lean_ctor_set(x_126, 0, x_101);
lean_ctor_set(x_126, 1, x_125);
lean_ctor_set(x_126, 2, x_102);
lean_ctor_set(x_126, 3, x_103);
x_127 = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(x_127, 0, x_85);
lean_ctor_set(x_127, 1, x_86);
lean_ctor_set(x_127, 2, x_87);
lean_ctor_set(x_127, 3, x_88);
lean_ctor_set(x_127, 4, x_89);
lean_ctor_set(x_127, 5, x_90);
lean_ctor_set(x_127, 6, x_91);
lean_ctor_set(x_127, 7, x_92);
lean_ctor_set(x_127, 8, x_94);
lean_ctor_set(x_127, 9, x_95);
lean_ctor_set(x_127, 10, x_96);
lean_ctor_set(x_127, 11, x_97);
lean_ctor_set(x_127, 12, x_98);
lean_ctor_set(x_127, 13, x_99);
lean_ctor_set(x_127, 14, x_126);
lean_ctor_set(x_127, 15, x_100);
lean_ctor_set_uint8(x_127, sizeof(void*)*16, x_93);
x_128 = lean_st_ref_set(x_2, x_127, x_15);
x_129 = lean_ctor_get(x_128, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_130 = x_128;
} else {
 lean_dec_ref(x_128);
 x_130 = lean_box(0);
}
x_131 = lean_box(0);
if (lean_is_scalar(x_130)) {
 x_132 = lean_alloc_ctor(0, 2, 0);
} else {
 x_132 = x_130;
}
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_129);
return x_132;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
static lean_object* _init_l_Int_Linear_Poly_pp_go___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Int_Linear_Poly_pp_go___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Int_Linear_Poly_pp_go___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Int_Linear_Poly_pp_go___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" + ", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Int_Linear_Poly_pp_go___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Int_Linear_Poly_pp_go___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Int_Linear_Poly_pp_go___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("-", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Int_Linear_Poly_pp_go___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Int_Linear_Poly_pp_go___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("*", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Int_Linear_Poly_pp_go___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Int_Linear_Poly_pp_go___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_pp_go(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = l_Int_Linear_Poly_isZero___closed__1;
x_15 = lean_int_dec_eq(x_13, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = l_Int_Linear_Poly_pp_go___closed__2;
x_17 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_1);
x_18 = l_Int_Linear_Poly_pp_go___closed__4;
x_19 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_int_dec_lt(x_13, x_14);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_nat_abs(x_13);
lean_dec(x_13);
x_22 = l_Nat_reprFast(x_21);
lean_ctor_set_tag(x_2, 3);
lean_ctor_set(x_2, 0, x_22);
x_23 = l_Lean_MessageData_ofFormat(x_2);
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_16);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_11);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_27 = lean_nat_abs(x_13);
lean_dec(x_13);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_sub(x_27, x_28);
lean_dec(x_27);
x_30 = lean_nat_add(x_29, x_28);
lean_dec(x_29);
x_31 = l_Nat_reprFast(x_30);
x_32 = l_Int_Linear_Poly_pp_go___closed__5;
x_33 = lean_string_append(x_32, x_31);
lean_dec(x_31);
lean_ctor_set_tag(x_2, 3);
lean_ctor_set(x_2, 0, x_33);
x_34 = l_Lean_MessageData_ofFormat(x_2);
x_35 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_35, 0, x_19);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_16);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_11);
return x_37;
}
}
else
{
lean_object* x_38; 
lean_free_object(x_2);
lean_dec(x_13);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_1);
lean_ctor_set(x_38, 1, x_11);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_39 = lean_ctor_get(x_2, 0);
lean_inc(x_39);
lean_dec(x_2);
x_40 = l_Int_Linear_Poly_isZero___closed__1;
x_41 = lean_int_dec_eq(x_39, x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_42 = l_Int_Linear_Poly_pp_go___closed__2;
x_43 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_1);
x_44 = l_Int_Linear_Poly_pp_go___closed__4;
x_45 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_int_dec_lt(x_39, x_40);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_47 = lean_nat_abs(x_39);
lean_dec(x_39);
x_48 = l_Nat_reprFast(x_47);
x_49 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_49, 0, x_48);
x_50 = l_Lean_MessageData_ofFormat(x_49);
x_51 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_51, 0, x_45);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_42);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_11);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_54 = lean_nat_abs(x_39);
lean_dec(x_39);
x_55 = lean_unsigned_to_nat(1u);
x_56 = lean_nat_sub(x_54, x_55);
lean_dec(x_54);
x_57 = lean_nat_add(x_56, x_55);
lean_dec(x_56);
x_58 = l_Nat_reprFast(x_57);
x_59 = l_Int_Linear_Poly_pp_go___closed__5;
x_60 = lean_string_append(x_59, x_58);
lean_dec(x_58);
x_61 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_61, 0, x_60);
x_62 = l_Lean_MessageData_ofFormat(x_61);
x_63 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_63, 0, x_45);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_42);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_11);
return x_65;
}
}
else
{
lean_object* x_66; 
lean_dec(x_39);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_1);
lean_ctor_set(x_66, 1, x_11);
return x_66;
}
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_67 = lean_ctor_get(x_2, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_2, 1);
lean_inc(x_68);
x_69 = lean_ctor_get(x_2, 2);
lean_inc(x_69);
lean_dec(x_2);
x_70 = l_Int_Linear_Poly_pp_go___closed__6;
x_71 = lean_int_dec_eq(x_67, x_70);
if (x_71 == 0)
{
lean_object* x_72; uint8_t x_73; 
x_72 = l_Lean_Meta_Grind_Arith_Cutsat_getVar(x_68, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_68);
x_73 = !lean_is_exclusive(x_72);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_74 = lean_ctor_get(x_72, 0);
x_75 = lean_ctor_get(x_72, 1);
x_76 = l_Int_Linear_Poly_pp_go___closed__2;
lean_ctor_set_tag(x_72, 7);
lean_ctor_set(x_72, 1, x_1);
lean_ctor_set(x_72, 0, x_76);
x_77 = l_Int_Linear_Poly_pp_go___closed__4;
x_78 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_78, 0, x_72);
lean_ctor_set(x_78, 1, x_77);
x_79 = l_Lean_Meta_Grind_Arith_quoteIfArithTerm(x_74);
x_80 = l_Int_Linear_Poly_isZero___closed__1;
x_81 = lean_int_dec_lt(x_67, x_80);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_82 = lean_nat_abs(x_67);
lean_dec(x_67);
x_83 = l_Nat_reprFast(x_82);
x_84 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_84, 0, x_83);
x_85 = l_Lean_MessageData_ofFormat(x_84);
x_86 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_86, 0, x_78);
lean_ctor_set(x_86, 1, x_85);
x_87 = l_Int_Linear_Poly_pp_go___closed__8;
x_88 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_79);
x_90 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_76);
x_1 = x_90;
x_2 = x_69;
x_11 = x_75;
goto _start;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_92 = lean_nat_abs(x_67);
lean_dec(x_67);
x_93 = lean_unsigned_to_nat(1u);
x_94 = lean_nat_sub(x_92, x_93);
lean_dec(x_92);
x_95 = lean_nat_add(x_94, x_93);
lean_dec(x_94);
x_96 = l_Nat_reprFast(x_95);
x_97 = l_Int_Linear_Poly_pp_go___closed__5;
x_98 = lean_string_append(x_97, x_96);
lean_dec(x_96);
x_99 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_99, 0, x_98);
x_100 = l_Lean_MessageData_ofFormat(x_99);
x_101 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_101, 0, x_78);
lean_ctor_set(x_101, 1, x_100);
x_102 = l_Int_Linear_Poly_pp_go___closed__8;
x_103 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
x_104 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_79);
x_105 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_76);
x_1 = x_105;
x_2 = x_69;
x_11 = x_75;
goto _start;
}
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_107 = lean_ctor_get(x_72, 0);
x_108 = lean_ctor_get(x_72, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_72);
x_109 = l_Int_Linear_Poly_pp_go___closed__2;
x_110 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_1);
x_111 = l_Int_Linear_Poly_pp_go___closed__4;
x_112 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
x_113 = l_Lean_Meta_Grind_Arith_quoteIfArithTerm(x_107);
x_114 = l_Int_Linear_Poly_isZero___closed__1;
x_115 = lean_int_dec_lt(x_67, x_114);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_116 = lean_nat_abs(x_67);
lean_dec(x_67);
x_117 = l_Nat_reprFast(x_116);
x_118 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_118, 0, x_117);
x_119 = l_Lean_MessageData_ofFormat(x_118);
x_120 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_120, 0, x_112);
lean_ctor_set(x_120, 1, x_119);
x_121 = l_Int_Linear_Poly_pp_go___closed__8;
x_122 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_113);
x_124 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_109);
x_1 = x_124;
x_2 = x_69;
x_11 = x_108;
goto _start;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_126 = lean_nat_abs(x_67);
lean_dec(x_67);
x_127 = lean_unsigned_to_nat(1u);
x_128 = lean_nat_sub(x_126, x_127);
lean_dec(x_126);
x_129 = lean_nat_add(x_128, x_127);
lean_dec(x_128);
x_130 = l_Nat_reprFast(x_129);
x_131 = l_Int_Linear_Poly_pp_go___closed__5;
x_132 = lean_string_append(x_131, x_130);
lean_dec(x_130);
x_133 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_133, 0, x_132);
x_134 = l_Lean_MessageData_ofFormat(x_133);
x_135 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_135, 0, x_112);
lean_ctor_set(x_135, 1, x_134);
x_136 = l_Int_Linear_Poly_pp_go___closed__8;
x_137 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
x_138 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_113);
x_139 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_109);
x_1 = x_139;
x_2 = x_69;
x_11 = x_108;
goto _start;
}
}
}
else
{
lean_object* x_141; uint8_t x_142; 
lean_dec(x_67);
x_141 = l_Lean_Meta_Grind_Arith_Cutsat_getVar(x_68, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_68);
x_142 = !lean_is_exclusive(x_141);
if (x_142 == 0)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_143 = lean_ctor_get(x_141, 0);
x_144 = lean_ctor_get(x_141, 1);
x_145 = l_Int_Linear_Poly_pp_go___closed__2;
lean_ctor_set_tag(x_141, 7);
lean_ctor_set(x_141, 1, x_1);
lean_ctor_set(x_141, 0, x_145);
x_146 = l_Int_Linear_Poly_pp_go___closed__4;
x_147 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_147, 0, x_141);
lean_ctor_set(x_147, 1, x_146);
x_148 = l_Lean_Meta_Grind_Arith_quoteIfArithTerm(x_143);
x_149 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_149, 0, x_147);
lean_ctor_set(x_149, 1, x_148);
x_150 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_145);
x_1 = x_150;
x_2 = x_69;
x_11 = x_144;
goto _start;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_152 = lean_ctor_get(x_141, 0);
x_153 = lean_ctor_get(x_141, 1);
lean_inc(x_153);
lean_inc(x_152);
lean_dec(x_141);
x_154 = l_Int_Linear_Poly_pp_go___closed__2;
x_155 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_1);
x_156 = l_Int_Linear_Poly_pp_go___closed__4;
x_157 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_157, 0, x_155);
lean_ctor_set(x_157, 1, x_156);
x_158 = l_Lean_Meta_Grind_Arith_quoteIfArithTerm(x_152);
x_159 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_159, 0, x_157);
lean_ctor_set(x_159, 1, x_158);
x_160 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_154);
x_1 = x_160;
x_2 = x_69;
x_11 = x_153;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_pp_go___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Int_Linear_Poly_pp_go(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_pp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = l_Int_Linear_Poly_isZero___closed__1;
x_14 = lean_int_dec_lt(x_12, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_nat_abs(x_12);
lean_dec(x_12);
x_16 = l_Nat_reprFast(x_15);
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 0, x_16);
x_17 = l_Lean_MessageData_ofFormat(x_1);
x_18 = l_Int_Linear_Poly_pp_go___closed__2;
x_19 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_10);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_22 = lean_nat_abs(x_12);
lean_dec(x_12);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_sub(x_22, x_23);
lean_dec(x_22);
x_25 = lean_nat_add(x_24, x_23);
lean_dec(x_24);
x_26 = l_Nat_reprFast(x_25);
x_27 = l_Int_Linear_Poly_pp_go___closed__5;
x_28 = lean_string_append(x_27, x_26);
lean_dec(x_26);
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 0, x_28);
x_29 = l_Lean_MessageData_ofFormat(x_1);
x_30 = l_Int_Linear_Poly_pp_go___closed__2;
x_31 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
x_32 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_10);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = lean_ctor_get(x_1, 0);
lean_inc(x_34);
lean_dec(x_1);
x_35 = l_Int_Linear_Poly_isZero___closed__1;
x_36 = lean_int_dec_lt(x_34, x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_37 = lean_nat_abs(x_34);
lean_dec(x_34);
x_38 = l_Nat_reprFast(x_37);
x_39 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = l_Lean_MessageData_ofFormat(x_39);
x_41 = l_Int_Linear_Poly_pp_go___closed__2;
x_42 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
x_43 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_10);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_45 = lean_nat_abs(x_34);
lean_dec(x_34);
x_46 = lean_unsigned_to_nat(1u);
x_47 = lean_nat_sub(x_45, x_46);
lean_dec(x_45);
x_48 = lean_nat_add(x_47, x_46);
lean_dec(x_47);
x_49 = l_Nat_reprFast(x_48);
x_50 = l_Int_Linear_Poly_pp_go___closed__5;
x_51 = lean_string_append(x_50, x_49);
lean_dec(x_49);
x_52 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = l_Lean_MessageData_ofFormat(x_52);
x_54 = l_Int_Linear_Poly_pp_go___closed__2;
x_55 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
x_56 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_10);
return x_57;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_58 = lean_ctor_get(x_1, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_1, 1);
lean_inc(x_59);
x_60 = lean_ctor_get(x_1, 2);
lean_inc(x_60);
lean_dec(x_1);
x_61 = l_Int_Linear_Poly_pp_go___closed__6;
x_62 = lean_int_dec_eq(x_58, x_61);
if (x_62 == 0)
{
lean_object* x_63; uint8_t x_64; 
x_63 = l_Lean_Meta_Grind_Arith_Cutsat_getVar(x_59, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_59);
x_64 = !lean_is_exclusive(x_63);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_65 = lean_ctor_get(x_63, 0);
x_66 = lean_ctor_get(x_63, 1);
x_67 = l_Lean_Meta_Grind_Arith_quoteIfArithTerm(x_65);
x_68 = l_Int_Linear_Poly_isZero___closed__1;
x_69 = lean_int_dec_lt(x_58, x_68);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_70 = lean_nat_abs(x_58);
lean_dec(x_58);
x_71 = l_Nat_reprFast(x_70);
x_72 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_72, 0, x_71);
x_73 = l_Lean_MessageData_ofFormat(x_72);
x_74 = l_Int_Linear_Poly_pp_go___closed__2;
lean_ctor_set_tag(x_63, 7);
lean_ctor_set(x_63, 1, x_73);
lean_ctor_set(x_63, 0, x_74);
x_75 = l_Int_Linear_Poly_pp_go___closed__8;
x_76 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_76, 0, x_63);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_67);
x_78 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_74);
x_79 = l_Int_Linear_Poly_pp_go(x_78, x_60, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_66);
return x_79;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_80 = lean_nat_abs(x_58);
lean_dec(x_58);
x_81 = lean_unsigned_to_nat(1u);
x_82 = lean_nat_sub(x_80, x_81);
lean_dec(x_80);
x_83 = lean_nat_add(x_82, x_81);
lean_dec(x_82);
x_84 = l_Nat_reprFast(x_83);
x_85 = l_Int_Linear_Poly_pp_go___closed__5;
x_86 = lean_string_append(x_85, x_84);
lean_dec(x_84);
x_87 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_87, 0, x_86);
x_88 = l_Lean_MessageData_ofFormat(x_87);
x_89 = l_Int_Linear_Poly_pp_go___closed__2;
lean_ctor_set_tag(x_63, 7);
lean_ctor_set(x_63, 1, x_88);
lean_ctor_set(x_63, 0, x_89);
x_90 = l_Int_Linear_Poly_pp_go___closed__8;
x_91 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_91, 0, x_63);
lean_ctor_set(x_91, 1, x_90);
x_92 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_67);
x_93 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_89);
x_94 = l_Int_Linear_Poly_pp_go(x_93, x_60, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_66);
return x_94;
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; 
x_95 = lean_ctor_get(x_63, 0);
x_96 = lean_ctor_get(x_63, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_63);
x_97 = l_Lean_Meta_Grind_Arith_quoteIfArithTerm(x_95);
x_98 = l_Int_Linear_Poly_isZero___closed__1;
x_99 = lean_int_dec_lt(x_58, x_98);
if (x_99 == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_100 = lean_nat_abs(x_58);
lean_dec(x_58);
x_101 = l_Nat_reprFast(x_100);
x_102 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_102, 0, x_101);
x_103 = l_Lean_MessageData_ofFormat(x_102);
x_104 = l_Int_Linear_Poly_pp_go___closed__2;
x_105 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_103);
x_106 = l_Int_Linear_Poly_pp_go___closed__8;
x_107 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_97);
x_109 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_104);
x_110 = l_Int_Linear_Poly_pp_go(x_109, x_60, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_96);
return x_110;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_111 = lean_nat_abs(x_58);
lean_dec(x_58);
x_112 = lean_unsigned_to_nat(1u);
x_113 = lean_nat_sub(x_111, x_112);
lean_dec(x_111);
x_114 = lean_nat_add(x_113, x_112);
lean_dec(x_113);
x_115 = l_Nat_reprFast(x_114);
x_116 = l_Int_Linear_Poly_pp_go___closed__5;
x_117 = lean_string_append(x_116, x_115);
lean_dec(x_115);
x_118 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_118, 0, x_117);
x_119 = l_Lean_MessageData_ofFormat(x_118);
x_120 = l_Int_Linear_Poly_pp_go___closed__2;
x_121 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_119);
x_122 = l_Int_Linear_Poly_pp_go___closed__8;
x_123 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_97);
x_125 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_120);
x_126 = l_Int_Linear_Poly_pp_go(x_125, x_60, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_96);
return x_126;
}
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_58);
x_127 = l_Lean_Meta_Grind_Arith_Cutsat_getVar(x_59, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_59);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
lean_dec(x_127);
x_130 = l_Lean_Meta_Grind_Arith_quoteIfArithTerm(x_128);
x_131 = l_Int_Linear_Poly_pp_go(x_130, x_60, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_129);
return x_131;
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_pp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Int_Linear_Poly_pp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
x_4 = lean_nat_dec_lt(x_2, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_5 = l_Lean_instInhabitedExpr;
x_6 = l_outOfBounds___rarg(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_instInhabitedExpr;
x_8 = l_Lean_PersistentArray_get_x21___rarg(x_7, x_1, x_2);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_getVars(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_closure((void*)(l_Int_Linear_Poly_denoteExpr_x27___lambda__1___boxed), 2, 1);
lean_closure_set(x_14, 0, x_12);
x_15 = l_Int_Linear_Poly_denoteExpr(x_14, x_1, x_6, x_7, x_8, x_9, x_13);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Int_Linear_Poly_denoteExpr_x27___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Int_Linear_Poly_denoteExpr_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isTrivial(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_int_emod(x_3, x_4);
x_6 = l_Int_Linear_Poly_isZero___closed__1;
x_7 = lean_int_dec_eq(x_5, x_6);
lean_dec(x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = l_Int_Linear_Poly_pp_go___closed__6;
x_10 = lean_int_dec_eq(x_8, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isTrivial___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isTrivial(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ∣ ", 5, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = l_Int_Linear_Poly_pp(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = l_Int_Linear_Poly_isZero___closed__1;
x_17 = lean_int_dec_lt(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_18 = lean_nat_abs(x_15);
lean_dec(x_15);
x_19 = l_Nat_reprFast(x_18);
x_20 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = l_Lean_MessageData_ofFormat(x_20);
x_22 = l_Int_Linear_Poly_pp_go___closed__2;
x_23 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___closed__2;
x_25 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_14);
x_27 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_22);
lean_ctor_set(x_12, 0, x_27);
return x_12;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_28 = lean_nat_abs(x_15);
lean_dec(x_15);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_sub(x_28, x_29);
lean_dec(x_28);
x_31 = lean_nat_add(x_30, x_29);
lean_dec(x_30);
x_32 = l_Nat_reprFast(x_31);
x_33 = l_Int_Linear_Poly_pp_go___closed__5;
x_34 = lean_string_append(x_33, x_32);
lean_dec(x_32);
x_35 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = l_Lean_MessageData_ofFormat(x_35);
x_37 = l_Int_Linear_Poly_pp_go___closed__2;
x_38 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
x_39 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___closed__2;
x_40 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_14);
x_42 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_37);
lean_ctor_set(x_12, 0, x_42);
return x_12;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_43 = lean_ctor_get(x_12, 0);
x_44 = lean_ctor_get(x_12, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_12);
x_45 = lean_ctor_get(x_1, 0);
lean_inc(x_45);
lean_dec(x_1);
x_46 = l_Int_Linear_Poly_isZero___closed__1;
x_47 = lean_int_dec_lt(x_45, x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_48 = lean_nat_abs(x_45);
lean_dec(x_45);
x_49 = l_Nat_reprFast(x_48);
x_50 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_50, 0, x_49);
x_51 = l_Lean_MessageData_ofFormat(x_50);
x_52 = l_Int_Linear_Poly_pp_go___closed__2;
x_53 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
x_54 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___closed__2;
x_55 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_43);
x_57 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_52);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_44);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_59 = lean_nat_abs(x_45);
lean_dec(x_45);
x_60 = lean_unsigned_to_nat(1u);
x_61 = lean_nat_sub(x_59, x_60);
lean_dec(x_59);
x_62 = lean_nat_add(x_61, x_60);
lean_dec(x_61);
x_63 = l_Nat_reprFast(x_62);
x_64 = l_Int_Linear_Poly_pp_go___closed__5;
x_65 = lean_string_append(x_64, x_63);
lean_dec(x_63);
x_66 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_66, 0, x_65);
x_67 = l_Lean_MessageData_ofFormat(x_66);
x_68 = l_Int_Linear_Poly_pp_go___closed__2;
x_69 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_67);
x_70 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___closed__2;
x_71 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_43);
x_73 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_68);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_44);
return x_74;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Neg", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("neg", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__1;
x_2 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Level_ofNat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__3;
x_2 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__5;
x_3 = l_Lean_Expr_const___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Int", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__8;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("instNegInt", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__7;
x_2 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__10;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__11;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = l_Int_Linear_Poly_denoteExpr_x27(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = l_Int_Linear_Poly_isZero___closed__1;
x_17 = lean_int_dec_le(x_16, x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_18 = lean_int_neg(x_15);
lean_dec(x_15);
x_19 = l_Int_toNat(x_18);
lean_dec(x_18);
x_20 = l_Lean_instToExprInt_mkNat(x_19);
x_21 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__6;
x_22 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__9;
x_23 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__12;
x_24 = l_Lean_mkApp3(x_21, x_22, x_23, x_20);
x_25 = l_Lean_mkIntDvd(x_24, x_14);
lean_ctor_set(x_12, 0, x_25);
return x_12;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = l_Int_toNat(x_15);
lean_dec(x_15);
x_27 = l_Lean_instToExprInt_mkNat(x_26);
x_28 = l_Lean_mkIntDvd(x_27, x_14);
lean_ctor_set(x_12, 0, x_28);
return x_12;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_12, 0);
x_30 = lean_ctor_get(x_12, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_12);
x_31 = lean_ctor_get(x_1, 0);
lean_inc(x_31);
lean_dec(x_1);
x_32 = l_Int_Linear_Poly_isZero___closed__1;
x_33 = lean_int_dec_le(x_32, x_31);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_34 = lean_int_neg(x_31);
lean_dec(x_31);
x_35 = l_Int_toNat(x_34);
lean_dec(x_34);
x_36 = l_Lean_instToExprInt_mkNat(x_35);
x_37 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__6;
x_38 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__9;
x_39 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__12;
x_40 = l_Lean_mkApp3(x_37, x_38, x_39, x_36);
x_41 = l_Lean_mkIntDvd(x_40, x_29);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_30);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = l_Int_toNat(x_31);
lean_dec(x_31);
x_44 = l_Lean_instToExprInt_mkNat(x_43);
x_45 = l_Lean_mkIntDvd(x_44, x_29);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_30);
return x_46;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 5);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___spec__1___rarg___boxed), 10, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("`grind` internal error, unexpected", 34, 34);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = l_Lean_indentD(x_13);
x_16 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__2;
lean_ctor_set_tag(x_11, 7);
lean_ctor_set(x_11, 1, x_15);
lean_ctor_set(x_11, 0, x_16);
x_17 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__4;
x_18 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___spec__1___rarg(x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_14);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_20 = lean_ctor_get(x_11, 0);
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_11);
x_22 = l_Lean_indentD(x_20);
x_23 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__2;
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__4;
x_26 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___spec__1___rarg(x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_Int_Linear_Poly_isZero___closed__1;
x_5 = lean_int_dec_eq(x_3, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = l_Int_Linear_Poly_getConst(x_2);
x_9 = l_Int_Linear_Poly_gcdCoeffs_x27(x_2);
x_10 = lean_nat_to_int(x_9);
x_11 = lean_int_emod(x_8, x_10);
lean_dec(x_10);
lean_dec(x_8);
x_12 = l_Int_Linear_Poly_isZero___closed__1;
x_13 = lean_int_dec_eq(x_11, x_12);
lean_dec(x_11);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = 1;
return x_14;
}
else
{
uint8_t x_15; 
x_15 = 0;
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ≠ 0", 6, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l_Int_Linear_Poly_pp(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_Int_Linear_Poly_pp_go___closed__2;
x_16 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___closed__2;
x_18 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set(x_12, 0, x_18);
return x_12;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_12, 0);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_12);
x_21 = l_Int_Linear_Poly_pp_go___closed__2;
x_22 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
x_23 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___closed__2;
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_20);
return x_25;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 5);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___spec__1___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = l_Lean_indentD(x_13);
x_16 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__2;
lean_ctor_set_tag(x_11, 7);
lean_ctor_set(x_11, 1, x_15);
lean_ctor_set(x_11, 0, x_16);
x_17 = l_Int_Linear_Poly_pp_go___closed__2;
x_18 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___spec__1___rarg(x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_14);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_20 = lean_ctor_get(x_11, 0);
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_11);
x_22 = l_Lean_indentD(x_20);
x_23 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__2;
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_Int_Linear_Poly_pp_go___closed__2;
x_26 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___spec__1___rarg(x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Int_Linear_Poly_isZero___closed__1;
x_2 = l_Lean_mkIntLit(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l_Int_Linear_Poly_denoteExpr_x27(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l___private_Lean_Expr_0__Lean_intEqPred;
x_16 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___closed__1;
x_17 = l_Lean_mkAppB(x_15, x_14, x_16);
x_18 = l_Lean_mkNot(x_17);
lean_ctor_set(x_12, 0, x_18);
return x_12;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_12, 0);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_12);
x_21 = l___private_Lean_Expr_0__Lean_intEqPred;
x_22 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___closed__1;
x_23 = l_Lean_mkAppB(x_21, x_19, x_22);
x_24 = l_Lean_mkNot(x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_20);
return x_25;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assert___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_grind_cutsat_assert_le(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_Int_Linear_Poly_isZero___closed__1;
x_5 = lean_int_dec_le(x_3, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ≤ 0", 6, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l_Int_Linear_Poly_pp(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_Int_Linear_Poly_pp_go___closed__2;
x_16 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___closed__2;
x_18 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set(x_12, 0, x_18);
return x_12;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_12, 0);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_12);
x_21 = l_Int_Linear_Poly_pp_go___closed__2;
x_22 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
x_23 = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___closed__2;
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_20);
return x_25;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l_Int_Linear_Poly_denoteExpr_x27(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l___private_Lean_Expr_0__Lean_intLEPred;
x_16 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___closed__1;
x_17 = l_Lean_mkAppB(x_15, x_14, x_16);
lean_ctor_set(x_12, 0, x_17);
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = l___private_Lean_Expr_0__Lean_intLEPred;
x_21 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___closed__1;
x_22 = l_Lean_mkAppB(x_20, x_18, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_19);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 5);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___spec__1___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = l_Lean_indentD(x_13);
x_16 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__2;
lean_ctor_set_tag(x_11, 7);
lean_ctor_set(x_11, 1, x_15);
lean_ctor_set(x_11, 0, x_16);
x_17 = l_Int_Linear_Poly_pp_go___closed__2;
x_18 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___spec__1___rarg(x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_14);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_20 = lean_ctor_get(x_11, 0);
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_11);
x_22 = l_Lean_indentD(x_20);
x_23 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__2;
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_Int_Linear_Poly_pp_go___closed__2;
x_26 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___spec__1___rarg(x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_isTrivial(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_Int_Linear_Poly_isZero___closed__1;
x_5 = lean_int_dec_eq(x_3, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_isTrivial___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_isTrivial(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" = 0", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l_Int_Linear_Poly_pp(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_Int_Linear_Poly_pp_go___closed__2;
x_16 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___closed__2;
x_18 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set(x_12, 0, x_18);
return x_12;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_12, 0);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_12);
x_21 = l_Int_Linear_Poly_pp_go___closed__2;
x_22 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
x_23 = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___closed__2;
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_20);
return x_25;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l_Int_Linear_Poly_denoteExpr_x27(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l___private_Lean_Expr_0__Lean_intEqPred;
x_16 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___closed__1;
x_17 = l_Lean_mkAppB(x_15, x_14, x_16);
lean_ctor_set(x_12, 0, x_17);
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = l___private_Lean_Expr_0__Lean_intEqPred;
x_21 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___closed__1;
x_22 = l_Lean_mkAppB(x_20, x_18, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_19);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 5);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___spec__1___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = l_Lean_indentD(x_13);
x_16 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__2;
lean_ctor_set_tag(x_11, 7);
lean_ctor_set(x_11, 1, x_15);
lean_ctor_set(x_11, 0, x_16);
x_17 = l_Int_Linear_Poly_pp_go___closed__2;
x_18 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___spec__1___rarg(x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_14);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_20 = lean_ctor_get(x_11, 0);
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_11);
x_22 = l_Lean_indentD(x_20);
x_23 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__2;
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_Int_Linear_Poly_pp_go___closed__2;
x_26 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___spec__1___rarg(x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_get_x27(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_13, 11);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 2);
lean_inc(x_15);
x_16 = lean_nat_dec_lt(x_1, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_14);
x_17 = l_Lean_IR_instInhabitedIndexSet;
x_18 = l_outOfBounds___rarg(x_17);
lean_ctor_set(x_11, 0, x_18);
return x_11;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = l_Lean_IR_instInhabitedIndexSet;
x_20 = l_Lean_PersistentArray_get_x21___rarg(x_19, x_14, x_1);
lean_ctor_set(x_11, 0, x_20);
return x_11;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_11, 0);
x_22 = lean_ctor_get(x_11, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_11);
x_23 = lean_ctor_get(x_21, 11);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_23, 2);
lean_inc(x_24);
x_25 = lean_nat_dec_lt(x_1, x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_23);
x_26 = l_Lean_IR_instInhabitedIndexSet;
x_27 = l_outOfBounds___rarg(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_22);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_Lean_IR_instInhabitedIndexSet;
x_30 = l_Lean_PersistentArray_get_x21___rarg(x_29, x_23, x_1);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_22);
return x_31;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_findCore___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = lean_nat_dec_lt(x_2, x_5);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = lean_nat_dec_eq(x_2, x_5);
if (x_9 == 0)
{
x_1 = x_7;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_inc(x_6);
lean_inc(x_5);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_5);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
x_1 = x_4;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_ins___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_box(0);
x_5 = 0;
x_6 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*4, x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get(x_1, 2);
x_12 = lean_ctor_get(x_1, 3);
x_13 = lean_nat_dec_lt(x_2, x_10);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = lean_nat_dec_eq(x_2, x_10);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = l_Lean_RBNode_ins___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__3(x_12, x_2, x_3);
x_16 = 0;
lean_ctor_set(x_1, 3, x_15);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_16);
return x_1;
}
else
{
uint8_t x_17; 
lean_dec(x_11);
lean_dec(x_10);
x_17 = 0;
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_17);
return x_1;
}
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Lean_RBNode_ins___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__3(x_9, x_2, x_3);
x_19 = 0;
lean_ctor_set(x_1, 0, x_18);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
x_22 = lean_ctor_get(x_1, 2);
x_23 = lean_ctor_get(x_1, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_24 = lean_nat_dec_lt(x_2, x_21);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = lean_nat_dec_eq(x_2, x_21);
if (x_25 == 0)
{
lean_object* x_26; uint8_t x_27; lean_object* x_28; 
x_26 = l_Lean_RBNode_ins___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__3(x_23, x_2, x_3);
x_27 = 0;
x_28 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_28, 0, x_20);
lean_ctor_set(x_28, 1, x_21);
lean_ctor_set(x_28, 2, x_22);
lean_ctor_set(x_28, 3, x_26);
lean_ctor_set_uint8(x_28, sizeof(void*)*4, x_27);
return x_28;
}
else
{
uint8_t x_29; lean_object* x_30; 
lean_dec(x_22);
lean_dec(x_21);
x_29 = 0;
x_30 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_30, 0, x_20);
lean_ctor_set(x_30, 1, x_2);
lean_ctor_set(x_30, 2, x_3);
lean_ctor_set(x_30, 3, x_23);
lean_ctor_set_uint8(x_30, sizeof(void*)*4, x_29);
return x_30;
}
}
else
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_31 = l_Lean_RBNode_ins___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__3(x_20, x_2, x_3);
x_32 = 0;
x_33 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_21);
lean_ctor_set(x_33, 2, x_22);
lean_ctor_set(x_33, 3, x_23);
lean_ctor_set_uint8(x_33, sizeof(void*)*4, x_32);
return x_33;
}
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_1);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_35 = lean_ctor_get(x_1, 0);
x_36 = lean_ctor_get(x_1, 1);
x_37 = lean_ctor_get(x_1, 2);
x_38 = lean_ctor_get(x_1, 3);
x_39 = lean_nat_dec_lt(x_2, x_36);
if (x_39 == 0)
{
uint8_t x_40; 
x_40 = lean_nat_dec_eq(x_2, x_36);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; 
x_41 = l_Lean_RBNode_ins___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__3(x_38, x_2, x_3);
x_42 = lean_ctor_get_uint8(x_41, sizeof(void*)*4);
if (x_42 == 0)
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_41, 0);
lean_inc(x_43);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_41, 3);
lean_inc(x_44);
if (lean_obj_tag(x_44) == 0)
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_41);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_46 = lean_ctor_get(x_41, 3);
lean_dec(x_46);
x_47 = lean_ctor_get(x_41, 0);
lean_dec(x_47);
lean_ctor_set(x_41, 0, x_44);
x_48 = 1;
lean_ctor_set(x_1, 3, x_41);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_48);
return x_1;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_49 = lean_ctor_get(x_41, 1);
x_50 = lean_ctor_get(x_41, 2);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_41);
x_51 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_51, 0, x_44);
lean_ctor_set(x_51, 1, x_49);
lean_ctor_set(x_51, 2, x_50);
lean_ctor_set(x_51, 3, x_44);
lean_ctor_set_uint8(x_51, sizeof(void*)*4, x_42);
x_52 = 1;
lean_ctor_set(x_1, 3, x_51);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_52);
return x_1;
}
}
else
{
uint8_t x_53; 
x_53 = lean_ctor_get_uint8(x_44, sizeof(void*)*4);
if (x_53 == 0)
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_41);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_55 = lean_ctor_get(x_41, 1);
x_56 = lean_ctor_get(x_41, 2);
x_57 = lean_ctor_get(x_41, 3);
lean_dec(x_57);
x_58 = lean_ctor_get(x_41, 0);
lean_dec(x_58);
x_59 = !lean_is_exclusive(x_44);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; uint8_t x_65; 
x_60 = lean_ctor_get(x_44, 0);
x_61 = lean_ctor_get(x_44, 1);
x_62 = lean_ctor_get(x_44, 2);
x_63 = lean_ctor_get(x_44, 3);
x_64 = 1;
lean_ctor_set(x_44, 3, x_43);
lean_ctor_set(x_44, 2, x_37);
lean_ctor_set(x_44, 1, x_36);
lean_ctor_set(x_44, 0, x_35);
lean_ctor_set_uint8(x_44, sizeof(void*)*4, x_64);
lean_ctor_set(x_41, 3, x_63);
lean_ctor_set(x_41, 2, x_62);
lean_ctor_set(x_41, 1, x_61);
lean_ctor_set(x_41, 0, x_60);
lean_ctor_set_uint8(x_41, sizeof(void*)*4, x_64);
x_65 = 0;
lean_ctor_set(x_1, 3, x_41);
lean_ctor_set(x_1, 2, x_56);
lean_ctor_set(x_1, 1, x_55);
lean_ctor_set(x_1, 0, x_44);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_65);
return x_1;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; lean_object* x_71; uint8_t x_72; 
x_66 = lean_ctor_get(x_44, 0);
x_67 = lean_ctor_get(x_44, 1);
x_68 = lean_ctor_get(x_44, 2);
x_69 = lean_ctor_get(x_44, 3);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_44);
x_70 = 1;
x_71 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_71, 0, x_35);
lean_ctor_set(x_71, 1, x_36);
lean_ctor_set(x_71, 2, x_37);
lean_ctor_set(x_71, 3, x_43);
lean_ctor_set_uint8(x_71, sizeof(void*)*4, x_70);
lean_ctor_set(x_41, 3, x_69);
lean_ctor_set(x_41, 2, x_68);
lean_ctor_set(x_41, 1, x_67);
lean_ctor_set(x_41, 0, x_66);
lean_ctor_set_uint8(x_41, sizeof(void*)*4, x_70);
x_72 = 0;
lean_ctor_set(x_1, 3, x_41);
lean_ctor_set(x_1, 2, x_56);
lean_ctor_set(x_1, 1, x_55);
lean_ctor_set(x_1, 0, x_71);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_72);
return x_1;
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_73 = lean_ctor_get(x_41, 1);
x_74 = lean_ctor_get(x_41, 2);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_41);
x_75 = lean_ctor_get(x_44, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_44, 1);
lean_inc(x_76);
x_77 = lean_ctor_get(x_44, 2);
lean_inc(x_77);
x_78 = lean_ctor_get(x_44, 3);
lean_inc(x_78);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 lean_ctor_release(x_44, 2);
 lean_ctor_release(x_44, 3);
 x_79 = x_44;
} else {
 lean_dec_ref(x_44);
 x_79 = lean_box(0);
}
x_80 = 1;
if (lean_is_scalar(x_79)) {
 x_81 = lean_alloc_ctor(1, 4, 1);
} else {
 x_81 = x_79;
}
lean_ctor_set(x_81, 0, x_35);
lean_ctor_set(x_81, 1, x_36);
lean_ctor_set(x_81, 2, x_37);
lean_ctor_set(x_81, 3, x_43);
lean_ctor_set_uint8(x_81, sizeof(void*)*4, x_80);
x_82 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_82, 0, x_75);
lean_ctor_set(x_82, 1, x_76);
lean_ctor_set(x_82, 2, x_77);
lean_ctor_set(x_82, 3, x_78);
lean_ctor_set_uint8(x_82, sizeof(void*)*4, x_80);
x_83 = 0;
lean_ctor_set(x_1, 3, x_82);
lean_ctor_set(x_1, 2, x_74);
lean_ctor_set(x_1, 1, x_73);
lean_ctor_set(x_1, 0, x_81);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_83);
return x_1;
}
}
else
{
uint8_t x_84; 
lean_free_object(x_1);
x_84 = !lean_is_exclusive(x_44);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_85 = lean_ctor_get(x_44, 3);
lean_dec(x_85);
x_86 = lean_ctor_get(x_44, 2);
lean_dec(x_86);
x_87 = lean_ctor_get(x_44, 1);
lean_dec(x_87);
x_88 = lean_ctor_get(x_44, 0);
lean_dec(x_88);
x_89 = 1;
lean_ctor_set(x_44, 3, x_41);
lean_ctor_set(x_44, 2, x_37);
lean_ctor_set(x_44, 1, x_36);
lean_ctor_set(x_44, 0, x_35);
lean_ctor_set_uint8(x_44, sizeof(void*)*4, x_89);
return x_44;
}
else
{
uint8_t x_90; lean_object* x_91; 
lean_dec(x_44);
x_90 = 1;
x_91 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_91, 0, x_35);
lean_ctor_set(x_91, 1, x_36);
lean_ctor_set(x_91, 2, x_37);
lean_ctor_set(x_91, 3, x_41);
lean_ctor_set_uint8(x_91, sizeof(void*)*4, x_90);
return x_91;
}
}
}
}
else
{
uint8_t x_92; 
x_92 = lean_ctor_get_uint8(x_43, sizeof(void*)*4);
if (x_92 == 0)
{
uint8_t x_93; 
x_93 = !lean_is_exclusive(x_41);
if (x_93 == 0)
{
lean_object* x_94; uint8_t x_95; 
x_94 = lean_ctor_get(x_41, 0);
lean_dec(x_94);
x_95 = !lean_is_exclusive(x_43);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; uint8_t x_100; uint8_t x_101; 
x_96 = lean_ctor_get(x_43, 0);
x_97 = lean_ctor_get(x_43, 1);
x_98 = lean_ctor_get(x_43, 2);
x_99 = lean_ctor_get(x_43, 3);
x_100 = 1;
lean_ctor_set(x_43, 3, x_96);
lean_ctor_set(x_43, 2, x_37);
lean_ctor_set(x_43, 1, x_36);
lean_ctor_set(x_43, 0, x_35);
lean_ctor_set_uint8(x_43, sizeof(void*)*4, x_100);
lean_ctor_set(x_41, 0, x_99);
lean_ctor_set_uint8(x_41, sizeof(void*)*4, x_100);
x_101 = 0;
lean_ctor_set(x_1, 3, x_41);
lean_ctor_set(x_1, 2, x_98);
lean_ctor_set(x_1, 1, x_97);
lean_ctor_set(x_1, 0, x_43);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_101);
return x_1;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; lean_object* x_107; uint8_t x_108; 
x_102 = lean_ctor_get(x_43, 0);
x_103 = lean_ctor_get(x_43, 1);
x_104 = lean_ctor_get(x_43, 2);
x_105 = lean_ctor_get(x_43, 3);
lean_inc(x_105);
lean_inc(x_104);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_43);
x_106 = 1;
x_107 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_107, 0, x_35);
lean_ctor_set(x_107, 1, x_36);
lean_ctor_set(x_107, 2, x_37);
lean_ctor_set(x_107, 3, x_102);
lean_ctor_set_uint8(x_107, sizeof(void*)*4, x_106);
lean_ctor_set(x_41, 0, x_105);
lean_ctor_set_uint8(x_41, sizeof(void*)*4, x_106);
x_108 = 0;
lean_ctor_set(x_1, 3, x_41);
lean_ctor_set(x_1, 2, x_104);
lean_ctor_set(x_1, 1, x_103);
lean_ctor_set(x_1, 0, x_107);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_108);
return x_1;
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; 
x_109 = lean_ctor_get(x_41, 1);
x_110 = lean_ctor_get(x_41, 2);
x_111 = lean_ctor_get(x_41, 3);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_41);
x_112 = lean_ctor_get(x_43, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_43, 1);
lean_inc(x_113);
x_114 = lean_ctor_get(x_43, 2);
lean_inc(x_114);
x_115 = lean_ctor_get(x_43, 3);
lean_inc(x_115);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 lean_ctor_release(x_43, 2);
 lean_ctor_release(x_43, 3);
 x_116 = x_43;
} else {
 lean_dec_ref(x_43);
 x_116 = lean_box(0);
}
x_117 = 1;
if (lean_is_scalar(x_116)) {
 x_118 = lean_alloc_ctor(1, 4, 1);
} else {
 x_118 = x_116;
}
lean_ctor_set(x_118, 0, x_35);
lean_ctor_set(x_118, 1, x_36);
lean_ctor_set(x_118, 2, x_37);
lean_ctor_set(x_118, 3, x_112);
lean_ctor_set_uint8(x_118, sizeof(void*)*4, x_117);
x_119 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_119, 0, x_115);
lean_ctor_set(x_119, 1, x_109);
lean_ctor_set(x_119, 2, x_110);
lean_ctor_set(x_119, 3, x_111);
lean_ctor_set_uint8(x_119, sizeof(void*)*4, x_117);
x_120 = 0;
lean_ctor_set(x_1, 3, x_119);
lean_ctor_set(x_1, 2, x_114);
lean_ctor_set(x_1, 1, x_113);
lean_ctor_set(x_1, 0, x_118);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_120);
return x_1;
}
}
else
{
lean_object* x_121; 
x_121 = lean_ctor_get(x_41, 3);
lean_inc(x_121);
if (lean_obj_tag(x_121) == 0)
{
uint8_t x_122; 
lean_free_object(x_1);
x_122 = !lean_is_exclusive(x_43);
if (x_122 == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; 
x_123 = lean_ctor_get(x_43, 3);
lean_dec(x_123);
x_124 = lean_ctor_get(x_43, 2);
lean_dec(x_124);
x_125 = lean_ctor_get(x_43, 1);
lean_dec(x_125);
x_126 = lean_ctor_get(x_43, 0);
lean_dec(x_126);
x_127 = 1;
lean_ctor_set(x_43, 3, x_41);
lean_ctor_set(x_43, 2, x_37);
lean_ctor_set(x_43, 1, x_36);
lean_ctor_set(x_43, 0, x_35);
lean_ctor_set_uint8(x_43, sizeof(void*)*4, x_127);
return x_43;
}
else
{
uint8_t x_128; lean_object* x_129; 
lean_dec(x_43);
x_128 = 1;
x_129 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_129, 0, x_35);
lean_ctor_set(x_129, 1, x_36);
lean_ctor_set(x_129, 2, x_37);
lean_ctor_set(x_129, 3, x_41);
lean_ctor_set_uint8(x_129, sizeof(void*)*4, x_128);
return x_129;
}
}
else
{
uint8_t x_130; 
x_130 = lean_ctor_get_uint8(x_121, sizeof(void*)*4);
if (x_130 == 0)
{
uint8_t x_131; 
lean_free_object(x_1);
x_131 = !lean_is_exclusive(x_41);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_132 = lean_ctor_get(x_41, 3);
lean_dec(x_132);
x_133 = lean_ctor_get(x_41, 0);
lean_dec(x_133);
x_134 = !lean_is_exclusive(x_121);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; uint8_t x_139; uint8_t x_140; 
x_135 = lean_ctor_get(x_121, 0);
x_136 = lean_ctor_get(x_121, 1);
x_137 = lean_ctor_get(x_121, 2);
x_138 = lean_ctor_get(x_121, 3);
x_139 = 1;
lean_inc(x_43);
lean_ctor_set(x_121, 3, x_43);
lean_ctor_set(x_121, 2, x_37);
lean_ctor_set(x_121, 1, x_36);
lean_ctor_set(x_121, 0, x_35);
x_140 = !lean_is_exclusive(x_43);
if (x_140 == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_145; 
x_141 = lean_ctor_get(x_43, 3);
lean_dec(x_141);
x_142 = lean_ctor_get(x_43, 2);
lean_dec(x_142);
x_143 = lean_ctor_get(x_43, 1);
lean_dec(x_143);
x_144 = lean_ctor_get(x_43, 0);
lean_dec(x_144);
lean_ctor_set_uint8(x_121, sizeof(void*)*4, x_139);
lean_ctor_set(x_43, 3, x_138);
lean_ctor_set(x_43, 2, x_137);
lean_ctor_set(x_43, 1, x_136);
lean_ctor_set(x_43, 0, x_135);
lean_ctor_set_uint8(x_43, sizeof(void*)*4, x_139);
x_145 = 0;
lean_ctor_set(x_41, 3, x_43);
lean_ctor_set(x_41, 0, x_121);
lean_ctor_set_uint8(x_41, sizeof(void*)*4, x_145);
return x_41;
}
else
{
lean_object* x_146; uint8_t x_147; 
lean_dec(x_43);
lean_ctor_set_uint8(x_121, sizeof(void*)*4, x_139);
x_146 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_146, 0, x_135);
lean_ctor_set(x_146, 1, x_136);
lean_ctor_set(x_146, 2, x_137);
lean_ctor_set(x_146, 3, x_138);
lean_ctor_set_uint8(x_146, sizeof(void*)*4, x_139);
x_147 = 0;
lean_ctor_set(x_41, 3, x_146);
lean_ctor_set(x_41, 0, x_121);
lean_ctor_set_uint8(x_41, sizeof(void*)*4, x_147);
return x_41;
}
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; uint8_t x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; uint8_t x_156; 
x_148 = lean_ctor_get(x_121, 0);
x_149 = lean_ctor_get(x_121, 1);
x_150 = lean_ctor_get(x_121, 2);
x_151 = lean_ctor_get(x_121, 3);
lean_inc(x_151);
lean_inc(x_150);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_121);
x_152 = 1;
lean_inc(x_43);
x_153 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_153, 0, x_35);
lean_ctor_set(x_153, 1, x_36);
lean_ctor_set(x_153, 2, x_37);
lean_ctor_set(x_153, 3, x_43);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 lean_ctor_release(x_43, 2);
 lean_ctor_release(x_43, 3);
 x_154 = x_43;
} else {
 lean_dec_ref(x_43);
 x_154 = lean_box(0);
}
lean_ctor_set_uint8(x_153, sizeof(void*)*4, x_152);
if (lean_is_scalar(x_154)) {
 x_155 = lean_alloc_ctor(1, 4, 1);
} else {
 x_155 = x_154;
}
lean_ctor_set(x_155, 0, x_148);
lean_ctor_set(x_155, 1, x_149);
lean_ctor_set(x_155, 2, x_150);
lean_ctor_set(x_155, 3, x_151);
lean_ctor_set_uint8(x_155, sizeof(void*)*4, x_152);
x_156 = 0;
lean_ctor_set(x_41, 3, x_155);
lean_ctor_set(x_41, 0, x_153);
lean_ctor_set_uint8(x_41, sizeof(void*)*4, x_156);
return x_41;
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; uint8_t x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; lean_object* x_169; 
x_157 = lean_ctor_get(x_41, 1);
x_158 = lean_ctor_get(x_41, 2);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_41);
x_159 = lean_ctor_get(x_121, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_121, 1);
lean_inc(x_160);
x_161 = lean_ctor_get(x_121, 2);
lean_inc(x_161);
x_162 = lean_ctor_get(x_121, 3);
lean_inc(x_162);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 lean_ctor_release(x_121, 2);
 lean_ctor_release(x_121, 3);
 x_163 = x_121;
} else {
 lean_dec_ref(x_121);
 x_163 = lean_box(0);
}
x_164 = 1;
lean_inc(x_43);
if (lean_is_scalar(x_163)) {
 x_165 = lean_alloc_ctor(1, 4, 1);
} else {
 x_165 = x_163;
}
lean_ctor_set(x_165, 0, x_35);
lean_ctor_set(x_165, 1, x_36);
lean_ctor_set(x_165, 2, x_37);
lean_ctor_set(x_165, 3, x_43);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 lean_ctor_release(x_43, 2);
 lean_ctor_release(x_43, 3);
 x_166 = x_43;
} else {
 lean_dec_ref(x_43);
 x_166 = lean_box(0);
}
lean_ctor_set_uint8(x_165, sizeof(void*)*4, x_164);
if (lean_is_scalar(x_166)) {
 x_167 = lean_alloc_ctor(1, 4, 1);
} else {
 x_167 = x_166;
}
lean_ctor_set(x_167, 0, x_159);
lean_ctor_set(x_167, 1, x_160);
lean_ctor_set(x_167, 2, x_161);
lean_ctor_set(x_167, 3, x_162);
lean_ctor_set_uint8(x_167, sizeof(void*)*4, x_164);
x_168 = 0;
x_169 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_169, 0, x_165);
lean_ctor_set(x_169, 1, x_157);
lean_ctor_set(x_169, 2, x_158);
lean_ctor_set(x_169, 3, x_167);
lean_ctor_set_uint8(x_169, sizeof(void*)*4, x_168);
return x_169;
}
}
else
{
uint8_t x_170; 
x_170 = !lean_is_exclusive(x_41);
if (x_170 == 0)
{
lean_object* x_171; lean_object* x_172; uint8_t x_173; 
x_171 = lean_ctor_get(x_41, 3);
lean_dec(x_171);
x_172 = lean_ctor_get(x_41, 0);
lean_dec(x_172);
x_173 = !lean_is_exclusive(x_43);
if (x_173 == 0)
{
uint8_t x_174; 
lean_ctor_set_uint8(x_43, sizeof(void*)*4, x_130);
x_174 = 1;
lean_ctor_set(x_1, 3, x_41);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_174);
return x_1;
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; uint8_t x_180; 
x_175 = lean_ctor_get(x_43, 0);
x_176 = lean_ctor_get(x_43, 1);
x_177 = lean_ctor_get(x_43, 2);
x_178 = lean_ctor_get(x_43, 3);
lean_inc(x_178);
lean_inc(x_177);
lean_inc(x_176);
lean_inc(x_175);
lean_dec(x_43);
x_179 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_179, 0, x_175);
lean_ctor_set(x_179, 1, x_176);
lean_ctor_set(x_179, 2, x_177);
lean_ctor_set(x_179, 3, x_178);
lean_ctor_set_uint8(x_179, sizeof(void*)*4, x_130);
lean_ctor_set(x_41, 0, x_179);
x_180 = 1;
lean_ctor_set(x_1, 3, x_41);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_180);
return x_1;
}
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; uint8_t x_190; 
x_181 = lean_ctor_get(x_41, 1);
x_182 = lean_ctor_get(x_41, 2);
lean_inc(x_182);
lean_inc(x_181);
lean_dec(x_41);
x_183 = lean_ctor_get(x_43, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_43, 1);
lean_inc(x_184);
x_185 = lean_ctor_get(x_43, 2);
lean_inc(x_185);
x_186 = lean_ctor_get(x_43, 3);
lean_inc(x_186);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 lean_ctor_release(x_43, 2);
 lean_ctor_release(x_43, 3);
 x_187 = x_43;
} else {
 lean_dec_ref(x_43);
 x_187 = lean_box(0);
}
if (lean_is_scalar(x_187)) {
 x_188 = lean_alloc_ctor(1, 4, 1);
} else {
 x_188 = x_187;
}
lean_ctor_set(x_188, 0, x_183);
lean_ctor_set(x_188, 1, x_184);
lean_ctor_set(x_188, 2, x_185);
lean_ctor_set(x_188, 3, x_186);
lean_ctor_set_uint8(x_188, sizeof(void*)*4, x_130);
x_189 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_181);
lean_ctor_set(x_189, 2, x_182);
lean_ctor_set(x_189, 3, x_121);
lean_ctor_set_uint8(x_189, sizeof(void*)*4, x_42);
x_190 = 1;
lean_ctor_set(x_1, 3, x_189);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_190);
return x_1;
}
}
}
}
}
}
else
{
uint8_t x_191; 
x_191 = 1;
lean_ctor_set(x_1, 3, x_41);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_191);
return x_1;
}
}
else
{
uint8_t x_192; 
lean_dec(x_37);
lean_dec(x_36);
x_192 = 1;
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_192);
return x_1;
}
}
else
{
lean_object* x_193; uint8_t x_194; 
x_193 = l_Lean_RBNode_ins___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__3(x_35, x_2, x_3);
x_194 = lean_ctor_get_uint8(x_193, sizeof(void*)*4);
if (x_194 == 0)
{
lean_object* x_195; 
x_195 = lean_ctor_get(x_193, 0);
lean_inc(x_195);
if (lean_obj_tag(x_195) == 0)
{
lean_object* x_196; 
x_196 = lean_ctor_get(x_193, 3);
lean_inc(x_196);
if (lean_obj_tag(x_196) == 0)
{
uint8_t x_197; 
x_197 = !lean_is_exclusive(x_193);
if (x_197 == 0)
{
lean_object* x_198; lean_object* x_199; uint8_t x_200; 
x_198 = lean_ctor_get(x_193, 3);
lean_dec(x_198);
x_199 = lean_ctor_get(x_193, 0);
lean_dec(x_199);
lean_ctor_set(x_193, 0, x_196);
x_200 = 1;
lean_ctor_set(x_1, 0, x_193);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_200);
return x_1;
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; uint8_t x_204; 
x_201 = lean_ctor_get(x_193, 1);
x_202 = lean_ctor_get(x_193, 2);
lean_inc(x_202);
lean_inc(x_201);
lean_dec(x_193);
x_203 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_203, 0, x_196);
lean_ctor_set(x_203, 1, x_201);
lean_ctor_set(x_203, 2, x_202);
lean_ctor_set(x_203, 3, x_196);
lean_ctor_set_uint8(x_203, sizeof(void*)*4, x_194);
x_204 = 1;
lean_ctor_set(x_1, 0, x_203);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_204);
return x_1;
}
}
else
{
uint8_t x_205; 
x_205 = lean_ctor_get_uint8(x_196, sizeof(void*)*4);
if (x_205 == 0)
{
uint8_t x_206; 
x_206 = !lean_is_exclusive(x_193);
if (x_206 == 0)
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; uint8_t x_211; 
x_207 = lean_ctor_get(x_193, 1);
x_208 = lean_ctor_get(x_193, 2);
x_209 = lean_ctor_get(x_193, 3);
lean_dec(x_209);
x_210 = lean_ctor_get(x_193, 0);
lean_dec(x_210);
x_211 = !lean_is_exclusive(x_196);
if (x_211 == 0)
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; uint8_t x_216; uint8_t x_217; 
x_212 = lean_ctor_get(x_196, 0);
x_213 = lean_ctor_get(x_196, 1);
x_214 = lean_ctor_get(x_196, 2);
x_215 = lean_ctor_get(x_196, 3);
x_216 = 1;
lean_ctor_set(x_196, 3, x_212);
lean_ctor_set(x_196, 2, x_208);
lean_ctor_set(x_196, 1, x_207);
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set_uint8(x_196, sizeof(void*)*4, x_216);
lean_ctor_set(x_193, 3, x_38);
lean_ctor_set(x_193, 2, x_37);
lean_ctor_set(x_193, 1, x_36);
lean_ctor_set(x_193, 0, x_215);
lean_ctor_set_uint8(x_193, sizeof(void*)*4, x_216);
x_217 = 0;
lean_ctor_set(x_1, 3, x_193);
lean_ctor_set(x_1, 2, x_214);
lean_ctor_set(x_1, 1, x_213);
lean_ctor_set(x_1, 0, x_196);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_217);
return x_1;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; uint8_t x_222; lean_object* x_223; uint8_t x_224; 
x_218 = lean_ctor_get(x_196, 0);
x_219 = lean_ctor_get(x_196, 1);
x_220 = lean_ctor_get(x_196, 2);
x_221 = lean_ctor_get(x_196, 3);
lean_inc(x_221);
lean_inc(x_220);
lean_inc(x_219);
lean_inc(x_218);
lean_dec(x_196);
x_222 = 1;
x_223 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_223, 0, x_195);
lean_ctor_set(x_223, 1, x_207);
lean_ctor_set(x_223, 2, x_208);
lean_ctor_set(x_223, 3, x_218);
lean_ctor_set_uint8(x_223, sizeof(void*)*4, x_222);
lean_ctor_set(x_193, 3, x_38);
lean_ctor_set(x_193, 2, x_37);
lean_ctor_set(x_193, 1, x_36);
lean_ctor_set(x_193, 0, x_221);
lean_ctor_set_uint8(x_193, sizeof(void*)*4, x_222);
x_224 = 0;
lean_ctor_set(x_1, 3, x_193);
lean_ctor_set(x_1, 2, x_220);
lean_ctor_set(x_1, 1, x_219);
lean_ctor_set(x_1, 0, x_223);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_224);
return x_1;
}
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; uint8_t x_232; lean_object* x_233; lean_object* x_234; uint8_t x_235; 
x_225 = lean_ctor_get(x_193, 1);
x_226 = lean_ctor_get(x_193, 2);
lean_inc(x_226);
lean_inc(x_225);
lean_dec(x_193);
x_227 = lean_ctor_get(x_196, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_196, 1);
lean_inc(x_228);
x_229 = lean_ctor_get(x_196, 2);
lean_inc(x_229);
x_230 = lean_ctor_get(x_196, 3);
lean_inc(x_230);
if (lean_is_exclusive(x_196)) {
 lean_ctor_release(x_196, 0);
 lean_ctor_release(x_196, 1);
 lean_ctor_release(x_196, 2);
 lean_ctor_release(x_196, 3);
 x_231 = x_196;
} else {
 lean_dec_ref(x_196);
 x_231 = lean_box(0);
}
x_232 = 1;
if (lean_is_scalar(x_231)) {
 x_233 = lean_alloc_ctor(1, 4, 1);
} else {
 x_233 = x_231;
}
lean_ctor_set(x_233, 0, x_195);
lean_ctor_set(x_233, 1, x_225);
lean_ctor_set(x_233, 2, x_226);
lean_ctor_set(x_233, 3, x_227);
lean_ctor_set_uint8(x_233, sizeof(void*)*4, x_232);
x_234 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_234, 0, x_230);
lean_ctor_set(x_234, 1, x_36);
lean_ctor_set(x_234, 2, x_37);
lean_ctor_set(x_234, 3, x_38);
lean_ctor_set_uint8(x_234, sizeof(void*)*4, x_232);
x_235 = 0;
lean_ctor_set(x_1, 3, x_234);
lean_ctor_set(x_1, 2, x_229);
lean_ctor_set(x_1, 1, x_228);
lean_ctor_set(x_1, 0, x_233);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_235);
return x_1;
}
}
else
{
uint8_t x_236; 
lean_free_object(x_1);
x_236 = !lean_is_exclusive(x_196);
if (x_236 == 0)
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; uint8_t x_241; 
x_237 = lean_ctor_get(x_196, 3);
lean_dec(x_237);
x_238 = lean_ctor_get(x_196, 2);
lean_dec(x_238);
x_239 = lean_ctor_get(x_196, 1);
lean_dec(x_239);
x_240 = lean_ctor_get(x_196, 0);
lean_dec(x_240);
x_241 = 1;
lean_ctor_set(x_196, 3, x_38);
lean_ctor_set(x_196, 2, x_37);
lean_ctor_set(x_196, 1, x_36);
lean_ctor_set(x_196, 0, x_193);
lean_ctor_set_uint8(x_196, sizeof(void*)*4, x_241);
return x_196;
}
else
{
uint8_t x_242; lean_object* x_243; 
lean_dec(x_196);
x_242 = 1;
x_243 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_243, 0, x_193);
lean_ctor_set(x_243, 1, x_36);
lean_ctor_set(x_243, 2, x_37);
lean_ctor_set(x_243, 3, x_38);
lean_ctor_set_uint8(x_243, sizeof(void*)*4, x_242);
return x_243;
}
}
}
}
else
{
uint8_t x_244; 
x_244 = lean_ctor_get_uint8(x_195, sizeof(void*)*4);
if (x_244 == 0)
{
uint8_t x_245; 
x_245 = !lean_is_exclusive(x_193);
if (x_245 == 0)
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; uint8_t x_250; 
x_246 = lean_ctor_get(x_193, 1);
x_247 = lean_ctor_get(x_193, 2);
x_248 = lean_ctor_get(x_193, 3);
x_249 = lean_ctor_get(x_193, 0);
lean_dec(x_249);
x_250 = !lean_is_exclusive(x_195);
if (x_250 == 0)
{
uint8_t x_251; uint8_t x_252; 
x_251 = 1;
lean_ctor_set_uint8(x_195, sizeof(void*)*4, x_251);
lean_ctor_set(x_193, 3, x_38);
lean_ctor_set(x_193, 2, x_37);
lean_ctor_set(x_193, 1, x_36);
lean_ctor_set(x_193, 0, x_248);
lean_ctor_set_uint8(x_193, sizeof(void*)*4, x_251);
x_252 = 0;
lean_ctor_set(x_1, 3, x_193);
lean_ctor_set(x_1, 2, x_247);
lean_ctor_set(x_1, 1, x_246);
lean_ctor_set(x_1, 0, x_195);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_252);
return x_1;
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; uint8_t x_257; lean_object* x_258; uint8_t x_259; 
x_253 = lean_ctor_get(x_195, 0);
x_254 = lean_ctor_get(x_195, 1);
x_255 = lean_ctor_get(x_195, 2);
x_256 = lean_ctor_get(x_195, 3);
lean_inc(x_256);
lean_inc(x_255);
lean_inc(x_254);
lean_inc(x_253);
lean_dec(x_195);
x_257 = 1;
x_258 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_258, 0, x_253);
lean_ctor_set(x_258, 1, x_254);
lean_ctor_set(x_258, 2, x_255);
lean_ctor_set(x_258, 3, x_256);
lean_ctor_set_uint8(x_258, sizeof(void*)*4, x_257);
lean_ctor_set(x_193, 3, x_38);
lean_ctor_set(x_193, 2, x_37);
lean_ctor_set(x_193, 1, x_36);
lean_ctor_set(x_193, 0, x_248);
lean_ctor_set_uint8(x_193, sizeof(void*)*4, x_257);
x_259 = 0;
lean_ctor_set(x_1, 3, x_193);
lean_ctor_set(x_1, 2, x_247);
lean_ctor_set(x_1, 1, x_246);
lean_ctor_set(x_1, 0, x_258);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_259);
return x_1;
}
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; uint8_t x_268; lean_object* x_269; lean_object* x_270; uint8_t x_271; 
x_260 = lean_ctor_get(x_193, 1);
x_261 = lean_ctor_get(x_193, 2);
x_262 = lean_ctor_get(x_193, 3);
lean_inc(x_262);
lean_inc(x_261);
lean_inc(x_260);
lean_dec(x_193);
x_263 = lean_ctor_get(x_195, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_195, 1);
lean_inc(x_264);
x_265 = lean_ctor_get(x_195, 2);
lean_inc(x_265);
x_266 = lean_ctor_get(x_195, 3);
lean_inc(x_266);
if (lean_is_exclusive(x_195)) {
 lean_ctor_release(x_195, 0);
 lean_ctor_release(x_195, 1);
 lean_ctor_release(x_195, 2);
 lean_ctor_release(x_195, 3);
 x_267 = x_195;
} else {
 lean_dec_ref(x_195);
 x_267 = lean_box(0);
}
x_268 = 1;
if (lean_is_scalar(x_267)) {
 x_269 = lean_alloc_ctor(1, 4, 1);
} else {
 x_269 = x_267;
}
lean_ctor_set(x_269, 0, x_263);
lean_ctor_set(x_269, 1, x_264);
lean_ctor_set(x_269, 2, x_265);
lean_ctor_set(x_269, 3, x_266);
lean_ctor_set_uint8(x_269, sizeof(void*)*4, x_268);
x_270 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_270, 0, x_262);
lean_ctor_set(x_270, 1, x_36);
lean_ctor_set(x_270, 2, x_37);
lean_ctor_set(x_270, 3, x_38);
lean_ctor_set_uint8(x_270, sizeof(void*)*4, x_268);
x_271 = 0;
lean_ctor_set(x_1, 3, x_270);
lean_ctor_set(x_1, 2, x_261);
lean_ctor_set(x_1, 1, x_260);
lean_ctor_set(x_1, 0, x_269);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_271);
return x_1;
}
}
else
{
lean_object* x_272; 
x_272 = lean_ctor_get(x_193, 3);
lean_inc(x_272);
if (lean_obj_tag(x_272) == 0)
{
uint8_t x_273; 
lean_free_object(x_1);
x_273 = !lean_is_exclusive(x_195);
if (x_273 == 0)
{
lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; uint8_t x_278; 
x_274 = lean_ctor_get(x_195, 3);
lean_dec(x_274);
x_275 = lean_ctor_get(x_195, 2);
lean_dec(x_275);
x_276 = lean_ctor_get(x_195, 1);
lean_dec(x_276);
x_277 = lean_ctor_get(x_195, 0);
lean_dec(x_277);
x_278 = 1;
lean_ctor_set(x_195, 3, x_38);
lean_ctor_set(x_195, 2, x_37);
lean_ctor_set(x_195, 1, x_36);
lean_ctor_set(x_195, 0, x_193);
lean_ctor_set_uint8(x_195, sizeof(void*)*4, x_278);
return x_195;
}
else
{
uint8_t x_279; lean_object* x_280; 
lean_dec(x_195);
x_279 = 1;
x_280 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_280, 0, x_193);
lean_ctor_set(x_280, 1, x_36);
lean_ctor_set(x_280, 2, x_37);
lean_ctor_set(x_280, 3, x_38);
lean_ctor_set_uint8(x_280, sizeof(void*)*4, x_279);
return x_280;
}
}
else
{
uint8_t x_281; 
x_281 = lean_ctor_get_uint8(x_272, sizeof(void*)*4);
if (x_281 == 0)
{
uint8_t x_282; 
lean_free_object(x_1);
x_282 = !lean_is_exclusive(x_193);
if (x_282 == 0)
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; uint8_t x_287; 
x_283 = lean_ctor_get(x_193, 1);
x_284 = lean_ctor_get(x_193, 2);
x_285 = lean_ctor_get(x_193, 3);
lean_dec(x_285);
x_286 = lean_ctor_get(x_193, 0);
lean_dec(x_286);
x_287 = !lean_is_exclusive(x_272);
if (x_287 == 0)
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; uint8_t x_292; uint8_t x_293; 
x_288 = lean_ctor_get(x_272, 0);
x_289 = lean_ctor_get(x_272, 1);
x_290 = lean_ctor_get(x_272, 2);
x_291 = lean_ctor_get(x_272, 3);
x_292 = 1;
lean_inc(x_195);
lean_ctor_set(x_272, 3, x_288);
lean_ctor_set(x_272, 2, x_284);
lean_ctor_set(x_272, 1, x_283);
lean_ctor_set(x_272, 0, x_195);
x_293 = !lean_is_exclusive(x_195);
if (x_293 == 0)
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; uint8_t x_298; 
x_294 = lean_ctor_get(x_195, 3);
lean_dec(x_294);
x_295 = lean_ctor_get(x_195, 2);
lean_dec(x_295);
x_296 = lean_ctor_get(x_195, 1);
lean_dec(x_296);
x_297 = lean_ctor_get(x_195, 0);
lean_dec(x_297);
lean_ctor_set_uint8(x_272, sizeof(void*)*4, x_292);
lean_ctor_set(x_195, 3, x_38);
lean_ctor_set(x_195, 2, x_37);
lean_ctor_set(x_195, 1, x_36);
lean_ctor_set(x_195, 0, x_291);
lean_ctor_set_uint8(x_195, sizeof(void*)*4, x_292);
x_298 = 0;
lean_ctor_set(x_193, 3, x_195);
lean_ctor_set(x_193, 2, x_290);
lean_ctor_set(x_193, 1, x_289);
lean_ctor_set(x_193, 0, x_272);
lean_ctor_set_uint8(x_193, sizeof(void*)*4, x_298);
return x_193;
}
else
{
lean_object* x_299; uint8_t x_300; 
lean_dec(x_195);
lean_ctor_set_uint8(x_272, sizeof(void*)*4, x_292);
x_299 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_299, 0, x_291);
lean_ctor_set(x_299, 1, x_36);
lean_ctor_set(x_299, 2, x_37);
lean_ctor_set(x_299, 3, x_38);
lean_ctor_set_uint8(x_299, sizeof(void*)*4, x_292);
x_300 = 0;
lean_ctor_set(x_193, 3, x_299);
lean_ctor_set(x_193, 2, x_290);
lean_ctor_set(x_193, 1, x_289);
lean_ctor_set(x_193, 0, x_272);
lean_ctor_set_uint8(x_193, sizeof(void*)*4, x_300);
return x_193;
}
}
else
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; uint8_t x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; uint8_t x_309; 
x_301 = lean_ctor_get(x_272, 0);
x_302 = lean_ctor_get(x_272, 1);
x_303 = lean_ctor_get(x_272, 2);
x_304 = lean_ctor_get(x_272, 3);
lean_inc(x_304);
lean_inc(x_303);
lean_inc(x_302);
lean_inc(x_301);
lean_dec(x_272);
x_305 = 1;
lean_inc(x_195);
x_306 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_306, 0, x_195);
lean_ctor_set(x_306, 1, x_283);
lean_ctor_set(x_306, 2, x_284);
lean_ctor_set(x_306, 3, x_301);
if (lean_is_exclusive(x_195)) {
 lean_ctor_release(x_195, 0);
 lean_ctor_release(x_195, 1);
 lean_ctor_release(x_195, 2);
 lean_ctor_release(x_195, 3);
 x_307 = x_195;
} else {
 lean_dec_ref(x_195);
 x_307 = lean_box(0);
}
lean_ctor_set_uint8(x_306, sizeof(void*)*4, x_305);
if (lean_is_scalar(x_307)) {
 x_308 = lean_alloc_ctor(1, 4, 1);
} else {
 x_308 = x_307;
}
lean_ctor_set(x_308, 0, x_304);
lean_ctor_set(x_308, 1, x_36);
lean_ctor_set(x_308, 2, x_37);
lean_ctor_set(x_308, 3, x_38);
lean_ctor_set_uint8(x_308, sizeof(void*)*4, x_305);
x_309 = 0;
lean_ctor_set(x_193, 3, x_308);
lean_ctor_set(x_193, 2, x_303);
lean_ctor_set(x_193, 1, x_302);
lean_ctor_set(x_193, 0, x_306);
lean_ctor_set_uint8(x_193, sizeof(void*)*4, x_309);
return x_193;
}
}
else
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; uint8_t x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; uint8_t x_321; lean_object* x_322; 
x_310 = lean_ctor_get(x_193, 1);
x_311 = lean_ctor_get(x_193, 2);
lean_inc(x_311);
lean_inc(x_310);
lean_dec(x_193);
x_312 = lean_ctor_get(x_272, 0);
lean_inc(x_312);
x_313 = lean_ctor_get(x_272, 1);
lean_inc(x_313);
x_314 = lean_ctor_get(x_272, 2);
lean_inc(x_314);
x_315 = lean_ctor_get(x_272, 3);
lean_inc(x_315);
if (lean_is_exclusive(x_272)) {
 lean_ctor_release(x_272, 0);
 lean_ctor_release(x_272, 1);
 lean_ctor_release(x_272, 2);
 lean_ctor_release(x_272, 3);
 x_316 = x_272;
} else {
 lean_dec_ref(x_272);
 x_316 = lean_box(0);
}
x_317 = 1;
lean_inc(x_195);
if (lean_is_scalar(x_316)) {
 x_318 = lean_alloc_ctor(1, 4, 1);
} else {
 x_318 = x_316;
}
lean_ctor_set(x_318, 0, x_195);
lean_ctor_set(x_318, 1, x_310);
lean_ctor_set(x_318, 2, x_311);
lean_ctor_set(x_318, 3, x_312);
if (lean_is_exclusive(x_195)) {
 lean_ctor_release(x_195, 0);
 lean_ctor_release(x_195, 1);
 lean_ctor_release(x_195, 2);
 lean_ctor_release(x_195, 3);
 x_319 = x_195;
} else {
 lean_dec_ref(x_195);
 x_319 = lean_box(0);
}
lean_ctor_set_uint8(x_318, sizeof(void*)*4, x_317);
if (lean_is_scalar(x_319)) {
 x_320 = lean_alloc_ctor(1, 4, 1);
} else {
 x_320 = x_319;
}
lean_ctor_set(x_320, 0, x_315);
lean_ctor_set(x_320, 1, x_36);
lean_ctor_set(x_320, 2, x_37);
lean_ctor_set(x_320, 3, x_38);
lean_ctor_set_uint8(x_320, sizeof(void*)*4, x_317);
x_321 = 0;
x_322 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_322, 0, x_318);
lean_ctor_set(x_322, 1, x_313);
lean_ctor_set(x_322, 2, x_314);
lean_ctor_set(x_322, 3, x_320);
lean_ctor_set_uint8(x_322, sizeof(void*)*4, x_321);
return x_322;
}
}
else
{
uint8_t x_323; 
x_323 = !lean_is_exclusive(x_193);
if (x_323 == 0)
{
lean_object* x_324; lean_object* x_325; uint8_t x_326; 
x_324 = lean_ctor_get(x_193, 3);
lean_dec(x_324);
x_325 = lean_ctor_get(x_193, 0);
lean_dec(x_325);
x_326 = !lean_is_exclusive(x_195);
if (x_326 == 0)
{
uint8_t x_327; 
lean_ctor_set_uint8(x_195, sizeof(void*)*4, x_281);
x_327 = 1;
lean_ctor_set(x_1, 0, x_193);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_327);
return x_1;
}
else
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; uint8_t x_333; 
x_328 = lean_ctor_get(x_195, 0);
x_329 = lean_ctor_get(x_195, 1);
x_330 = lean_ctor_get(x_195, 2);
x_331 = lean_ctor_get(x_195, 3);
lean_inc(x_331);
lean_inc(x_330);
lean_inc(x_329);
lean_inc(x_328);
lean_dec(x_195);
x_332 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_332, 0, x_328);
lean_ctor_set(x_332, 1, x_329);
lean_ctor_set(x_332, 2, x_330);
lean_ctor_set(x_332, 3, x_331);
lean_ctor_set_uint8(x_332, sizeof(void*)*4, x_281);
lean_ctor_set(x_193, 0, x_332);
x_333 = 1;
lean_ctor_set(x_1, 0, x_193);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_333);
return x_1;
}
}
else
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; uint8_t x_343; 
x_334 = lean_ctor_get(x_193, 1);
x_335 = lean_ctor_get(x_193, 2);
lean_inc(x_335);
lean_inc(x_334);
lean_dec(x_193);
x_336 = lean_ctor_get(x_195, 0);
lean_inc(x_336);
x_337 = lean_ctor_get(x_195, 1);
lean_inc(x_337);
x_338 = lean_ctor_get(x_195, 2);
lean_inc(x_338);
x_339 = lean_ctor_get(x_195, 3);
lean_inc(x_339);
if (lean_is_exclusive(x_195)) {
 lean_ctor_release(x_195, 0);
 lean_ctor_release(x_195, 1);
 lean_ctor_release(x_195, 2);
 lean_ctor_release(x_195, 3);
 x_340 = x_195;
} else {
 lean_dec_ref(x_195);
 x_340 = lean_box(0);
}
if (lean_is_scalar(x_340)) {
 x_341 = lean_alloc_ctor(1, 4, 1);
} else {
 x_341 = x_340;
}
lean_ctor_set(x_341, 0, x_336);
lean_ctor_set(x_341, 1, x_337);
lean_ctor_set(x_341, 2, x_338);
lean_ctor_set(x_341, 3, x_339);
lean_ctor_set_uint8(x_341, sizeof(void*)*4, x_281);
x_342 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_342, 0, x_341);
lean_ctor_set(x_342, 1, x_334);
lean_ctor_set(x_342, 2, x_335);
lean_ctor_set(x_342, 3, x_272);
lean_ctor_set_uint8(x_342, sizeof(void*)*4, x_194);
x_343 = 1;
lean_ctor_set(x_1, 0, x_342);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_343);
return x_1;
}
}
}
}
}
}
else
{
uint8_t x_344; 
x_344 = 1;
lean_ctor_set(x_1, 0, x_193);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_344);
return x_1;
}
}
}
else
{
lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; uint8_t x_349; 
x_345 = lean_ctor_get(x_1, 0);
x_346 = lean_ctor_get(x_1, 1);
x_347 = lean_ctor_get(x_1, 2);
x_348 = lean_ctor_get(x_1, 3);
lean_inc(x_348);
lean_inc(x_347);
lean_inc(x_346);
lean_inc(x_345);
lean_dec(x_1);
x_349 = lean_nat_dec_lt(x_2, x_346);
if (x_349 == 0)
{
uint8_t x_350; 
x_350 = lean_nat_dec_eq(x_2, x_346);
if (x_350 == 0)
{
lean_object* x_351; uint8_t x_352; 
x_351 = l_Lean_RBNode_ins___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__3(x_348, x_2, x_3);
x_352 = lean_ctor_get_uint8(x_351, sizeof(void*)*4);
if (x_352 == 0)
{
lean_object* x_353; 
x_353 = lean_ctor_get(x_351, 0);
lean_inc(x_353);
if (lean_obj_tag(x_353) == 0)
{
lean_object* x_354; 
x_354 = lean_ctor_get(x_351, 3);
lean_inc(x_354);
if (lean_obj_tag(x_354) == 0)
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; uint8_t x_359; lean_object* x_360; 
x_355 = lean_ctor_get(x_351, 1);
lean_inc(x_355);
x_356 = lean_ctor_get(x_351, 2);
lean_inc(x_356);
if (lean_is_exclusive(x_351)) {
 lean_ctor_release(x_351, 0);
 lean_ctor_release(x_351, 1);
 lean_ctor_release(x_351, 2);
 lean_ctor_release(x_351, 3);
 x_357 = x_351;
} else {
 lean_dec_ref(x_351);
 x_357 = lean_box(0);
}
if (lean_is_scalar(x_357)) {
 x_358 = lean_alloc_ctor(1, 4, 1);
} else {
 x_358 = x_357;
}
lean_ctor_set(x_358, 0, x_354);
lean_ctor_set(x_358, 1, x_355);
lean_ctor_set(x_358, 2, x_356);
lean_ctor_set(x_358, 3, x_354);
lean_ctor_set_uint8(x_358, sizeof(void*)*4, x_352);
x_359 = 1;
x_360 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_360, 0, x_345);
lean_ctor_set(x_360, 1, x_346);
lean_ctor_set(x_360, 2, x_347);
lean_ctor_set(x_360, 3, x_358);
lean_ctor_set_uint8(x_360, sizeof(void*)*4, x_359);
return x_360;
}
else
{
uint8_t x_361; 
x_361 = lean_ctor_get_uint8(x_354, sizeof(void*)*4);
if (x_361 == 0)
{
lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; uint8_t x_370; lean_object* x_371; lean_object* x_372; uint8_t x_373; lean_object* x_374; 
x_362 = lean_ctor_get(x_351, 1);
lean_inc(x_362);
x_363 = lean_ctor_get(x_351, 2);
lean_inc(x_363);
if (lean_is_exclusive(x_351)) {
 lean_ctor_release(x_351, 0);
 lean_ctor_release(x_351, 1);
 lean_ctor_release(x_351, 2);
 lean_ctor_release(x_351, 3);
 x_364 = x_351;
} else {
 lean_dec_ref(x_351);
 x_364 = lean_box(0);
}
x_365 = lean_ctor_get(x_354, 0);
lean_inc(x_365);
x_366 = lean_ctor_get(x_354, 1);
lean_inc(x_366);
x_367 = lean_ctor_get(x_354, 2);
lean_inc(x_367);
x_368 = lean_ctor_get(x_354, 3);
lean_inc(x_368);
if (lean_is_exclusive(x_354)) {
 lean_ctor_release(x_354, 0);
 lean_ctor_release(x_354, 1);
 lean_ctor_release(x_354, 2);
 lean_ctor_release(x_354, 3);
 x_369 = x_354;
} else {
 lean_dec_ref(x_354);
 x_369 = lean_box(0);
}
x_370 = 1;
if (lean_is_scalar(x_369)) {
 x_371 = lean_alloc_ctor(1, 4, 1);
} else {
 x_371 = x_369;
}
lean_ctor_set(x_371, 0, x_345);
lean_ctor_set(x_371, 1, x_346);
lean_ctor_set(x_371, 2, x_347);
lean_ctor_set(x_371, 3, x_353);
lean_ctor_set_uint8(x_371, sizeof(void*)*4, x_370);
if (lean_is_scalar(x_364)) {
 x_372 = lean_alloc_ctor(1, 4, 1);
} else {
 x_372 = x_364;
}
lean_ctor_set(x_372, 0, x_365);
lean_ctor_set(x_372, 1, x_366);
lean_ctor_set(x_372, 2, x_367);
lean_ctor_set(x_372, 3, x_368);
lean_ctor_set_uint8(x_372, sizeof(void*)*4, x_370);
x_373 = 0;
x_374 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_374, 0, x_371);
lean_ctor_set(x_374, 1, x_362);
lean_ctor_set(x_374, 2, x_363);
lean_ctor_set(x_374, 3, x_372);
lean_ctor_set_uint8(x_374, sizeof(void*)*4, x_373);
return x_374;
}
else
{
lean_object* x_375; uint8_t x_376; lean_object* x_377; 
if (lean_is_exclusive(x_354)) {
 lean_ctor_release(x_354, 0);
 lean_ctor_release(x_354, 1);
 lean_ctor_release(x_354, 2);
 lean_ctor_release(x_354, 3);
 x_375 = x_354;
} else {
 lean_dec_ref(x_354);
 x_375 = lean_box(0);
}
x_376 = 1;
if (lean_is_scalar(x_375)) {
 x_377 = lean_alloc_ctor(1, 4, 1);
} else {
 x_377 = x_375;
}
lean_ctor_set(x_377, 0, x_345);
lean_ctor_set(x_377, 1, x_346);
lean_ctor_set(x_377, 2, x_347);
lean_ctor_set(x_377, 3, x_351);
lean_ctor_set_uint8(x_377, sizeof(void*)*4, x_376);
return x_377;
}
}
}
else
{
uint8_t x_378; 
x_378 = lean_ctor_get_uint8(x_353, sizeof(void*)*4);
if (x_378 == 0)
{
lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; uint8_t x_388; lean_object* x_389; lean_object* x_390; uint8_t x_391; lean_object* x_392; 
x_379 = lean_ctor_get(x_351, 1);
lean_inc(x_379);
x_380 = lean_ctor_get(x_351, 2);
lean_inc(x_380);
x_381 = lean_ctor_get(x_351, 3);
lean_inc(x_381);
if (lean_is_exclusive(x_351)) {
 lean_ctor_release(x_351, 0);
 lean_ctor_release(x_351, 1);
 lean_ctor_release(x_351, 2);
 lean_ctor_release(x_351, 3);
 x_382 = x_351;
} else {
 lean_dec_ref(x_351);
 x_382 = lean_box(0);
}
x_383 = lean_ctor_get(x_353, 0);
lean_inc(x_383);
x_384 = lean_ctor_get(x_353, 1);
lean_inc(x_384);
x_385 = lean_ctor_get(x_353, 2);
lean_inc(x_385);
x_386 = lean_ctor_get(x_353, 3);
lean_inc(x_386);
if (lean_is_exclusive(x_353)) {
 lean_ctor_release(x_353, 0);
 lean_ctor_release(x_353, 1);
 lean_ctor_release(x_353, 2);
 lean_ctor_release(x_353, 3);
 x_387 = x_353;
} else {
 lean_dec_ref(x_353);
 x_387 = lean_box(0);
}
x_388 = 1;
if (lean_is_scalar(x_387)) {
 x_389 = lean_alloc_ctor(1, 4, 1);
} else {
 x_389 = x_387;
}
lean_ctor_set(x_389, 0, x_345);
lean_ctor_set(x_389, 1, x_346);
lean_ctor_set(x_389, 2, x_347);
lean_ctor_set(x_389, 3, x_383);
lean_ctor_set_uint8(x_389, sizeof(void*)*4, x_388);
if (lean_is_scalar(x_382)) {
 x_390 = lean_alloc_ctor(1, 4, 1);
} else {
 x_390 = x_382;
}
lean_ctor_set(x_390, 0, x_386);
lean_ctor_set(x_390, 1, x_379);
lean_ctor_set(x_390, 2, x_380);
lean_ctor_set(x_390, 3, x_381);
lean_ctor_set_uint8(x_390, sizeof(void*)*4, x_388);
x_391 = 0;
x_392 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_392, 0, x_389);
lean_ctor_set(x_392, 1, x_384);
lean_ctor_set(x_392, 2, x_385);
lean_ctor_set(x_392, 3, x_390);
lean_ctor_set_uint8(x_392, sizeof(void*)*4, x_391);
return x_392;
}
else
{
lean_object* x_393; 
x_393 = lean_ctor_get(x_351, 3);
lean_inc(x_393);
if (lean_obj_tag(x_393) == 0)
{
lean_object* x_394; uint8_t x_395; lean_object* x_396; 
if (lean_is_exclusive(x_353)) {
 lean_ctor_release(x_353, 0);
 lean_ctor_release(x_353, 1);
 lean_ctor_release(x_353, 2);
 lean_ctor_release(x_353, 3);
 x_394 = x_353;
} else {
 lean_dec_ref(x_353);
 x_394 = lean_box(0);
}
x_395 = 1;
if (lean_is_scalar(x_394)) {
 x_396 = lean_alloc_ctor(1, 4, 1);
} else {
 x_396 = x_394;
}
lean_ctor_set(x_396, 0, x_345);
lean_ctor_set(x_396, 1, x_346);
lean_ctor_set(x_396, 2, x_347);
lean_ctor_set(x_396, 3, x_351);
lean_ctor_set_uint8(x_396, sizeof(void*)*4, x_395);
return x_396;
}
else
{
uint8_t x_397; 
x_397 = lean_ctor_get_uint8(x_393, sizeof(void*)*4);
if (x_397 == 0)
{
lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; uint8_t x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; uint8_t x_410; lean_object* x_411; 
x_398 = lean_ctor_get(x_351, 1);
lean_inc(x_398);
x_399 = lean_ctor_get(x_351, 2);
lean_inc(x_399);
if (lean_is_exclusive(x_351)) {
 lean_ctor_release(x_351, 0);
 lean_ctor_release(x_351, 1);
 lean_ctor_release(x_351, 2);
 lean_ctor_release(x_351, 3);
 x_400 = x_351;
} else {
 lean_dec_ref(x_351);
 x_400 = lean_box(0);
}
x_401 = lean_ctor_get(x_393, 0);
lean_inc(x_401);
x_402 = lean_ctor_get(x_393, 1);
lean_inc(x_402);
x_403 = lean_ctor_get(x_393, 2);
lean_inc(x_403);
x_404 = lean_ctor_get(x_393, 3);
lean_inc(x_404);
if (lean_is_exclusive(x_393)) {
 lean_ctor_release(x_393, 0);
 lean_ctor_release(x_393, 1);
 lean_ctor_release(x_393, 2);
 lean_ctor_release(x_393, 3);
 x_405 = x_393;
} else {
 lean_dec_ref(x_393);
 x_405 = lean_box(0);
}
x_406 = 1;
lean_inc(x_353);
if (lean_is_scalar(x_405)) {
 x_407 = lean_alloc_ctor(1, 4, 1);
} else {
 x_407 = x_405;
}
lean_ctor_set(x_407, 0, x_345);
lean_ctor_set(x_407, 1, x_346);
lean_ctor_set(x_407, 2, x_347);
lean_ctor_set(x_407, 3, x_353);
if (lean_is_exclusive(x_353)) {
 lean_ctor_release(x_353, 0);
 lean_ctor_release(x_353, 1);
 lean_ctor_release(x_353, 2);
 lean_ctor_release(x_353, 3);
 x_408 = x_353;
} else {
 lean_dec_ref(x_353);
 x_408 = lean_box(0);
}
lean_ctor_set_uint8(x_407, sizeof(void*)*4, x_406);
if (lean_is_scalar(x_408)) {
 x_409 = lean_alloc_ctor(1, 4, 1);
} else {
 x_409 = x_408;
}
lean_ctor_set(x_409, 0, x_401);
lean_ctor_set(x_409, 1, x_402);
lean_ctor_set(x_409, 2, x_403);
lean_ctor_set(x_409, 3, x_404);
lean_ctor_set_uint8(x_409, sizeof(void*)*4, x_406);
x_410 = 0;
if (lean_is_scalar(x_400)) {
 x_411 = lean_alloc_ctor(1, 4, 1);
} else {
 x_411 = x_400;
}
lean_ctor_set(x_411, 0, x_407);
lean_ctor_set(x_411, 1, x_398);
lean_ctor_set(x_411, 2, x_399);
lean_ctor_set(x_411, 3, x_409);
lean_ctor_set_uint8(x_411, sizeof(void*)*4, x_410);
return x_411;
}
else
{
lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; uint8_t x_422; lean_object* x_423; 
x_412 = lean_ctor_get(x_351, 1);
lean_inc(x_412);
x_413 = lean_ctor_get(x_351, 2);
lean_inc(x_413);
if (lean_is_exclusive(x_351)) {
 lean_ctor_release(x_351, 0);
 lean_ctor_release(x_351, 1);
 lean_ctor_release(x_351, 2);
 lean_ctor_release(x_351, 3);
 x_414 = x_351;
} else {
 lean_dec_ref(x_351);
 x_414 = lean_box(0);
}
x_415 = lean_ctor_get(x_353, 0);
lean_inc(x_415);
x_416 = lean_ctor_get(x_353, 1);
lean_inc(x_416);
x_417 = lean_ctor_get(x_353, 2);
lean_inc(x_417);
x_418 = lean_ctor_get(x_353, 3);
lean_inc(x_418);
if (lean_is_exclusive(x_353)) {
 lean_ctor_release(x_353, 0);
 lean_ctor_release(x_353, 1);
 lean_ctor_release(x_353, 2);
 lean_ctor_release(x_353, 3);
 x_419 = x_353;
} else {
 lean_dec_ref(x_353);
 x_419 = lean_box(0);
}
if (lean_is_scalar(x_419)) {
 x_420 = lean_alloc_ctor(1, 4, 1);
} else {
 x_420 = x_419;
}
lean_ctor_set(x_420, 0, x_415);
lean_ctor_set(x_420, 1, x_416);
lean_ctor_set(x_420, 2, x_417);
lean_ctor_set(x_420, 3, x_418);
lean_ctor_set_uint8(x_420, sizeof(void*)*4, x_397);
if (lean_is_scalar(x_414)) {
 x_421 = lean_alloc_ctor(1, 4, 1);
} else {
 x_421 = x_414;
}
lean_ctor_set(x_421, 0, x_420);
lean_ctor_set(x_421, 1, x_412);
lean_ctor_set(x_421, 2, x_413);
lean_ctor_set(x_421, 3, x_393);
lean_ctor_set_uint8(x_421, sizeof(void*)*4, x_352);
x_422 = 1;
x_423 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_423, 0, x_345);
lean_ctor_set(x_423, 1, x_346);
lean_ctor_set(x_423, 2, x_347);
lean_ctor_set(x_423, 3, x_421);
lean_ctor_set_uint8(x_423, sizeof(void*)*4, x_422);
return x_423;
}
}
}
}
}
else
{
uint8_t x_424; lean_object* x_425; 
x_424 = 1;
x_425 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_425, 0, x_345);
lean_ctor_set(x_425, 1, x_346);
lean_ctor_set(x_425, 2, x_347);
lean_ctor_set(x_425, 3, x_351);
lean_ctor_set_uint8(x_425, sizeof(void*)*4, x_424);
return x_425;
}
}
else
{
uint8_t x_426; lean_object* x_427; 
lean_dec(x_347);
lean_dec(x_346);
x_426 = 1;
x_427 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_427, 0, x_345);
lean_ctor_set(x_427, 1, x_2);
lean_ctor_set(x_427, 2, x_3);
lean_ctor_set(x_427, 3, x_348);
lean_ctor_set_uint8(x_427, sizeof(void*)*4, x_426);
return x_427;
}
}
else
{
lean_object* x_428; uint8_t x_429; 
x_428 = l_Lean_RBNode_ins___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__3(x_345, x_2, x_3);
x_429 = lean_ctor_get_uint8(x_428, sizeof(void*)*4);
if (x_429 == 0)
{
lean_object* x_430; 
x_430 = lean_ctor_get(x_428, 0);
lean_inc(x_430);
if (lean_obj_tag(x_430) == 0)
{
lean_object* x_431; 
x_431 = lean_ctor_get(x_428, 3);
lean_inc(x_431);
if (lean_obj_tag(x_431) == 0)
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; uint8_t x_436; lean_object* x_437; 
x_432 = lean_ctor_get(x_428, 1);
lean_inc(x_432);
x_433 = lean_ctor_get(x_428, 2);
lean_inc(x_433);
if (lean_is_exclusive(x_428)) {
 lean_ctor_release(x_428, 0);
 lean_ctor_release(x_428, 1);
 lean_ctor_release(x_428, 2);
 lean_ctor_release(x_428, 3);
 x_434 = x_428;
} else {
 lean_dec_ref(x_428);
 x_434 = lean_box(0);
}
if (lean_is_scalar(x_434)) {
 x_435 = lean_alloc_ctor(1, 4, 1);
} else {
 x_435 = x_434;
}
lean_ctor_set(x_435, 0, x_431);
lean_ctor_set(x_435, 1, x_432);
lean_ctor_set(x_435, 2, x_433);
lean_ctor_set(x_435, 3, x_431);
lean_ctor_set_uint8(x_435, sizeof(void*)*4, x_429);
x_436 = 1;
x_437 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_437, 0, x_435);
lean_ctor_set(x_437, 1, x_346);
lean_ctor_set(x_437, 2, x_347);
lean_ctor_set(x_437, 3, x_348);
lean_ctor_set_uint8(x_437, sizeof(void*)*4, x_436);
return x_437;
}
else
{
uint8_t x_438; 
x_438 = lean_ctor_get_uint8(x_431, sizeof(void*)*4);
if (x_438 == 0)
{
lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; uint8_t x_447; lean_object* x_448; lean_object* x_449; uint8_t x_450; lean_object* x_451; 
x_439 = lean_ctor_get(x_428, 1);
lean_inc(x_439);
x_440 = lean_ctor_get(x_428, 2);
lean_inc(x_440);
if (lean_is_exclusive(x_428)) {
 lean_ctor_release(x_428, 0);
 lean_ctor_release(x_428, 1);
 lean_ctor_release(x_428, 2);
 lean_ctor_release(x_428, 3);
 x_441 = x_428;
} else {
 lean_dec_ref(x_428);
 x_441 = lean_box(0);
}
x_442 = lean_ctor_get(x_431, 0);
lean_inc(x_442);
x_443 = lean_ctor_get(x_431, 1);
lean_inc(x_443);
x_444 = lean_ctor_get(x_431, 2);
lean_inc(x_444);
x_445 = lean_ctor_get(x_431, 3);
lean_inc(x_445);
if (lean_is_exclusive(x_431)) {
 lean_ctor_release(x_431, 0);
 lean_ctor_release(x_431, 1);
 lean_ctor_release(x_431, 2);
 lean_ctor_release(x_431, 3);
 x_446 = x_431;
} else {
 lean_dec_ref(x_431);
 x_446 = lean_box(0);
}
x_447 = 1;
if (lean_is_scalar(x_446)) {
 x_448 = lean_alloc_ctor(1, 4, 1);
} else {
 x_448 = x_446;
}
lean_ctor_set(x_448, 0, x_430);
lean_ctor_set(x_448, 1, x_439);
lean_ctor_set(x_448, 2, x_440);
lean_ctor_set(x_448, 3, x_442);
lean_ctor_set_uint8(x_448, sizeof(void*)*4, x_447);
if (lean_is_scalar(x_441)) {
 x_449 = lean_alloc_ctor(1, 4, 1);
} else {
 x_449 = x_441;
}
lean_ctor_set(x_449, 0, x_445);
lean_ctor_set(x_449, 1, x_346);
lean_ctor_set(x_449, 2, x_347);
lean_ctor_set(x_449, 3, x_348);
lean_ctor_set_uint8(x_449, sizeof(void*)*4, x_447);
x_450 = 0;
x_451 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_451, 0, x_448);
lean_ctor_set(x_451, 1, x_443);
lean_ctor_set(x_451, 2, x_444);
lean_ctor_set(x_451, 3, x_449);
lean_ctor_set_uint8(x_451, sizeof(void*)*4, x_450);
return x_451;
}
else
{
lean_object* x_452; uint8_t x_453; lean_object* x_454; 
if (lean_is_exclusive(x_431)) {
 lean_ctor_release(x_431, 0);
 lean_ctor_release(x_431, 1);
 lean_ctor_release(x_431, 2);
 lean_ctor_release(x_431, 3);
 x_452 = x_431;
} else {
 lean_dec_ref(x_431);
 x_452 = lean_box(0);
}
x_453 = 1;
if (lean_is_scalar(x_452)) {
 x_454 = lean_alloc_ctor(1, 4, 1);
} else {
 x_454 = x_452;
}
lean_ctor_set(x_454, 0, x_428);
lean_ctor_set(x_454, 1, x_346);
lean_ctor_set(x_454, 2, x_347);
lean_ctor_set(x_454, 3, x_348);
lean_ctor_set_uint8(x_454, sizeof(void*)*4, x_453);
return x_454;
}
}
}
else
{
uint8_t x_455; 
x_455 = lean_ctor_get_uint8(x_430, sizeof(void*)*4);
if (x_455 == 0)
{
lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; uint8_t x_465; lean_object* x_466; lean_object* x_467; uint8_t x_468; lean_object* x_469; 
x_456 = lean_ctor_get(x_428, 1);
lean_inc(x_456);
x_457 = lean_ctor_get(x_428, 2);
lean_inc(x_457);
x_458 = lean_ctor_get(x_428, 3);
lean_inc(x_458);
if (lean_is_exclusive(x_428)) {
 lean_ctor_release(x_428, 0);
 lean_ctor_release(x_428, 1);
 lean_ctor_release(x_428, 2);
 lean_ctor_release(x_428, 3);
 x_459 = x_428;
} else {
 lean_dec_ref(x_428);
 x_459 = lean_box(0);
}
x_460 = lean_ctor_get(x_430, 0);
lean_inc(x_460);
x_461 = lean_ctor_get(x_430, 1);
lean_inc(x_461);
x_462 = lean_ctor_get(x_430, 2);
lean_inc(x_462);
x_463 = lean_ctor_get(x_430, 3);
lean_inc(x_463);
if (lean_is_exclusive(x_430)) {
 lean_ctor_release(x_430, 0);
 lean_ctor_release(x_430, 1);
 lean_ctor_release(x_430, 2);
 lean_ctor_release(x_430, 3);
 x_464 = x_430;
} else {
 lean_dec_ref(x_430);
 x_464 = lean_box(0);
}
x_465 = 1;
if (lean_is_scalar(x_464)) {
 x_466 = lean_alloc_ctor(1, 4, 1);
} else {
 x_466 = x_464;
}
lean_ctor_set(x_466, 0, x_460);
lean_ctor_set(x_466, 1, x_461);
lean_ctor_set(x_466, 2, x_462);
lean_ctor_set(x_466, 3, x_463);
lean_ctor_set_uint8(x_466, sizeof(void*)*4, x_465);
if (lean_is_scalar(x_459)) {
 x_467 = lean_alloc_ctor(1, 4, 1);
} else {
 x_467 = x_459;
}
lean_ctor_set(x_467, 0, x_458);
lean_ctor_set(x_467, 1, x_346);
lean_ctor_set(x_467, 2, x_347);
lean_ctor_set(x_467, 3, x_348);
lean_ctor_set_uint8(x_467, sizeof(void*)*4, x_465);
x_468 = 0;
x_469 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_469, 0, x_466);
lean_ctor_set(x_469, 1, x_456);
lean_ctor_set(x_469, 2, x_457);
lean_ctor_set(x_469, 3, x_467);
lean_ctor_set_uint8(x_469, sizeof(void*)*4, x_468);
return x_469;
}
else
{
lean_object* x_470; 
x_470 = lean_ctor_get(x_428, 3);
lean_inc(x_470);
if (lean_obj_tag(x_470) == 0)
{
lean_object* x_471; uint8_t x_472; lean_object* x_473; 
if (lean_is_exclusive(x_430)) {
 lean_ctor_release(x_430, 0);
 lean_ctor_release(x_430, 1);
 lean_ctor_release(x_430, 2);
 lean_ctor_release(x_430, 3);
 x_471 = x_430;
} else {
 lean_dec_ref(x_430);
 x_471 = lean_box(0);
}
x_472 = 1;
if (lean_is_scalar(x_471)) {
 x_473 = lean_alloc_ctor(1, 4, 1);
} else {
 x_473 = x_471;
}
lean_ctor_set(x_473, 0, x_428);
lean_ctor_set(x_473, 1, x_346);
lean_ctor_set(x_473, 2, x_347);
lean_ctor_set(x_473, 3, x_348);
lean_ctor_set_uint8(x_473, sizeof(void*)*4, x_472);
return x_473;
}
else
{
uint8_t x_474; 
x_474 = lean_ctor_get_uint8(x_470, sizeof(void*)*4);
if (x_474 == 0)
{
lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; uint8_t x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; uint8_t x_487; lean_object* x_488; 
x_475 = lean_ctor_get(x_428, 1);
lean_inc(x_475);
x_476 = lean_ctor_get(x_428, 2);
lean_inc(x_476);
if (lean_is_exclusive(x_428)) {
 lean_ctor_release(x_428, 0);
 lean_ctor_release(x_428, 1);
 lean_ctor_release(x_428, 2);
 lean_ctor_release(x_428, 3);
 x_477 = x_428;
} else {
 lean_dec_ref(x_428);
 x_477 = lean_box(0);
}
x_478 = lean_ctor_get(x_470, 0);
lean_inc(x_478);
x_479 = lean_ctor_get(x_470, 1);
lean_inc(x_479);
x_480 = lean_ctor_get(x_470, 2);
lean_inc(x_480);
x_481 = lean_ctor_get(x_470, 3);
lean_inc(x_481);
if (lean_is_exclusive(x_470)) {
 lean_ctor_release(x_470, 0);
 lean_ctor_release(x_470, 1);
 lean_ctor_release(x_470, 2);
 lean_ctor_release(x_470, 3);
 x_482 = x_470;
} else {
 lean_dec_ref(x_470);
 x_482 = lean_box(0);
}
x_483 = 1;
lean_inc(x_430);
if (lean_is_scalar(x_482)) {
 x_484 = lean_alloc_ctor(1, 4, 1);
} else {
 x_484 = x_482;
}
lean_ctor_set(x_484, 0, x_430);
lean_ctor_set(x_484, 1, x_475);
lean_ctor_set(x_484, 2, x_476);
lean_ctor_set(x_484, 3, x_478);
if (lean_is_exclusive(x_430)) {
 lean_ctor_release(x_430, 0);
 lean_ctor_release(x_430, 1);
 lean_ctor_release(x_430, 2);
 lean_ctor_release(x_430, 3);
 x_485 = x_430;
} else {
 lean_dec_ref(x_430);
 x_485 = lean_box(0);
}
lean_ctor_set_uint8(x_484, sizeof(void*)*4, x_483);
if (lean_is_scalar(x_485)) {
 x_486 = lean_alloc_ctor(1, 4, 1);
} else {
 x_486 = x_485;
}
lean_ctor_set(x_486, 0, x_481);
lean_ctor_set(x_486, 1, x_346);
lean_ctor_set(x_486, 2, x_347);
lean_ctor_set(x_486, 3, x_348);
lean_ctor_set_uint8(x_486, sizeof(void*)*4, x_483);
x_487 = 0;
if (lean_is_scalar(x_477)) {
 x_488 = lean_alloc_ctor(1, 4, 1);
} else {
 x_488 = x_477;
}
lean_ctor_set(x_488, 0, x_484);
lean_ctor_set(x_488, 1, x_479);
lean_ctor_set(x_488, 2, x_480);
lean_ctor_set(x_488, 3, x_486);
lean_ctor_set_uint8(x_488, sizeof(void*)*4, x_487);
return x_488;
}
else
{
lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; uint8_t x_499; lean_object* x_500; 
x_489 = lean_ctor_get(x_428, 1);
lean_inc(x_489);
x_490 = lean_ctor_get(x_428, 2);
lean_inc(x_490);
if (lean_is_exclusive(x_428)) {
 lean_ctor_release(x_428, 0);
 lean_ctor_release(x_428, 1);
 lean_ctor_release(x_428, 2);
 lean_ctor_release(x_428, 3);
 x_491 = x_428;
} else {
 lean_dec_ref(x_428);
 x_491 = lean_box(0);
}
x_492 = lean_ctor_get(x_430, 0);
lean_inc(x_492);
x_493 = lean_ctor_get(x_430, 1);
lean_inc(x_493);
x_494 = lean_ctor_get(x_430, 2);
lean_inc(x_494);
x_495 = lean_ctor_get(x_430, 3);
lean_inc(x_495);
if (lean_is_exclusive(x_430)) {
 lean_ctor_release(x_430, 0);
 lean_ctor_release(x_430, 1);
 lean_ctor_release(x_430, 2);
 lean_ctor_release(x_430, 3);
 x_496 = x_430;
} else {
 lean_dec_ref(x_430);
 x_496 = lean_box(0);
}
if (lean_is_scalar(x_496)) {
 x_497 = lean_alloc_ctor(1, 4, 1);
} else {
 x_497 = x_496;
}
lean_ctor_set(x_497, 0, x_492);
lean_ctor_set(x_497, 1, x_493);
lean_ctor_set(x_497, 2, x_494);
lean_ctor_set(x_497, 3, x_495);
lean_ctor_set_uint8(x_497, sizeof(void*)*4, x_474);
if (lean_is_scalar(x_491)) {
 x_498 = lean_alloc_ctor(1, 4, 1);
} else {
 x_498 = x_491;
}
lean_ctor_set(x_498, 0, x_497);
lean_ctor_set(x_498, 1, x_489);
lean_ctor_set(x_498, 2, x_490);
lean_ctor_set(x_498, 3, x_470);
lean_ctor_set_uint8(x_498, sizeof(void*)*4, x_429);
x_499 = 1;
x_500 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_500, 0, x_498);
lean_ctor_set(x_500, 1, x_346);
lean_ctor_set(x_500, 2, x_347);
lean_ctor_set(x_500, 3, x_348);
lean_ctor_set_uint8(x_500, sizeof(void*)*4, x_499);
return x_500;
}
}
}
}
}
else
{
uint8_t x_501; lean_object* x_502; 
x_501 = 1;
x_502 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_502, 0, x_428);
lean_ctor_set(x_502, 1, x_346);
lean_ctor_set(x_502, 2, x_347);
lean_ctor_set(x_502, 3, x_348);
lean_ctor_set_uint8(x_502, sizeof(void*)*4, x_501);
return x_502;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_insert___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_RBNode_isRed___rarg(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Lean_RBNode_ins___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__3(x_1, x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_RBNode_ins___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__3(x_1, x_2, x_3);
x_7 = l_Lean_RBNode_setBlack___rarg(x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_usize_shift_right(x_5, x_6);
x_10 = 1;
x_11 = lean_usize_shift_left(x_10, x_6);
x_12 = lean_usize_sub(x_11, x_10);
x_13 = lean_usize_land(x_5, x_12);
x_14 = 5;
x_15 = lean_usize_sub(x_6, x_14);
x_16 = lean_usize_to_nat(x_9);
x_17 = lean_array_get_size(x_8);
x_18 = lean_nat_dec_lt(x_16, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_dec(x_16);
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_array_fget(x_8, x_16);
x_20 = lean_box(0);
x_21 = lean_array_fset(x_8, x_16, x_20);
x_22 = l_Lean_PersistentArray_modifyAux___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__5(x_1, x_2, x_3, x_19, x_13, x_15);
x_23 = lean_array_fset(x_21, x_16, x_22);
lean_dec(x_16);
lean_ctor_set(x_4, 0, x_23);
return x_4;
}
}
else
{
lean_object* x_24; size_t x_25; size_t x_26; size_t x_27; size_t x_28; size_t x_29; size_t x_30; size_t x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_24 = lean_ctor_get(x_4, 0);
lean_inc(x_24);
lean_dec(x_4);
x_25 = lean_usize_shift_right(x_5, x_6);
x_26 = 1;
x_27 = lean_usize_shift_left(x_26, x_6);
x_28 = lean_usize_sub(x_27, x_26);
x_29 = lean_usize_land(x_5, x_28);
x_30 = 5;
x_31 = lean_usize_sub(x_6, x_30);
x_32 = lean_usize_to_nat(x_25);
x_33 = lean_array_get_size(x_24);
x_34 = lean_nat_dec_lt(x_32, x_33);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
lean_dec(x_32);
lean_dec(x_1);
x_35 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_35, 0, x_24);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_array_fget(x_24, x_32);
x_37 = lean_box(0);
x_38 = lean_array_fset(x_24, x_32, x_37);
x_39 = l_Lean_PersistentArray_modifyAux___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__5(x_1, x_2, x_3, x_36, x_29, x_31);
x_40 = lean_array_fset(x_38, x_32, x_39);
lean_dec(x_32);
x_41 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_41, 0, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_4);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_43 = lean_ctor_get(x_4, 0);
x_44 = lean_usize_to_nat(x_5);
x_45 = lean_array_get_size(x_43);
x_46 = lean_nat_dec_lt(x_44, x_45);
lean_dec(x_45);
if (x_46 == 0)
{
lean_dec(x_44);
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = lean_array_fget(x_43, x_44);
x_48 = lean_box(0);
x_49 = lean_array_fset(x_43, x_44, x_48);
x_50 = l_Lean_RBNode_insert___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__2(x_47, x_1, x_48);
x_51 = lean_array_fset(x_49, x_44, x_50);
lean_dec(x_44);
lean_ctor_set(x_4, 0, x_51);
return x_4;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_52 = lean_ctor_get(x_4, 0);
lean_inc(x_52);
lean_dec(x_4);
x_53 = lean_usize_to_nat(x_5);
x_54 = lean_array_get_size(x_52);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_1);
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_52);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_57 = lean_array_fget(x_52, x_53);
x_58 = lean_box(0);
x_59 = lean_array_fset(x_52, x_53, x_58);
x_60 = l_Lean_RBNode_insert___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__2(x_57, x_1, x_58);
x_61 = lean_array_fset(x_59, x_53, x_60);
lean_dec(x_53);
x_62 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_62, 0, x_61);
return x_62;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_4, 1);
x_9 = lean_ctor_get_usize(x_4, 4);
x_10 = lean_ctor_get(x_4, 3);
x_11 = lean_nat_dec_le(x_10, x_5);
if (x_11 == 0)
{
size_t x_12; lean_object* x_13; 
x_12 = lean_usize_of_nat(x_5);
x_13 = l_Lean_PersistentArray_modifyAux___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__5(x_1, x_2, x_3, x_7, x_12, x_9);
lean_ctor_set(x_4, 0, x_13);
return x_4;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_nat_sub(x_5, x_10);
x_15 = lean_array_get_size(x_8);
x_16 = lean_nat_dec_lt(x_14, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_dec(x_14);
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_array_fget(x_8, x_14);
x_18 = lean_box(0);
x_19 = lean_array_fset(x_8, x_14, x_18);
x_20 = l_Lean_RBNode_insert___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__2(x_17, x_1, x_18);
x_21 = lean_array_fset(x_19, x_14, x_20);
lean_dec(x_14);
lean_ctor_set(x_4, 1, x_21);
return x_4;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; size_t x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_4, 0);
x_23 = lean_ctor_get(x_4, 1);
x_24 = lean_ctor_get(x_4, 2);
x_25 = lean_ctor_get_usize(x_4, 4);
x_26 = lean_ctor_get(x_4, 3);
lean_inc(x_26);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_4);
x_27 = lean_nat_dec_le(x_26, x_5);
if (x_27 == 0)
{
size_t x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_usize_of_nat(x_5);
x_29 = l_Lean_PersistentArray_modifyAux___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__5(x_1, x_2, x_3, x_22, x_28, x_25);
x_30 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_23);
lean_ctor_set(x_30, 2, x_24);
lean_ctor_set(x_30, 3, x_26);
lean_ctor_set_usize(x_30, 4, x_25);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_nat_sub(x_5, x_26);
x_32 = lean_array_get_size(x_23);
x_33 = lean_nat_dec_lt(x_31, x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_31);
lean_dec(x_1);
x_34 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_34, 0, x_22);
lean_ctor_set(x_34, 1, x_23);
lean_ctor_set(x_34, 2, x_24);
lean_ctor_set(x_34, 3, x_26);
lean_ctor_set_usize(x_34, 4, x_25);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_array_fget(x_23, x_31);
x_36 = lean_box(0);
x_37 = lean_array_fset(x_23, x_31, x_36);
x_38 = l_Lean_RBNode_insert___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__2(x_35, x_1, x_36);
x_39 = lean_array_fset(x_37, x_31, x_38);
lean_dec(x_31);
x_40 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_40, 0, x_22);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_40, 2, x_24);
lean_ctor_set(x_40, 3, x_26);
lean_ctor_set_usize(x_40, 4, x_25);
return x_40;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_addOcc___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_lt(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = lean_nat_dec_eq(x_1, x_2);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 2;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_addOcc___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_addOcc___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
x_16 = l_Lean_RBNode_findCore___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__1(x_14, x_2);
lean_dec(x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_free_object(x_12);
x_17 = lean_st_ref_take(x_3, x_15);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 14);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = !lean_is_exclusive(x_18);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_18, 14);
lean_dec(x_23);
x_24 = !lean_is_exclusive(x_19);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_19, 1);
lean_dec(x_25);
x_26 = !lean_is_exclusive(x_20);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_27 = lean_ctor_get(x_20, 11);
x_28 = l_Lean_Meta_Grind_Arith_Cutsat_addOcc___closed__1;
x_29 = l_Lean_IR_instInhabitedIndexSet;
x_30 = l_Lean_PersistentArray_modify___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__4(x_2, x_28, x_29, x_27, x_1);
lean_ctor_set(x_20, 11, x_30);
x_31 = lean_st_ref_set(x_3, x_18, x_21);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
x_34 = lean_box(0);
lean_ctor_set(x_31, 0, x_34);
return x_31;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_31, 1);
lean_inc(x_35);
lean_dec(x_31);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_38 = lean_ctor_get(x_20, 0);
x_39 = lean_ctor_get(x_20, 1);
x_40 = lean_ctor_get(x_20, 2);
x_41 = lean_ctor_get(x_20, 3);
x_42 = lean_ctor_get(x_20, 4);
x_43 = lean_ctor_get(x_20, 5);
x_44 = lean_ctor_get(x_20, 6);
x_45 = lean_ctor_get(x_20, 7);
x_46 = lean_ctor_get(x_20, 8);
x_47 = lean_ctor_get(x_20, 9);
x_48 = lean_ctor_get(x_20, 10);
x_49 = lean_ctor_get(x_20, 11);
x_50 = lean_ctor_get(x_20, 12);
x_51 = lean_ctor_get(x_20, 13);
x_52 = lean_ctor_get_uint8(x_20, sizeof(void*)*17);
x_53 = lean_ctor_get(x_20, 14);
x_54 = lean_ctor_get(x_20, 15);
x_55 = lean_ctor_get(x_20, 16);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_20);
x_56 = l_Lean_Meta_Grind_Arith_Cutsat_addOcc___closed__1;
x_57 = l_Lean_IR_instInhabitedIndexSet;
x_58 = l_Lean_PersistentArray_modify___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__4(x_2, x_56, x_57, x_49, x_1);
x_59 = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(x_59, 0, x_38);
lean_ctor_set(x_59, 1, x_39);
lean_ctor_set(x_59, 2, x_40);
lean_ctor_set(x_59, 3, x_41);
lean_ctor_set(x_59, 4, x_42);
lean_ctor_set(x_59, 5, x_43);
lean_ctor_set(x_59, 6, x_44);
lean_ctor_set(x_59, 7, x_45);
lean_ctor_set(x_59, 8, x_46);
lean_ctor_set(x_59, 9, x_47);
lean_ctor_set(x_59, 10, x_48);
lean_ctor_set(x_59, 11, x_58);
lean_ctor_set(x_59, 12, x_50);
lean_ctor_set(x_59, 13, x_51);
lean_ctor_set(x_59, 14, x_53);
lean_ctor_set(x_59, 15, x_54);
lean_ctor_set(x_59, 16, x_55);
lean_ctor_set_uint8(x_59, sizeof(void*)*17, x_52);
lean_ctor_set(x_19, 1, x_59);
x_60 = lean_st_ref_set(x_3, x_18, x_21);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_62 = x_60;
} else {
 lean_dec_ref(x_60);
 x_62 = lean_box(0);
}
x_63 = lean_box(0);
if (lean_is_scalar(x_62)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_62;
}
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_61);
return x_64;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_65 = lean_ctor_get(x_19, 0);
x_66 = lean_ctor_get(x_19, 2);
x_67 = lean_ctor_get(x_19, 3);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_19);
x_68 = lean_ctor_get(x_20, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_20, 1);
lean_inc(x_69);
x_70 = lean_ctor_get(x_20, 2);
lean_inc(x_70);
x_71 = lean_ctor_get(x_20, 3);
lean_inc(x_71);
x_72 = lean_ctor_get(x_20, 4);
lean_inc(x_72);
x_73 = lean_ctor_get(x_20, 5);
lean_inc(x_73);
x_74 = lean_ctor_get(x_20, 6);
lean_inc(x_74);
x_75 = lean_ctor_get(x_20, 7);
lean_inc(x_75);
x_76 = lean_ctor_get(x_20, 8);
lean_inc(x_76);
x_77 = lean_ctor_get(x_20, 9);
lean_inc(x_77);
x_78 = lean_ctor_get(x_20, 10);
lean_inc(x_78);
x_79 = lean_ctor_get(x_20, 11);
lean_inc(x_79);
x_80 = lean_ctor_get(x_20, 12);
lean_inc(x_80);
x_81 = lean_ctor_get(x_20, 13);
lean_inc(x_81);
x_82 = lean_ctor_get_uint8(x_20, sizeof(void*)*17);
x_83 = lean_ctor_get(x_20, 14);
lean_inc(x_83);
x_84 = lean_ctor_get(x_20, 15);
lean_inc(x_84);
x_85 = lean_ctor_get(x_20, 16);
lean_inc(x_85);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 lean_ctor_release(x_20, 1);
 lean_ctor_release(x_20, 2);
 lean_ctor_release(x_20, 3);
 lean_ctor_release(x_20, 4);
 lean_ctor_release(x_20, 5);
 lean_ctor_release(x_20, 6);
 lean_ctor_release(x_20, 7);
 lean_ctor_release(x_20, 8);
 lean_ctor_release(x_20, 9);
 lean_ctor_release(x_20, 10);
 lean_ctor_release(x_20, 11);
 lean_ctor_release(x_20, 12);
 lean_ctor_release(x_20, 13);
 lean_ctor_release(x_20, 14);
 lean_ctor_release(x_20, 15);
 lean_ctor_release(x_20, 16);
 x_86 = x_20;
} else {
 lean_dec_ref(x_20);
 x_86 = lean_box(0);
}
x_87 = l_Lean_Meta_Grind_Arith_Cutsat_addOcc___closed__1;
x_88 = l_Lean_IR_instInhabitedIndexSet;
x_89 = l_Lean_PersistentArray_modify___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__4(x_2, x_87, x_88, x_79, x_1);
if (lean_is_scalar(x_86)) {
 x_90 = lean_alloc_ctor(0, 17, 1);
} else {
 x_90 = x_86;
}
lean_ctor_set(x_90, 0, x_68);
lean_ctor_set(x_90, 1, x_69);
lean_ctor_set(x_90, 2, x_70);
lean_ctor_set(x_90, 3, x_71);
lean_ctor_set(x_90, 4, x_72);
lean_ctor_set(x_90, 5, x_73);
lean_ctor_set(x_90, 6, x_74);
lean_ctor_set(x_90, 7, x_75);
lean_ctor_set(x_90, 8, x_76);
lean_ctor_set(x_90, 9, x_77);
lean_ctor_set(x_90, 10, x_78);
lean_ctor_set(x_90, 11, x_89);
lean_ctor_set(x_90, 12, x_80);
lean_ctor_set(x_90, 13, x_81);
lean_ctor_set(x_90, 14, x_83);
lean_ctor_set(x_90, 15, x_84);
lean_ctor_set(x_90, 16, x_85);
lean_ctor_set_uint8(x_90, sizeof(void*)*17, x_82);
x_91 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_91, 0, x_65);
lean_ctor_set(x_91, 1, x_90);
lean_ctor_set(x_91, 2, x_66);
lean_ctor_set(x_91, 3, x_67);
lean_ctor_set(x_18, 14, x_91);
x_92 = lean_st_ref_set(x_3, x_18, x_21);
x_93 = lean_ctor_get(x_92, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 x_94 = x_92;
} else {
 lean_dec_ref(x_92);
 x_94 = lean_box(0);
}
x_95 = lean_box(0);
if (lean_is_scalar(x_94)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_94;
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_93);
return x_96;
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; uint8_t x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_97 = lean_ctor_get(x_18, 0);
x_98 = lean_ctor_get(x_18, 1);
x_99 = lean_ctor_get(x_18, 2);
x_100 = lean_ctor_get(x_18, 3);
x_101 = lean_ctor_get(x_18, 4);
x_102 = lean_ctor_get(x_18, 5);
x_103 = lean_ctor_get(x_18, 6);
x_104 = lean_ctor_get(x_18, 7);
x_105 = lean_ctor_get_uint8(x_18, sizeof(void*)*16);
x_106 = lean_ctor_get(x_18, 8);
x_107 = lean_ctor_get(x_18, 9);
x_108 = lean_ctor_get(x_18, 10);
x_109 = lean_ctor_get(x_18, 11);
x_110 = lean_ctor_get(x_18, 12);
x_111 = lean_ctor_get(x_18, 13);
x_112 = lean_ctor_get(x_18, 15);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_109);
lean_inc(x_108);
lean_inc(x_107);
lean_inc(x_106);
lean_inc(x_104);
lean_inc(x_103);
lean_inc(x_102);
lean_inc(x_101);
lean_inc(x_100);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_18);
x_113 = lean_ctor_get(x_19, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_19, 2);
lean_inc(x_114);
x_115 = lean_ctor_get(x_19, 3);
lean_inc(x_115);
if (lean_is_exclusive(x_19)) {
 lean_ctor_release(x_19, 0);
 lean_ctor_release(x_19, 1);
 lean_ctor_release(x_19, 2);
 lean_ctor_release(x_19, 3);
 x_116 = x_19;
} else {
 lean_dec_ref(x_19);
 x_116 = lean_box(0);
}
x_117 = lean_ctor_get(x_20, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_20, 1);
lean_inc(x_118);
x_119 = lean_ctor_get(x_20, 2);
lean_inc(x_119);
x_120 = lean_ctor_get(x_20, 3);
lean_inc(x_120);
x_121 = lean_ctor_get(x_20, 4);
lean_inc(x_121);
x_122 = lean_ctor_get(x_20, 5);
lean_inc(x_122);
x_123 = lean_ctor_get(x_20, 6);
lean_inc(x_123);
x_124 = lean_ctor_get(x_20, 7);
lean_inc(x_124);
x_125 = lean_ctor_get(x_20, 8);
lean_inc(x_125);
x_126 = lean_ctor_get(x_20, 9);
lean_inc(x_126);
x_127 = lean_ctor_get(x_20, 10);
lean_inc(x_127);
x_128 = lean_ctor_get(x_20, 11);
lean_inc(x_128);
x_129 = lean_ctor_get(x_20, 12);
lean_inc(x_129);
x_130 = lean_ctor_get(x_20, 13);
lean_inc(x_130);
x_131 = lean_ctor_get_uint8(x_20, sizeof(void*)*17);
x_132 = lean_ctor_get(x_20, 14);
lean_inc(x_132);
x_133 = lean_ctor_get(x_20, 15);
lean_inc(x_133);
x_134 = lean_ctor_get(x_20, 16);
lean_inc(x_134);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 lean_ctor_release(x_20, 1);
 lean_ctor_release(x_20, 2);
 lean_ctor_release(x_20, 3);
 lean_ctor_release(x_20, 4);
 lean_ctor_release(x_20, 5);
 lean_ctor_release(x_20, 6);
 lean_ctor_release(x_20, 7);
 lean_ctor_release(x_20, 8);
 lean_ctor_release(x_20, 9);
 lean_ctor_release(x_20, 10);
 lean_ctor_release(x_20, 11);
 lean_ctor_release(x_20, 12);
 lean_ctor_release(x_20, 13);
 lean_ctor_release(x_20, 14);
 lean_ctor_release(x_20, 15);
 lean_ctor_release(x_20, 16);
 x_135 = x_20;
} else {
 lean_dec_ref(x_20);
 x_135 = lean_box(0);
}
x_136 = l_Lean_Meta_Grind_Arith_Cutsat_addOcc___closed__1;
x_137 = l_Lean_IR_instInhabitedIndexSet;
x_138 = l_Lean_PersistentArray_modify___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__4(x_2, x_136, x_137, x_128, x_1);
if (lean_is_scalar(x_135)) {
 x_139 = lean_alloc_ctor(0, 17, 1);
} else {
 x_139 = x_135;
}
lean_ctor_set(x_139, 0, x_117);
lean_ctor_set(x_139, 1, x_118);
lean_ctor_set(x_139, 2, x_119);
lean_ctor_set(x_139, 3, x_120);
lean_ctor_set(x_139, 4, x_121);
lean_ctor_set(x_139, 5, x_122);
lean_ctor_set(x_139, 6, x_123);
lean_ctor_set(x_139, 7, x_124);
lean_ctor_set(x_139, 8, x_125);
lean_ctor_set(x_139, 9, x_126);
lean_ctor_set(x_139, 10, x_127);
lean_ctor_set(x_139, 11, x_138);
lean_ctor_set(x_139, 12, x_129);
lean_ctor_set(x_139, 13, x_130);
lean_ctor_set(x_139, 14, x_132);
lean_ctor_set(x_139, 15, x_133);
lean_ctor_set(x_139, 16, x_134);
lean_ctor_set_uint8(x_139, sizeof(void*)*17, x_131);
if (lean_is_scalar(x_116)) {
 x_140 = lean_alloc_ctor(0, 4, 0);
} else {
 x_140 = x_116;
}
lean_ctor_set(x_140, 0, x_113);
lean_ctor_set(x_140, 1, x_139);
lean_ctor_set(x_140, 2, x_114);
lean_ctor_set(x_140, 3, x_115);
x_141 = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(x_141, 0, x_97);
lean_ctor_set(x_141, 1, x_98);
lean_ctor_set(x_141, 2, x_99);
lean_ctor_set(x_141, 3, x_100);
lean_ctor_set(x_141, 4, x_101);
lean_ctor_set(x_141, 5, x_102);
lean_ctor_set(x_141, 6, x_103);
lean_ctor_set(x_141, 7, x_104);
lean_ctor_set(x_141, 8, x_106);
lean_ctor_set(x_141, 9, x_107);
lean_ctor_set(x_141, 10, x_108);
lean_ctor_set(x_141, 11, x_109);
lean_ctor_set(x_141, 12, x_110);
lean_ctor_set(x_141, 13, x_111);
lean_ctor_set(x_141, 14, x_140);
lean_ctor_set(x_141, 15, x_112);
lean_ctor_set_uint8(x_141, sizeof(void*)*16, x_105);
x_142 = lean_st_ref_set(x_3, x_141, x_21);
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
x_145 = lean_box(0);
if (lean_is_scalar(x_144)) {
 x_146 = lean_alloc_ctor(0, 2, 0);
} else {
 x_146 = x_144;
}
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_143);
return x_146;
}
}
else
{
lean_object* x_147; 
lean_dec(x_16);
lean_dec(x_2);
x_147 = lean_box(0);
lean_ctor_set(x_12, 0, x_147);
return x_12;
}
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_12, 0);
x_149 = lean_ctor_get(x_12, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_12);
x_150 = l_Lean_RBNode_findCore___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__1(x_148, x_2);
lean_dec(x_148);
if (lean_obj_tag(x_150) == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; uint8_t x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; uint8_t x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_151 = lean_st_ref_take(x_3, x_149);
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_152, 14);
lean_inc(x_153);
x_154 = lean_ctor_get(x_153, 1);
lean_inc(x_154);
x_155 = lean_ctor_get(x_151, 1);
lean_inc(x_155);
lean_dec(x_151);
x_156 = lean_ctor_get(x_152, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_152, 1);
lean_inc(x_157);
x_158 = lean_ctor_get(x_152, 2);
lean_inc(x_158);
x_159 = lean_ctor_get(x_152, 3);
lean_inc(x_159);
x_160 = lean_ctor_get(x_152, 4);
lean_inc(x_160);
x_161 = lean_ctor_get(x_152, 5);
lean_inc(x_161);
x_162 = lean_ctor_get(x_152, 6);
lean_inc(x_162);
x_163 = lean_ctor_get(x_152, 7);
lean_inc(x_163);
x_164 = lean_ctor_get_uint8(x_152, sizeof(void*)*16);
x_165 = lean_ctor_get(x_152, 8);
lean_inc(x_165);
x_166 = lean_ctor_get(x_152, 9);
lean_inc(x_166);
x_167 = lean_ctor_get(x_152, 10);
lean_inc(x_167);
x_168 = lean_ctor_get(x_152, 11);
lean_inc(x_168);
x_169 = lean_ctor_get(x_152, 12);
lean_inc(x_169);
x_170 = lean_ctor_get(x_152, 13);
lean_inc(x_170);
x_171 = lean_ctor_get(x_152, 15);
lean_inc(x_171);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 lean_ctor_release(x_152, 2);
 lean_ctor_release(x_152, 3);
 lean_ctor_release(x_152, 4);
 lean_ctor_release(x_152, 5);
 lean_ctor_release(x_152, 6);
 lean_ctor_release(x_152, 7);
 lean_ctor_release(x_152, 8);
 lean_ctor_release(x_152, 9);
 lean_ctor_release(x_152, 10);
 lean_ctor_release(x_152, 11);
 lean_ctor_release(x_152, 12);
 lean_ctor_release(x_152, 13);
 lean_ctor_release(x_152, 14);
 lean_ctor_release(x_152, 15);
 x_172 = x_152;
} else {
 lean_dec_ref(x_152);
 x_172 = lean_box(0);
}
x_173 = lean_ctor_get(x_153, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_153, 2);
lean_inc(x_174);
x_175 = lean_ctor_get(x_153, 3);
lean_inc(x_175);
if (lean_is_exclusive(x_153)) {
 lean_ctor_release(x_153, 0);
 lean_ctor_release(x_153, 1);
 lean_ctor_release(x_153, 2);
 lean_ctor_release(x_153, 3);
 x_176 = x_153;
} else {
 lean_dec_ref(x_153);
 x_176 = lean_box(0);
}
x_177 = lean_ctor_get(x_154, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_154, 1);
lean_inc(x_178);
x_179 = lean_ctor_get(x_154, 2);
lean_inc(x_179);
x_180 = lean_ctor_get(x_154, 3);
lean_inc(x_180);
x_181 = lean_ctor_get(x_154, 4);
lean_inc(x_181);
x_182 = lean_ctor_get(x_154, 5);
lean_inc(x_182);
x_183 = lean_ctor_get(x_154, 6);
lean_inc(x_183);
x_184 = lean_ctor_get(x_154, 7);
lean_inc(x_184);
x_185 = lean_ctor_get(x_154, 8);
lean_inc(x_185);
x_186 = lean_ctor_get(x_154, 9);
lean_inc(x_186);
x_187 = lean_ctor_get(x_154, 10);
lean_inc(x_187);
x_188 = lean_ctor_get(x_154, 11);
lean_inc(x_188);
x_189 = lean_ctor_get(x_154, 12);
lean_inc(x_189);
x_190 = lean_ctor_get(x_154, 13);
lean_inc(x_190);
x_191 = lean_ctor_get_uint8(x_154, sizeof(void*)*17);
x_192 = lean_ctor_get(x_154, 14);
lean_inc(x_192);
x_193 = lean_ctor_get(x_154, 15);
lean_inc(x_193);
x_194 = lean_ctor_get(x_154, 16);
lean_inc(x_194);
if (lean_is_exclusive(x_154)) {
 lean_ctor_release(x_154, 0);
 lean_ctor_release(x_154, 1);
 lean_ctor_release(x_154, 2);
 lean_ctor_release(x_154, 3);
 lean_ctor_release(x_154, 4);
 lean_ctor_release(x_154, 5);
 lean_ctor_release(x_154, 6);
 lean_ctor_release(x_154, 7);
 lean_ctor_release(x_154, 8);
 lean_ctor_release(x_154, 9);
 lean_ctor_release(x_154, 10);
 lean_ctor_release(x_154, 11);
 lean_ctor_release(x_154, 12);
 lean_ctor_release(x_154, 13);
 lean_ctor_release(x_154, 14);
 lean_ctor_release(x_154, 15);
 lean_ctor_release(x_154, 16);
 x_195 = x_154;
} else {
 lean_dec_ref(x_154);
 x_195 = lean_box(0);
}
x_196 = l_Lean_Meta_Grind_Arith_Cutsat_addOcc___closed__1;
x_197 = l_Lean_IR_instInhabitedIndexSet;
x_198 = l_Lean_PersistentArray_modify___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__4(x_2, x_196, x_197, x_188, x_1);
if (lean_is_scalar(x_195)) {
 x_199 = lean_alloc_ctor(0, 17, 1);
} else {
 x_199 = x_195;
}
lean_ctor_set(x_199, 0, x_177);
lean_ctor_set(x_199, 1, x_178);
lean_ctor_set(x_199, 2, x_179);
lean_ctor_set(x_199, 3, x_180);
lean_ctor_set(x_199, 4, x_181);
lean_ctor_set(x_199, 5, x_182);
lean_ctor_set(x_199, 6, x_183);
lean_ctor_set(x_199, 7, x_184);
lean_ctor_set(x_199, 8, x_185);
lean_ctor_set(x_199, 9, x_186);
lean_ctor_set(x_199, 10, x_187);
lean_ctor_set(x_199, 11, x_198);
lean_ctor_set(x_199, 12, x_189);
lean_ctor_set(x_199, 13, x_190);
lean_ctor_set(x_199, 14, x_192);
lean_ctor_set(x_199, 15, x_193);
lean_ctor_set(x_199, 16, x_194);
lean_ctor_set_uint8(x_199, sizeof(void*)*17, x_191);
if (lean_is_scalar(x_176)) {
 x_200 = lean_alloc_ctor(0, 4, 0);
} else {
 x_200 = x_176;
}
lean_ctor_set(x_200, 0, x_173);
lean_ctor_set(x_200, 1, x_199);
lean_ctor_set(x_200, 2, x_174);
lean_ctor_set(x_200, 3, x_175);
if (lean_is_scalar(x_172)) {
 x_201 = lean_alloc_ctor(0, 16, 1);
} else {
 x_201 = x_172;
}
lean_ctor_set(x_201, 0, x_156);
lean_ctor_set(x_201, 1, x_157);
lean_ctor_set(x_201, 2, x_158);
lean_ctor_set(x_201, 3, x_159);
lean_ctor_set(x_201, 4, x_160);
lean_ctor_set(x_201, 5, x_161);
lean_ctor_set(x_201, 6, x_162);
lean_ctor_set(x_201, 7, x_163);
lean_ctor_set(x_201, 8, x_165);
lean_ctor_set(x_201, 9, x_166);
lean_ctor_set(x_201, 10, x_167);
lean_ctor_set(x_201, 11, x_168);
lean_ctor_set(x_201, 12, x_169);
lean_ctor_set(x_201, 13, x_170);
lean_ctor_set(x_201, 14, x_200);
lean_ctor_set(x_201, 15, x_171);
lean_ctor_set_uint8(x_201, sizeof(void*)*16, x_164);
x_202 = lean_st_ref_set(x_3, x_201, x_155);
x_203 = lean_ctor_get(x_202, 1);
lean_inc(x_203);
if (lean_is_exclusive(x_202)) {
 lean_ctor_release(x_202, 0);
 lean_ctor_release(x_202, 1);
 x_204 = x_202;
} else {
 lean_dec_ref(x_202);
 x_204 = lean_box(0);
}
x_205 = lean_box(0);
if (lean_is_scalar(x_204)) {
 x_206 = lean_alloc_ctor(0, 2, 0);
} else {
 x_206 = x_204;
}
lean_ctor_set(x_206, 0, x_205);
lean_ctor_set(x_206, 1, x_203);
return x_206;
}
else
{
lean_object* x_207; lean_object* x_208; 
lean_dec(x_150);
lean_dec(x_2);
x_207 = lean_box(0);
x_208 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set(x_208, 1, x_149);
return x_208;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_findCore___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_RBNode_findCore___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_8 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_9 = l_Lean_PersistentArray_modifyAux___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__5(x_1, x_2, x_3, x_4, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PersistentArray_modify___at_Lean_Meta_Grind_Arith_Cutsat_addOcc___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Meta_Grind_Arith_Cutsat_addOcc___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_Grind_Arith_Cutsat_addOcc(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_updateOccs_go(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_1);
x_16 = l_Lean_Meta_Grind_Arith_Cutsat_addOcc(x_14, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_2 = x_15;
x_11 = x_17;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_updateOccs_go___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Int_Linear_Poly_updateOccs_go(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Int_Linear_Poly_updateOccs___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 5);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
static lean_object* _init_l_Int_Linear_Poly_updateOccs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("`grind` internal error, unexpected constant polynomial", 54, 54);
return x_1;
}
}
static lean_object* _init_l_Int_Linear_Poly_updateOccs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Int_Linear_Poly_updateOccs___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_updateOccs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = l_Int_Linear_Poly_updateOccs___closed__2;
x_12 = l_Lean_throwError___at_Int_Linear_Poly_updateOccs___spec__1(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 2);
lean_inc(x_14);
lean_dec(x_1);
x_15 = l_Int_Linear_Poly_updateOccs_go(x_13, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_14);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Int_Linear_Poly_updateOccs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Int_Linear_Poly_updateOccs___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_updateOccs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Int_Linear_Poly_updateOccs(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_eval_x3f_go(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
lean_dec(x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = l_Std_Internal_Rat_add(x_2, x_7);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = l_Std_Internal_Rat_add(x_2, x_11);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_3, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_3, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_3, 2);
lean_inc(x_16);
lean_dec(x_3);
x_17 = lean_ctor_get(x_1, 2);
lean_inc(x_17);
x_18 = lean_nat_dec_lt(x_15, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_19 = lean_box(0);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Std_Internal_instInhabitedRat;
lean_inc(x_1);
x_23 = l_Lean_PersistentArray_get_x21___rarg(x_22, x_1, x_15);
lean_dec(x_15);
x_24 = l_Std_Internal_Rat_mul(x_21, x_23);
lean_dec(x_23);
lean_dec(x_21);
x_25 = l_Std_Internal_Rat_add(x_2, x_24);
x_2 = x_25;
x_3 = x_16;
goto _start;
}
}
}
}
static lean_object* _init_l_Int_Linear_Poly_eval_x3f___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Int_Linear_Poly_isZero___closed__1;
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_eval_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_get_x27(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_13, 12);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Int_Linear_Poly_eval_x3f___closed__1;
x_16 = l_Int_Linear_Poly_eval_x3f_go(x_14, x_15, x_1);
lean_ctor_set(x_11, 0, x_16);
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_ctor_get(x_17, 12);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Int_Linear_Poly_eval_x3f___closed__1;
x_21 = l_Int_Linear_Poly_eval_x3f_go(x_19, x_20, x_1);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_eval_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Int_Linear_Poly_eval_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isUnsat(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = l_Int_Linear_Poly_isUnsatLe(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isUnsat___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isUnsat(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isUnsat(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Int_Linear_Poly_isUnsatDvd(x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isUnsat___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isUnsat(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_2, 0);
x_15 = l_Int_decidableDvd(x_13, x_14);
x_16 = l_Bool_toLBool(x_15);
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = l_Int_Linear_Poly_eval_x3f(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 0);
lean_dec(x_15);
x_16 = 2;
x_17 = lean_box(x_16);
lean_ctor_set(x_12, 0, x_17);
return x_12;
}
else
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = 2;
x_20 = lean_box(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_12);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_23 = lean_ctor_get(x_12, 1);
x_24 = lean_ctor_get(x_12, 0);
lean_dec(x_24);
x_25 = lean_ctor_get(x_13, 0);
lean_inc(x_25);
lean_dec(x_13);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_dec_eq(x_26, x_27);
lean_dec(x_26);
if (x_28 == 0)
{
uint8_t x_29; lean_object* x_30; 
lean_dec(x_25);
lean_dec(x_1);
x_29 = 0;
x_30 = lean_box(x_29);
lean_ctor_set(x_12, 0, x_30);
return x_12;
}
else
{
lean_object* x_31; lean_object* x_32; 
lean_free_object(x_12);
x_31 = lean_box(0);
x_32 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___lambda__1(x_1, x_25, x_31, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_23);
lean_dec(x_25);
lean_dec(x_1);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_33 = lean_ctor_get(x_12, 1);
lean_inc(x_33);
lean_dec(x_12);
x_34 = lean_ctor_get(x_13, 0);
lean_inc(x_34);
lean_dec(x_13);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_dec_eq(x_35, x_36);
lean_dec(x_35);
if (x_37 == 0)
{
uint8_t x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_34);
lean_dec(x_1);
x_38 = 0;
x_39 = lean_box(x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_33);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_box(0);
x_42 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___lambda__1(x_1, x_34, x_41, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_33);
lean_dec(x_34);
lean_dec(x_1);
return x_42;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_satisfiedLe(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Int_Linear_Poly_eval_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_11, 0);
lean_dec(x_14);
x_15 = 2;
x_16 = lean_box(x_15);
lean_ctor_set(x_11, 0, x_16);
return x_11;
}
else
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_dec(x_11);
x_18 = 2;
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_11);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; uint8_t x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_11, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_12, 0);
lean_inc(x_23);
lean_dec(x_12);
x_24 = l_Int_Linear_Poly_eval_x3f___closed__1;
x_25 = l_Std_Internal_Rat_instDecidableLe(x_23, x_24);
x_26 = l_Bool_toLBool(x_25);
x_27 = lean_box(x_26);
lean_ctor_set(x_11, 0, x_27);
return x_11;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_ctor_get(x_11, 1);
lean_inc(x_28);
lean_dec(x_11);
x_29 = lean_ctor_get(x_12, 0);
lean_inc(x_29);
lean_dec(x_12);
x_30 = l_Int_Linear_Poly_eval_x3f___closed__1;
x_31 = l_Std_Internal_Rat_instDecidableLe(x_29, x_30);
x_32 = l_Bool_toLBool(x_31);
x_33 = lean_box(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_28);
return x_34;
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_satisfiedLe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Int_Linear_Poly_satisfiedLe(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l_Int_Linear_Poly_satisfiedLe(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
static uint8_t _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___closed__1() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 1;
x_2 = l_Bool_toLBool(x_1);
return x_2;
}
}
static uint8_t _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___closed__2() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 0;
x_2 = l_Bool_toLBool(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l_Int_Linear_Poly_eval_x3f(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 0);
lean_dec(x_15);
x_16 = 2;
x_17 = lean_box(x_16);
lean_ctor_set(x_12, 0, x_17);
return x_12;
}
else
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = 2;
x_20 = lean_box(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_12);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = lean_ctor_get(x_12, 0);
lean_dec(x_23);
x_24 = lean_ctor_get(x_13, 0);
lean_inc(x_24);
lean_dec(x_13);
x_25 = l_Int_Linear_Poly_eval_x3f___closed__1;
x_26 = l_Std_Internal_beqRat____x40_Std_Internal_Rat___hyg_42_(x_24, x_25);
lean_dec(x_24);
if (x_26 == 0)
{
uint8_t x_27; lean_object* x_28; 
x_27 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___closed__1;
x_28 = lean_box(x_27);
lean_ctor_set(x_12, 0, x_28);
return x_12;
}
else
{
uint8_t x_29; lean_object* x_30; 
x_29 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___closed__2;
x_30 = lean_box(x_29);
lean_ctor_set(x_12, 0, x_30);
return x_12;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_12, 1);
lean_inc(x_31);
lean_dec(x_12);
x_32 = lean_ctor_get(x_13, 0);
lean_inc(x_32);
lean_dec(x_13);
x_33 = l_Int_Linear_Poly_eval_x3f___closed__1;
x_34 = l_Std_Internal_beqRat____x40_Std_Internal_Rat___hyg_42_(x_32, x_33);
lean_dec(x_32);
if (x_34 == 0)
{
uint8_t x_35; lean_object* x_36; lean_object* x_37; 
x_35 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___closed__1;
x_36 = lean_box(x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_31);
return x_37;
}
else
{
uint8_t x_38; lean_object* x_39; lean_object* x_40; 
x_38 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___closed__2;
x_39 = lean_box(x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_31);
return x_40;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_findVarToSubst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_1, 1);
x_15 = lean_ctor_get(x_1, 2);
x_16 = l_Lean_Meta_Grind_Arith_Cutsat_get_x27(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
x_20 = lean_box(0);
x_21 = lean_ctor_get(x_18, 9);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get(x_21, 2);
lean_inc(x_22);
x_23 = lean_nat_dec_lt(x_14, x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_21);
x_24 = l_outOfBounds___rarg(x_20);
if (lean_obj_tag(x_24) == 0)
{
lean_free_object(x_16);
x_1 = x_15;
x_10 = x_19;
goto _start;
}
else
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_24, 0);
lean_inc(x_14);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_14);
lean_ctor_set(x_28, 1, x_27);
lean_inc(x_13);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_13);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set(x_24, 0, x_29);
lean_ctor_set(x_16, 0, x_24);
return x_16;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_24, 0);
lean_inc(x_30);
lean_dec(x_24);
lean_inc(x_14);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_14);
lean_ctor_set(x_31, 1, x_30);
lean_inc(x_13);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_13);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_16, 0, x_33);
return x_16;
}
}
}
else
{
lean_object* x_34; 
x_34 = l_Lean_PersistentArray_get_x21___rarg(x_20, x_21, x_14);
if (lean_obj_tag(x_34) == 0)
{
lean_free_object(x_16);
x_1 = x_15;
x_10 = x_19;
goto _start;
}
else
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_34);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_34, 0);
lean_inc(x_14);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_14);
lean_ctor_set(x_38, 1, x_37);
lean_inc(x_13);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_13);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_34, 0, x_39);
lean_ctor_set(x_16, 0, x_34);
return x_16;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_34, 0);
lean_inc(x_40);
lean_dec(x_34);
lean_inc(x_14);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_14);
lean_ctor_set(x_41, 1, x_40);
lean_inc(x_13);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_13);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_16, 0, x_43);
return x_16;
}
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_44 = lean_ctor_get(x_16, 0);
x_45 = lean_ctor_get(x_16, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_16);
x_46 = lean_box(0);
x_47 = lean_ctor_get(x_44, 9);
lean_inc(x_47);
lean_dec(x_44);
x_48 = lean_ctor_get(x_47, 2);
lean_inc(x_48);
x_49 = lean_nat_dec_lt(x_14, x_48);
lean_dec(x_48);
if (x_49 == 0)
{
lean_object* x_50; 
lean_dec(x_47);
x_50 = l_outOfBounds___rarg(x_46);
if (lean_obj_tag(x_50) == 0)
{
x_1 = x_15;
x_10 = x_45;
goto _start;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_52 = lean_ctor_get(x_50, 0);
lean_inc(x_52);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 x_53 = x_50;
} else {
 lean_dec_ref(x_50);
 x_53 = lean_box(0);
}
lean_inc(x_14);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_14);
lean_ctor_set(x_54, 1, x_52);
lean_inc(x_13);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_13);
lean_ctor_set(x_55, 1, x_54);
if (lean_is_scalar(x_53)) {
 x_56 = lean_alloc_ctor(1, 1, 0);
} else {
 x_56 = x_53;
}
lean_ctor_set(x_56, 0, x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_45);
return x_57;
}
}
else
{
lean_object* x_58; 
x_58 = l_Lean_PersistentArray_get_x21___rarg(x_46, x_47, x_14);
if (lean_obj_tag(x_58) == 0)
{
x_1 = x_15;
x_10 = x_45;
goto _start;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_60 = lean_ctor_get(x_58, 0);
lean_inc(x_60);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 x_61 = x_58;
} else {
 lean_dec_ref(x_58);
 x_61 = lean_box(0);
}
lean_inc(x_14);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_14);
lean_ctor_set(x_62, 1, x_60);
lean_inc(x_13);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_13);
lean_ctor_set(x_63, 1, x_62);
if (lean_is_scalar(x_61)) {
 x_64 = lean_alloc_ctor(1, 1, 0);
} else {
 x_64 = x_61;
}
lean_ctor_set(x_64, 0, x_63);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_45);
return x_65;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_findVarToSubst___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Int_Linear_Poly_findVarToSubst(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_numCases(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_Int_Linear_Poly_leadCoeff(x_3);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_5, 0);
x_7 = l_Int_Linear_Poly_leadCoeff(x_6);
x_8 = lean_ctor_get(x_1, 2);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_4);
x_10 = lean_nat_abs(x_7);
lean_dec(x_7);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_7);
x_11 = lean_nat_abs(x_4);
lean_dec(x_4);
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_12, 1);
x_14 = l_Int_Linear_Poly_leadCoeff(x_13);
x_15 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_4);
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_int_mul(x_7, x_16);
x_18 = l_Int_gcd(x_17, x_14);
lean_dec(x_14);
x_19 = lean_nat_to_int(x_18);
x_20 = lean_int_ediv(x_17, x_19);
lean_dec(x_19);
lean_dec(x_17);
x_21 = l_Int_lcm(x_7, x_20);
lean_dec(x_20);
lean_dec(x_7);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_7);
x_22 = lean_ctor_get(x_12, 0);
x_23 = lean_int_mul(x_4, x_22);
x_24 = l_Int_gcd(x_23, x_14);
lean_dec(x_14);
x_25 = lean_nat_to_int(x_24);
x_26 = lean_int_ediv(x_23, x_25);
lean_dec(x_25);
lean_dec(x_23);
x_27 = l_Int_lcm(x_4, x_26);
lean_dec(x_26);
lean_dec(x_4);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_numCases___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_numCases(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("none", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__2;
x_2 = l_Lean_MessageData_ofFormat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(", ", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
x_17 = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
x_18 = lean_ctor_get(x_1, 2);
lean_inc(x_18);
lean_dec(x_1);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_17, 0);
x_21 = l_Int_Linear_Poly_pp_go___closed__2;
lean_ctor_set_tag(x_12, 7);
lean_ctor_set(x_12, 1, x_14);
lean_ctor_set(x_12, 0, x_21);
x_22 = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__5;
x_23 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_23, 0, x_12);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_20);
x_25 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
x_26 = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__3;
x_27 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_21);
lean_ctor_set(x_17, 0, x_28);
return x_17;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_29 = lean_ctor_get(x_17, 0);
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_17);
x_31 = l_Int_Linear_Poly_pp_go___closed__2;
lean_ctor_set_tag(x_12, 7);
lean_ctor_set(x_12, 1, x_14);
lean_ctor_set(x_12, 0, x_31);
x_32 = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__5;
x_33 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_33, 0, x_12);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_29);
x_35 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
x_36 = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__3;
x_37 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_31);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_30);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_40 = lean_ctor_get(x_17, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_17, 1);
lean_inc(x_41);
lean_dec(x_17);
x_42 = lean_ctor_get(x_18, 0);
lean_inc(x_42);
lean_dec(x_18);
x_43 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp(x_42, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_41);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = l_Int_Linear_Poly_pp_go___closed__2;
lean_ctor_set_tag(x_12, 7);
lean_ctor_set(x_12, 1, x_14);
lean_ctor_set(x_12, 0, x_46);
x_47 = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__5;
x_48 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_48, 0, x_12);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_40);
x_50 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_47);
x_51 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_45);
x_52 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_46);
lean_ctor_set(x_43, 0, x_52);
return x_43;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_53 = lean_ctor_get(x_43, 0);
x_54 = lean_ctor_get(x_43, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_43);
x_55 = l_Int_Linear_Poly_pp_go___closed__2;
lean_ctor_set_tag(x_12, 7);
lean_ctor_set(x_12, 1, x_14);
lean_ctor_set(x_12, 0, x_55);
x_56 = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__5;
x_57 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_57, 0, x_12);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_40);
x_59 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_56);
x_60 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_53);
x_61 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_55);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_54);
return x_62;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_63 = lean_ctor_get(x_12, 0);
x_64 = lean_ctor_get(x_12, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_12);
x_65 = lean_ctor_get(x_1, 1);
lean_inc(x_65);
x_66 = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp(x_65, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_64);
x_67 = lean_ctor_get(x_1, 2);
lean_inc(x_67);
lean_dec(x_1);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_68 = lean_ctor_get(x_66, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_66, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_70 = x_66;
} else {
 lean_dec_ref(x_66);
 x_70 = lean_box(0);
}
x_71 = l_Int_Linear_Poly_pp_go___closed__2;
x_72 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_63);
x_73 = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__5;
x_74 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_68);
x_76 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_73);
x_77 = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__3;
x_78 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
x_79 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_71);
if (lean_is_scalar(x_70)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_70;
}
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_69);
return x_80;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_81 = lean_ctor_get(x_66, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_66, 1);
lean_inc(x_82);
lean_dec(x_66);
x_83 = lean_ctor_get(x_67, 0);
lean_inc(x_83);
lean_dec(x_67);
x_84 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp(x_83, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_82);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_87 = x_84;
} else {
 lean_dec_ref(x_84);
 x_87 = lean_box(0);
}
x_88 = l_Int_Linear_Poly_pp_go___closed__2;
x_89 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_63);
x_90 = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__5;
x_91 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
x_92 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_81);
x_93 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_90);
x_94 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_85);
x_95 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_88);
if (lean_is_scalar(x_87)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_87;
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_86);
return x_96;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
case 1:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
case 2:
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_16;
}
case 3:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
x_18 = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_18;
}
default: 
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 2);
lean_inc(x_21);
lean_dec(x_1);
x_22 = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp(x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
x_26 = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp(x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_25);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_26, 0);
x_29 = lean_ctor_get(x_26, 1);
x_30 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp(x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_29);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = l_Int_Linear_Poly_pp_go___closed__2;
lean_ctor_set_tag(x_26, 7);
lean_ctor_set(x_26, 1, x_24);
lean_ctor_set(x_26, 0, x_33);
x_34 = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__5;
lean_ctor_set_tag(x_22, 7);
lean_ctor_set(x_22, 1, x_34);
lean_ctor_set(x_22, 0, x_26);
x_35 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_35, 0, x_22);
lean_ctor_set(x_35, 1, x_28);
x_36 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_32);
x_38 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_33);
lean_ctor_set(x_30, 0, x_38);
return x_30;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_39 = lean_ctor_get(x_30, 0);
x_40 = lean_ctor_get(x_30, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_30);
x_41 = l_Int_Linear_Poly_pp_go___closed__2;
lean_ctor_set_tag(x_26, 7);
lean_ctor_set(x_26, 1, x_24);
lean_ctor_set(x_26, 0, x_41);
x_42 = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__5;
lean_ctor_set_tag(x_22, 7);
lean_ctor_set(x_22, 1, x_42);
lean_ctor_set(x_22, 0, x_26);
x_43 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_43, 0, x_22);
lean_ctor_set(x_43, 1, x_28);
x_44 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_39);
x_46 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_41);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_40);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp(x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_49);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_53 = x_50;
} else {
 lean_dec_ref(x_50);
 x_53 = lean_box(0);
}
x_54 = l_Int_Linear_Poly_pp_go___closed__2;
x_55 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_24);
x_56 = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__5;
lean_ctor_set_tag(x_22, 7);
lean_ctor_set(x_22, 1, x_56);
lean_ctor_set(x_22, 0, x_55);
x_57 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_57, 0, x_22);
lean_ctor_set(x_57, 1, x_48);
x_58 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
x_59 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_51);
x_60 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_54);
if (lean_is_scalar(x_53)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_53;
}
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_52);
return x_61;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_62 = lean_ctor_get(x_22, 0);
x_63 = lean_ctor_get(x_22, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_22);
x_64 = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp(x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_63);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_67 = x_64;
} else {
 lean_dec_ref(x_64);
 x_67 = lean_box(0);
}
x_68 = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp(x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_66);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_71 = x_68;
} else {
 lean_dec_ref(x_68);
 x_71 = lean_box(0);
}
x_72 = l_Int_Linear_Poly_pp_go___closed__2;
if (lean_is_scalar(x_67)) {
 x_73 = lean_alloc_ctor(7, 2, 0);
} else {
 x_73 = x_67;
 lean_ctor_set_tag(x_73, 7);
}
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_62);
x_74 = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__5;
x_75 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_65);
x_77 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_74);
x_78 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_69);
x_79 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_72);
if (lean_is_scalar(x_71)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_71;
}
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_70);
return x_80;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Int_Linear_Poly_isZero___closed__1 = _init_l_Int_Linear_Poly_isZero___closed__1();
lean_mark_persistent(l_Int_Linear_Poly_isZero___closed__1);
l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___closed__1 = _init_l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___closed__1);
l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__2___closed__1 = _init_l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__2___closed__1();
l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__2___closed__2 = _init_l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_Arith_Cutsat_hasVar___spec__2___closed__2();
l_Int_Linear_Poly_pp_go___closed__1 = _init_l_Int_Linear_Poly_pp_go___closed__1();
lean_mark_persistent(l_Int_Linear_Poly_pp_go___closed__1);
l_Int_Linear_Poly_pp_go___closed__2 = _init_l_Int_Linear_Poly_pp_go___closed__2();
lean_mark_persistent(l_Int_Linear_Poly_pp_go___closed__2);
l_Int_Linear_Poly_pp_go___closed__3 = _init_l_Int_Linear_Poly_pp_go___closed__3();
lean_mark_persistent(l_Int_Linear_Poly_pp_go___closed__3);
l_Int_Linear_Poly_pp_go___closed__4 = _init_l_Int_Linear_Poly_pp_go___closed__4();
lean_mark_persistent(l_Int_Linear_Poly_pp_go___closed__4);
l_Int_Linear_Poly_pp_go___closed__5 = _init_l_Int_Linear_Poly_pp_go___closed__5();
lean_mark_persistent(l_Int_Linear_Poly_pp_go___closed__5);
l_Int_Linear_Poly_pp_go___closed__6 = _init_l_Int_Linear_Poly_pp_go___closed__6();
lean_mark_persistent(l_Int_Linear_Poly_pp_go___closed__6);
l_Int_Linear_Poly_pp_go___closed__7 = _init_l_Int_Linear_Poly_pp_go___closed__7();
lean_mark_persistent(l_Int_Linear_Poly_pp_go___closed__7);
l_Int_Linear_Poly_pp_go___closed__8 = _init_l_Int_Linear_Poly_pp_go___closed__8();
lean_mark_persistent(l_Int_Linear_Poly_pp_go___closed__8);
l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___closed__1 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___closed__1);
l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___closed__2 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___closed__2();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___closed__2);
l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__1 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__1);
l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__2 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__2();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__2);
l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__3 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__3();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__3);
l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__4 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__4();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__4);
l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__5 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__5();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__5);
l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__6 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__6();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__6);
l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__7 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__7();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__7);
l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__8 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__8();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__8);
l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__9 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__9();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__9);
l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__10 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__10();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__10);
l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__11 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__11();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__11);
l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__12 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__12();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___closed__12);
l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__1 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__1);
l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__2 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__2);
l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__3 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__3();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__3);
l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__4 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__4();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___rarg___closed__4);
l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___closed__1 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___closed__1);
l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___closed__2 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___closed__2();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___closed__2);
l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___closed__1 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___closed__1);
l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___closed__1 = _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___closed__1);
l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___closed__2 = _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___closed__2();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___closed__2);
l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___closed__1 = _init_l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___closed__1);
l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___closed__2 = _init_l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___closed__2();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___closed__2);
l_Lean_Meta_Grind_Arith_Cutsat_addOcc___closed__1 = _init_l_Lean_Meta_Grind_Arith_Cutsat_addOcc___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_addOcc___closed__1);
l_Int_Linear_Poly_updateOccs___closed__1 = _init_l_Int_Linear_Poly_updateOccs___closed__1();
lean_mark_persistent(l_Int_Linear_Poly_updateOccs___closed__1);
l_Int_Linear_Poly_updateOccs___closed__2 = _init_l_Int_Linear_Poly_updateOccs___closed__2();
lean_mark_persistent(l_Int_Linear_Poly_updateOccs___closed__2);
l_Int_Linear_Poly_eval_x3f___closed__1 = _init_l_Int_Linear_Poly_eval_x3f___closed__1();
lean_mark_persistent(l_Int_Linear_Poly_eval_x3f___closed__1);
l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___closed__1 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___closed__1();
l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___closed__2 = _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___closed__2();
l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__1 = _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__1);
l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__2 = _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__2();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__2);
l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__3 = _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__3();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__3);
l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__4 = _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__4();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__4);
l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__5 = _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__5();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___closed__5);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
