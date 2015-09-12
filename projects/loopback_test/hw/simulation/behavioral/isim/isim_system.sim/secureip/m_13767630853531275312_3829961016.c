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
static unsigned int ng2[] = {255U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {32U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {63U, 0U};
static unsigned int ng7[] = {2U, 0U};



static void Cont_11930_0(char *t0)
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

LAB0:    t1 = (t0 + 11480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11930, ng0);
    t2 = (t0 + 5368U);
    t4 = *((char **)t2);
    t2 = (t0 + 5528U);
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
    t54 = (t0 + 17360);
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
    xsi_driver_vfirst_trans_delayed(t54, 0, 0, 500LL, 0);
    t67 = (t0 + 17008);
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

static void Always_11947_1(char *t0)
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

LAB0:    t1 = (t0 + 11728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11947, ng0);
    t2 = (t0 + 17024);
    *((int *)t2) = 1;
    t3 = (t0 + 11760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(11947, ng0);

LAB5:    xsi_set_current_line(11948, ng0);
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

LAB11:    xsi_set_current_line(11950, ng0);

LAB14:    xsi_set_current_line(11951, ng0);
    t2 = (t0 + 9608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 1);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 2488U);
    t19 = *((char **)t13);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t19, 1, t21, 1);
    t13 = (t0 + 9608);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 2, 500LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(11948, ng0);

LAB13:    xsi_set_current_line(11949, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 9608);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 500LL);
    goto LAB12;

}

static void NetDecl_11955_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 11976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11955, ng0);
    t2 = (t0 + 9608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 17424);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0U);
    t27 = (t0 + 17040);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_11957_3(char *t0)
{
    char t4[8];
    char t21[8];
    char t39[8];
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
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;

LAB0:    t1 = (t0 + 12224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11957, ng0);
    t2 = (t0 + 17056);
    *((int *)t2) = 1;
    t3 = (t0 + 12256);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(11957, ng0);

LAB5:    xsi_set_current_line(11958, ng0);
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

LAB11:    xsi_set_current_line(11961, ng0);
    t2 = (t0 + 5848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(11964, ng0);

LAB25:    xsi_set_current_line(11965, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3288U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_concat(t4, 8, 8, 3U, t3, 1, t5, 4, t2, 3);
    t6 = (t0 + 9928);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 8, 500LL);
    xsi_set_current_line(11966, ng0);
    t2 = (t0 + 9768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 7);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    memset(t4, 0, 8);
    t13 = (t21 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t21);
    t18 = (t17 & t16);
    t22 = (t18 & 1U);
    if (t22 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t13) == 0)
        goto LAB26;

LAB28:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;

LAB29:    t20 = (t4 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB30;

LAB31:
LAB32:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(11958, ng0);

LAB13:    xsi_set_current_line(11959, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 9928);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 500LL);
    xsi_set_current_line(11960, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 500LL);
    goto LAB12;

LAB14:    xsi_set_current_line(11961, ng0);

LAB17:    xsi_set_current_line(11962, ng0);
    t5 = (t0 + 9928);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    memset(t21, 0, 8);
    t13 = (t21 + 4);
    t19 = (t12 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t21) = t16;
    t17 = *((unsigned int *)t19);
    t18 = (t17 >> 7);
    t22 = (t18 & 1);
    *((unsigned int *)t13) = t22;
    memset(t4, 0, 8);
    t20 = (t21 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB21;

LAB19:    if (*((unsigned int *)t20) == 0)
        goto LAB18;

LAB20:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;

LAB21:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t4);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(11963, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3448U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_concat(t4, 8, 8, 3U, t3, 1, t5, 4, t2, 3);
    t6 = (t0 + 9768);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 8, 500LL);
    goto LAB16;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(11962, ng0);
    t35 = (t0 + 9928);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng3)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 8, t37, 8, t38, 8);
    t40 = (t0 + 9928);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 8, 500LL);
    goto LAB24;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(11966, ng0);
    t28 = (t0 + 9768);
    t29 = (t28 + 56U);
    t35 = *((char **)t29);
    t36 = ((char*)((ng3)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 8, t35, 8, t36, 8);
    t37 = (t0 + 9768);
    xsi_vlogvar_wait_assign_value(t37, t39, 0, 0, 8, 500LL);
    goto LAB32;

}

static void Always_11970_4(char *t0)
{
    char t4[8];
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
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;

LAB0:    t1 = (t0 + 12472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11970, ng0);
    t2 = (t0 + 17072);
    *((int *)t2) = 1;
    t3 = (t0 + 12504);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(11970, ng0);

LAB5:    xsi_set_current_line(11971, ng0);
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

LAB11:    xsi_set_current_line(11973, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 3128U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t2) == 0)
        goto LAB14;

LAB16:    t6 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t6) = 1;

LAB17:    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB19;

