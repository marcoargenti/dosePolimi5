/*
 * Code for class G21_POINT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F840_6582(EIF_REFERENCE);
extern EIF_TYPED_VALUE F840_6583(EIF_REFERENCE);
extern void F840_6584(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F840_6585(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F840_6586(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F840_6587(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F840_6588(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F840_7123(EIF_REFERENCE, int);
extern void EIF_Minit840(void);

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

/* {G21_POINT}.x */
EIF_TYPED_VALUE F840_6582 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(839,32, Dtype(Current)));
	return r;
}


/* {G21_POINT}.y */
EIF_TYPED_VALUE F840_6583 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(839,33, Dtype(Current)));
	return r;
}


/* {G21_POINT}.make */
void F840_6584 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {0, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 839, Current, 0, 2, 11814);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(839, Current, 11814);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("x_value_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 3L))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("y_value_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg2 <= ((EIF_INTEGER_32) 3L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(839, 35, dtype))(Current, ui4_1x);
	RTHOOK(4);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(839, 36, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("x_value_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 32, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("y_value_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 33, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ui4_1
#undef arg2
#undef arg1
}

/* {G21_POINT}.set_x */
void F840_6585 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_x";
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
	
	RTEAA(l_feature_name, 839, Current, 0, 1, 11815);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(839, Current, 11815);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("new_x_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 3L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 839, 32, 0x10000000, 1); /* x */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(839, 32, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("x_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 32, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {G21_POINT}.set_y */
void F840_6586 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_y";
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
	
	RTEAA(l_feature_name, 839, Current, 0, 1, 11816);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(839, Current, 11816);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("new_y_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 3L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 839, 33, 0x10000000, 1); /* y */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(839, 33, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("y_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 33, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {G21_POINT}.equals_position */
EIF_TYPED_VALUE F840_6587 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "equals_position";
	RTEX;
#define arg1 arg1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 839, Current, 0, 1, 11817);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(839, Current, 11817);
	if (arg1) {
		RTCC(arg1, 839, l_feature_name, 1, 839);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("position_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(839, 32, "x", arg1));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(839, 33, "y", arg1));
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 32, dtype));
		ti4_3 = ti4_4;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 33, dtype));
		ti4_4 = ti4_5;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\0';
	ti4_5 = *(EIF_INTEGER_32 *)(arg1 + RTVA(839, 32, "x", arg1));
	ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 32, dtype));
	if ((EIF_BOOLEAN)(ti4_5 == ti4_6)) {
		ti4_5 = *(EIF_INTEGER_32 *)(arg1 + RTVA(839, 33, "y", arg1));
		ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 33, dtype));
		tb1 = (EIF_BOOLEAN)(ti4_5 == ti4_6);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("position_not_changed", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			ti4_5 = *(EIF_INTEGER_32 *)(arg1 + RTVA(839, 32, "x", arg1));
			RTCO(tr1);
			tb2 = (EIF_BOOLEAN)(ti4_5 == ti4_1);
		}
		if (tb2) {
			ti4_5 = *(EIF_INTEGER_32 *)(arg1 + RTVA(839, 33, "y", arg1));
			RTCO(tr2);
			tb1 = (EIF_BOOLEAN)(ti4_5 == ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("my_values_not_changed", EX_POST);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 32, dtype));
		RTCO(tr3);
		ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 33, dtype));
		RTCO(tr4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_5 == ti4_3) && (EIF_BOOLEAN)(ti4_6 == ti4_4))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {G21_POINT}.around_the_point */
EIF_TYPED_VALUE F840_6588 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "around_the_point";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {0, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,ur1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 839, Current, 0, 1, 11818);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(839, Current, 11818);
	if (arg1) {
		RTCC(arg1, 839, l_feature_name, 1, 839);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("position_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
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
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 32, dtype));
		ti4_1 = ti4_2;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 33, dtype));
		ti4_2 = ti4_3;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tb4 = '\0';
	ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(839, 32, "x", arg1));
	ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 32, dtype));
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)) == ti4_4)) {
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(839, 33, "y", arg1));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 33, dtype));
		tb4 = (EIF_BOOLEAN)(ti4_3 == ti4_4);
	}
	if (!(tb4)) {
		tb4 = '\0';
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(839, 32, "x", arg1));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 32, dtype));
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)) == ti4_4)) {
			ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(839, 33, "y", arg1));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 33, dtype));
			tb4 = (EIF_BOOLEAN)(ti4_3 == ti4_4);
		}
		tb3 = tb4;
	}
	if (!tb3) {
		tb3 = '\0';
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(839, 32, "x", arg1));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 32, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_4)) {
			ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(839, 33, "y", arg1));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 33, dtype));
			tb3 = (EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)) == ti4_4);
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(839, 32, "x", arg1));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 32, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_4)) {
			ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(839, 33, "y", arg1));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 33, dtype));
			tb2 = (EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)) == ti4_4);
		}
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("position_not_changed", EX_POST);
		RTCO(tr2);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(839, 37, "equals_position", arg1))(arg1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("my_values_not_changed", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 32, dtype));
		RTCO(tr3);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 33, dtype));
		RTCO(tr4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_3 == ti4_1) && (EIF_BOOLEAN)(ti4_4 == ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {G21_POINT}._invariant */
void F840_7123 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 839, Current, 0, 7122);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("point_valid", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 32, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 32, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 33, dtype));
	ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(839, 33, dtype));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (ti4_2 <= ((EIF_INTEGER_32) 3L))) && (EIF_BOOLEAN) (ti4_3 >= ((EIF_INTEGER_32) 1L))) && (EIF_BOOLEAN) (ti4_4 <= ((EIF_INTEGER_32) 3L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit840 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
