/*
 * Class TIME_UTILITY
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_853 [] = {0,218,852,0xFFFF};
static EIF_TYPE_INDEX gen_type1_853 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_853 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_853 [] = {0,0,0xFFFF};


static struct desc_info desc_853[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 201, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_853},
	{2, (BODY_INDEX)-1, 172, NULL},
	{3, (BODY_INDEX)-1, 172, NULL},
	{4, (BODY_INDEX)-1, 172, NULL},
	{5, (BODY_INDEX)-1, 172, NULL},
	{6, (BODY_INDEX)-1, 172, NULL},
	{7, (BODY_INDEX)-1, 172, NULL},
	{8, (BODY_INDEX)-1, 172, NULL},
	{9, (BODY_INDEX)-1, 172, NULL},
	{10, (BODY_INDEX)-1, 852, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_853},
	{14, (BODY_INDEX)-1, 0, gen_type2_853},
	{15, (BODY_INDEX)-1, 852, NULL},
	{16, (BODY_INDEX)-1, 852, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_853},
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
	{28, (BODY_INDEX)-1, 852, NULL},
	{29, (BODY_INDEX)-1, 196, NULL},
	{30, (BODY_INDEX)-1, 852, NULL},
	{11846, (BODY_INDEX)-1, 187, NULL},
	{11847, (BODY_INDEX)-1, 187, NULL},
	{11848, (BODY_INDEX)-1, 850, NULL},
	{11849, (BODY_INDEX)-1, 201, NULL},
};

extern void Init853(void);
void Init853(void)
{
	IDSC(desc_853, 0, 852);
	IDSC(desc_853 + 1, 1, 852);
	IDSC(desc_853 + 32, 365, 852);
}


#ifdef __cplusplus
}
#endif