LAB18:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t23 & 1U);
    t25 = *((unsigned int *)t3);
    t26 = *((unsigned int *)t4);
    t27 = (t25 | t26);
    *((unsigned int *)t24) = t27;
    t19 = (t3 + 4);
    t20 = (t4 + 4);
    t28 = (t24 + 4);
    t29 = *((unsigned int *)t19);
    t30 = *((unsigned int *)t20);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB20;

LAB21:
LAB22:    t50 = (t24 + 4);
    t51 = *((unsigned int *)t50);
    t52 = (~(t51));
    t53 = *((unsigned int *)t24);
    t54 = (t53 & t52);
    t55 = (t54 != 0);
    if (t55 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(11976, ng0);
    t2 = (t0 + 9768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 7);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t4 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t21 = (t18 != 0);
    if (t21 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(11978, ng0);
    t2 = (t0 + 9928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 7);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t4 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t21 = (t18 != 0);
    if (t21 > 0)
        goto LAB31;

LAB32:
LAB33:
LAB29:
LAB25:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(11971, ng0);

LAB13:    xsi_set_current_line(11972, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 10088);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 500LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB19:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t13);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t12);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t18 | t21);
    goto LAB18;

LAB20:    t34 = *((unsigned int *)t24);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t24) = (t34 | t35);
    t36 = (t3 + 4);
    t37 = (t4 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (~(t38));
    t40 = *((unsigned int *)t3);
    t41 = (t40 & t39);
    t42 = *((unsigned int *)t37);
    t43 = (~(t42));
    t44 = *((unsigned int *)t4);
    t45 = (t44 & t43);
    t46 = (~(t41));
    t47 = (~(t45));
    t48 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t48 & t46);
    t49 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t49 & t47);
    goto LAB22;

LAB23:    xsi_set_current_line(11973, ng0);

LAB26:    xsi_set_current_line(11975, ng0);
    t56 = ((char*)((ng1)));
    t57 = (t0 + 10088);
    xsi_vlogvar_wait_assign_value(t57, t56, 0, 0, 1, 500LL);
    goto LAB25;

LAB27:    xsi_set_current_line(11976, ng0);

LAB30:    xsi_set_current_line(11977, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 10088);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 500LL);
    goto LAB29;

LAB31:    xsi_set_current_line(11978, ng0);

LAB34:    xsi_set_current_line(11979, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 10088);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 500LL);
    goto LAB33;

}

static void Cont_11990_5(char *t0)
{
    char t3[8];
    char t23[8];
    char t50[8];
    char t54[8];
    char t101[8];
    char t133[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    int t125;
    int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;

LAB0:    t1 = (t0 + 12720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11990, ng0);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 2008U);
    t22 = *((char **)t21);
    t24 = *((unsigned int *)t3);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t21 = (t3 + 4);
    t27 = (t22 + 4);
    t28 = (t23 + 4);
    t29 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB10;

LAB11:
LAB12:    t51 = (t0 + 2648U);
    t52 = *((char **)t51);
    t51 = (t0 + 2808U);
    t53 = *((char **)t51);
    t55 = *((unsigned int *)t52);
    t56 = *((unsigned int *)t53);
    t57 = (t55 | t56);
    *((unsigned int *)t54) = t57;
    t51 = (t52 + 4);
    t58 = (t53 + 4);
    t59 = (t54 + 4);
    t60 = *((unsigned int *)t51);
    t61 = *((unsigned int *)t58);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB13;

LAB14:
LAB15:    memset(t50, 0, 8);
    t81 = (t54 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t54);
    t85 = (t84 & t83);
    t86 = (t85 & 1U);
    if (t86 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t81) == 0)
        goto LAB16;

LAB18:    t87 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t87) = 1;

LAB19:    t88 = (t50 + 4);
    t89 = (t54 + 4);
    t90 = *((unsigned int *)t54);
    t91 = (~(t90));
    *((unsigned int *)t50) = t91;
    *((unsigned int *)t88) = 0;
    if (*((unsigned int *)t89) != 0)
        goto LAB21;

LAB20:    t96 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t96 & 1U);
    t97 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t97 & 1U);
    t98 = (t0 + 10088);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    t102 = *((unsigned int *)t50);
    t103 = *((unsigned int *)t100);
    t104 = (t102 & t103);
    *((unsigned int *)t101) = t104;
    t105 = (t50 + 4);
    t106 = (t100 + 4);
    t107 = (t101 + 4);
    t108 = *((unsigned int *)t105);
    t109 = *((unsigned int *)t106);
    t110 = (t108 | t109);
    *((unsigned int *)t107) = t110;
    t111 = *((unsigned int *)t107);
    t112 = (t111 != 0);
    if (t112 == 1)
        goto LAB22;

