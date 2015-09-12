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
static int ng2[] = {3, 0};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};



static void NetDecl_19750_0(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
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
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;

LAB0:    t1 = (t0 + 5240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19750, ng0);
    t2 = (t0 + 2168U);
    t4 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t2 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t3, 0, 8);
    t37 = (t6 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t6);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t37) == 0)
        goto LAB7;

LAB9:    t43 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t43) = 1;

LAB10:    t44 = (t3 + 4);
    t45 = (t6 + 4);
    t46 = *((unsigned int *)t6);
    t47 = (~(t46));
    *((unsigned int *)t3) = t47;
    *((unsigned int *)t44) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB12;

LAB11:    t52 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t52 & 1U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 & 1U);
    t54 = (t0 + 6960);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t58, 0, 8);
    t59 = 1U;
    t60 = t59;
    t61 = (t3 + 4);
    t62 = *((unsigned int *)t3);
    t59 = (t59 & t62);
    t63 = *((unsigned int *)t61);
    t60 = (t60 & t63);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t65 | t59);
    t66 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t66 | t60);
    xsi_driver_vfirst_trans_delayed(t54, 0, 0U, 500LL, 0);
    t67 = (t0 + 6800);
    *((int *)t67) = 1;

LAB1:    return;
LAB4:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & t31);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t34 & t32);
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & t31);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    goto LAB6;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB12:    t48 = *((unsigned int *)t3);
    t49 = *((unsigned int *)t45);
    *((unsigned int *)t3) = (t48 | t49);
    t50 = *((unsigned int *)t44);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t44) = (t50 | t51);
    goto LAB11;

}

static void NetDecl_19752_1(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 5488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19752, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 7024);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 15U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 3U, 10LL, 0);
    t16 = (t0 + 6816);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_19754_2(char *t0)
{
    char t4[8];
    char t22[8];
    char t23[8];
    char t24[8];
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    char *t35;
    unsigned int t36;
    int t37;
    int t38;
    unsigned int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;

LAB0:    t1 = (t0 + 5736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19754, ng0);
    t2 = (t0 + 6832);
    *((int *)t2) = 1;
    t3 = (t0 + 5768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19754, ng0);

LAB5:    xsi_set_current_line(19755, ng0);
    t5 = (t0 + 2008U);
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

LAB11:    xsi_set_current_line(19758, ng0);

LAB14:    xsi_set_current_line(19759, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(19760, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t2) == 0)
        goto LAB20;

LAB22:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB23:    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB25;

LAB24:    t29 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t29 & 1U);
    t32 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t32 & 1U);
    t13 = (t4 + 4);
    t36 = *((unsigned int *)t13);
    t39 = (~(t36));
    t41 = *((unsigned int *)t4);
    t42 = (t41 & t39);
    t45 = (t42 != 0);
    if (t45 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(19761, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t2) == 0)
        goto LAB31;

LAB33:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB34:    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB36;

LAB35:    t29 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t29 & 1U);
    t32 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t32 & 1U);
    t13 = (t4 + 4);
    t36 = *((unsigned int *)t13);
    t39 = (~(t36));
    t41 = *((unsigned int *)t4);
    t42 = (t41 & t39);
    t45 = (t42 != 0);
    if (t45 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(19762, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB42;

LAB43:
LAB44:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(19755, ng0);

LAB13:    xsi_set_current_line(19756, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 500LL);
    xsi_set_current_line(19757, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 500LL);
    goto LAB12;

LAB15:    xsi_set_current_line(19759, ng0);
    t5 = (t0 + 3288U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t12 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 2);
    *((unsigned int *)t4) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 2);
    *((unsigned int *)t5) = t17;
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 3U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 3U);
    t13 = (t0 + 4168);
    t19 = (t0 + 4168);
    t20 = (t19 + 72U);
    t25 = *((char **)t20);
    t26 = ((char*)((ng2)));
    t27 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t22, t23, t24, ((int*)(t25)), 2, t26, 32, 1, t27, 32, 1);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t23 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    t35 = (t24 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB18;

LAB19:    goto LAB17;

LAB18:    t39 = *((unsigned int *)t24);
    t40 = (t39 + 0);
    t41 = *((unsigned int *)t22);
    t42 = *((unsigned int *)t23);
    t43 = (t41 - t42);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t13, t4, t40, *((unsigned int *)t23), t44, 500LL);
    goto LAB19;

