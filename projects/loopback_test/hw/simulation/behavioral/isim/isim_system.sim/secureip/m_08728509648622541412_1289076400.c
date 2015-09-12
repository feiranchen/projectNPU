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
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {1U, 1U};
static int ng4[] = {28, 0};
static int ng5[] = {14, 0};
static int ng6[] = {27, 0};
static int ng7[] = {13, 0};
static int ng8[] = {0, 0};
static int ng9[] = {64, 0};
static int ng10[] = {2, 0};
static int ng11[] = {1, 0};



static void Always_4958_0(char *t0)
{
    char t4[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 6176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(4958, ng0);
    t2 = (t0 + 8232);
    *((int *)t2) = 1;
    t3 = (t0 + 6208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(4958, ng0);

LAB5:    xsi_set_current_line(4959, ng0);
    t5 = (t0 + 1664U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(4961, ng0);

LAB14:    xsi_set_current_line(4962, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t11 & 7U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 7U);
    t13 = ((char*)((ng2)));
    xsi_vlogtype_concat(t4, 4, 4, 2U, t13, 1, t21, 3);
    t19 = (t0 + 5104);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 4);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(4959, ng0);

LAB13:    xsi_set_current_line(4960, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 5104);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 4);
    goto LAB12;

}

static void Cont_4966_1(char *t0)
{
    char t6[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;

LAB0:    t1 = (t0 + 6424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(4966, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5104);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t6);
    t18 = (t16 & t17);
    *((unsigned int *)t15) = t18;
    t19 = (t2 + 4);
    t20 = (t6 + 4);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t20);
    t24 = (t22 | t23);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB4;

LAB5:
LAB6:    t47 = (t0 + 8408);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memset(t51, 0, 8);
    t52 = 1U;
    t53 = t52;
    t54 = (t15 + 4);
    t55 = *((unsigned int *)t15);
    t52 = (t52 & t55);
    t56 = *((unsigned int *)t54);
    t53 = (t53 & t56);
    t57 = (t51 + 4);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t58 | t52);
    t59 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t59 | t53);
    xsi_driver_vfirst_trans(t47, 0, 0);
    t60 = (t0 + 8248);
    *((int *)t60) = 1;

LAB1:    return;
LAB4:    t27 = *((unsigned int *)t15);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t15) = (t27 | t28);
    t29 = (t2 + 4);
    t30 = (t6 + 4);
    t31 = *((unsigned int *)t2);
    t32 = (~(t31));
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t6);
    t36 = (~(t35));
    t37 = *((unsigned int *)t30);
    t38 = (~(t37));
    t39 = (t32 & t34);
    t40 = (t36 & t38);
    t41 = (~(t39));
    t42 = (~(t40));
    t43 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t43 & t41);
    t44 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t44 & t42);
    t45 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t45 & t41);
    t46 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t46 & t42);
    goto LAB6;

}

static void Always_4974_2(char *t0)
{
    char t6[8];
    char t7[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    unsigned int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;

LAB0:    t1 = (t0 + 6672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(4974, ng0);
    t2 = (t0 + 8264);
    *((int *)t2) = 1;
    t3 = (t0 + 6704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(4974, ng0);

LAB5:    xsi_set_current_line(4975, ng0);
    t4 = (t0 + 1984U);
    t5 = *((char **)t4);
    t4 = (t0 + 3984);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 5);
    xsi_set_current_line(4976, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    t2 = (t0 + 4144);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 28);
    xsi_set_current_line(4978, ng0);
    t2 = (t0 + 6480);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(4979, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2464U);
    t5 = *((char **)t4);
    xsi_vlog_mul_concat(t6, 28, 1, t3, 1U, t5, 1);
    t4 = (t0 + 4304);
    t9 = (t0 + 4304);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 4304);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t0 + 3984);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_generic_convert_array_indices(t7, t8, t11, t14, 2, 1, t17, 5, 2);
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t8 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(4980, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2464U);
    t4 = *((char **)t3);
    xsi_vlog_mul_concat(t6, 28, 1, t2, 1U, t4, 1);
    t3 = (t0 + 4464);
    t5 = (t0 + 4464);
    t9 = (t5 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 4464);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 3984);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t16, 5, 2);
    t17 = (t7 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (!(t19));
    t18 = (t8 + 4);
    t22 = *((unsigned int *)t18);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(4982, ng0);
    t2 = (t0 + 6480);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB7:    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t8);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t4, t6, 0, *((unsigned int *)t8), t28);
    goto LAB8;