LAB23:
LAB24:    t134 = *((unsigned int *)t23);
    t135 = *((unsigned int *)t101);
    t136 = (t134 | t135);
    *((unsigned int *)t133) = t136;
    t137 = (t23 + 4);
    t138 = (t101 + 4);
    t139 = (t133 + 4);
    t140 = *((unsigned int *)t137);
    t141 = *((unsigned int *)t138);
    t142 = (t140 | t141);
    *((unsigned int *)t139) = t142;
    t143 = *((unsigned int *)t139);
    t144 = (t143 != 0);
    if (t144 == 1)
        goto LAB25;

LAB26:
LAB27:    t161 = (t0 + 17488);
    t162 = (t161 + 56U);
    t163 = *((char **)t162);
    t164 = (t163 + 56U);
    t165 = *((char **)t164);
    memset(t165, 0, 8);
    t166 = 1U;
    t167 = t166;
    t168 = (t133 + 4);
    t169 = *((unsigned int *)t133);
    t166 = (t166 & t169);
    t170 = *((unsigned int *)t168);
    t167 = (t167 & t170);
    t171 = (t165 + 4);
    t172 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t172 | t166);
    t173 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t173 | t167);
    xsi_driver_vfirst_trans_delayed(t161, 0, 0, 500LL, 0);
    t174 = (t0 + 17088);
    *((int *)t174) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

LAB10:    t34 = *((unsigned int *)t23);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t23) = (t34 | t35);
    t36 = (t3 + 4);
    t37 = (t22 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (~(t38));
    t40 = *((unsigned int *)t3);
    t41 = (t40 & t39);
    t42 = *((unsigned int *)t37);
    t43 = (~(t42));
    t44 = *((unsigned int *)t22);
    t45 = (t44 & t43);
    t46 = (~(t41));
    t47 = (~(t45));
    t48 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t48 & t46);
    t49 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t49 & t47);
    goto LAB12;

LAB13:    t65 = *((unsigned int *)t54);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t54) = (t65 | t66);
    t67 = (t52 + 4);
    t68 = (t53 + 4);
    t69 = *((unsigned int *)t67);
    t70 = (~(t69));
    t71 = *((unsigned int *)t52);
    t72 = (t71 & t70);
    t73 = *((unsigned int *)t68);
    t74 = (~(t73));
    t75 = *((unsigned int *)t53);
    t76 = (t75 & t74);
    t77 = (~(t72));
    t78 = (~(t76));
    t79 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t79 & t77);
    t80 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t80 & t78);
    goto LAB15;

LAB16:    *((unsigned int *)t50) = 1;
    goto LAB19;

LAB21:    t92 = *((unsigned int *)t50);
    t93 = *((unsigned int *)t89);
    *((unsigned int *)t50) = (t92 | t93);
    t94 = *((unsigned int *)t88);
    t95 = *((unsigned int *)t89);
    *((unsigned int *)t88) = (t94 | t95);
    goto LAB20;

LAB22:    t113 = *((unsigned int *)t101);
    t114 = *((unsigned int *)t107);
    *((unsigned int *)t101) = (t113 | t114);
    t115 = (t50 + 4);
    t116 = (t100 + 4);
    t117 = *((unsigned int *)t50);
    t118 = (~(t117));
    t119 = *((unsigned int *)t115);
    t120 = (~(t119));
    t121 = *((unsigned int *)t100);
    t122 = (~(t121));
    t123 = *((unsigned int *)t116);
    t124 = (~(t123));
    t125 = (t118 & t120);
    t126 = (t122 & t124);
    t127 = (~(t125));
    t128 = (~(t126));
    t129 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t129 & t127);
    t130 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t130 & t128);
    t131 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t131 & t127);
    t132 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t132 & t128);
    goto LAB24;

LAB25:    t145 = *((unsigned int *)t133);
    t146 = *((unsigned int *)t139);
    *((unsigned int *)t133) = (t145 | t146);
    t147 = (t23 + 4);
    t148 = (t101 + 4);
    t149 = *((unsigned int *)t147);
    t150 = (~(t149));
    t151 = *((unsigned int *)t23);
    t152 = (t151 & t150);
    t153 = *((unsigned int *)t148);
    t154 = (~(t153));
    t155 = *((unsigned int *)t101);
    t156 = (t155 & t154);
    t157 = (~(t152));
    t158 = (~(t156));
    t159 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t159 & t157);
    t160 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t160 & t158);
    goto LAB27;

}

static void Always_12009_6(char *t0)
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

LAB0:    t1 = (t0 + 12968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12009, ng0);
    t2 = (t0 + 17104);
    *((int *)t2) = 1;
    t3 = (t0 + 13000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12009, ng0);

LAB5:    xsi_set_current_line(12010, ng0);
    t5 = (t0 + 1048U);
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

LAB11:    xsi_set_current_line(12012, ng0);

LAB14:    xsi_set_current_line(12013, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 500LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(12010, ng0);

LAB13:    xsi_set_current_line(12011, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 500LL);
    goto LAB12;

}

static void Always_12017_7(char *t0)
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

