/*
 * Code for class G21_VALUATED_MOVE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F846_6615(EIF_REFERENCE);
extern void F846_6616(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F846_6617(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit846(void);

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

/* {G21_VALUATED_MOVE}.value */
EIF_TYPED_VALUE F846_6615 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(845,37, Dtype(Current)));
	return r;
}


/* {G21_VALUATED_MOVE}.make_with_value */
void F846_6616 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_with_value";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {0, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {0, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {0, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {0, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,ur1);
	RTLR(9,Current);
	RTLR(10,tr7);
	RTLR(11,tr8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 845, Current, 0, 3, 11836);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(845, Current, 11836);
	if (arg1) {
		RTCC(arg1, 845, l_feature_name, 1, 839);
	}
	if (arg2) {
		RTCC(arg2, 845, l_feature_name, 2, 838);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("new_card_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("new_position_valid", EX_PRE);
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
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(838, 32, "x", arg2));
		ti4_1 = ti4_2;
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(arg2 + RTVA(838, 33, "y", arg2));
		ti4_2 = ti4_3;
		tr6 = NULL;
		RTE_O
		tr6 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(845, 35, dtype))(Current, ur1x);
	RTHOOK(4);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(845, 36, dtype))(Current, ur1x);
	RTHOOK(5);
	ui4_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(845, 39, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("card_set", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		tb5 = '\0';
		tb6 = '\0';
		tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(845, 32, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr7 != NULL)) {
			tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(845, 32, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			ti4_3 = *(EIF_INTEGER_32 *)(tr7 + RTVA(839, 35, "bottom", tr7));
			ti4_4 = *(EIF_INTEGER_32 *)(arg1 + RTVA(839, 35, "bottom", arg1));
			tb6 = (EIF_BOOLEAN)(ti4_3 == ti4_4);
		}
		if (tb6) {
			tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(845, 32, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,2);
			ti4_3 = *(EIF_INTEGER_32 *)(tr7 + RTVA(839, 34, "top", tr7));
			ti4_4 = *(EIF_INTEGER_32 *)(arg1 + RTVA(839, 34, "top", arg1));
			tb5 = (EIF_BOOLEAN)(ti4_3 == ti4_4);
		}
		if (tb5) {
			tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(845, 32, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,3);
			ti4_3 = *(EIF_INTEGER_32 *)(tr7 + RTVA(839, 33, "left", tr7));
			ti4_4 = *(EIF_INTEGER_32 *)(arg1 + RTVA(839, 33, "left", arg1));
			tb4 = (EIF_BOOLEAN)(ti4_3 == ti4_4);
		}
		if (tb4) {
			tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(845, 32, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,4);
			ti4_3 = *(EIF_INTEGER_32 *)(tr7 + RTVA(839, 32, "right", tr7));
			ti4_4 = *(EIF_INTEGER_32 *)(arg1 + RTVA(839, 32, "right", arg1));
			tb3 = (EIF_BOOLEAN)(ti4_3 == ti4_4);
		}
		if (tb3) {
			tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(845, 32, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,5);
			tr8 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(839, 37, "cardname", tr7))(tr7)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(839, 37, "cardname", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb2 = RTCEQ(tr8, tr7);
		}
		if (tb2) {
			tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(845, 32, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,6);
			tc1 = *(EIF_CHARACTER_8 *)(tr7 + RTVA(839, 36, "element", tr7));
			tc2 = *(EIF_CHARACTER_8 *)(arg1 + RTVA(839, 36, "element", arg1));
			tb1 = (EIF_BOOLEAN)(tc1 == tc2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("card_not_changed", EX_POST);
		RTCO(tr2);
		if (RTCEQ(arg1, tr1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("position_set", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(845, 33, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr7 != NULL)) {
			tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(845, 33, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			ti4_3 = *(EIF_INTEGER_32 *)(tr7 + RTVA(838, 32, "x", tr7));
			ti4_4 = *(EIF_INTEGER_32 *)(arg2 + RTVA(838, 32, "x", arg2));
			tb2 = (EIF_BOOLEAN)(ti4_3 == ti4_4);
		}
		if (tb2) {
			tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(845, 33, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,2);
			ti4_3 = *(EIF_INTEGER_32 *)(tr7 + RTVA(838, 33, "y", tr7));
			ti4_4 = *(EIF_INTEGER_32 *)(arg2 + RTVA(838, 33, "y", arg2));
			tb1 = (EIF_BOOLEAN)(ti4_3 == ti4_4);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("new_position_not_changed", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		RTCO(tr4);
		if (RTCEQ(arg2, tr3)) {
			ti4_3 = *(EIF_INTEGER_32 *)(arg2 + RTVA(838, 32, "x", arg2));
			RTCO(tr5);
			tb2 = (EIF_BOOLEAN)(ti4_3 == ti4_1);
		}
		if (tb2) {
			ti4_3 = *(EIF_INTEGER_32 *)(arg2 + RTVA(838, 33, "y", arg2));
			RTCO(tr6);
			tb1 = (EIF_BOOLEAN)(ti4_3 == ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("value_set", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(845, 37, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {G21_VALUATED_MOVE}.set_value */
void F846_6617 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_value";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 845, Current, 0, 1, 11837);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(845, Current, 11837);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 845, 37, 0x10000000, 1); /* value */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(845, 37, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("value_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(845, 37, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void EIF_Minit846 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