LAB9:    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t8);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t6, 0, *((unsigned int *)t8), t28);
    goto LAB10;

LAB11:    xsi_set_current_line(4983, ng0);
    t3 = (t0 + 4144);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t9 = (t0 + 4304);
    t10 = (t0 + 4304);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 4304);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 3984);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_generic_convert_array_indices(t6, t7, t12, t15, 2, 1, t18, 5, 2);
    t21 = (t6 + 4);
    t19 = *((unsigned int *)t21);
    t20 = (!(t19));
    t29 = (t7 + 4);
    t22 = *((unsigned int *)t29);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(4984, ng0);
    t2 = (t0 + 4144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4464);
    t9 = (t0 + 4464);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 4464);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t0 + 3984);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_generic_convert_array_indices(t6, t7, t11, t14, 2, 1, t17, 5, 2);
    t18 = (t6 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t7 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(4986, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3504);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    memset(t6, 0, 8);
    t11 = (t6 + 4);
    t12 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t22 = (t19 >> 1);
    *((unsigned int *)t6) = t22;
    t25 = *((unsigned int *)t12);
    t26 = (t25 >> 1);
    *((unsigned int *)t11) = t26;
    t30 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t30 & 31U);
    t31 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t31 & 31U);
    memset(t7, 0, 8);
    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t6);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t13);
    t36 = *((unsigned int *)t14);
    t37 = (t35 ^ t36);
    t38 = (t34 | t37);
    t39 = *((unsigned int *)t13);
    t40 = *((unsigned int *)t14);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB19;

LAB16:    if (t41 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t7) = 1;

LAB19:    t16 = (t7 + 4);
    t44 = *((unsigned int *)t16);
    t45 = (~(t44));
    t46 = *((unsigned int *)t7);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB20;

LAB21:
LAB22:    xsi_set_current_line(4987, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3824);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    memset(t6, 0, 8);
    t11 = (t6 + 4);
    t12 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t22 = (t19 >> 1);
    *((unsigned int *)t6) = t22;
    t25 = *((unsigned int *)t12);
    t26 = (t25 >> 1);
    *((unsigned int *)t11) = t26;
    t30 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t30 & 31U);
    t31 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t31 & 31U);
    memset(t7, 0, 8);
    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t6);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t13);
    t36 = *((unsigned int *)t14);
    t37 = (t35 ^ t36);
    t38 = (t34 | t37);
    t39 = *((unsigned int *)t13);
    t40 = *((unsigned int *)t14);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB26;

LAB23:    if (t41 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t7) = 1;

LAB26:    t16 = (t7 + 4);
    t44 = *((unsigned int *)t16);
    t45 = (~(t44));
    t46 = *((unsigned int *)t7);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB27;

LAB28:
LAB29:    goto LAB2;

LAB12:    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t7);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t9, t5, 0, *((unsigned int *)t7), t28);
    goto LAB13;

LAB14:    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t7);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), t28);
    goto LAB15;

LAB18:    t15 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(4986, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 4784);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB22;

LAB25:    t15 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(4987, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 4944);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB29;

}

static void Always_4993_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 6920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(4993, ng0);
    t2 = (t0 + 8280);
    *((int *)t2) = 1;
    t3 = (t0 + 6952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(4993, ng0);

LAB5:    xsi_set_current_line(4994, ng0);
    t5 = (t0 + 1664U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(4996, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(4994, ng0);

LAB13:    xsi_set_current_line(4995, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4624);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 28, 500LL);
    goto LAB12;

LAB14:    xsi_set_current_line(4996, ng0);

LAB17:    xsi_set_current_line(4997, ng0);
    t5 = (t0 + 4144);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 4624);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 28, 500LL);
    goto LAB16;

}

static void NetDecl_5003_4(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 7168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(5003, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 4304);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4304);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 3344);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t12, 0, 8);
    t16 = (t12 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 1);
    *((unsigned int *)t12) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 1);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 31U);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 31U);
    xsi_vlog_generic_get_array_select_value(t5, 28, t4, t8, t11, 2, 1, t12, 5, 2);
    t24 = (t0 + 8472);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 268435455U;
    t30 = t29;
    t31 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 27U);
    t37 = (t0 + 8296);
    *((int *)t37) = 1;

LAB1:    return;
}