LAB0:    t1 = (t0 + 13216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12017, ng0);
    t2 = (t0 + 17120);
    *((int *)t2) = 1;
    t3 = (t0 + 13248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12017, ng0);

LAB5:    xsi_set_current_line(12018, ng0);
    t5 = (t0 + 1208U);
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

LAB11:    xsi_set_current_line(12020, ng0);

LAB14:    xsi_set_current_line(12021, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 500LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(12018, ng0);

LAB13:    xsi_set_current_line(12019, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 500LL);
    goto LAB12;

}

static void Cont_12037_8(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 13464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12037, ng0);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 7, t3, 6, t2, 7);
    t5 = (t0 + 17552);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 127U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans_delayed(t5, 0, 6, 500LL, 0);
    t18 = (t0 + 17136);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_12039_9(char *t0)
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
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 13712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12039, ng0);
    t2 = (t0 + 17152);
    *((int *)t2) = 1;
    t3 = (t0 + 13744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12039, ng0);

LAB5:    xsi_set_current_line(12040, ng0);
    t5 = (t0 + 1208U);
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

LAB11:    xsi_set_current_line(12042, ng0);
    t2 = (t0 + 8648);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t6) == 0)
        goto LAB14;

LAB16:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB17:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(12044, ng0);
    t2 = (t0 + 4728U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t2) == 0)
        goto LAB22;

LAB24:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB25:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB20:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(12040, ng0);

LAB13:    xsi_set_current_line(12041, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 9128);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 6, 500LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(12042, ng0);

LAB21:    xsi_set_current_line(12043, ng0);
    t19 = (t0 + 6168U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t19 = (t21 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 1);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 1);
    *((unsigned int *)t19) = t26;
    t27 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t27 & 63U);
    t28 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t28 & 63U);
    t29 = (t0 + 9128);
    xsi_vlogvar_wait_assign_value(t29, t21, 0, 0, 6, 500LL);
    goto LAB20;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(12044, ng0);

LAB29:    xsi_set_current_line(12045, ng0);
    t12 = (t0 + 9128);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng5)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t19, 6, t20, 32);
    t22 = (t0 + 9128);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 6, 500LL);
    goto LAB28;

}

static void Always_12225_10(char *t0)
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
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
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
    char *t51;

LAB0:    t1 = (t0 + 13960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12225, ng0);
    t2 = (t0 + 17168);
    *((int *)t2) = 1;
    t3 = (t0 + 13992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12225, ng0);

LAB5:    xsi_set_current_line(12226, ng0);
    t5 = (t0 + 1048U);
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

LAB11:    xsi_set_current_line(12230, ng0);
    t2 = (t0 + 8488);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t6) == 0)
        goto LAB14;

LAB16:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB17:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(12234, ng0);
    t2 = (t0 + 4568U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t2) == 0)
        goto LAB22;

LAB24:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB25:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB20:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(12226, ng0);

LAB13:    xsi_set_current_line(12227, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 10408);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 500LL);
    xsi_set_current_line(12228, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 500LL);
    xsi_set_current_line(12229, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 500LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(12230, ng0);

LAB21:    xsi_set_current_line(12231, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 10408);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 500LL);
    xsi_set_current_line(12232, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 500LL);
    xsi_set_current_line(12233, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 500LL);
    goto LAB20;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(12234, ng0);

LAB29:    xsi_set_current_line(12235, ng0);
    t12 = (t0 + 4248U);
    t13 = *((char **)t12);
    t12 = (t0 + 4408U);
    t19 = *((char **)t12);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t19);
    t24 = (t22 & t23);
    *((unsigned int *)t21) = t24;
    t12 = (t13 + 4);
    t20 = (t19 + 4);
    t25 = (t21 + 4);
    t26 = *((unsigned int *)t12);
    t27 = *((unsigned int *)t20);
    t28 = (t26 | t27);
    *((unsigned int *)t25) = t28;
    t29 = *((unsigned int *)t25);
    t30 = (t29 != 0);
    if (t30 == 1)
        goto LAB30;

LAB31:
LAB32:    t51 = (t0 + 10408);
    xsi_vlogvar_wait_assign_value(t51, t21, 0, 0, 1, 500LL);
    xsi_set_current_line(12236, ng0);
    t2 = (t0 + 4408U);
    t3 = *((char **)t2);
    t2 = (t0 + 10568);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 500LL);
    xsi_set_current_line(12239, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    t2 = (t0 + 4248U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng6)));
    xsi_vlogtype_concat(t4, 7, 7, 2U, t2, 6, t5, 1);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 7, t3, 7, t4, 7);
    t6 = (t0 + 10248);
    xsi_vlogvar_wait_assign_value(t6, t21, 0, 0, 7, 500LL);
    goto LAB28;