LAB20:    *((unsigned int *)t4) = 1;
    goto LAB23;

LAB25:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t21);
    goto LAB24;

LAB26:    xsi_set_current_line(19760, ng0);
    t19 = (t0 + 3288U);
    t20 = *((char **)t19);
    memset(t22, 0, 8);
    t19 = (t22 + 4);
    t25 = (t20 + 4);
    t46 = *((unsigned int *)t20);
    t47 = (t46 >> 1);
    t48 = (t47 & 1);
    *((unsigned int *)t22) = t48;
    t49 = *((unsigned int *)t25);
    t50 = (t49 >> 1);
    t51 = (t50 & 1);
    *((unsigned int *)t19) = t51;
    t26 = (t0 + 4168);
    t27 = (t0 + 4168);
    t28 = (t27 + 72U);
    t31 = *((char **)t28);
    t35 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t23, t31, 2, t35, 32, 1);
    t52 = (t23 + 4);
    t53 = *((unsigned int *)t52);
    t30 = (!(t53));
    if (t30 == 1)
        goto LAB29;

LAB30:    goto LAB28;

LAB29:    xsi_vlogvar_wait_assign_value(t26, t22, 0, *((unsigned int *)t23), 1, 500LL);
    goto LAB30;

LAB31:    *((unsigned int *)t4) = 1;
    goto LAB34;

LAB36:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t21);
    goto LAB35;

LAB37:    xsi_set_current_line(19761, ng0);
    t19 = (t0 + 3288U);
    t20 = *((char **)t19);
    memset(t22, 0, 8);
    t19 = (t22 + 4);
    t25 = (t20 + 4);
    t46 = *((unsigned int *)t20);
    t47 = (t46 >> 0);
    t48 = (t47 & 1);
    *((unsigned int *)t22) = t48;
    t49 = *((unsigned int *)t25);
    t50 = (t49 >> 0);
    t51 = (t50 & 1);
    *((unsigned int *)t19) = t51;
    t26 = (t0 + 4328);
    t27 = (t0 + 4328);
    t28 = (t27 + 72U);
    t31 = *((char **)t28);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t23, t31, 2, t35, 32, 1);
    t52 = (t23 + 4);
    t53 = *((unsigned int *)t52);
    t30 = (!(t53));
    if (t30 == 1)
        goto LAB40;

LAB41:    goto LAB39;

LAB40:    xsi_vlogvar_wait_assign_value(t26, t22, 0, *((unsigned int *)t23), 1, 500LL);
    goto LAB41;

LAB42:    xsi_set_current_line(19762, ng0);
    t5 = (t0 + 3288U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t12 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t4) = t16;
    t17 = *((unsigned int *)t12);
    t18 = (t17 >> 0);
    t21 = (t18 & 1);
    *((unsigned int *)t5) = t21;
    t13 = (t0 + 4168);
    t19 = (t0 + 4168);
    t20 = (t19 + 72U);
    t25 = *((char **)t20);
    t26 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t29 = *((unsigned int *)t27);
    t30 = (!(t29));
    if (t30 == 1)
        goto LAB45;

LAB46:    goto LAB44;

LAB45:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t22), 1, 500LL);
    goto LAB46;

}

static void NetDecl_19794_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t36[8];
    char t48[8];
    char t49[8];
    char t62[8];
    char t63[8];
    char t79[8];
    char t95[8];
    char t108[8];
    char t109[8];
    char t124[8];
    char t138[8];
    char *t1;
    char *t2;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
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
    char *t34;
    char *t35;
    char *t37;
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
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t94;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;

