/*
 * Class G21_MOVE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_845 [] = {0,218,844,0xFFFF};
static EIF_TYPE_INDEX gen_type1_845 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_845 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_845 [] = {0,0,0xFFFF};


static struct desc_info desc_845[] = {
	{(BODY_INDEX) 11834, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 201, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_845},
	{2, (BODY_INDEX)-1, 172, NULL},
	{3, (BODY_INDEX)-1, 172, NULL},
	{4, (BODY_INDEX)-1, 172, NULL},
	{5, (BODY_INDEX)-1, 172, NULL},
	{6, (BODY_INDEX)-1, 172, NULL},
	{7, (BODY_INDEX)-1, 172, NULL},
	{8, (BODY_INDEX)-1, 172, NULL},
	{9, (BODY_INDEX)-1, 172, NULL},
	{10, (BODY_INDEX)-1, 844, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_845},
	{14, (BODY_INDEX)-1, 0, gen_type2_845},
	{15, (BODY_INDEX)-1, 844, NULL},
	{16, (BODY_INDEX)-1, 844, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_845},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 12, NULL},
	{21, (BODY_INDEX)-1, 201, NULL},
	{22, (BODY_INDEX)-1, 201, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 13, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 844, NULL},
	{29, (BODY_INDEX)-1, 196, NULL},
	{30, (BODY_INDEX)-1, 844, NULL},
	{11829, 0, 839, NULL},
	{11830, 8, 838, NULL},
	{11831, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{11832, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{11833, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init845(void);
void Init845(void)
{
	IDSC(desc_845, 0, 844);
	IDSC(desc_845 + 1, 1, 844);
	IDSC(desc_845 + 32, 333, 844);
}


#ifdef __cplusplus
}
#endif
