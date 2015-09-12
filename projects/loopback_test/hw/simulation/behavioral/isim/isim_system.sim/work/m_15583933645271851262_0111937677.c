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
static const char *ng0 = "/root/NetFPGA-10G-live-release_5.0.7/lib/hw/std/pcores/nf10_10g_interface_v1_10_a/hdl/verilog/xilinx/cc_2b_1skp.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};



static void Cont_846_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 4576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(846, ng0);
    t2 = (t0 + 3184);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 3344);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t3, 28, 28, 2U, t8, 14, t5, 14);
    t9 = (t0 + 6032);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t13, 0, 8);
    t14 = 268435455U;
    t15 = t14;
    t16 = (t3 + 4);
    t17 = *((unsigned int *)t3);
    t14 = (t14 & t17);
    t18 = *((unsigned int *)t16);
    t15 = (t15 & t18);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 | t14);
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t21 | t15);
    xsi_driver_vfirst_trans(t9, 0, 27);
    t22 = (t0 + 5888);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Always_848_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(848, ng0);
    t2 = (t0 + 5904);
    *((int *)t2) = 1;
    t3 = (t0 + 4856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(849, ng0);

LAB5:    xsi_set_current_line(850, ng0);
    t4 = (t0 + 1664U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(851, ng0);
    t7 = (t0 + 2864);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 3504);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 14);
    goto LAB15;

LAB9:    xsi_set_current_line(852, ng0);
    t3 = (t0 + 2544);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 3504);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 14);
    goto LAB15;

LAB11:    xsi_set_current_line(853, ng0);
    t3 = (t0 + 2704);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 3504);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 14);
    goto LAB15;

LAB13:    xsi_set_current_line(854, ng0);
    t3 = (t0 + 3024);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 3504);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 14);
    goto LAB15;

}

static void Always_858_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(858, ng0);
    t2 = (t0 + 5920);
    *((int *)t2) = 1;
    t3 = (t0 + 5104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(859, ng0);

LAB5:    xsi_set_current_line(860, ng0);
    t4 = (t0 + 1824U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(861, ng0);
    t7 = (t0 + 3024);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 3664);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 14);
    goto LAB15;

LAB9:    xsi_set_current_line(862, ng0);
    t3 = (t0 + 2704);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 3664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 14);
    goto LAB15;

LAB11:    xsi_set_current_line(863, ng0);
    t3 = (t0 + 2544);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 3664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 14);
    goto LAB15;

LAB13:    xsi_set_current_line(864, ng0);
    t3 = (t0 + 2864);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 3664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 14);
    goto LAB15;

}

static void Always_869_3(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 5320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(869, ng0);
    t2 = (t0 + 5936);
    *((int *)t2) = 1;
    t3 = (t0 + 5352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(870, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 5128);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(871, ng0);
    t7 = (t0 + 1504U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 16383U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 16383U);
    t16 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t16, t6, 0, 0, 14, 10000LL);
    xsi_set_current_line(872, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 14);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 14);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 16383U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 16383U);
    t5 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 14, 10000LL);
    xsi_set_current_line(873, ng0);
    t2 = (t0 + 2544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 14, 10000LL);
    xsi_set_current_line(874, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 14, 10000LL);
    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 5128);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

}

static void Always_878_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 5568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(878, ng0);
    t2 = (t0 + 5952);
    *((int *)t2) = 1;
    t3 = (t0 + 5600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(879, ng0);

LAB5:    xsi_set_current_line(880, ng0);
    t4 = (t0 + 1984U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(886, ng0);

LAB10:    xsi_set_current_line(887, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 14, 10000LL);
    xsi_set_current_line(888, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 14, 10000LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(881, ng0);

LAB9:    xsi_set_current_line(882, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 14, 10000LL);
    xsi_set_current_line(883, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 10000LL);
    goto LAB8;

}


extern void work_m_15583933645271851262_0111937677_init()
{
	static char *pe[] = {(void *)Cont_846_0,(void *)Always_848_1,(void *)Always_858_2,(void *)Always_869_3,(void *)Always_878_4};
	xsi_register_didat("work_m_15583933645271851262_0111937677", "isim/isim_system.sim/work/m_15583933645271851262_0111937677.didat");
	xsi_register_executes(pe);
}