LAB0:    t1 = (t0 + 5984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19794, ng0);
    t2 = (t0 + 2488U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t5 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t5) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    memset(t4, 0, 8);
    t23 = (t5 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t4 + 4);
    t31 = *((unsigned int *)t4);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    t44 = *((unsigned int *)t4);
    t45 = (~(t44));
    t46 = *((unsigned int *)t30);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t30) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t4) > 0)
        goto LAB20;

LAB21:    memcpy(t3, t48, 8);

LAB22:    t146 = (t0 + 7088);
    t147 = (t146 + 56U);
    t148 = *((char **)t147);
    t149 = (t148 + 56U);
    t150 = *((char **)t149);
    memset(t150, 0, 8);
    t151 = 1U;
    t152 = t151;
    t153 = (t3 + 4);
    t154 = *((unsigned int *)t3);
    t151 = (t151 & t154);
    t155 = *((unsigned int *)t153);
    t152 = (t152 & t155);
    t156 = (t150 + 4);
    t157 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t157 | t151);
    t158 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t158 | t152);
    xsi_driver_vfirst_trans_delayed(t146, 0, 0U, 500LL, 0);
    t159 = (t0 + 6848);
    *((int *)t159) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t5) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

LAB10:    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB12:    t29 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 2968U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t36 + 4);
    t37 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    t40 = (t39 & 1);
    *((unsigned int *)t36) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 0);
    t43 = (t42 & 1);
    *((unsigned int *)t34) = t43;
    goto LAB15;

LAB16:    t50 = (t0 + 1688U);
    t51 = *((char **)t50);
    memset(t49, 0, 8);
    t50 = (t51 + 4);
    t52 = *((unsigned int *)t50);
    t53 = (~(t52));
    t54 = *((unsigned int *)t51);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t50) != 0)
        goto LAB25;

LAB26:    t58 = (t49 + 4);
    t59 = *((unsigned int *)t49);
    t60 = *((unsigned int *)t58);
    t61 = (t59 || t60);
    if (t61 > 0)
        goto LAB27;

LAB28:    t104 = *((unsigned int *)t49);
    t105 = (~(t104));
    t106 = *((unsigned int *)t58);
    t107 = (t105 || t106);
    if (t107 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t58) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t49) > 0)
        goto LAB33;

LAB34:    memcpy(t48, t108, 8);

LAB35:    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t3, 1, t36, 1, t48, 1);
    goto LAB22;

LAB20:    memcpy(t3, t36, 8);
    goto LAB22;

LAB23:    *((unsigned int *)t49) = 1;
    goto LAB26;

LAB25:    t57 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB26;

LAB27:    t64 = (t0 + 2648U);
    t65 = *((char **)t64);
    memset(t63, 0, 8);
    t64 = (t65 + 4);
    t66 = *((unsigned int *)t64);
    t67 = (~(t66));
    t68 = *((unsigned int *)t65);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t64) != 0)
        goto LAB38;

LAB39:    t72 = (t63 + 4);
    t73 = *((unsigned int *)t63);
    t74 = *((unsigned int *)t72);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB40;

LAB41:    t88 = *((unsigned int *)t63);
    t89 = (~(t88));
    t90 = *((unsigned int *)t72);
    t91 = (t89 || t90);
    if (t91 > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t72) > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t63) > 0)
        goto LAB46;

LAB47:    memcpy(t62, t95, 8);

LAB48:    goto LAB28;

LAB29:    t110 = (t0 + 2648U);
    t111 = *((char **)t110);
    memset(t109, 0, 8);
    t110 = (t111 + 4);
    t112 = *((unsigned int *)t110);
    t113 = (~(t112));
    t114 = *((unsigned int *)t111);
    t115 = (t114 & t113);
    t116 = (t115 & 1U);
    if (t116 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t110) != 0)
        goto LAB51;

LAB52:    t118 = (t109 + 4);
    t119 = *((unsigned int *)t109);
    t120 = *((unsigned int *)t118);
    t121 = (t119 || t120);
    if (t121 > 0)
        goto LAB53;

