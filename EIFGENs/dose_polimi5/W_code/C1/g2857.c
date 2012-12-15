/*
 * Code for class G21_AI
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F857_6751(EIF_REFERENCE);
extern EIF_TYPED_VALUE F857_6752(EIF_REFERENCE);
extern EIF_TYPED_VALUE F857_6754(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F857_7127(EIF_REFERENCE, int);
extern void EIF_Minit857(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {G21_AI}.board */
EIF_TYPED_VALUE F857_6751 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(856,32, Dtype(Current)));
	return r;
}


/* {G21_AI}.cards */
EIF_TYPED_VALUE F857_6752 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(856,33, Dtype(Current)));
	return r;
}


/* {G21_AI}.equals_card */
EIF_TYPED_VALUE F857_6754 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "equals_card";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {0, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 856, Current, 0, 2, 11956);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(856, Current, 11956);
	if (arg1) {
		RTCC(arg1, 856, l_feature_name, 1, 838);
	}
	if (arg2) {
		RTCC(arg2, 856, l_feature_name, 2, 838);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("first_card_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("second_card_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = arg1;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr3 = arg2;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tb5 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(838, 32, "right", arg1));
	ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(838, 32, "right", arg2));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(838, 33, "left", arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(838, 33, "left", arg2));
		tb5 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	if (tb5) {
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(838, 34, "top", arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(838, 34, "top", arg2));
		tb4 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	if (tb4) {
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(838, 35, "bottom", arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(838, 35, "bottom", arg2));
		tb3 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	if (tb3) {
		tc1 = *(EIF_CHARACTER_8 *)(arg1 + RTVA(838, 36, "element", arg1));
		tc2 = *(EIF_CHARACTER_8 *)(arg2 + RTVA(838, 36, "element", arg2));
		tb2 = (EIF_BOOLEAN)(tc1 == tc2);
	}
	if (tb2) {
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(838, 37, "cardname", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(838, 37, "cardname", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb1 = RTCEQ(tr5, tr6);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("first_card_not_changed", EX_POST);
		RTCO(tr2);
		if (RTCEQ(arg1, tr1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("second_card_not_changed", EX_POST);
		RTCO(tr4);
		if (RTCEQ(arg2, tr3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("true_result", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) 1)) {
			tb2 = '\0';
			tb3 = '\0';
			tb4 = '\0';
			tb5 = '\0';
			tb6 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(838, 32, "right", arg1));
			ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(838, 32, "right", arg2));
			if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(838, 33, "left", arg1));
				ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(838, 33, "left", arg2));
				tb6 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
			}
			if (tb6) {
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(838, 34, "top", arg1));
				ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(838, 34, "top", arg2));
				tb5 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
			}
			if (tb5) {
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(838, 35, "bottom", arg1));
				ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(838, 35, "bottom", arg2));
				tb4 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
			}
			if (tb4) {
				tc1 = *(EIF_CHARACTER_8 *)(arg1 + RTVA(838, 36, "element", arg1));
				tc2 = *(EIF_CHARACTER_8 *)(arg2 + RTVA(838, 36, "element", arg2));
				tb3 = (EIF_BOOLEAN)(tc1 == tc2);
			}
			if (tb3) {
				tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(838, 37, "cardname", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(838, 37, "cardname", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tb2 = RTCEQ(tr5, tr6);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("false_result", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) 0)) {
			tb2 = '\01';
			tb3 = '\01';
			tb4 = '\01';
			tb5 = '\01';
			tb6 = '\01';
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(838, 32, "right", arg1));
			ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(838, 32, "right", arg2));
			if (!(EIF_BOOLEAN)(ti4_1 != ti4_2)) {
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(838, 33, "left", arg1));
				ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(838, 33, "left", arg2));
				tb6 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
			}
			if (!tb6) {
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(838, 34, "top", arg1));
				ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(838, 34, "top", arg2));
				tb5 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
			}
			if (!tb5) {
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(838, 35, "bottom", arg1));
				ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(838, 35, "bottom", arg2));
				tb4 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
			}
			if (!tb4) {
				tc1 = *(EIF_CHARACTER_8 *)(arg1 + RTVA(838, 36, "element", arg1));
				tc2 = *(EIF_CHARACTER_8 *)(arg2 + RTVA(838, 36, "element", arg2));
				tb3 = (EIF_BOOLEAN)(tc1 != tc2);
			}
			if (!tb3) {
				tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(838, 37, "cardname", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(838, 37, "cardname", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tb2 = !RTCEQ(tr5, tr6);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef arg2
#undef arg1
}

/* {G21_AI}._invariant */
void F857_7127 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {0, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 856, Current, 0, 7126);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("board_valid", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(856, 32, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("cards_valid", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(856, 33, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
}

void EIF_Minit857 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