LAB30:    t31 = *((unsigned int *)t21);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t21) = (t31 | t32);
    t33 = (t13 + 4);
    t34 = (t19 + 4);
    t35 = *((unsigned int *)t13);
    t36 = (~(t35));
    t37 = *((unsigned int *)t33);
    t38 = (~(t37));
    t39 = *((unsigned int *)t19);
    t40 = (~(t39));
    t41 = *((unsigned int *)t34);
    t42 = (~(t41));
    t43 = (t36 & t38);
    t44 = (t40 & t42);
    t45 = (~(t43));
    t46 = (~(t44));
    t47 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t47 & t45);
    t48 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t48 & t46);
    t49 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t49 & t45);
    t50 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t50 & t46);
    goto LAB32;

}

static void Always_12245_11(char *t0)
{
    char t4[8];
    char t21[8];
    char t23[8];
    char t32[8];
    char t33[8];
    char t60[8];
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
    char *t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t61;

LAB0:    t1 = (t0 + 14208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12245, ng0);
    t2 = (t0 + 17184);
    *((int *)t2) = 1;
    t3 = (t0 + 14240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12245, ng0);

LAB5:    xsi_set_current_line(12246, ng0);
    t5 = (t0 + 1048U);
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

LAB11:    xsi_set_current_line(12248, ng0);
    t2 = (t0 + 8488);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t6) == 0)
        goto LAB14;

LAB16:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB17:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(12250, ng0);
    t2 = (t0 + 4568U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t2) == 0)
        goto LAB22;

LAB24:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB25:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB20:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(12246, ng0);

LAB13:    xsi_set_current_line(12247, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 8808);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 7, 500LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(12248, ng0);

LAB21:    xsi_set_current_line(12249, ng0);
    t19 = (t0 + 3768U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng3)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 7, t20, 7, t19, 7);
    t22 = (t0 + 8808);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 7, 500LL);
    goto LAB20;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(12250, ng0);

LAB29:    xsi_set_current_line(12251, ng0);
    t12 = (t0 + 3928U);
    t13 = *((char **)t12);
    t12 = (t0 + 4248U);
    t19 = *((char **)t12);
    memset(t23, 0, 8);
    t12 = (t19 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t12) != 0)
        goto LAB32;

LAB33:    t22 = (t23 + 4);
    t29 = *((unsigned int *)t23);
    t30 = *((unsigned int *)t22);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB34;

LAB35:    t53 = *((unsigned int *)t23);
    t54 = (~(t53));
    t55 = *((unsigned int *)t22);
    t56 = (t54 || t55);
    if (t56 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t22) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t23) > 0)
        goto LAB40;

LAB41:    memcpy(t21, t59, 8);

LAB42:    memset(t60, 0, 8);
    xsi_vlog_unsigned_add(t60, 7, t13, 7, t21, 7);
    t61 = (t0 + 8808);
    xsi_vlogvar_wait_assign_value(t61, t60, 0, 0, 7, 500LL);
    goto LAB28;

LAB30:    *((unsigned int *)t23) = 1;
    goto LAB33;

LAB32:    t20 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB33;

LAB34:    t34 = (t0 + 4408U);
    t35 = *((char **)t34);
    memset(t33, 0, 8);
    t34 = (t35 + 4);
    t36 = *((unsigned int *)t34);
    t37 = (~(t36));
    t38 = *((unsigned int *)t35);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB46;

LAB44:    if (*((unsigned int *)t34) == 0)
        goto LAB43;

LAB45:    t41 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t41) = 1;

LAB46:    t42 = (t33 + 4);
    t43 = (t35 + 4);
    t44 = *((unsigned int *)t35);
    t45 = (~(t44));
    *((unsigned int *)t33) = t45;
    *((unsigned int *)t42) = 0;
    if (*((unsigned int *)t43) != 0)
        goto LAB48;

LAB47:    t50 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t50 & 1U);
    t51 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t51 & 1U);
    t52 = ((char*)((ng1)));
    xsi_vlogtype_concat(t32, 7, 7, 2U, t52, 6, t33, 1);
    goto LAB35;

LAB36:    t57 = (t0 + 8808);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t21, 7, t32, 7, t59, 7);
    goto LAB42;

LAB40:    memcpy(t21, t32, 8);
    goto LAB42;

LAB43:    *((unsigned int *)t33) = 1;
    goto LAB46;

LAB48:    t46 = *((unsigned int *)t33);
    t47 = *((unsigned int *)t43);
    *((unsigned int *)t33) = (t46 | t47);
    t48 = *((unsigned int *)t42);
    t49 = *((unsigned int *)t43);
    *((unsigned int *)t42) = (t48 | t49);
    goto LAB47;

}

static void NetDecl_12258_12(char *t0)
{
    char t4[8];
    char t22[8];
    char t50[8];
    char t71[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
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
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;

LAB0:    t1 = (t0 + 14456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12258, ng0);
    t2 = (t0 + 4408U);
    t3 = *((char **)t2);
    t2 = (t0 + 4248U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;

LAB7:    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB9;

LAB8:    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 1U);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t21 & 1U);
    t23 = *((unsigned int *)t3);
    t24 = *((unsigned int *)t4);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = (t3 + 4);
    t27 = (t4 + 4);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t26);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB10;