static void NetDecl_5006_5(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 7416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(5006, ng0);
    t2 = (t0 + 4464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 4464);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4464);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 3664);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t12, 0, 8);
    t16 = (t12 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 1);
    *((unsigned int *)t12) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 1);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 31U);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 31U);
    xsi_vlog_generic_get_array_select_value(t5, 28, t4, t8, t11, 2, 1, t12, 5, 2);
    t24 = (t0 + 8536);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 268435455U;
    t30 = t29;
    t31 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 27U);
    t37 = (t0 + 8312);
    *((int *)t37) = 1;

LAB1:    return;
}

static void Always_5009_6(char *t0)
{
    char t4[8];
    char t31[8];
    char t32[8];
    char t33[8];
    char t34[8];
    char t36[8];
    char t50[8];
    char t64[8];
    char t75[8];
    char t76[8];
    char t77[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    int t85;
    char *t86;
    unsigned int t87;
    int t88;
    int t89;
    char *t90;
    unsigned int t91;
    int t92;
    int t93;
    unsigned int t94;
    int t95;
    unsigned int t96;
    unsigned int t97;
    int t98;
    int t99;

LAB0:    t1 = (t0 + 7664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(5009, ng0);
    t2 = (t0 + 8328);
    *((int *)t2) = 1;
    t3 = (t0 + 7696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(5009, ng0);

LAB5:    xsi_set_current_line(5010, ng0);
    t5 = (t0 + 1664U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(5018, ng0);

LAB14:    xsi_set_current_line(5019, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 500LL);
    xsi_set_current_line(5020, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 3664);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 500LL);
    xsi_set_current_line(5021, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 3504);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 6);
    xsi_set_current_line(5022, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 3824);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 6);
    xsi_set_current_line(5023, ng0);
    t2 = (t0 + 2304U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t2) == 0)
        goto LAB15;

LAB17:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB18:    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB20;

LAB19:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 1U);
    t13 = (t4 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(5025, ng0);

LAB25:    xsi_set_current_line(5026, ng0);
    t2 = (t0 + 4784);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t31, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t6) != 0)
        goto LAB28;

LAB29:    t13 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB30;

LAB31:    t17 = *((unsigned int *)t31);
    t18 = (~(t17));
    t21 = *((unsigned int *)t13);
    t22 = (t18 || t21);
    if (t22 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t13) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t31) > 0)
        goto LAB36;

LAB37:    memcpy(t4, t33, 8);

LAB38:    t74 = (t0 + 3184);
    t78 = (t0 + 3184);
    t79 = (t78 + 72U);
    t80 = *((char **)t79);
    t81 = ((char*)((ng6)));
    t82 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t75, t76, t77, ((int*)(t80)), 2, t81, 32, 1, t82, 32, 1);
    t83 = (t75 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (!(t84));
    t86 = (t76 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (!(t87));
    t89 = (t85 && t88);
    t90 = (t77 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (!(t91));
    t93 = (t89 && t92);
    if (t93 == 1)
        goto LAB52;

LAB53:    xsi_set_current_line(5035, ng0);
    t2 = (t0 + 4944);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t31, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t6) != 0)
        goto LAB56;

LAB57:    t13 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB58;

LAB59:    t17 = *((unsigned int *)t31);
    t18 = (~(t17));
    t21 = *((unsigned int *)t13);
    t22 = (t18 || t21);
    if (t22 > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t13) > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t31) > 0)
        goto LAB64;

LAB65:    memcpy(t4, t33, 8);

