/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ddf5b5d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/build/xfndry/isimco/hipsBuilds/o_hips_v30.0/rst/hips/gtx_dual_fast_postlava/RTL/gtx5f_gtxdual_top.v";
static unsigned int ng1[] = {128U, 127U};
static unsigned int ng2[] = {7U, 0U};
static unsigned int ng3[] = {0U, 63U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {96U, 31U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {80U, 15U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {64U, 7U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {76U, 3U};
static unsigned int ng12[] = {74U, 1U};
static unsigned int ng13[] = {73U, 0U};
static unsigned int ng14[] = {1U, 0U};
static unsigned int ng15[] = {72U, 0U};
static unsigned int ng16[] = {2U, 0U};
static unsigned int ng17[] = {0U, 0U};



static void Always_12827_0(char *t0)
{
    char t4[8];
    char t8[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 5080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12827, ng0);
    t2 = (t0 + 5648);
    *((int *)t2) = 1;
    t3 = (t0 + 5112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12833, ng0);

LAB5:    xsi_set_current_line(12834, ng0);
    t5 = (t0 + 2328U);
    t6 = *((char **)t5);
    t5 = (t0 + 2488U);
    t7 = *((char **)t5);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t16 = (t0 + 2488U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 2648U);
    t27 = *((char **)t26);
    t26 = (t0 + 2808U);
    t28 = *((char **)t26);
    t26 = (t0 + 2968U);
    t29 = *((char **)t26);
    t26 = (t0 + 3128U);
    t30 = *((char **)t26);
    t26 = (t0 + 3288U);
    t31 = *((char **)t26);
    xsi_vlogtype_concat(t4, 8, 8, 8U, t31, 1, t30, 1, t29, 1, t28, 1, t27, 1, t18, 1, t8, 1, t6, 1);

LAB6:    t26 = ((char*)((ng1)));
    t32 = xsi_vlog_unsigned_case_xcompare(t4, 8, t26, 8);
    if (t32 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t32 = xsi_vlog_unsigned_case_xcompare(t4, 8, t2, 8);
    if (t32 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_xcompare(t4, 8, t2, 8);
    if (t32 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t32 = xsi_vlog_unsigned_case_xcompare(t4, 8, t2, 8);
    if (t32 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t32 = xsi_vlog_unsigned_case_xcompare(t4, 8, t2, 8);
    if (t32 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t32 = xsi_vlog_unsigned_case_xcompare(t4, 8, t2, 8);
    if (t32 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t32 = xsi_vlog_unsigned_case_xcompare(t4, 8, t2, 8);
    if (t32 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng13)));
    t32 = xsi_vlog_unsigned_case_xcompare(t4, 8, t2, 8);
    if (t32 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng15)));
    t32 = xsi_vlog_unsigned_case_xcompare(t4, 8, t2, 8);
    if (t32 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(12842, ng0);
    t33 = ((char*)((ng2)));
    t34 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 3, 500LL);
    goto LAB25;

LAB9:    xsi_set_current_line(12843, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB25;

LAB11:    xsi_set_current_line(12844, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB25;

LAB13:    xsi_set_current_line(12845, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB25;

LAB15:    xsi_set_current_line(12846, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB25;

LAB17:    xsi_set_current_line(12847, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB25;

LAB19:    xsi_set_current_line(12848, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB25;

LAB21:    xsi_set_current_line(12849, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB25;

LAB23:    xsi_set_current_line(12850, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB25;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng17)));
    t3 = (t0 + 5728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void secureip_m_09004257909141947056_1035598812_init()
{
	static char *pe[] = {(void *)Always_12827_0,(void *)implSig1_execute};
	xsi_register_didat("secureip_m_09004257909141947056_1035598812", "isim/isim_system.sim/secureip/m_09004257909141947056_1035598812.didat");
	xsi_register_executes(pe);
}
