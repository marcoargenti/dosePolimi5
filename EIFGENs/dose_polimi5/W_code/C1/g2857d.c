/*
 * Class G21_AI
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_857 [] = {0,218,856,0xFFFF};
static EIF_TYPE_INDEX gen_type1_857 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_857 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_857 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_857 [] = {0,876,837,0xFFFF};
static EIF_TYPE_INDEX gen_type5_857 [] = {0,240,838,0xFFFF};


static struct desc_info desc_857[] = {
	{(BODY_INDEX) 11957, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 201, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_857},
	{2, (BODY_INDEX)-1, 172, NULL},
	{3, (BODY_INDEX)-1, 172, NULL},
	{4, (BODY_INDEX)-1, 172, NULL},
	{5, (BODY_INDEX)-1, 172, NULL},
	{6, (BODY_INDEX)-1, 172, NULL},
	{7, (BODY_INDEX)-1, 172, NULL},
	{8, (BODY_INDEX)-1, 172, NULL},
	{9, (BODY_INDEX)-1, 172, NULL},
	{10, (BODY_INDEX)-1, 856, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_857},
	{14, (BODY_INDEX)-1, 0, gen_type2_857},
	{15, (BODY_INDEX)-1, 856, NULL},
	{16, (BODY_INDEX)-1, 856, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_857},
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
	{28, (BODY_INDEX)-1, 856, NULL},
	{29, (BODY_INDEX)-1, 196, NULL},
	{30, (BODY_INDEX)-1, 856, NULL},
	{11954, 0, 876, gen_type4_857},
	{11955, 8, 240, gen_type5_857},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 844, NULL},
	{11956, (BODY_INDEX)-1, 172, NULL},
};

extern void Init857(void);
void Init857(void)
{
	IDSC(desc_857, 0, 856);
	IDSC(desc_857 + 1, 1, 856);
	IDSC(desc_857 + 32, 335, 856);
}


#ifdef __cplusplus
}
#endif