LAB66:    t74 = (t0 + 3184);
    t78 = (t0 + 3184);
    t79 = (t78 + 72U);
    t80 = *((char **)t79);
    t81 = ((char*)((ng7)));
    t82 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t75, t76, t77, ((int*)(t80)), 2, t81, 32, 1, t82, 32, 1);
    t83 = (t75 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (!(t84));
    t86 = (t76 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (!(t87));
    t89 = (t85 && t88);
    t90 = (t77 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (!(t91));
    t93 = (t89 && t92);
    if (t93 == 1)
        goto LAB80;

LAB81:
LAB23:    xsi_set_current_line(5045, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(5046, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(5010, ng0);

LAB13:    xsi_set_current_line(5011, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 6, 500LL);
    xsi_set_current_line(5012, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 500LL);
    xsi_set_current_line(5013, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(5014, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(5015, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 28, 500LL);
    xsi_set_current_line(5016, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(5017, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB20:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t21);
    goto LAB19;

LAB21:    xsi_set_current_line(5023, ng0);

LAB24:    xsi_set_current_line(5024, ng0);
    t19 = (t0 + 4624);
    t20 = (t19 + 56U);
    t29 = *((char **)t20);
    t30 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 28, 500LL);
    goto LAB23;

LAB26:    *((unsigned int *)t31) = 1;
    goto LAB29;

LAB28:    t12 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB29;

LAB30:    t19 = ((char*)((ng5)));
    t20 = (t0 + 2464U);
    t29 = *((char **)t20);
    xsi_vlog_mul_concat(t32, 14, 1, t19, 1U, t29, 1);
    goto LAB31;

LAB32:    t20 = (t0 + 3344);
    t30 = (t20 + 56U);
    t35 = *((char **)t30);
    memset(t36, 0, 8);
    t37 = (t36 + 4);
    t38 = (t35 + 4);
    t23 = *((unsigned int *)t35);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t36) = t25;
    t26 = *((unsigned int *)t38);
    t27 = (t26 >> 0);
    t28 = (t27 & 1);
    *((unsigned int *)t37) = t28;
    memset(t34, 0, 8);
    t39 = (t36 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t39) != 0)
        goto LAB41;

LAB42:    t46 = (t34 + 4);
    t47 = *((unsigned int *)t34);
    t48 = *((unsigned int *)t46);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB43;

LAB44:    t60 = *((unsigned int *)t34);
    t61 = (~(t60));
    t62 = *((unsigned int *)t46);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t46) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t34) > 0)
        goto LAB49;

LAB50:    memcpy(t33, t64, 8);

LAB51:    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t4, 14, t32, 14, t33, 14);
    goto LAB38;

LAB36:    memcpy(t4, t32, 8);
    goto LAB38;

LAB39:    *((unsigned int *)t34) = 1;
    goto LAB42;

LAB41:    t45 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB42;

LAB43:    t51 = (t0 + 2624U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t53 = (t52 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 14);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 14);
    *((unsigned int *)t51) = t57;
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 16383U);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 16383U);
    goto LAB44;

LAB45:    t65 = (t0 + 2624U);
    t66 = *((char **)t65);
    memset(t64, 0, 8);
    t65 = (t64 + 4);
    t67 = (t66 + 4);
    t68 = *((unsigned int *)t66);
    t69 = (t68 >> 0);
    *((unsigned int *)t64) = t69;
    t70 = *((unsigned int *)t67);
    t71 = (t70 >> 0);
    *((unsigned int *)t65) = t71;
    t72 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t72 & 16383U);
    t73 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t73 & 16383U);
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t33, 14, t50, 14, t64, 14);
    goto LAB51;

LAB49:    memcpy(t33, t50, 8);
    goto LAB51;

LAB52:    t94 = *((unsigned int *)t77);
    t95 = (t94 + 0);
    t96 = *((unsigned int *)t75);
    t97 = *((unsigned int *)t76);
    t98 = (t96 - t97);
    t99 = (t98 + 1);
    xsi_vlogvar_wait_assign_value(t74, t4, t95, *((unsigned int *)t76), t99, 500LL);
    goto LAB53;

LAB54:    *((unsigned int *)t31) = 1;
    goto LAB57;

LAB56:    t12 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB57;

LAB58:    t19 = ((char*)((ng5)));
    t20 = (t0 + 2464U);
    t29 = *((char **)t20);
    xsi_vlog_mul_concat(t32, 14, 1, t19, 1U, t29, 1);
    goto LAB59;

LAB60:    t20 = (t0 + 3664);
    t30 = (t20 + 56U);
    t35 = *((char **)t30);
    memset(t36, 0, 8);
    t37 = (t36 + 4);
    t38 = (t35 + 4);
    t23 = *((unsigned int *)t35);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t36) = t25;
    t26 = *((unsigned int *)t38);
    t27 = (t26 >> 0);
    t28 = (t27 & 1);
    *((unsigned int *)t37) = t28;
    memset(t34, 0, 8);
    t39 = (t36 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t39) != 0)
        goto LAB69;

LAB70:    t46 = (t34 + 4);
    t47 = *((unsigned int *)t34);
    t48 = *((unsigned int *)t46);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB71;

