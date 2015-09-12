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
static unsigned int ng1[] = {28U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {0U, 0U};



static void Cont_907_0(char *t0)
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

LAB0:    t1 = (t0 + 2656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(907, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3304);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
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
    xsi_driver_vfirst_trans(t3, 0, 7);

LAB1:    return;
}

static void Always_909_1(char *t0)
{
    char t4[8];
    char t14[8];
    char t17[8];
    char t41[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;

LAB0:    t1 = (t0 + 2904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(909, ng0);
    t2 = (t0 + 3224);
    *((int *)t2) = 1;
    t3 = (t0 + 2936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(910, ng0);

LAB5:    xsi_set_current_line(913, ng0);
    t5 = (t0 + 1184U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 511U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 511U);
    t15 = (t0 + 1344U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng2)));
    xsi_vlogtype_concat(t14, 9, 9, 2U, t15, 1, t16, 8);
    memset(t17, 0, 8);
    t18 = (t4 + 4);
    t19 = (t14 + 4);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t14);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB9;

LAB6:    if (t29 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t17) = 1;

LAB9:    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(918, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 14);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 14);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 511U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 511U);
    t6 = (t0 + 1344U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng2)));
    xsi_vlogtype_concat(t14, 9, 9, 2U, t6, 1, t7, 8);
    memset(t17, 0, 8);
    t15 = (t4 + 4);
    t16 = (t14 + 4);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t14);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t15);
    t24 = *((unsigned int *)t16);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t15);
    t28 = *((unsigned int *)t16);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB16;

LAB13:    if (t29 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t17) = 1;

LAB16:    t19 = (t17 + 4);
    t34 = *((unsigned int *)t19);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(923, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t14) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t12 & 511U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 511U);
    t6 = (t0 + 1184U);
    t7 = *((char **)t6);
    memset(t17, 0, 8);
    t6 = (t17 + 4);
    t15 = (t7 + 4);
    t20 = *((unsigned int *)t7);
    t21 = (t20 >> 14);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 >> 14);
    *((unsigned int *)t6) = t23;
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 511U);
    t25 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t25 & 511U);
    xsi_vlogtype_concat(t4, 18, 18, 2U, t17, 9, t14, 9);
    t16 = (t0 + 1344U);
    t18 = *((char **)t16);
    t16 = ((char*)((ng2)));
    t19 = (t0 + 1344U);
    t32 = *((char **)t19);
    t19 = ((char*)((ng2)));
    xsi_vlogtype_concat(t41, 18, 18, 4U, t19, 1, t32, 8, t16, 1, t18, 8);
    memset(t42, 0, 8);
    t33 = (t4 + 4);
    t39 = (t41 + 4);
    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t41);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t33);
    t30 = *((unsigned int *)t39);
    t31 = (t29 ^ t30);
    t34 = (t28 | t31);
    t35 = *((unsigned int *)t33);
    t36 = *((unsigned int *)t39);
    t37 = (t35 | t36);
    t38 = (~(t37));
    t43 = (t34 & t38);
    if (t43 != 0)
        goto LAB23;

LAB20:    if (t37 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t42) = 1;

LAB23:    t44 = (t42 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t42);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(929, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB26:
LAB19:
LAB12:    goto LAB2;

LAB8:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(914, ng0);
    t39 = ((char*)((ng2)));
    t40 = (t0 + 1744);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 2);
    goto LAB12;

LAB15:    t18 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(919, ng0);
    t32 = ((char*)((ng3)));
    t33 = (t0 + 1744);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 2);
    goto LAB19;

LAB22:    t40 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(925, ng0);
    t50 = ((char*)((ng2)));
    t51 = (t0 + 1744);
    xsi_vlogvar_assign_value(t51, t50, 0, 0, 2);
    goto LAB26;

}


extern void work_m_05468527996216956060_1696191420_init()
{
	static char *pe[] = {(void *)Cont_907_0,(void *)Always_909_1};
	xsi_register_didat("work_m_05468527996216956060_1696191420", "isim/isim_system.sim/work/m_05468527996216956060_1696191420.didat");
	xsi_register_executes(pe);
}