LAB11:
LAB12:    t51 = (t0 + 10408);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    memset(t50, 0, 8);
    t54 = (t53 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t54) == 0)
        goto LAB13;

LAB15:    t60 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t60) = 1;

LAB16:    t61 = (t50 + 4);
    t62 = (t53 + 4);
    t63 = *((unsigned int *)t53);
    t64 = (~(t63));
    *((unsigned int *)t50) = t64;
    *((unsigned int *)t61) = 0;
    if (*((unsigned int *)t62) != 0)
        goto LAB18;

LAB17:    t69 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t69 & 1U);
    t70 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t70 & 1U);
    t72 = *((unsigned int *)t22);
    t73 = *((unsigned int *)t50);
    t74 = (t72 & t73);
    *((unsigned int *)t71) = t74;
    t75 = (t22 + 4);
    t76 = (t50 + 4);
    t77 = (t71 + 4);
    t78 = *((unsigned int *)t75);
    t79 = *((unsigned int *)t76);
    t80 = (t78 | t79);
    *((unsigned int *)t77) = t80;
    t81 = *((unsigned int *)t77);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB19;

LAB20:
LAB21:    t103 = (t0 + 17616);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    memset(t107, 0, 8);
    t108 = 1U;
    t109 = t108;
    t110 = (t71 + 4);
    t111 = *((unsigned int *)t71);
    t108 = (t108 & t111);
    t112 = *((unsigned int *)t110);
    t109 = (t109 & t112);
    t113 = (t107 + 4);
    t114 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t114 | t108);
    t115 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t115 | t109);
    xsi_driver_vfirst_trans(t103, 0, 0U);
    t116 = (t0 + 17200);
    *((int *)t116) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB9:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t13);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t18 | t19);
    goto LAB8;

LAB10:    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t34 | t35);
    t36 = (t3 + 4);
    t37 = (t4 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (~(t38));
    t40 = *((unsigned int *)t3);
    t41 = (t40 & t39);
    t42 = *((unsigned int *)t37);
    t43 = (~(t42));
    t44 = *((unsigned int *)t4);
    t45 = (t44 & t43);
    t46 = (~(t41));
    t47 = (~(t45));
    t48 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t48 & t46);
    t49 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t49 & t47);
    goto LAB12;

LAB13:    *((unsigned int *)t50) = 1;
    goto LAB16;

LAB18:    t65 = *((unsigned int *)t50);
    t66 = *((unsigned int *)t62);
    *((unsigned int *)t50) = (t65 | t66);
    t67 = *((unsigned int *)t61);
    t68 = *((unsigned int *)t62);
    *((unsigned int *)t61) = (t67 | t68);
    goto LAB17;

LAB19:    t83 = *((unsigned int *)t71);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t71) = (t83 | t84);
    t85 = (t22 + 4);
    t86 = (t50 + 4);
    t87 = *((unsigned int *)t22);
    t88 = (~(t87));
    t89 = *((unsigned int *)t85);
    t90 = (~(t89));
    t91 = *((unsigned int *)t50);
    t92 = (~(t91));
    t93 = *((unsigned int *)t86);
    t94 = (~(t93));
    t95 = (t88 & t90);
    t96 = (t92 & t94);
    t97 = (~(t95));
    t98 = (~(t96));
    t99 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t99 & t97);
    t100 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t100 & t98);
    t101 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t101 & t97);
    t102 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t102 & t98);
    goto LAB21;

}

static void NetDecl_12259_13(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 14704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12259, ng0);
    t2 = (t0 + 4408U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 17680);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0U);
    t34 = (t0 + 17216);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}

static void NetDecl_12260_14(char *t0)
{
    char t4[8];
    char t22[8];
    char t53[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;

LAB0:    t1 = (t0 + 14952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12260, ng0);
    t2 = (t0 + 4408U);
    t3 = *((char **)t2);
    t2 = (t0 + 4248U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;

LAB7:    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB9;

LAB8:    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 1U);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t21 & 1U);
    t23 = *((unsigned int *)t3);
    t24 = *((unsigned int *)t4);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = (t3 + 4);
    t27 = (t4 + 4);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t26);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB10;

LAB11:
LAB12:    t50 = (t0 + 10568);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t54 = *((unsigned int *)t22);
    t55 = *((unsigned int *)t52);
    t56 = (t54 & t55);
    *((unsigned int *)t53) = t56;
    t57 = (t22 + 4);
    t58 = (t52 + 4);
    t59 = (t53 + 4);
    t60 = *((unsigned int *)t57);
    t61 = *((unsigned int *)t58);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB13;