LAB54:    t132 = *((unsigned int *)t109);
    t133 = (~(t132));
    t134 = *((unsigned int *)t118);
    t135 = (t133 || t134);
    if (t135 > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t118) > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t109) > 0)
        goto LAB59;

LAB60:    memcpy(t108, t138, 8);

LAB61:    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t48, 1, t62, 1, t108, 1);
    goto LAB35;

LAB33:    memcpy(t48, t62, 8);
    goto LAB35;

LAB36:    *((unsigned int *)t63) = 1;
    goto LAB39;

LAB38:    t71 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB39;

LAB40:    t76 = (t0 + 4168);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    memset(t79, 0, 8);
    t80 = (t79 + 4);
    t81 = (t78 + 4);
    t82 = *((unsigned int *)t78);
    t83 = (t82 >> 2);
    t84 = (t83 & 1);
    *((unsigned int *)t79) = t84;
    t85 = *((unsigned int *)t81);
    t86 = (t85 >> 2);
    t87 = (t86 & 1);
    *((unsigned int *)t80) = t87;
    goto LAB41;

LAB42:    t92 = (t0 + 4168);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    memset(t95, 0, 8);
    t96 = (t95 + 4);
    t97 = (t94 + 4);
    t98 = *((unsigned int *)t94);
    t99 = (t98 >> 0);
    t100 = (t99 & 1);
    *((unsigned int *)t95) = t100;
    t101 = *((unsigned int *)t97);
    t102 = (t101 >> 0);
    t103 = (t102 & 1);
    *((unsigned int *)t96) = t103;
    goto LAB43;

LAB44:    xsi_vlog_unsigned_bit_combine(t62, 1, t79, 1, t95, 1);
    goto LAB48;

LAB46:    memcpy(t62, t79, 8);
    goto LAB48;

LAB49:    *((unsigned int *)t109) = 1;
    goto LAB52;

LAB51:    t117 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t117) = 1;
    goto LAB52;

LAB53:    t122 = (t0 + 2968U);
    t123 = *((char **)t122);
    memset(t124, 0, 8);
    t122 = (t124 + 4);
    t125 = (t123 + 4);
    t126 = *((unsigned int *)t123);
    t127 = (t126 >> 0);
    t128 = (t127 & 1);
    *((unsigned int *)t124) = t128;
    t129 = *((unsigned int *)t125);
    t130 = (t129 >> 0);
    t131 = (t130 & 1);
    *((unsigned int *)t122) = t131;
    goto LAB54;

LAB55:    t136 = (t0 + 2968U);
    t137 = *((char **)t136);
    memset(t138, 0, 8);
    t136 = (t138 + 4);
    t139 = (t137 + 4);
    t140 = *((unsigned int *)t137);
    t141 = (t140 >> 2);
    t142 = (t141 & 1);
    *((unsigned int *)t138) = t142;
    t143 = *((unsigned int *)t139);
    t144 = (t143 >> 2);
    t145 = (t144 & 1);
    *((unsigned int *)t136) = t145;
    goto LAB56;

LAB57:    xsi_vlog_unsigned_bit_combine(t108, 1, t124, 1, t138, 1);
    goto LAB61;

LAB59:    memcpy(t108, t124, 8);
    goto LAB61;

}

static void NetDecl_19802_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
    char t30[8];
    char t31[8];
    char t47[8];
    char t63[8];
    char t76[8];
    char t77[8];
    char t92[8];
    char t106[8];
    char t118[8];
    char t119[8];
    char t134[8];
    char t149[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    char *t148;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;

LAB0:    t1 = (t0 + 6232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19802, ng0);
    t2 = (t0 + 2488U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t114 = *((unsigned int *)t4);
    t115 = (~(t114));
    t116 = *((unsigned int *)t12);
    t117 = (t115 || t116);
    if (t117 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t118, 8);

LAB16:    t158 = (t0 + 7152);
    t159 = (t158 + 56U);
    t160 = *((char **)t159);
    t161 = (t160 + 56U);
    t162 = *((char **)t161);
    memset(t162, 0, 8);
    t163 = 1U;
    t164 = t163;
    t165 = (t3 + 4);
    t166 = *((unsigned int *)t3);
    t163 = (t163 & t166);
    t167 = *((unsigned int *)t165);
    t164 = (t164 & t167);
    t168 = (t162 + 4);
    t169 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t169 | t163);
    t170 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t170 | t164);
    xsi_driver_vfirst_trans_delayed(t158, 0, 0U, 500LL, 0);
    t171 = (t0 + 6864);
    *((int *)t171) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 1688U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t18) != 0)
        goto LAB19;

