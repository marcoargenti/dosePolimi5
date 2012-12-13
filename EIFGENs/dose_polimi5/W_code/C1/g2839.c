/*
 * Code for class G21_CARD
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F839_6564(EIF_REFERENCE);
extern EIF_TYPED_VALUE F839_6565(EIF_REFERENCE);
extern EIF_TYPED_VALUE F839_6566(EIF_REFERENCE);
extern EIF_TYPED_VALUE F839_6567(EIF_REFERENCE);
extern EIF_TYPED_VALUE F839_6568(EIF_REFERENCE);
extern EIF_TYPED_VALUE F839_6569(EIF_REFERENCE);
extern void F839_6570(EIF_REFERENCE);
extern void F839_6571(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F839_6572(EIF_REFERENCE);
extern void F839_6573(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F839_6574(EIF_REFERENCE);
extern void F839_6575(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F839_6576(EIF_REFERENCE);
extern void F839_6577(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F839_6578(EIF_REFERENCE);
extern void F839_6579(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F839_6580(EIF_REFERENCE);
extern void F839_6581(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F839_6582(EIF_REFERENCE);
extern void EIF_Minit839(void);

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

/* {G21_CARD}.right */
EIF_TYPED_VALUE F839_6564 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(838,32, Dtype(Current)));
	return r;
}


/* {G21_CARD}.left */
EIF_TYPED_VALUE F839_6565 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(838,33, Dtype(Current)));
	return r;
}


/* {G21_CARD}.top */
EIF_TYPED_VALUE F839_6566 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(838,34, Dtype(Current)));
	return r;
}


/* {G21_CARD}.bottom */
EIF_TYPED_VALUE F839_6567 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(838,35, Dtype(Current)));
	return r;
}


/* {G21_CARD}.element */
EIF_TYPED_VALUE F839_6568 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(838,36, Dtype(Current)));
	return r;
}


/* {G21_CARD}.cardname */
EIF_TYPED_VALUE F839_6569 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(838,37, Dtype(Current)));
	return r;
}


/* {G21_CARD}.make */
void F839_6570 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 838, Current, 0, 0, 11819);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(838, Current, 11819);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {G21_CARD}.setelement */
void F839_6571 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "setelement";
	RTEX;
#define arg1 arg1x.it_c1
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 838, Current, 0, 1, 11820);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(838, Current, 11820);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 838, 36, 0x08000000, 1); /* element */
	
	*(EIF_CHARACTER_8 *)(Current + RTWA(838, 36, Dtype(Current))) = (EIF_CHARACTER_8) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {G21_CARD}.getelement */
EIF_TYPED_VALUE F839_6572 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "getelement";
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 838, Current, 0, 0, 11802);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(838, Current, 11802);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x08000000, 1,0); /* Result */
	
	Result = *(EIF_CHARACTER_8 *)(Current + RTWA(838, 36, Dtype(Current)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {G21_CARD}.setright */
void F839_6573 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "setright";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 838, Current, 0, 1, 11803);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(838, Current, 11803);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 10L)))) {
		RTHOOK(2);
		RTDBGAA(Current, Dtype(Current), 838, 32, 0x10000000, 1); /* right */
		
		*(EIF_INTEGER_32 *)(Current + RTWA(838, 32, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {G21_CARD}.getright */
EIF_TYPED_VALUE F839_6574 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "getright";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 838, Current, 0, 0, 11804);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(838, Current, 11804);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(838, 32, Dtype(Current)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {G21_CARD}.setleft */
void F839_6575 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "setleft";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 838, Current, 0, 1, 11805);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(838, Current, 11805);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 10L)))) {
		RTHOOK(2);
		RTDBGAA(Current, Dtype(Current), 838, 33, 0x10000000, 1); /* left */
		
		*(EIF_INTEGER_32 *)(Current + RTWA(838, 33, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {G21_CARD}.getleft */
EIF_TYPED_VALUE F839_6576 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "getleft";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 838, Current, 0, 0, 11806);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(838, Current, 11806);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(838, 33, Dtype(Current)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {G21_CARD}.settop */
void F839_6577 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "settop";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 838, Current, 0, 1, 11807);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(838, Current, 11807);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 10L)))) {
		RTHOOK(2);
		RTDBGAA(Current, Dtype(Current), 838, 34, 0x10000000, 1); /* top */
		
		*(EIF_INTEGER_32 *)(Current + RTWA(838, 34, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {G21_CARD}.gettop */
EIF_TYPED_VALUE F839_6578 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "gettop";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 838, Current, 0, 0, 11808);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(838, Current, 11808);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(838, 34, Dtype(Current)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {G21_CARD}.setbottom */
void F839_6579 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "setbottom";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 838, Current, 0, 1, 11809);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(838, Current, 11809);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 10L)))) {
		RTHOOK(2);
		RTDBGAA(Current, Dtype(Current), 838, 35, 0x10000000, 1); /* bottom */
		
		*(EIF_INTEGER_32 *)(Current + RTWA(838, 35, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {G21_CARD}.getbottom */
EIF_TYPED_VALUE F839_6580 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "getbottom";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 838, Current, 0, 0, 11810);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(838, Current, 11810);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(838, 35, Dtype(Current)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {G21_CARD}.setcardname */
void F839_6581 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "setcardname";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 838, Current, 0, 1, 11811);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(838, Current, 11811);
	if (arg1) {
		RTCC(arg1, 838, l_feature_name, 1, 201);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		RTDBGAA(Current, Dtype(Current), 838, 37, 0xF80000C9, 0); /* cardname */
		
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current + RTWA(838, 37, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {G21_CARD}.getcardname */
EIF_TYPED_VALUE F839_6582 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "getcardname";
	RTEX;
	EIF_TYPED_VALUE up1x = {0, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 838, Current, 0, 0, 11812);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(838, Current, 11812);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000C9, 0,0); /* Result */
	
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(838, 37, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

void EIF_Minit839 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