LAB72:    t60 = *((unsigned int *)t34);
    t61 = (~(t60));
    t62 = *((unsigned int *)t46);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t46) > 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t34) > 0)
        goto LAB77;

LAB78:    memcpy(t33, t64, 8);

LAB79:    goto LAB61;

LAB62:    xsi_vlog_unsigned_bit_combine(t4, 14, t32, 14, t33, 14);
    goto LAB66;

LAB64:    memcpy(t4, t32, 8);
    goto LAB66;

LAB67:    *((unsigned int *)t34) = 1;
    goto LAB70;

LAB69:    t45 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB70;

LAB71:    t51 = (t0 + 2784U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t53 = (t52 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 14);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 14);
    *((unsigned int *)t51) = t57;
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 16383U);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 16383U);
    goto LAB72;

LAB73:    t65 = (t0 + 2784U);
    t66 = *((char **)t65);
    memset(t64, 0, 8);
    t65 = (t64 + 4);
    t67 = (t66 + 4);
    t68 = *((unsigned int *)t66);
    t69 = (t68 >> 0);
    *((unsigned int *)t64) = t69;
    t70 = *((unsigned int *)t67);
    t71 = (t70 >> 0);
    *((unsigned int *)t65) = t71;
    t72 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t72 & 16383U);
    t73 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t73 & 16383U);
    goto LAB74;

LAB75:    xsi_vlog_unsigned_bit_combine(t33, 14, t50, 14, t64, 14);
    goto LAB79;

LAB77:    memcpy(t33, t50, 8);
    goto LAB79;

LAB80:    t94 = *((unsigned int *)t77);
    t95 = (t94 + 0);
    t96 = *((unsigned int *)t75);
    t97 = *((unsigned int *)t76);
    t98 = (t96 - t97);
    t99 = (t98 + 1);
    xsi_vlogvar_wait_assign_value(t74, t4, t95, *((unsigned int *)t76), t99, 500LL);
    goto LAB81;

}

static void Initial_5056_7(char *t0)
{
    char t6[8];
    char t7[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;

LAB0:    xsi_set_current_line(5056, ng0);

LAB2:    xsi_set_current_line(5057, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4784);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(5058, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4944);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(5059, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4624);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 28);
    xsi_set_current_line(5060, ng0);
    xsi_set_current_line(5060, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 5264);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 5264);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng9)));
    t5 = ((char*)((ng10)));
    memset(t6, 0, 8);
    xsi_vlog_signed_divide(t6, 32, t4, 32, t5, 32);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t3, 32, t6, 32);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(5064, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3344);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(5065, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3664);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(5066, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3504);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(5067, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3824);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(5068, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3984);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(5069, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4144);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 28);
    xsi_set_current_line(5070, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3184);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 28);

LAB1:    return;
LAB4:    xsi_set_current_line(5060, ng0);

LAB6:    xsi_set_current_line(5061, ng0);
    t14 = ((char*)((ng1)));
    t15 = (t0 + 4304);
    t18 = (t0 + 4304);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 4304);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 5264);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 2, 1, t26, 32, 1);
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(5062, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4464);
    t3 = (t0 + 4464);
    t4 = (t3 + 72U);
    t5 = *((char **)t4);
    t8 = (t0 + 4464);
    t14 = (t8 + 64U);
    t15 = *((char **)t14);
    t18 = (t0 + 5264);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_convert_array_indices(t6, t7, t5, t15, 2, 1, t20, 32, 1);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t29 = (!(t9));
    t22 = (t7 + 4);
    t10 = *((unsigned int *)t22);
    t32 = (!(t10));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(5060, ng0);
    t1 = (t0 + 5264);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng11)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 5264);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB3;

LAB7:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t15, t14, 0, *((unsigned int *)t17), t37);
    goto LAB8;

LAB9:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t36 = (t11 - t12);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t7), t37);
    goto LAB10;

}


extern void secureip_m_08728509648622541412_1289076400_init()
{
	static char *pe[] = {(void *)Always_4958_0,(void *)Cont_4966_1,(void *)Always_4974_2,(void *)Always_4993_3,(void *)NetDecl_5003_4,(void *)NetDecl_5006_5,(void *)Always_5009_6,(void *)Initial_5056_7};
	xsi_register_didat("secureip_m_08728509648622541412_1289076400", "isim/isim_system.sim/secureip/m_08728509648622541412_1289076400.didat");
	xsi_register_executes(pe);
}