LAB20:    t26 = (t17 + 4);
    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB21;

LAB22:    t72 = *((unsigned int *)t17);
    t73 = (~(t72));
    t74 = *((unsigned int *)t26);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t26) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t17) > 0)
        goto LAB27;

LAB28:    memcpy(t16, t76, 8);

LAB29:    goto LAB9;

LAB10:    t120 = (t0 + 2328U);
    t121 = *((char **)t120);
    memset(t119, 0, 8);
    t120 = (t121 + 4);
    t122 = *((unsigned int *)t120);
    t123 = (~(t122));
    t124 = *((unsigned int *)t121);
    t125 = (t124 & t123);
    t126 = (t125 & 1U);
    if (t126 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t120) != 0)
        goto LAB58;

LAB59:    t128 = (t119 + 4);
    t129 = *((unsigned int *)t119);
    t130 = *((unsigned int *)t128);
    t131 = (t129 || t130);
    if (t131 > 0)
        goto LAB60;

LAB61:    t142 = *((unsigned int *)t119);
    t143 = (~(t142));
    t144 = *((unsigned int *)t128);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t128) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t119) > 0)
        goto LAB66;

LAB67:    memcpy(t118, t149, 8);

LAB68:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t118, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t17) = 1;
    goto LAB20;

LAB19:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB20;

LAB21:    t32 = (t0 + 2648U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t33 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (~(t34));
    t36 = *((unsigned int *)t33);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t32) != 0)
        goto LAB32;

LAB33:    t40 = (t31 + 4);
    t41 = *((unsigned int *)t31);
    t42 = *((unsigned int *)t40);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB34;

LAB35:    t56 = *((unsigned int *)t31);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t40) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t31) > 0)
        goto LAB40;

LAB41:    memcpy(t30, t63, 8);

LAB42:    goto LAB22;

LAB23:    t78 = (t0 + 2648U);
    t79 = *((char **)t78);
    memset(t77, 0, 8);
    t78 = (t79 + 4);
    t80 = *((unsigned int *)t78);
    t81 = (~(t80));
    t82 = *((unsigned int *)t79);
    t83 = (t82 & t81);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t78) != 0)
        goto LAB45;

LAB46:    t86 = (t77 + 4);
    t87 = *((unsigned int *)t77);
    t88 = *((unsigned int *)t86);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB47;

LAB48:    t100 = *((unsigned int *)t77);
    t101 = (~(t100));
    t102 = *((unsigned int *)t86);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t86) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t77) > 0)
        goto LAB53;

LAB54:    memcpy(t76, t106, 8);

LAB55:    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t16, 1, t30, 1, t76, 1);
    goto LAB29;

LAB27:    memcpy(t16, t30, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t31) = 1;
    goto LAB33;

LAB32:    t39 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB33;

LAB34:    t44 = (t0 + 4168);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t47, 0, 8);
    t48 = (t47 + 4);
    t49 = (t46 + 4);
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 3);
    t52 = (t51 & 1);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 >> 3);
    t55 = (t54 & 1);
    *((unsigned int *)t48) = t55;
    goto LAB35;

LAB36:    t60 = (t0 + 4168);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memset(t63, 0, 8);
    t64 = (t63 + 4);
    t65 = (t62 + 4);
    t66 = *((unsigned int *)t62);
    t67 = (t66 >> 1);
    t68 = (t67 & 1);
    *((unsigned int *)t63) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 >> 1);
    t71 = (t70 & 1);
    *((unsigned int *)t64) = t71;
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t30, 1, t47, 1, t63, 1);
    goto LAB42;