LAB14:
LAB15:    t85 = (t0 + 17744);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    memset(t89, 0, 8);
    t90 = 1U;
    t91 = t90;
    t92 = (t53 + 4);
    t93 = *((unsigned int *)t53);
    t90 = (t90 & t93);
    t94 = *((unsigned int *)t92);
    t91 = (t91 & t94);
    t95 = (t89 + 4);
    t96 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t96 | t90);
    t97 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t97 | t91);
    xsi_driver_vfirst_trans(t85, 0, 0U);
    t98 = (t0 + 17232);
    *((int *)t98) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB9:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t13);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t18 | t19);
    goto LAB8;

LAB10:    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t34 | t35);
    t36 = (t3 + 4);
    t37 = (t4 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (~(t38));
    t40 = *((unsigned int *)t3);
    t41 = (t40 & t39);
    t42 = *((unsigned int *)t37);
    t43 = (~(t42));
    t44 = *((unsigned int *)t4);
    t45 = (t44 & t43);
    t46 = (~(t41));
    t47 = (~(t45));
    t48 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t48 & t46);
    t49 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t49 & t47);
    goto LAB12;

LAB13:    t65 = *((unsigned int *)t53);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t53) = (t65 | t66);
    t67 = (t22 + 4);
    t68 = (t52 + 4);
    t69 = *((unsigned int *)t22);
    t70 = (~(t69));
    t71 = *((unsigned int *)t67);
    t72 = (~(t71));
    t73 = *((unsigned int *)t52);
    t74 = (~(t73));
    t75 = *((unsigned int *)t68);
    t76 = (~(t75));
    t77 = (t70 & t72);
    t78 = (t74 & t76);
    t79 = (~(t77));
    t80 = (~(t78));
    t81 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t81 & t79);
    t82 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t82 & t80);
    t83 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t83 & t79);
    t84 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t84 & t80);
    goto LAB15;

}

static void Always_12262_15(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char t39[8];
    char t40[8];
    char t59[8];
    char t60[8];
    char t61[8];
    char t82[8];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t83;

LAB0:    t1 = (t0 + 15200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12262, ng0);
    t2 = (t0 + 17248);
    *((int *)t2) = 1;
    t3 = (t0 + 15232);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12262, ng0);

LAB5:    xsi_set_current_line(12263, ng0);
    t5 = (t0 + 1048U);
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

LAB11:    xsi_set_current_line(12265, ng0);
    t2 = (t0 + 8488);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t6) == 0)
        goto LAB14;

LAB16:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB17:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(12267, ng0);
    t2 = (t0 + 4568U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t2) == 0)
        goto LAB22;

LAB24:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB25:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB20:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(12263, ng0);

LAB13:    xsi_set_current_line(12264, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 8968);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 7, 500LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(12265, ng0);

LAB21:    xsi_set_current_line(12266, ng0);
    t19 = (t0 + 3768U);
    t20 = *((char **)t19);
    t19 = (t0 + 8968);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, 0, 7, 500LL);
    goto LAB20;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(12267, ng0);

LAB29:    xsi_set_current_line(12268, ng0);
    t12 = (t0 + 6328U);
    t13 = *((char **)t12);
    memset(t22, 0, 8);
    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t12) != 0)
        goto LAB32;

LAB33:    t20 = (t22 + 4);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t20);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB34;

LAB35:    t34 = *((unsigned int *)t22);
    t35 = (~(t34));
    t36 = *((unsigned int *)t20);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t20) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t22) > 0)
        goto LAB40;

LAB41:    memcpy(t21, t38, 8);

LAB42:    t41 = (t0 + 6488U);
    t42 = *((char **)t41);
    memset(t40, 0, 8);
    t41 = (t42 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t42);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t41) != 0)
        goto LAB45;

LAB46:    t49 = (t40 + 4);
    t50 = *((unsigned int *)t40);
    t51 = *((unsigned int *)t49);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB47;

LAB48:    t55 = *((unsigned int *)t40);
    t56 = (~(t55));
    t57 = *((unsigned int *)t49);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t49) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t40) > 0)
        goto LAB53;

LAB54:    memcpy(t39, t53, 8);

LAB55:    memset(t59, 0, 8);
    xsi_vlog_unsigned_add(t59, 7, t21, 7, t39, 7);
    t62 = (t0 + 6648U);
    t63 = *((char **)t62);
    memset(t61, 0, 8);
    t62 = (t63 + 4);
    t64 = *((unsigned int *)t62);
    t65 = (~(t64));
    t66 = *((unsigned int *)t63);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t62) != 0)
        goto LAB58;

LAB59:    t70 = (t61 + 4);
    t71 = *((unsigned int *)t61);
    t72 = *((unsigned int *)t70);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB60;

LAB61:    t77 = *((unsigned int *)t61);
    t78 = (~(t77));
    t79 = *((unsigned int *)t70);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t70) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t61) > 0)
        goto LAB66;

LAB67:    memcpy(t60, t81, 8);

