/*
 * Class G21_MEDIUM_AI
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_842 [] = {0,218,841,0xFFFF};
static EIF_TYPE_INDEX gen_type1_842 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_842 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_842 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_842 [] = {0,878,837,0xFFFF};
static EIF_TYPE_INDEX gen_type5_842 [] = {0,240,838,0xFFFF};
static EIF_TYPE_INDEX gen_type6_842 [] = {0,240,845,0xFFFF};


static struct desc_info desc_842[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 201, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_842},
	{2, (BODY_INDEX)-1, 172, NULL},
	{3, (BODY_INDEX)-1, 172, NULL},
	{4, (BODY_INDEX)-1, 172, NULL},
	{5, (BODY_INDEX)-1, 172, NULL},
	{6, (BODY_INDEX)-1, 172, NULL},
	{7, (BODY_INDEX)-1, 172, NULL},
	{8, (BODY_INDEX)-1, 172, NULL},
	{9, (BODY_INDEX)-1, 172, NULL},
	{10, (BODY_INDEX)-1, 841, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_842},
	{14, (BODY_INDEX)-1, 0, gen_type2_842},
	{15, (BODY_INDEX)-1, 841, NULL},
	{16, (BODY_INDEX)-1, 841, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_842},
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
	{28, (BODY_INDEX)-1, 841, NULL},
	{29, (BODY_INDEX)-1, 196, NULL},
	{30, (BODY_INDEX)-1, 841, NULL},
	{11962, 0, 878, gen_type4_842},
	{11963, 8, 240, gen_type5_842},
	{11983, (BODY_INDEX)-1, 846, NULL},
	{11964, (BODY_INDEX)-1, 172, NULL},
	{11972, 16, 240, gen_type6_842},
	{11973, (BODY_INDEX)-1, 187, NULL},
	{11974, (BODY_INDEX)-1, 187, NULL},
	{11975, (BODY_INDEX)-1, 187, NULL},
	{11984, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{11976, (BODY_INDEX)-1, 187, NULL},
	{11977, (BODY_INDEX)-1, 846, NULL},
	{11978, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{11979, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{11980, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{11982, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init842(void);
void Init842(void)
{
	IDSC(desc_842, 0, 841);
	IDSC(desc_842 + 1, 1, 841);
	IDSC(desc_842 + 32, 334, 841);
	IDSC(desc_842 + 36, 338, 841);
	IDSC(desc_842 + 46, 336, 841);
}


#ifdef __cplusplus
}
#endif