LAB40:    memcpy(t30, t47, 8);
    goto LAB42;

LAB43:    *((unsigned int *)t77) = 1;
    goto LAB46;

LAB45:    t85 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB46;

LAB47:    t90 = (t0 + 2968U);
    t91 = *((char **)t90);
    memset(t92, 0, 8);
    t90 = (t92 + 4);
    t93 = (t91 + 4);
    t94 = *((unsigned int *)t91);
    t95 = (t94 >> 1);
    t96 = (t95 & 1);
    *((unsigned int *)t92) = t96;
    t97 = *((unsigned int *)t93);
    t98 = (t97 >> 1);
    t99 = (t98 & 1);
    *((unsigned int *)t90) = t99;
    goto LAB48;

LAB49:    t104 = (t0 + 2968U);
    t105 = *((char **)t104);
    memset(t106, 0, 8);
    t104 = (t106 + 4);
    t107 = (t105 + 4);
    t108 = *((unsigned int *)t105);
    t109 = (t108 >> 3);
    t110 = (t109 & 1);
    *((unsigned int *)t106) = t110;
    t111 = *((unsigned int *)t107);
    t112 = (t111 >> 3);
    t113 = (t112 & 1);
    *((unsigned int *)t104) = t113;
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t76, 1, t92, 1, t106, 1);
    goto LAB55;

LAB53:    memcpy(t76, t92, 8);
    goto LAB55;

LAB56:    *((unsigned int *)t119) = 1;
    goto LAB59;

LAB58:    t127 = (t119 + 4);
    *((unsigned int *)t119) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB59;

LAB60:    t132 = (t0 + 2968U);
    t133 = *((char **)t132);
    memset(t134, 0, 8);
    t132 = (t134 + 4);
    t135 = (t133 + 4);
    t136 = *((unsigned int *)t133);
    t137 = (t136 >> 1);
    t138 = (t137 & 1);
    *((unsigned int *)t134) = t138;
    t139 = *((unsigned int *)t135);
    t140 = (t139 >> 1);
    t141 = (t140 & 1);
    *((unsigned int *)t132) = t141;
    goto LAB61;

LAB62:    t146 = (t0 + 4328);
    t147 = (t146 + 56U);
    t148 = *((char **)t147);
    memset(t149, 0, 8);
    t150 = (t149 + 4);
    t151 = (t148 + 4);
    t152 = *((unsigned int *)t148);
    t153 = (t152 >> 0);
    t154 = (t153 & 1);
    *((unsigned int *)t149) = t154;
    t155 = *((unsigned int *)t151);
    t156 = (t155 >> 0);
    t157 = (t156 & 1);
    *((unsigned int *)t150) = t157;
    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t118, 1, t134, 1, t149, 1);
    goto LAB68;

LAB66:    memcpy(t118, t134, 8);
    goto LAB68;

}

static void Always_19811_5(char *t0)
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

LAB0:    t1 = (t0 + 6480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19811, ng0);
    t2 = (t0 + 6880);
    *((int *)t2) = 1;
    t3 = (t0 + 6512);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19811, ng0);

LAB5:    xsi_set_current_line(19812, ng0);
    t5 = (t0 + 1848U);
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

LAB11:    xsi_set_current_line(19814, ng0);

LAB14:    xsi_set_current_line(19815, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    t2 = (t0 + 3608U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t5, 1, t3, 1);
    t2 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 2, 500LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(19812, ng0);

LAB13:    xsi_set_current_line(19813, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 500LL);
    goto LAB12;

}


extern void secureip_m_03637151459234934693_0190266106_init()
{
	static char *pe[] = {(void *)NetDecl_19750_0,(void *)NetDecl_19752_1,(void *)Always_19754_2,(void *)NetDecl_19794_3,(void *)NetDecl_19802_4,(void *)Always_19811_5};
	xsi_register_didat("secureip_m_03637151459234934693_0190266106", "isim/isim_system.sim/secureip/m_03637151459234934693_0190266106.didat");
	xsi_register_executes(pe);
}