LAB68:    memset(t82, 0, 8);
    xsi_vlog_unsigned_add(t82, 7, t59, 7, t60, 7);
    t83 = (t0 + 8968);
    xsi_vlogvar_wait_assign_value(t83, t82, 0, 0, 7, 500LL);
    goto LAB28;

LAB30:    *((unsigned int *)t22) = 1;
    goto LAB33;

LAB32:    t19 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB33;

LAB34:    t31 = (t0 + 8968);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    goto LAB35;

LAB36:    t38 = ((char*)((ng1)));
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t21, 7, t33, 7, t38, 7);
    goto LAB42;

LAB40:    memcpy(t21, t33, 8);
    goto LAB42;

LAB43:    *((unsigned int *)t40) = 1;
    goto LAB46;

LAB45:    t48 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB46;

LAB47:    t53 = (t0 + 3928U);
    t54 = *((char **)t53);
    goto LAB48;

LAB49:    t53 = ((char*)((ng7)));
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t39, 7, t54, 7, t53, 7);
    goto LAB55;

LAB53:    memcpy(t39, t54, 8);
    goto LAB55;

LAB56:    *((unsigned int *)t61) = 1;
    goto LAB59;

LAB58:    t69 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB59;

LAB60:    t74 = (t0 + 10248);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    goto LAB61;

LAB62:    t81 = ((char*)((ng1)));
    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t60, 7, t76, 7, t81, 7);
    goto LAB68;

LAB66:    memcpy(t60, t76, 8);
    goto LAB68;

}

static void Always_12292_16(char *t0)
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

LAB0:    t1 = (t0 + 15448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12292, ng0);
    t2 = (t0 + 17264);
    *((int *)t2) = 1;
    t3 = (t0 + 15480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12292, ng0);

LAB5:    xsi_set_current_line(12293, ng0);
    t5 = (t0 + 5688U);
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

LAB11:    xsi_set_current_line(12295, ng0);
    t2 = (t0 + 7128U);
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

LAB10:    xsi_set_current_line(12293, ng0);

LAB13:    xsi_set_current_line(12294, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 9288);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 16, 500LL);
    goto LAB12;

LAB14:    xsi_set_current_line(12295, ng0);

LAB17:    xsi_set_current_line(12296, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 9128);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t19 = ((char*)((ng1)));
    xsi_vlogtype_concat(t4, 16, 16, 3U, t19, 9, t13, 6, t5, 1);
    t20 = (t0 + 9288);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 16, 500LL);
    goto LAB16;

}

static void Always_12314_17(char *t0)
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
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 15696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12314, ng0);
    t2 = (t0 + 17280);
    *((int *)t2) = 1;
    t3 = (t0 + 15728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12314, ng0);

LAB5:    xsi_set_current_line(12315, ng0);
    t5 = (t0 + 5688U);
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

LAB11:    xsi_set_current_line(12317, ng0);
    t2 = (t0 + 7288U);
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

LAB10:    xsi_set_current_line(12315, ng0);

LAB13:    xsi_set_current_line(12316, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 9448);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 16, 500LL);
    goto LAB12;

LAB14:    xsi_set_current_line(12317, ng0);

LAB17:    xsi_set_current_line(12318, ng0);
    t5 = (t0 + 8968);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng1)));
    t19 = (t0 + 8808);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng1)));
    xsi_vlogtype_concat(t4, 16, 16, 4U, t22, 1, t21, 7, t13, 1, t12, 7);
    t23 = (t0 + 9448);
    xsi_vlogvar_wait_assign_value(t23, t4, 0, 0, 16, 500LL);
    goto LAB16;

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

LAB0:    t1 = (t0 + 15944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 17808);
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

static void implSig2_execute(char *t0)
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

LAB0:    t1 = (t0 + 16192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 17872);
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

static void implSig3_execute(char *t0)
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

LAB0:    t1 = (t0 + 16440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 17936);
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

static void implSig4_execute(char *t0)
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

LAB0:    t1 = (t0 + 16688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 18000);
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


extern void secureip_m_13767630853531275312_3829961016_init()
{
	static char *pe[] = {(void *)Cont_11930_0,(void *)Always_11947_1,(void *)NetDecl_11955_2,(void *)Always_11957_3,(void *)Always_11970_4,(void *)Cont_11990_5,(void *)Always_12009_6,(void *)Always_12017_7,(void *)Cont_12037_8,(void *)Always_12039_9,(void *)Always_12225_10,(void *)Always_12245_11,(void *)NetDecl_12258_12,(void *)NetDecl_12259_13,(void *)NetDecl_12260_14,(void *)Always_12262_15,(void *)Always_12292_16,(void *)Always_12314_17,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute,(void *)implSig4_execute};
	xsi_register_didat("secureip_m_13767630853531275312_3829961016", "isim/isim_system.sim/secureip/m_13767630853531275312_3829961016.didat");
	xsi_register_executes(pe);
}
