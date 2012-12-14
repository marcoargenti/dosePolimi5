/*
 * Class ABSOLUTE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_865 [] = {0,218,864,0xFFFF};
static EIF_TYPE_INDEX gen_type1_865 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_865 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_865 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_865 [] = {0,877,864,0xFFFF};


static struct desc_info desc_865[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 201, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_865},
	{2, (BODY_INDEX)-1, 172, NULL},
	{3, (BODY_INDEX)-1, 172, NULL},
	{631, (BODY_INDEX)-1, 172, NULL},
	{5, (BODY_INDEX)-1, 172, NULL},
	{6, (BODY_INDEX)-1, 172, NULL},
	{7, (BODY_INDEX)-1, 172, NULL},
	{8, (BODY_INDEX)-1, 172, NULL},
	{9, (BODY_INDEX)-1, 172, NULL},
	{10, (BODY_INDEX)-1, 864, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_865},
	{14, (BODY_INDEX)-1, 0, gen_type2_865},
	{15, (BODY_INDEX)-1, 864, NULL},
	{16, (BODY_INDEX)-1, 864, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_865},
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
	{28, (BODY_INDEX)-1, 864, NULL},
	{29, (BODY_INDEX)-1, 196, NULL},
	{30, (BODY_INDEX)-1, 864, NULL},
	{12099, (BODY_INDEX)-1, 172, NULL},
	{636, (BODY_INDEX)-1, 172, NULL},
	{637, (BODY_INDEX)-1, 172, NULL},
	{638, (BODY_INDEX)-1, 172, NULL},
	{632, (BODY_INDEX)-1, 187, NULL},
	{633, (BODY_INDEX)-1, 864, NULL},
	{634, (BODY_INDEX)-1, 864, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 864, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 860, NULL},
	{12100, (BODY_INDEX)-1, 877, gen_type4_865},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 860, NULL},
};

extern void Init865(void);
void Init865(void)
{
	IDSC(desc_865, 0, 864);
	IDSC(desc_865 + 1, 1, 864);
	IDSC(desc_865 + 32, 198, 864);
	IDSC(desc_865 + 36, 275, 864);
	IDSC(desc_865 + 39, 344, 864);
}


#ifdef __cplusplus
}
#endif
