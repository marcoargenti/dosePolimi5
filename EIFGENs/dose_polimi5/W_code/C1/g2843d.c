/*
 * Class G21_EASY_AI
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_843 [] = {0,218,842,0xFFFF};
static EIF_TYPE_INDEX gen_type1_843 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_843 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_843 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_843 [] = {0,878,837,0xFFFF};
static EIF_TYPE_INDEX gen_type5_843 [] = {0,240,838,0xFFFF};
static EIF_TYPE_INDEX gen_type6_843 [] = {0,240,844,0xFFFF};


static struct desc_info desc_843[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 201, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_843},
	{2, (BODY_INDEX)-1, 172, NULL},
	{3, (BODY_INDEX)-1, 172, NULL},
	{4, (BODY_INDEX)-1, 172, NULL},
	{5, (BODY_INDEX)-1, 172, NULL},
	{6, (BODY_INDEX)-1, 172, NULL},
	{7, (BODY_INDEX)-1, 172, NULL},
	{8, (BODY_INDEX)-1, 172, NULL},
	{9, (BODY_INDEX)-1, 172, NULL},
	{10, (BODY_INDEX)-1, 842, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_843},
	{14, (BODY_INDEX)-1, 0, gen_type2_843},
	{15, (BODY_INDEX)-1, 842, NULL},
	{16, (BODY_INDEX)-1, 842, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_843},
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
	{28, (BODY_INDEX)-1, 842, NULL},
	{29, (BODY_INDEX)-1, 196, NULL},
	{30, (BODY_INDEX)-1, 842, NULL},
	{11962, 0, 878, gen_type4_843},
	{11963, 8, 240, gen_type5_843},
	{11968, (BODY_INDEX)-1, 846, NULL},
	{11964, (BODY_INDEX)-1, 172, NULL},
	{11966, 16, 240, gen_type6_843},
	{11967, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{11969, (BODY_INDEX)-1, 838, NULL},
	{11970, (BODY_INDEX)-1, 844, NULL},
	{11971, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init843(void);
void Init843(void)
{
	IDSC(desc_843, 0, 842);
	IDSC(desc_843 + 1, 1, 842);
	IDSC(desc_843 + 32, 334, 842);
	IDSC(desc_843 + 36, 335, 842);
}


#ifdef __cplusplus
}
#endif