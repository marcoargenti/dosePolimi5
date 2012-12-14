/*
 * Class DURATION
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_861 [] = {0,218,860,0xFFFF};
static EIF_TYPE_INDEX gen_type1_861 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_861 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_861 [] = {0,0,0xFFFF};


static struct desc_info desc_861[] = {
	{(BODY_INDEX) 12008, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 201, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_861},
	{2, (BODY_INDEX)-1, 172, NULL},
	{3, (BODY_INDEX)-1, 172, NULL},
	{4, (BODY_INDEX)-1, 172, NULL},
	{5, (BODY_INDEX)-1, 172, NULL},
	{6, (BODY_INDEX)-1, 172, NULL},
	{7, (BODY_INDEX)-1, 172, NULL},
	{8, (BODY_INDEX)-1, 172, NULL},
	{9, (BODY_INDEX)-1, 172, NULL},
	{10, (BODY_INDEX)-1, 860, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_861},
	{14, (BODY_INDEX)-1, 0, gen_type2_861},
	{15, (BODY_INDEX)-1, 860, NULL},
	{16, (BODY_INDEX)-1, 860, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_861},
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
	{28, (BODY_INDEX)-1, 860, NULL},
	{29, (BODY_INDEX)-1, 196, NULL},
	{30, (BODY_INDEX)-1, 860, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 172, NULL},
	{628, (BODY_INDEX)-1, 172, NULL},
	{629, (BODY_INDEX)-1, 172, NULL},
	{630, (BODY_INDEX)-1, 172, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 172, NULL},
	{12009, (BODY_INDEX)-1, 172, NULL},
	{12010, (BODY_INDEX)-1, 172, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 860, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 860, NULL},
	{12012, (BODY_INDEX)-1, 860, NULL},
	{12011, (BODY_INDEX)-1, 860, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 860, NULL},
};

extern void Init861(void);
void Init861(void)
{
	IDSC(desc_861, 0, 860);
	IDSC(desc_861 + 1, 1, 860);
	IDSC(desc_861 + 32, 198, 860);
	IDSC(desc_861 + 36, 347, 860);
	IDSC(desc_861 + 39, 357, 860);
}


#ifdef __cplusplus
}
#endif
