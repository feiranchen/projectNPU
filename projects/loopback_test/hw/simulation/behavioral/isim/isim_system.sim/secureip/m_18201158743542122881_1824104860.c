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
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {5U, 0U};
static int ng7[] = {1, 0};
static int ng8[] = {6, 0};
static int ng9[] = {5, 0};
static int ng10[] = {4, 0};
static int ng11[] = {3, 0};
static unsigned int ng12[] = {6U, 0U};
static unsigned int ng13[] = {4U, 0U};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {4U, 1U};



static int sp_gray(char *t1, char *t2)
{
    char t6[8];
    char t7[8];
    char t20[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t0 = 1;
    xsi_set_current_line(27451, ng0);

LAB2:    xsi_set_current_line(27452, ng0);
    t3 = (t1 + 26680);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t8 = (t1 + 26680);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t7, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 1);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 1);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 31U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 31U);
    t19 = ((char*)((ng1)));
    xsi_vlogtype_concat(t6, 6, 6, 2U, t19, 1, t7, 5);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 ^ t22);
    *((unsigned int *)t20) = t23;
    t24 = (t5 + 4);
    t25 = (t6 + 4);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t24);
    t28 = *((unsigned int *)t25);
    t29 = (t27 | t28);
    *((unsigned int *)t26) = t29;
    t30 = *((unsigned int *)t26);
    t31 = (t30 != 0);
    if (t31 == 1)
        goto LAB3;

LAB4:
LAB5:    t34 = (t1 + 26520);
    xsi_vlogvar_assign_value(t34, t20, 0, 0, 6);
    t0 = 0;

LAB1:    return t0;
LAB3:    t32 = *((unsigned int *)t20);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t20) = (t32 | t33);
    goto LAB5;

}

static void Cont_27121_0(char *t0)
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

LAB0:    t1 = (t0 + 27592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27121, ng0);
    t2 = (t0 + 9160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 3, t3, 2, t2, 3);
    t5 = (t0 + 38552);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
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
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 37832);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_27122_1(char *t0)
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

LAB0:    t1 = (t0 + 27840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27122, ng0);
    t2 = (t0 + 12040U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 3, t3, 2, t2, 3);
    t5 = (t0 + 38616);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
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
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 37848);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_27123_2(char *t0)
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

LAB0:    t1 = (t0 + 28088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27123, ng0);
    t2 = (t0 + 12040U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 3, t3, 2, t2, 3);
    t5 = (t0 + 38680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
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
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 37864);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_27124_3(char *t0)
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

LAB0:    t1 = (t0 + 28336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27124, ng0);
    t2 = (t0 + 12040U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 3, t3, 2, t2, 3);
    t5 = (t0 + 38744);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
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
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 37880);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_27125_4(char *t0)
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

LAB0:    t1 = (t0 + 28584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27125, ng0);
    t2 = (t0 + 3880U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 4, t3, 3, t2, 4);
    t5 = (t0 + 38808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
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
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 37896);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_27209_5(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 28832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27209, ng0);
    t2 = (t0 + 3720U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 38872);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans_delayed(t12, 0, 0U, 500LL, 0);
    t25 = (t0 + 37912);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_27210_6(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 29080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27210, ng0);
    t2 = (t0 + 3720U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 38936);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans_delayed(t12, 0, 0U, 500LL, 0);
    t25 = (t0 + 37928);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_27211_7(char *t0)
{
    char t4[8];
    char t22[8];
    char t41[8];
    char t73[8];
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
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;

LAB0:    t1 = (t0 + 29328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27211, ng0);
    t2 = (t0 + 15560U);
    t3 = *((char **)t2);
    t2 = (t0 + 9640U);
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
    t23 = (t0 + 15400U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t24 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t23) == 0)
        goto LAB10;

LAB12:    t30 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t30) = 1;

LAB13:    t31 = (t22 + 4);
    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (~(t33));
    *((unsigned int *)t22) = t34;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB15;

LAB14:    t39 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t39 & 1U);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 1U);
    t42 = *((unsigned int *)t4);
    t43 = *((unsigned int *)t22);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t4 + 4);
    t46 = (t22 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB16;

LAB17:
LAB18:    t74 = *((unsigned int *)t3);
    t75 = *((unsigned int *)t41);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t77 = (t3 + 4);
    t78 = (t41 + 4);
    t79 = (t73 + 4);
    t80 = *((unsigned int *)t77);
    t81 = *((unsigned int *)t78);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t83 = *((unsigned int *)t79);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB19;

LAB20:
LAB21:    t101 = (t0 + 39000);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    memset(t105, 0, 8);
    t106 = 1U;
    t107 = t106;
    t108 = (t73 + 4);
    t109 = *((unsigned int *)t73);
    t106 = (t106 & t109);
    t110 = *((unsigned int *)t108);
    t107 = (t107 & t110);
    t111 = (t105 + 4);
    t112 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t112 | t106);
    t113 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t113 | t107);
    xsi_driver_vfirst_trans_delayed(t101, 0, 0U, 500LL, 0);
    t114 = (t0 + 37944);
    *((int *)t114) = 1;

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

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB15:    t35 = *((unsigned int *)t22);
    t36 = *((unsigned int *)t32);
    *((unsigned int *)t22) = (t35 | t36);
    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t37 | t38);
    goto LAB14;

LAB16:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t4 + 4);
    t56 = (t22 + 4);
    t57 = *((unsigned int *)t4);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t22);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB18;

LAB19:    t85 = *((unsigned int *)t73);
    t86 = *((unsigned int *)t79);
    *((unsigned int *)t73) = (t85 | t86);
    t87 = (t3 + 4);
    t88 = (t41 + 4);
    t89 = *((unsigned int *)t87);
    t90 = (~(t89));
    t91 = *((unsigned int *)t3);
    t92 = (t91 & t90);
    t93 = *((unsigned int *)t88);
    t94 = (~(t93));
    t95 = *((unsigned int *)t41);
    t96 = (t95 & t94);
    t97 = (~(t92));
    t98 = (~(t96));
    t99 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t99 & t97);
    t100 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t100 & t98);
    goto LAB21;

}

static void Cont_27285_8(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 29576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27285, ng0);
    t2 = (t0 + 15720U);
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

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t16 = (t0 + 39064);
    t23 = (t16 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans_delayed(t16, 0, 0, 500LL, 0);
    t35 = (t0 + 37960);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 16360U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 16200U);
    t22 = *((char **)t16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t17, 1, t22, 1);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Cont_27287_9(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 29824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27287, ng0);
    t2 = (t0 + 15720U);
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

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t16 = (t0 + 39128);
    t23 = (t16 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans_delayed(t16, 0, 0, 500LL, 0);
    t35 = (t0 + 37976);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 16680U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 16520U);
    t22 = *((char **)t16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t17, 1, t22, 1);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Cont_27289_10(char *t0)
{
    char t3[8];
    char t4[8];
    char t22[8];
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
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
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

LAB0:    t1 = (t0 + 30072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27289, ng0);
    t2 = (t0 + 15720U);
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

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t23 = (t0 + 39192);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 3U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans_delayed(t23, 0, 1, 500LL, 0);
    t37 = (t0 + 37992);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 17000U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = ((char*)((ng5)));
    t23 = (t0 + 16840U);
    t24 = *((char **)t23);
    xsi_vlog_mul_concat(t22, 2, 1, t16, 1U, t24, 1);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 2, t17, 2, t22, 2);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Cont_27292_11(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 30320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27292, ng0);
    t2 = (t0 + 15720U);
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

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t16 = (t0 + 39256);
    t23 = (t16 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 63U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans_delayed(t16, 0, 5, 500LL, 0);
    t35 = (t0 + 38008);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 17960U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 17800U);
    t22 = *((char **)t16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 6, t17, 6, t22, 6);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Cont_27294_12(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 30568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27294, ng0);
    t2 = (t0 + 15720U);
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

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t16 = (t0 + 39320);
    t23 = (t16 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 63U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans_delayed(t16, 0, 5, 500LL, 0);
    t35 = (t0 + 38024);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 18280U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 18120U);
    t22 = *((char **)t16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 6, t17, 6, t22, 6);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Cont_27296_13(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 30816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27296, ng0);
    t2 = (t0 + 15720U);
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

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t16 = (t0 + 39384);
    t23 = (t16 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 127U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans_delayed(t16, 0, 6, 500LL, 0);
    t35 = (t0 + 38040);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 18600U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 18440U);
    t22 = *((char **)t16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 7, t17, 7, t22, 7);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Cont_27298_14(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 31064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27298, ng0);
    t2 = (t0 + 15720U);
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

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t16 = (t0 + 39448);
    t23 = (t16 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 7U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans_delayed(t16, 0, 2, 500LL, 0);
    t35 = (t0 + 38056);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 18920U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 18760U);
    t22 = *((char **)t16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 3, t17, 3, t22, 3);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Cont_27300_15(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 31312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27300, ng0);
    t2 = (t0 + 15720U);
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

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t16 = (t0 + 39512);
    t23 = (t16 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans_delayed(t16, 0, 0, 500LL, 0);
    t35 = (t0 + 38072);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 19240U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 19080U);
    t22 = *((char **)t16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t17, 1, t22, 1);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Cont_27302_16(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 31560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27302, ng0);
    t2 = (t0 + 15720U);
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

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t16 = (t0 + 39576);
    t23 = (t16 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans_delayed(t16, 0, 0, 500LL, 0);
    t35 = (t0 + 38088);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 19560U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 19400U);
    t22 = *((char **)t16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t17, 1, t22, 1);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Cont_27442_17(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 31808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27442, ng0);
    t2 = (t0 + 9800U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 7, 7, 2U, t2, 1, t4, 6);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 7, t3, 7, t5, 7);
    t7 = (t0 + 39640);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 127U;
    t13 = t12;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans_delayed(t7, 0, 6, 500LL, 0);
    t20 = (t0 + 38104);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Cont_27443_18(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 32056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27443, ng0);
    t2 = (t0 + 9800U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 7, 7, 2U, t2, 1, t4, 6);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 7, t3, 7, t5, 7);
    t7 = (t0 + 39704);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 127U;
    t13 = t12;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans_delayed(t7, 0, 6, 500LL, 0);
    t20 = (t0 + 38120);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Cont_27444_19(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 32304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27444, ng0);
    t2 = (t0 + 9800U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 7, 7, 2U, t2, 1, t4, 6);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 7, t3, 7, t5, 7);
    t7 = (t0 + 39768);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 127U;
    t13 = t12;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans_delayed(t7, 0, 6, 500LL, 0);
    t20 = (t0 + 38136);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Cont_27445_20(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 32552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27445, ng0);
    t2 = (t0 + 9800U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 7, 7, 2U, t2, 1, t4, 6);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 7, t3, 7, t5, 7);
    t7 = (t0 + 39832);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 127U;
    t13 = t12;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans_delayed(t7, 0, 6, 500LL, 0);
    t20 = (t0 + 38152);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Cont_27458_21(char *t0)
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

LAB0:    t1 = (t0 + 32800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27458, ng0);
    t2 = (t0 + 5320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 6, t2, 32);
    t5 = (t0 + 39896);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 63U;
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
    xsi_driver_vfirst_trans(t5, 0, 5);
    t18 = (t0 + 38168);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_27459_22(char *t0)
{
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
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
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 33048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27459, ng0);
    t2 = (t0 + 20520U);
    t3 = *((char **)t2);
    t2 = (t0 + 32856);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    t6 = (t0 + 26680);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 6);

LAB4:    t7 = (t0 + 32952);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);
    if (t15 != 0)
        goto LAB6;

LAB5:    t8 = (t0 + 32952);
    t16 = *((char **)t8);
    t8 = (t0 + 26520);
    t17 = (t8 + 56U);
    t18 = *((char **)t17);
    memcpy(t19, t18, 8);
    t20 = (t0 + 848);
    t21 = (t0 + 32856);
    t22 = 0;
    xsi_delete_subprogram_invocation(t20, t16, t0, t21, t22);
    t23 = (t0 + 39960);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 63U;
    t29 = t28;
    t30 = (t19 + 4);
    t31 = *((unsigned int *)t19);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t23, 0, 5);
    t36 = (t0 + 38184);
    *((int *)t36) = 1;

LAB1:    return;
LAB6:    t7 = (t0 + 33048U);
    *((char **)t7) = &&LAB4;
    goto LAB1;

}

static void Always_27461_23(char *t0)
{
    char t4[8];
    char t21[8];
    char t43[8];
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
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;

LAB0:    t1 = (t0 + 33296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27461, ng0);
    t2 = (t0 + 38200);
    *((int *)t2) = 1;
    t3 = (t0 + 33328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27461, ng0);

LAB5:    xsi_set_current_line(27462, ng0);
    t5 = (t0 + 5640U);
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

LAB11:    xsi_set_current_line(27464, ng0);
    t2 = (t0 + 5800U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t2) == 0)
        goto LAB14;

LAB16:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB17:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(27466, ng0);
    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t2) == 0)
        goto LAB25;

LAB27:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB28:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB29;

LAB30:
LAB31:
LAB20:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(27462, ng0);

LAB13:    xsi_set_current_line(27463, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 24280);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 6, 500LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(27464, ng0);

LAB21:    xsi_set_current_line(27465, ng0);
    t12 = (t0 + 20840U);
    t13 = *((char **)t12);
    memset(t21, 0, 8);
    t12 = (t21 + 4);
    t19 = (t13 + 4);
    t22 = *((unsigned int *)t13);
    t23 = (t22 >> 1);
    *((unsigned int *)t21) = t23;
    t24 = *((unsigned int *)t19);
    t25 = (t24 >> 1);
    *((unsigned int *)t12) = t25;
    t26 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t26 & 63U);
    t27 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t27 & 63U);
    t20 = (t0 + 33104);
    t28 = (t0 + 848);
    t29 = xsi_create_subprogram_invocation(t20, 0, t0, t28, 0, 0);
    t30 = (t0 + 26680);
    xsi_vlogvar_assign_value(t30, t21, 0, 0, 6);

LAB22:    t31 = (t0 + 33200);
    t32 = *((char **)t31);
    t33 = (t32 + 80U);
    t34 = *((char **)t33);
    t35 = (t34 + 272U);
    t36 = *((char **)t35);
    t37 = (t36 + 0U);
    t38 = *((char **)t37);
    t39 = ((int  (*)(char *, char *))t38)(t0, t32);
    if (t39 != 0)
        goto LAB24;

LAB23:    t32 = (t0 + 33200);
    t40 = *((char **)t32);
    t32 = (t0 + 26520);
    t41 = (t32 + 56U);
    t42 = *((char **)t41);
    memcpy(t43, t42, 8);
    t44 = (t0 + 848);
    t45 = (t0 + 33104);
    t46 = 0;
    xsi_delete_subprogram_invocation(t44, t40, t0, t45, t46);
    t47 = (t0 + 24280);
    xsi_vlogvar_wait_assign_value(t47, t43, 0, 0, 6, 500LL);
    goto LAB20;

LAB24:    t31 = (t0 + 33296U);
    *((char **)t31) = &&LAB22;
    goto LAB1;

LAB25:    *((unsigned int *)t4) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(27466, ng0);

LAB32:    xsi_set_current_line(27467, ng0);
    t12 = (t0 + 20680U);
    t13 = *((char **)t12);
    t12 = (t0 + 24280);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 6, 500LL);
    goto LAB31;

}

static void Always_27478_24(char *t0)
{
    char t4[8];
    char t21[8];
    char t43[8];
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
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;

LAB0:    t1 = (t0 + 33544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27478, ng0);
    t2 = (t0 + 38216);
    *((int *)t2) = 1;
    t3 = (t0 + 33576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27478, ng0);

LAB5:    xsi_set_current_line(27479, ng0);
    t5 = (t0 + 5000U);
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

LAB11:    xsi_set_current_line(27483, ng0);
    t2 = (t0 + 5160U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t2) == 0)
        goto LAB14;

LAB16:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB17:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(27487, ng0);

LAB28:    xsi_set_current_line(27488, ng0);
    t2 = (t0 + 24280);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 24440);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 6, 500LL);
    xsi_set_current_line(27489, ng0);
    t2 = (t0 + 24440);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 24600);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 6, 500LL);
    xsi_set_current_line(27490, ng0);
    t2 = (t0 + 24600);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 5);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 5);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 24120);
    t19 = (t0 + 24120);
    t20 = (t19 + 72U);
    t28 = *((char **)t20);
    t29 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t21, t28, 2, t29, 32, 1);
    t30 = (t21 + 4);
    t15 = *((unsigned int *)t30);
    t39 = (!(t15));
    if (t39 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(27491, ng0);
    t2 = (t0 + 24600);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 4);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 4);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t11 & 3U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 3U);
    memset(t4, 0, 8);
    t13 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = *((unsigned int *)t21);
    t16 = (t16 & 1);
    if (*((unsigned int *)t13) != 0)
        goto LAB31;

LAB32:    t17 = 1;

LAB34:    t18 = (t17 <= 1);
    if (t18 == 1)
        goto LAB35;

LAB36:    *((unsigned int *)t4) = t16;

LAB33:    t20 = (t0 + 24120);
    t28 = (t0 + 24120);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t43, t30, 2, t31, 32, 1);
    t32 = (t43 + 4);
    t23 = *((unsigned int *)t32);
    t39 = (!(t23));
    if (t39 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(27492, ng0);
    t2 = (t0 + 24600);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 3);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 3);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t11 & 7U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 7U);
    memset(t4, 0, 8);
    t13 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = *((unsigned int *)t21);
    t16 = (t16 & 1);
    if (*((unsigned int *)t13) != 0)
        goto LAB40;

LAB41:    t17 = 1;

LAB43:    t18 = (t17 <= 2);
    if (t18 == 1)
        goto LAB44;

LAB45:    *((unsigned int *)t4) = t16;

LAB42:    t20 = (t0 + 24120);
    t28 = (t0 + 24120);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t43, t30, 2, t31, 32, 1);
    t32 = (t43 + 4);
    t23 = *((unsigned int *)t32);
    t39 = (!(t23));
    if (t39 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(27493, ng0);
    t2 = (t0 + 24600);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 2);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 2);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t11 & 15U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 15U);
    memset(t4, 0, 8);
    t13 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = *((unsigned int *)t21);
    t16 = (t16 & 1);
    if (*((unsigned int *)t13) != 0)
        goto LAB49;

LAB50:    t17 = 1;

LAB52:    t18 = (t17 <= 3);
    if (t18 == 1)
        goto LAB53;

LAB54:    *((unsigned int *)t4) = t16;

LAB51:    t20 = (t0 + 24120);
    t28 = (t0 + 24120);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t43, t30, 2, t31, 32, 1);
    t32 = (t43 + 4);
    t23 = *((unsigned int *)t32);
    t39 = (!(t23));
    if (t39 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(27494, ng0);
    t2 = (t0 + 24600);
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
    *((unsigned int *)t21) = (t11 & 31U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 31U);
    memset(t4, 0, 8);
    t13 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = *((unsigned int *)t21);
    t16 = (t16 & 1);
    if (*((unsigned int *)t13) != 0)
        goto LAB58;

LAB59:    t17 = 1;

LAB61:    t18 = (t17 <= 4);
    if (t18 == 1)
        goto LAB62;

LAB63:    *((unsigned int *)t4) = t16;

LAB60:    t20 = (t0 + 24120);
    t28 = (t0 + 24120);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t43, t30, 2, t31, 32, 1);
    t32 = (t43 + 4);
    t23 = *((unsigned int *)t32);
    t39 = (!(t23));
    if (t39 == 1)
        goto LAB65;

LAB66:    xsi_set_current_line(27495, ng0);
    t2 = (t0 + 24600);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t11 & 63U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 63U);
    memset(t4, 0, 8);
    t13 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = *((unsigned int *)t21);
    t16 = (t16 & 1);
    if (*((unsigned int *)t13) != 0)
        goto LAB67;

LAB68:    t17 = 1;

LAB70:    t18 = (t17 <= 5);
    if (t18 == 1)
        goto LAB71;

LAB72:    *((unsigned int *)t4) = t16;

LAB69:    t20 = (t0 + 24120);
    t28 = (t0 + 24120);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t43, t30, 2, t31, 32, 1);
    t32 = (t43 + 4);
    t23 = *((unsigned int *)t32);
    t39 = (!(t23));
    if (t39 == 1)
        goto LAB74;

LAB75:
LAB20:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(27479, ng0);

LAB13:    xsi_set_current_line(27480, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 24440);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 6, 500LL);
    xsi_set_current_line(27481, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 24600);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 500LL);
    xsi_set_current_line(27482, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 24120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 500LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(27483, ng0);

LAB21:    xsi_set_current_line(27484, ng0);
    t12 = (t0 + 21000U);
    t13 = *((char **)t12);
    memset(t21, 0, 8);
    t12 = (t21 + 4);
    t19 = (t13 + 4);
    t22 = *((unsigned int *)t13);
    t23 = (t22 >> 1);
    *((unsigned int *)t21) = t23;
    t24 = *((unsigned int *)t19);
    t25 = (t24 >> 1);
    *((unsigned int *)t12) = t25;
    t26 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t26 & 63U);
    t27 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t27 & 63U);
    t20 = (t0 + 33352);
    t28 = (t0 + 848);
    t29 = xsi_create_subprogram_invocation(t20, 0, t0, t28, 0, 0);
    t30 = (t0 + 26680);
    xsi_vlogvar_assign_value(t30, t21, 0, 0, 6);

LAB22:    t31 = (t0 + 33448);
    t32 = *((char **)t31);
    t33 = (t32 + 80U);
    t34 = *((char **)t33);
    t35 = (t34 + 272U);
    t36 = *((char **)t35);
    t37 = (t36 + 0U);
    t38 = *((char **)t37);
    t39 = ((int  (*)(char *, char *))t38)(t0, t32);
    if (t39 != 0)
        goto LAB24;

LAB23:    t32 = (t0 + 33448);
    t40 = *((char **)t32);
    t32 = (t0 + 26520);
    t41 = (t32 + 56U);
    t42 = *((char **)t41);
    memcpy(t43, t42, 8);
    t44 = (t0 + 848);
    t45 = (t0 + 33352);
    t46 = 0;
    xsi_delete_subprogram_invocation(t44, t40, t0, t45, t46);
    t47 = (t0 + 24440);
    xsi_vlogvar_wait_assign_value(t47, t43, 0, 0, 6, 500LL);
    xsi_set_current_line(27485, ng0);
    t2 = (t0 + 21160U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 63U);
    t6 = (t0 + 33352);
    t12 = (t0 + 848);
    t13 = xsi_create_subprogram_invocation(t6, 0, t0, t12, 0, 0);
    t19 = (t0 + 26680);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 6);

LAB25:    t20 = (t0 + 33448);
    t28 = *((char **)t20);
    t29 = (t28 + 80U);
    t30 = *((char **)t29);
    t31 = (t30 + 272U);
    t32 = *((char **)t31);
    t33 = (t32 + 0U);
    t34 = *((char **)t33);
    t39 = ((int  (*)(char *, char *))t34)(t0, t28);
    if (t39 != 0)
        goto LAB27;

LAB26:    t28 = (t0 + 33448);
    t35 = *((char **)t28);
    t28 = (t0 + 26520);
    t36 = (t28 + 56U);
    t37 = *((char **)t36);
    memcpy(t21, t37, 8);
    t38 = (t0 + 848);
    t40 = (t0 + 33352);
    t41 = 0;
    xsi_delete_subprogram_invocation(t38, t35, t0, t40, t41);
    t42 = (t0 + 24600);
    xsi_vlogvar_wait_assign_value(t42, t21, 0, 0, 6, 500LL);
    xsi_set_current_line(27486, ng0);
    t2 = (t0 + 21320U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 63U);
    t6 = (t0 + 24120);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 6, 500LL);
    goto LAB20;

LAB24:    t31 = (t0 + 33544U);
    *((char **)t31) = &&LAB22;
    goto LAB1;

LAB27:    t20 = (t0 + 33544U);
    *((char **)t20) = &&LAB25;
    goto LAB1;

LAB29:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t21), 1, 500LL);
    goto LAB30;

LAB31:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB33;

LAB35:    t15 = (t15 >> 1);
    t22 = (t15 & 1);
    t16 = (t16 ^ t22);

LAB37:    t17 = (t17 + 1);
    goto LAB34;

LAB38:    xsi_vlogvar_wait_assign_value(t20, t4, 0, *((unsigned int *)t43), 1, 500LL);
    goto LAB39;

LAB40:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB42;

LAB44:    t15 = (t15 >> 1);
    t22 = (t15 & 1);
    t16 = (t16 ^ t22);

LAB46:    t17 = (t17 + 1);
    goto LAB43;

LAB47:    xsi_vlogvar_wait_assign_value(t20, t4, 0, *((unsigned int *)t43), 1, 500LL);
    goto LAB48;

LAB49:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB51;

LAB53:    t15 = (t15 >> 1);
    t22 = (t15 & 1);
    t16 = (t16 ^ t22);

LAB55:    t17 = (t17 + 1);
    goto LAB52;

LAB56:    xsi_vlogvar_wait_assign_value(t20, t4, 0, *((unsigned int *)t43), 1, 500LL);
    goto LAB57;

LAB58:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB60;

LAB62:    t15 = (t15 >> 1);
    t22 = (t15 & 1);
    t16 = (t16 ^ t22);

LAB64:    t17 = (t17 + 1);
    goto LAB61;

LAB65:    xsi_vlogvar_wait_assign_value(t20, t4, 0, *((unsigned int *)t43), 1, 500LL);
    goto LAB66;

LAB67:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB69;

LAB71:    t15 = (t15 >> 1);
    t22 = (t15 & 1);
    t16 = (t16 ^ t22);

LAB73:    t17 = (t17 + 1);
    goto LAB70;

LAB74:    xsi_vlogvar_wait_assign_value(t20, t4, 0, *((unsigned int *)t43), 1, 500LL);
    goto LAB75;

}

static void Cont_27552_25(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 33792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27552, ng0);
    t2 = ((char*)((ng12)));
    t4 = (t0 + 9160U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 3, 3, 2U, t4, 1, t5, 2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 3, t2, 3, t3, 3);
    t7 = (t0 + 40024);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 7U;
    t13 = t12;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans_delayed(t7, 0, 2, 500LL, 0);
    t20 = (t0 + 38232);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Always_27554_26(char *t0)
{
    char t4[8];
    char t22[8];
    char t23[8];
    char t34[8];
    char t44[8];
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
    int t21;
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
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;

LAB0:    t1 = (t0 + 34040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27554, ng0);
    t2 = (t0 + 38248);
    *((int *)t2) = 1;
    t3 = (t0 + 34072);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27554, ng0);

LAB5:    xsi_set_current_line(27555, ng0);
    t5 = (t0 + 5000U);
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

LAB11:    xsi_set_current_line(27557, ng0);

LAB14:    xsi_set_current_line(27558, ng0);
    t2 = (t0 + 17480U);
    t3 = *((char **)t2);
    t2 = (t0 + 24760);
    t5 = (t0 + 24760);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t21 = (!(t7));
    if (t21 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(27559, ng0);
    t2 = (t0 + 9160U);
    t3 = *((char **)t2);
    memset(t23, 0, 8);
    t2 = (t23 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 1);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t22, 0, 8);
    t6 = (t23 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t23);
    t18 = (t17 & t16);
    t24 = (t18 & 1U);
    if (t24 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t6) != 0)
        goto LAB19;

LAB20:    t13 = (t22 + 4);
    t25 = *((unsigned int *)t22);
    t26 = *((unsigned int *)t13);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB21;

LAB22:    t28 = *((unsigned int *)t22);
    t29 = (~(t28));
    t30 = *((unsigned int *)t13);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t13) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t22) > 0)
        goto LAB27;

LAB28:    memcpy(t4, t34, 8);

LAB29:    t43 = (t0 + 24760);
    t45 = (t0 + 24760);
    t46 = (t45 + 72U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t44, t47, 2, t48, 32, 1);
    t49 = (t44 + 4);
    t50 = *((unsigned int *)t49);
    t21 = (!(t50));
    if (t21 == 1)
        goto LAB30;

LAB31:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(27555, ng0);

LAB13:    xsi_set_current_line(27556, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 24760);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 500LL);
    goto LAB12;

LAB15:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 500LL);
    goto LAB16;

LAB17:    *((unsigned int *)t22) = 1;
    goto LAB20;

LAB19:    t12 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB20;

LAB21:    t19 = (t0 + 17480U);
    t20 = *((char **)t19);
    goto LAB22;

LAB23:    t19 = (t0 + 24760);
    t32 = (t19 + 56U);
    t33 = *((char **)t32);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 1);
    t39 = (t38 & 1);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 >> 1);
    t42 = (t41 & 1);
    *((unsigned int *)t35) = t42;
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t4, 1, t20, 1, t34, 1);
    goto LAB29;

LAB27:    memcpy(t4, t20, 8);
    goto LAB29;

LAB30:    xsi_vlogvar_wait_assign_value(t43, t4, 0, *((unsigned int *)t44), 1, 500LL);
    goto LAB31;

}

static void Always_27564_27(char *t0)
{
    char t4[8];
    char t22[8];
    char t23[8];
    char t29[8];
    char t44[8];
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
    int t21;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t30;
    char *t31;
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
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;

LAB0:    t1 = (t0 + 34288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27564, ng0);
    t2 = (t0 + 38264);
    *((int *)t2) = 1;
    t3 = (t0 + 34320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27564, ng0);

LAB5:    xsi_set_current_line(27565, ng0);
    t5 = (t0 + 5000U);
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

LAB11:    xsi_set_current_line(27567, ng0);

LAB14:    xsi_set_current_line(27568, ng0);
    t2 = (t0 + 17640U);
    t3 = *((char **)t2);
    t2 = (t0 + 24920);
    t5 = (t0 + 24920);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t21 = (!(t7));
    if (t21 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(27569, ng0);
    t2 = (t0 + 21480U);
    t3 = *((char **)t2);
    memset(t23, 0, 8);
    t2 = (t23 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 1);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t22, 0, 8);
    t6 = (t23 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t23);
    t18 = (t17 & t16);
    t24 = (t18 & 1U);
    if (t24 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t6) != 0)
        goto LAB19;

LAB20:    t13 = (t22 + 4);
    t25 = *((unsigned int *)t22);
    t26 = *((unsigned int *)t13);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB21;

LAB22:    t38 = *((unsigned int *)t22);
    t39 = (~(t38));
    t40 = *((unsigned int *)t13);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t13) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t22) > 0)
        goto LAB27;

LAB28:    memcpy(t4, t43, 8);

LAB29:    t42 = (t0 + 24920);
    t45 = (t0 + 24920);
    t46 = (t45 + 72U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t44, t47, 2, t48, 32, 1);
    t49 = (t44 + 4);
    t50 = *((unsigned int *)t49);
    t21 = (!(t50));
    if (t21 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(27571, ng0);
    t2 = (t0 + 21480U);
    t3 = *((char **)t2);
    memset(t23, 0, 8);
    t2 = (t23 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 2);
    t9 = (t8 & 1);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 2);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t22, 0, 8);
    t6 = (t23 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t23);
    t18 = (t17 & t16);
    t24 = (t18 & 1U);
    if (t24 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t6) != 0)
        goto LAB34;

LAB35:    t13 = (t22 + 4);
    t25 = *((unsigned int *)t22);
    t26 = *((unsigned int *)t13);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB36;

LAB37:    t38 = *((unsigned int *)t22);
    t39 = (~(t38));
    t40 = *((unsigned int *)t13);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t13) > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t22) > 0)
        goto LAB42;

LAB43:    memcpy(t4, t43, 8);

LAB44:    t42 = (t0 + 24920);
    t45 = (t0 + 24920);
    t46 = (t45 + 72U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t44, t47, 2, t48, 32, 1);
    t49 = (t44 + 4);
    t50 = *((unsigned int *)t49);
    t21 = (!(t50));
    if (t21 == 1)
        goto LAB45;

LAB46:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(27565, ng0);

LAB13:    xsi_set_current_line(27566, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 24920);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 3, 500LL);
    goto LAB12;

LAB15:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 500LL);
    goto LAB16;

LAB17:    *((unsigned int *)t22) = 1;
    goto LAB20;

LAB19:    t12 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB20;

LAB21:    t19 = (t0 + 24920);
    t20 = (t19 + 56U);
    t28 = *((char **)t20);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t31 = (t28 + 4);
    t32 = *((unsigned int *)t28);
    t33 = (t32 >> 2);
    t34 = (t33 & 1);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 2);
    t37 = (t36 & 1);
    *((unsigned int *)t30) = t37;
    goto LAB22;

LAB23:    t42 = (t0 + 17640U);
    t43 = *((char **)t42);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t4, 1, t29, 1, t43, 1);
    goto LAB29;

LAB27:    memcpy(t4, t29, 8);
    goto LAB29;

LAB30:    xsi_vlogvar_wait_assign_value(t42, t4, 0, *((unsigned int *)t44), 1, 500LL);
    goto LAB31;

LAB32:    *((unsigned int *)t22) = 1;
    goto LAB35;

LAB34:    t12 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB35;

LAB36:    t19 = (t0 + 24920);
    t20 = (t19 + 56U);
    t28 = *((char **)t20);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t31 = (t28 + 4);
    t32 = *((unsigned int *)t28);
    t33 = (t32 >> 1);
    t34 = (t33 & 1);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 1);
    t37 = (t36 & 1);
    *((unsigned int *)t30) = t37;
    goto LAB37;

LAB38:    t42 = (t0 + 17640U);
    t43 = *((char **)t42);
    goto LAB39;

LAB40:    xsi_vlog_unsigned_bit_combine(t4, 1, t29, 1, t43, 1);
    goto LAB44;

LAB42:    memcpy(t4, t29, 8);
    goto LAB44;

LAB45:    xsi_vlogvar_wait_assign_value(t42, t4, 0, *((unsigned int *)t44), 1, 500LL);
    goto LAB46;

}

static void Cont_27580_28(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
    char t29[8];
    char t41[8];
    char t54[8];
    char t58[8];
    char t70[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
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
    unsigned int t52;
    unsigned int t53;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;

LAB0:    t1 = (t0 + 34536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27580, ng0);
    t2 = (t0 + 9160U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t50 = *((unsigned int *)t4);
    t51 = (~(t50));
    t52 = *((unsigned int *)t21);
    t53 = (t51 || t52);
    if (t53 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t54, 8);

LAB16:    t79 = (t0 + 40088);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    memset(t83, 0, 8);
    t84 = 3U;
    t85 = t84;
    t86 = (t3 + 4);
    t87 = *((unsigned int *)t3);
    t84 = (t84 & t87);
    t88 = *((unsigned int *)t86);
    t85 = (t85 & t88);
    t89 = (t83 + 4);
    t90 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t90 | t84);
    t91 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t91 | t85);
    xsi_driver_vfirst_trans_delayed(t79, 0, 1, 500LL, 0);
    t92 = (t0 + 38280);
    *((int *)t92) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t26 = (t0 + 24760);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t31 = (t28 + 4);
    t32 = *((unsigned int *)t28);
    t33 = (t32 >> 0);
    t34 = (t33 & 1);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 0);
    t37 = (t36 & 1);
    *((unsigned int *)t30) = t37;
    t38 = (t0 + 24920);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memset(t41, 0, 8);
    t42 = (t41 + 4);
    t43 = (t40 + 4);
    t44 = *((unsigned int *)t40);
    t45 = (t44 >> 0);
    t46 = (t45 & 1);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 >> 0);
    t49 = (t48 & 1);
    *((unsigned int *)t42) = t49;
    xsi_vlogtype_concat(t25, 2, 2, 2U, t41, 1, t29, 1);
    goto LAB9;

LAB10:    t55 = (t0 + 24920);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    memset(t58, 0, 8);
    t59 = (t58 + 4);
    t60 = (t57 + 4);
    t61 = *((unsigned int *)t57);
    t62 = (t61 >> 0);
    t63 = (t62 & 1);
    *((unsigned int *)t58) = t63;
    t64 = *((unsigned int *)t60);
    t65 = (t64 >> 0);
    t66 = (t65 & 1);
    *((unsigned int *)t59) = t66;
    t67 = (t0 + 24760);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    memset(t70, 0, 8);
    t71 = (t70 + 4);
    t72 = (t69 + 4);
    t73 = *((unsigned int *)t69);
    t74 = (t73 >> 0);
    t75 = (t74 & 1);
    *((unsigned int *)t70) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 >> 0);
    t78 = (t77 & 1);
    *((unsigned int *)t71) = t78;
    xsi_vlogtype_concat(t54, 2, 2, 2U, t70, 1, t58, 1);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 2, t25, 2, t54, 2);
    goto LAB16;

LAB14:    memcpy(t3, t25, 8);
    goto LAB16;

}

static void Always_27622_29(char *t0)
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

LAB0:    t1 = (t0 + 34784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27622, ng0);
    t2 = (t0 + 38296);
    *((int *)t2) = 1;
    t3 = (t0 + 34816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27622, ng0);

LAB5:    xsi_set_current_line(27623, ng0);
    t5 = (t0 + 5000U);
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

LAB11:    xsi_set_current_line(27626, ng0);

LAB14:    xsi_set_current_line(27627, ng0);
    t2 = (t0 + 15560U);
    t3 = *((char **)t2);
    memset(t21, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t2) != 0)
        goto LAB17;

LAB18:    t6 = (t21 + 4);
    t14 = *((unsigned int *)t21);
    t15 = *((unsigned int *)t6);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB19;

LAB20:    t17 = *((unsigned int *)t21);
    t18 = (~(t17));
    t22 = *((unsigned int *)t6);
    t23 = (t18 || t22);
    if (t23 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t6) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t21) > 0)
        goto LAB25;

LAB26:    memcpy(t4, t19, 8);

LAB27:    t12 = (t0 + 23320);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 4, 500LL);
    xsi_set_current_line(27628, ng0);
    t2 = (t0 + 15560U);
    t3 = *((char **)t2);
    memset(t21, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t2) != 0)
        goto LAB30;

LAB31:    t6 = (t21 + 4);
    t14 = *((unsigned int *)t21);
    t15 = *((unsigned int *)t6);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB32;

LAB33:    t17 = *((unsigned int *)t21);
    t18 = (~(t17));
    t22 = *((unsigned int *)t6);
    t23 = (t18 || t22);
    if (t23 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t6) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t21) > 0)
        goto LAB38;

LAB39:    memcpy(t4, t19, 8);

LAB40:    t12 = (t0 + 25080);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 4, 500LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(27623, ng0);

LAB13:    xsi_set_current_line(27624, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 23320);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 500LL);
    xsi_set_current_line(27625, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 25080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 500LL);
    goto LAB12;

LAB15:    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB17:    t5 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB18;

LAB19:    t12 = (t0 + 4040U);
    t13 = *((char **)t12);
    goto LAB20;

LAB21:    t12 = (t0 + 15880U);
    t19 = *((char **)t12);
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t4, 4, t13, 4, t19, 4);
    goto LAB27;

LAB25:    memcpy(t4, t13, 8);
    goto LAB27;

LAB28:    *((unsigned int *)t21) = 1;
    goto LAB31;

LAB30:    t5 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB31;

LAB32:    t12 = (t0 + 4040U);
    t13 = *((char **)t12);
    goto LAB33;

LAB34:    t12 = (t0 + 15880U);
    t19 = *((char **)t12);
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t4, 4, t13, 4, t19, 4);
    goto LAB40;

LAB38:    memcpy(t4, t13, 8);
    goto LAB40;

}

static void Always_27632_30(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
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
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 35032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27632, ng0);
    t2 = (t0 + 38312);
    *((int *)t2) = 1;
    t3 = (t0 + 35064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27632, ng0);

LAB5:    xsi_set_current_line(27633, ng0);
    t5 = (t0 + 5000U);
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

LAB11:    xsi_set_current_line(27641, ng0);

LAB14:    xsi_set_current_line(27642, ng0);
    t2 = (t0 + 15240U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t22, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t23 = (~(t18));
    t24 = (t15 & t23);
    if (t24 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t22) = 1;

LAB18:    memset(t21, 0, 8);
    t13 = (t22 + 4);
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t13) != 0)
        goto LAB21;

LAB22:    t20 = (t21 + 4);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t20);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB23;

LAB24:    t36 = *((unsigned int *)t21);
    t37 = (~(t36));
    t38 = *((unsigned int *)t20);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t20) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t21) > 0)
        goto LAB29;

LAB30:    memcpy(t4, t42, 8);

LAB31:    t43 = (t0 + 25240);
    xsi_vlogvar_wait_assign_value(t43, t4, 0, 0, 4, 500LL);
    xsi_set_current_line(27644, ng0);
    t2 = (t0 + 15240U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t22, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t23 = (~(t18));
    t24 = (t15 & t23);
    if (t24 != 0)
        goto LAB35;

LAB32:    if (t18 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t22) = 1;

LAB35:    memset(t21, 0, 8);
    t13 = (t22 + 4);
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t13) != 0)
        goto LAB38;

LAB39:    t20 = (t21 + 4);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t20);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB40;

LAB41:    t36 = *((unsigned int *)t21);
    t37 = (~(t36));
    t38 = *((unsigned int *)t20);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t20) > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t21) > 0)
        goto LAB46;

LAB47:    memcpy(t4, t42, 8);

LAB48:    t43 = (t0 + 25400);
    xsi_vlogvar_wait_assign_value(t43, t4, 0, 0, 4, 500LL);
    xsi_set_current_line(27646, ng0);
    t2 = (t0 + 15240U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t22, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t23 = (~(t18));
    t24 = (t15 & t23);
    if (t24 != 0)
        goto LAB52;

LAB49:    if (t18 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t22) = 1;

LAB52:    memset(t21, 0, 8);
    t13 = (t22 + 4);
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t13) != 0)
        goto LAB55;

LAB56:    t20 = (t21 + 4);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t20);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB57;

LAB58:    t36 = *((unsigned int *)t21);
    t37 = (~(t36));
    t38 = *((unsigned int *)t20);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t20) > 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t21) > 0)
        goto LAB63;

LAB64:    memcpy(t4, t42, 8);

LAB65:    t43 = (t0 + 25560);
    xsi_vlogvar_wait_assign_value(t43, t4, 0, 0, 4, 500LL);
    xsi_set_current_line(27648, ng0);
    t2 = (t0 + 15240U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t22, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t23 = (~(t18));
    t24 = (t15 & t23);
    if (t24 != 0)
        goto LAB69;

LAB66:    if (t18 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t22) = 1;

LAB69:    memset(t21, 0, 8);
    t13 = (t22 + 4);
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t13) != 0)
        goto LAB72;

LAB73:    t20 = (t21 + 4);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t20);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB74;

LAB75:    t36 = *((unsigned int *)t21);
    t37 = (~(t36));
    t38 = *((unsigned int *)t20);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t20) > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t21) > 0)
        goto LAB80;

LAB81:    memcpy(t4, t42, 8);

LAB82:    t43 = (t0 + 25720);
    xsi_vlogvar_wait_assign_value(t43, t4, 0, 0, 4, 500LL);
    xsi_set_current_line(27650, ng0);
    t2 = (t0 + 15240U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t22, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t23 = (~(t18));
    t24 = (t15 & t23);
    if (t24 != 0)
        goto LAB86;

LAB83:    if (t18 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t22) = 1;

LAB86:    memset(t21, 0, 8);
    t13 = (t22 + 4);
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t13) != 0)
        goto LAB89;

LAB90:    t20 = (t21 + 4);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t20);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB91;

LAB92:    t36 = *((unsigned int *)t21);
    t37 = (~(t36));
    t38 = *((unsigned int *)t20);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t20) > 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t21) > 0)
        goto LAB97;

LAB98:    memcpy(t4, t42, 8);

LAB99:    t43 = (t0 + 25880);
    xsi_vlogvar_wait_assign_value(t43, t4, 0, 0, 4, 500LL);
    xsi_set_current_line(27652, ng0);
    t2 = (t0 + 15240U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng14)));
    memset(t22, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t23 = (~(t18));
    t24 = (t15 & t23);
    if (t24 != 0)
        goto LAB103;

LAB100:    if (t18 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t22) = 1;

LAB103:    memset(t21, 0, 8);
    t13 = (t22 + 4);
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t13) != 0)
        goto LAB106;

LAB107:    t20 = (t21 + 4);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t20);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB108;

LAB109:    t36 = *((unsigned int *)t21);
    t37 = (~(t36));
    t38 = *((unsigned int *)t20);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t20) > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t21) > 0)
        goto LAB114;

LAB115:    memcpy(t4, t42, 8);

LAB116:    t43 = (t0 + 26040);
    xsi_vlogvar_wait_assign_value(t43, t4, 0, 0, 4, 500LL);
    xsi_set_current_line(27654, ng0);
    t2 = (t0 + 25080);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 26200);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 500LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(27633, ng0);

LAB13:    xsi_set_current_line(27634, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 25240);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 500LL);
    xsi_set_current_line(27635, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 25400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 500LL);
    xsi_set_current_line(27636, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 25560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 500LL);
    xsi_set_current_line(27637, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 25720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 500LL);
    xsi_set_current_line(27638, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 25880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 500LL);
    xsi_set_current_line(27639, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 26040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 500LL);
    xsi_set_current_line(27640, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 26200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 500LL);
    goto LAB12;

LAB17:    t12 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t21) = 1;
    goto LAB22;

LAB21:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB22;

LAB23:    t33 = (t0 + 25080);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB24;

LAB25:    t40 = (t0 + 25400);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t4, 4, t35, 4, t42, 4);
    goto LAB31;

LAB29:    memcpy(t4, t35, 8);
    goto LAB31;

LAB34:    t12 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t21) = 1;
    goto LAB39;

LAB38:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB39;

LAB40:    t33 = (t0 + 25080);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB41;

LAB42:    t40 = (t0 + 25560);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    goto LAB43;

LAB44:    xsi_vlog_unsigned_bit_combine(t4, 4, t35, 4, t42, 4);
    goto LAB48;

LAB46:    memcpy(t4, t35, 8);
    goto LAB48;

LAB51:    t12 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB52;

LAB53:    *((unsigned int *)t21) = 1;
    goto LAB56;

LAB55:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB56;

LAB57:    t33 = (t0 + 25080);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB58;

LAB59:    t40 = (t0 + 25720);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    goto LAB60;

LAB61:    xsi_vlog_unsigned_bit_combine(t4, 4, t35, 4, t42, 4);
    goto LAB65;

LAB63:    memcpy(t4, t35, 8);
    goto LAB65;

LAB68:    t12 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB69;

LAB70:    *((unsigned int *)t21) = 1;
    goto LAB73;

LAB72:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB73;

LAB74:    t33 = (t0 + 25080);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB75;

LAB76:    t40 = (t0 + 25880);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    goto LAB77;

LAB78:    xsi_vlog_unsigned_bit_combine(t4, 4, t35, 4, t42, 4);
    goto LAB82;

LAB80:    memcpy(t4, t35, 8);
    goto LAB82;

LAB85:    t12 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB86;

LAB87:    *((unsigned int *)t21) = 1;
    goto LAB90;

LAB89:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB90;

LAB91:    t33 = (t0 + 25080);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB92;

LAB93:    t40 = (t0 + 26040);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    goto LAB94;

LAB95:    xsi_vlog_unsigned_bit_combine(t4, 4, t35, 4, t42, 4);
    goto LAB99;

LAB97:    memcpy(t4, t35, 8);
    goto LAB99;

LAB102:    t12 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB103;

LAB104:    *((unsigned int *)t21) = 1;
    goto LAB107;

LAB106:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB107;

LAB108:    t33 = (t0 + 25080);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB109;

LAB110:    t40 = (t0 + 26200);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    goto LAB111;

LAB112:    xsi_vlog_unsigned_bit_combine(t4, 4, t35, 4, t42, 4);
    goto LAB116;

LAB114:    memcpy(t4, t35, 8);
    goto LAB116;

}

static void Cont_27658_31(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
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
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 35280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27658, ng0);
    t2 = (t0 + 15240U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t42, 8);

LAB20:    t43 = (t0 + 40152);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t47, 0, 8);
    t48 = 15U;
    t49 = t48;
    t50 = (t3 + 4);
    t51 = *((unsigned int *)t3);
    t48 = (t48 & t51);
    t52 = *((unsigned int *)t50);
    t49 = (t49 & t52);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 | t48);
    t55 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t55 | t49);
    xsi_driver_vfirst_trans_delayed(t43, 0, 3, 500LL, 0);
    t56 = (t0 + 38328);
    *((int *)t56) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 25080);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t40 = (t0 + 25240);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 4, t35, 4, t42, 4);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Cont_27669_32(char *t0)
{
    char t4[8];
    char t15[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
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
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;

LAB0:    t1 = (t0 + 35528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27669, ng0);
    t2 = (t0 + 16040U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 1640U);
    t14 = *((char **)t12);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t12 = (t13 + 4);
    t19 = (t14 + 4);
    t20 = (t15 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB4;

LAB5:
LAB6:    t43 = *((unsigned int *)t4);
    t44 = *((unsigned int *)t15);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t46 = (t4 + 4);
    t47 = (t15 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB7;

LAB8:
LAB9:    t74 = (t0 + 40216);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    memset(t78, 0, 8);
    t79 = 1U;
    t80 = t79;
    t81 = (t42 + 4);
    t82 = *((unsigned int *)t42);
    t79 = (t79 & t82);
    t83 = *((unsigned int *)t81);
    t80 = (t80 & t83);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t85 | t79);
    t86 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t86 | t80);
    xsi_driver_vfirst_trans_delayed(t74, 0, 0, 50LL, 0);
    t87 = (t0 + 38344);
    *((int *)t87) = 1;

LAB1:    return;
LAB4:    t26 = *((unsigned int *)t15);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t15) = (t26 | t27);
    t28 = (t13 + 4);
    t29 = (t14 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = *((unsigned int *)t29);
    t35 = (~(t34));
    t36 = *((unsigned int *)t14);
    t37 = (t36 & t35);
    t38 = (~(t33));
    t39 = (~(t37));
    t40 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t40 & t38);
    t41 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t41 & t39);
    goto LAB6;

LAB7:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t4 + 4);
    t57 = (t15 + 4);
    t58 = *((unsigned int *)t4);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t15);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB9;

}

static void Cont_27671_33(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t27[8];
    char t37[8];
    char t45[8];
    char t83[8];
    char t93[8];
    char t101[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
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
    char *t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;

LAB0:    t1 = (t0 + 35776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27671, ng0);
    t2 = (t0 + 16040U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t77 = *((unsigned int *)t4);
    t78 = (~(t77));
    t79 = *((unsigned int *)t21);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t101, 8);

LAB16:    t115 = (t0 + 40280);
    t116 = (t115 + 56U);
    t117 = *((char **)t116);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    memset(t119, 0, 8);
    t120 = 1U;
    t121 = t120;
    t122 = (t3 + 4);
    t123 = *((unsigned int *)t3);
    t120 = (t120 & t123);
    t124 = *((unsigned int *)t122);
    t121 = (t121 & t124);
    t125 = (t119 + 4);
    t126 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t126 | t120);
    t127 = *((unsigned int *)t125);
    *((unsigned int *)t125) = (t127 | t121);
    xsi_driver_vfirst_trans_delayed(t115, 0, 0, 50LL, 0);
    t128 = (t0 + 38360);
    *((int *)t128) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 16040U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    t25 = (t27 + 4);
    t28 = (t26 + 4);
    t29 = *((unsigned int *)t26);
    t30 = (t29 >> 2);
    t31 = (t30 & 1);
    *((unsigned int *)t27) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 >> 2);
    t34 = (t33 & 1);
    *((unsigned int *)t25) = t34;
    t35 = (t0 + 16040U);
    t36 = *((char **)t35);
    memset(t37, 0, 8);
    t35 = (t37 + 4);
    t38 = (t36 + 4);
    t39 = *((unsigned int *)t36);
    t40 = (t39 >> 1);
    t41 = (t40 & 1);
    *((unsigned int *)t37) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 >> 1);
    t44 = (t43 & 1);
    *((unsigned int *)t35) = t44;
    t46 = *((unsigned int *)t27);
    t47 = *((unsigned int *)t37);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t27 + 4);
    t50 = (t37 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB9;

LAB10:    t81 = (t0 + 16040U);
    t82 = *((char **)t81);
    memset(t83, 0, 8);
    t81 = (t83 + 4);
    t84 = (t82 + 4);
    t85 = *((unsigned int *)t82);
    t86 = (t85 >> 2);
    t87 = (t86 & 1);
    *((unsigned int *)t83) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 >> 2);
    t90 = (t89 & 1);
    *((unsigned int *)t81) = t90;
    t91 = (t0 + 16040U);
    t92 = *((char **)t91);
    memset(t93, 0, 8);
    t91 = (t93 + 4);
    t94 = (t92 + 4);
    t95 = *((unsigned int *)t92);
    t96 = (t95 >> 1);
    t97 = (t96 & 1);
    *((unsigned int *)t93) = t97;
    t98 = *((unsigned int *)t94);
    t99 = (t98 >> 1);
    t100 = (t99 & 1);
    *((unsigned int *)t91) = t100;
    t102 = *((unsigned int *)t83);
    t103 = *((unsigned int *)t93);
    t104 = (t102 ^ t103);
    *((unsigned int *)t101) = t104;
    t105 = (t83 + 4);
    t106 = (t93 + 4);
    t107 = (t101 + 4);
    t108 = *((unsigned int *)t105);
    t109 = *((unsigned int *)t106);
    t110 = (t108 | t109);
    *((unsigned int *)t107) = t110;
    t111 = *((unsigned int *)t107);
    t112 = (t111 != 0);
    if (t112 == 1)
        goto LAB20;

LAB21:
LAB22:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t45, 1, t101, 1);
    goto LAB16;

LAB14:    memcpy(t3, t45, 8);
    goto LAB16;

LAB17:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t27 + 4);
    t60 = (t37 + 4);
    t61 = *((unsigned int *)t27);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t37);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB19;

LAB20:    t113 = *((unsigned int *)t101);
    t114 = *((unsigned int *)t107);
    *((unsigned int *)t101) = (t113 | t114);
    goto LAB22;

}

static void Cont_27673_34(char *t0)
{
    char t3[8];
    char t13[8];
    char t31[8];
    char t47[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
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
    char *t46;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
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
    int t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;

LAB0:    t1 = (t0 + 36024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27673, ng0);
    t2 = (t0 + 16040U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 3U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 3U);
    t12 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t14 = (t3 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB7;

LAB4:    if (t25 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t13) = 1;

LAB7:    t29 = (t0 + 17320U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng2)));
    memset(t31, 0, 8);
    t32 = (t30 + 4);
    t33 = (t29 + 4);
    t34 = *((unsigned int *)t30);
    t35 = *((unsigned int *)t29);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t33);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB11;

LAB8:    if (t43 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t31) = 1;

LAB11:    t48 = *((unsigned int *)t13);
    t49 = *((unsigned int *)t31);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t51 = (t13 + 4);
    t52 = (t31 + 4);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t51);
    t55 = *((unsigned int *)t52);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB12;

LAB13:
LAB14:    t79 = (t0 + 40344);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    memset(t83, 0, 8);
    t84 = 1U;
    t85 = t84;
    t86 = (t47 + 4);
    t87 = *((unsigned int *)t47);
    t84 = (t84 & t87);
    t88 = *((unsigned int *)t86);
    t85 = (t85 & t88);
    t89 = (t83 + 4);
    t90 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t90 | t84);
    t91 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t91 | t85);
    xsi_driver_vfirst_trans_delayed(t79, 0, 0, 50LL, 0);
    t92 = (t0 + 38376);
    *((int *)t92) = 1;

LAB1:    return;
LAB6:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB7;

LAB10:    t46 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB11;

LAB12:    t59 = *((unsigned int *)t47);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t47) = (t59 | t60);
    t61 = (t13 + 4);
    t62 = (t31 + 4);
    t63 = *((unsigned int *)t13);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t31);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t71 = (t64 & t66);
    t72 = (t68 & t70);
    t73 = (~(t71));
    t74 = (~(t72));
    t75 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t75 & t73);
    t76 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t76 & t74);
    t77 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t77 & t73);
    t78 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t78 & t74);
    goto LAB14;

}

static void Cont_27679_35(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 36272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27679, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 14760U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 7, 7, 2U, t4, 4, t5, 3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 7, t2, 7, t3, 7);
    t7 = (t0 + 40408);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 127U;
    t13 = t12;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t7, 0, 6);
    t20 = (t0 + 38392);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Always_27685_36(char *t0)
{
    char t4[8];
    char t18[8];
    char t19[8];
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
    char *t14;
    int t15;
    char *t16;
    char *t17;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t1 = (t0 + 36520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27685, ng0);
    t2 = (t0 + 38408);
    *((int *)t2) = 1;
    t3 = (t0 + 36552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27692, ng0);

LAB5:    xsi_set_current_line(27693, ng0);
    t5 = (t0 + 16040U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 1);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 7U);

LAB6:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_xcompare(t4, 3, t14, 3);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_xcompare(t4, 3, t2, 3);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_xcompare(t4, 3, t2, 3);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_xcompare(t4, 3, t2, 3);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_xcompare(t4, 3, t2, 3);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng12)));
    t15 = xsi_vlog_unsigned_case_xcompare(t4, 3, t2, 3);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng14)));
    t15 = xsi_vlog_unsigned_case_xcompare(t4, 3, t2, 3);
    if (t15 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(27694, ng0);
    t16 = ((char*)((ng3)));
    t17 = (t0 + 23800);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 7);
    goto LAB21;

LAB9:    xsi_set_current_line(27695, ng0);
    t3 = (t0 + 15080U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_concat(t18, 7, 7, 2U, t3, 4, t5, 3);
    t6 = (t0 + 23800);
    xsi_vlogvar_assign_value(t6, t18, 0, 0, 7);
    goto LAB21;

LAB11:    xsi_set_current_line(27697, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 14920U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng1)));
    xsi_vlogtype_concat(t18, 7, 7, 3U, t5, 3, t6, 3, t3, 1);
    t7 = (t0 + 23800);
    xsi_vlogvar_assign_value(t7, t18, 0, 0, 7);
    goto LAB21;

LAB13:    xsi_set_current_line(27699, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 23800);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB21;

LAB15:    xsi_set_current_line(27700, ng0);
    t3 = (t0 + 1640U);
    t5 = *((char **)t3);
    memset(t19, 0, 8);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t3) != 0)
        goto LAB24;

LAB25:    t7 = (t19 + 4);
    t13 = *((unsigned int *)t19);
    t20 = *((unsigned int *)t7);
    t21 = (t13 || t20);
    if (t21 > 0)
        goto LAB26;

LAB27:    t22 = *((unsigned int *)t19);
    t23 = (~(t22));
    t24 = *((unsigned int *)t7);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t7) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t19) > 0)
        goto LAB32;

LAB33:    memcpy(t18, t14, 8);

LAB34:    t17 = (t0 + 23800);
    xsi_vlogvar_assign_value(t17, t18, 0, 0, 7);
    goto LAB21;

LAB17:    xsi_set_current_line(27701, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 23800);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB21;

LAB19:    xsi_set_current_line(27702, ng0);
    t3 = (t0 + 21640U);
    t5 = *((char **)t3);
    t3 = (t0 + 23800);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 7);
    goto LAB21;

LAB22:    *((unsigned int *)t19) = 1;
    goto LAB25;

LAB24:    t6 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB25;

LAB26:    t14 = (t0 + 17160U);
    t16 = *((char **)t14);
    goto LAB27;

LAB28:    t14 = ((char*)((ng3)));
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t18, 7, t16, 7, t14, 7);
    goto LAB34;

LAB32:    memcpy(t18, t16, 8);
    goto LAB34;

}

static void Always_27710_37(char *t0)
{
    char t4[8];
    char t21[8];
    char t25[8];
    char t32[8];
    char t70[8];
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
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;

LAB0:    t1 = (t0 + 36768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27710, ng0);
    t2 = (t0 + 38424);
    *((int *)t2) = 1;
    t3 = (t0 + 36800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27710, ng0);

LAB5:    xsi_set_current_line(27711, ng0);
    t5 = (t0 + 5000U);
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

LAB11:    xsi_set_current_line(27715, ng0);

LAB14:    xsi_set_current_line(27716, ng0);
    t2 = (t0 + 1960U);
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

LAB18:    memset(t21, 0, 8);
    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t6) != 0)
        goto LAB21;

LAB22:    t13 = (t21 + 4);
    t22 = *((unsigned int *)t21);
    t23 = *((unsigned int *)t13);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB23;

LAB24:    memcpy(t32, t21, 8);

LAB25:    t64 = (t32 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t32);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(27718, ng0);

LAB37:    xsi_set_current_line(27719, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 26360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 500LL);

LAB35:    xsi_set_current_line(27721, ng0);
    t2 = (t0 + 26360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 23640);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 500LL);
    xsi_set_current_line(27722, ng0);
    t2 = (t0 + 23640);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 23480);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 500LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(27711, ng0);

LAB13:    xsi_set_current_line(27712, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 26360);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 500LL);
    xsi_set_current_line(27713, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 23640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 500LL);
    xsi_set_current_line(27714, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 23480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 500LL);
    goto LAB12;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t21) = 1;
    goto LAB22;

LAB21:    t12 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB22;

LAB23:    t19 = (t0 + 1480U);
    t20 = *((char **)t19);
    memset(t25, 0, 8);
    t19 = (t20 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t20);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t19) != 0)
        goto LAB28;

LAB29:    t33 = *((unsigned int *)t21);
    t34 = *((unsigned int *)t25);
    t35 = (t33 & t34);
    *((unsigned int *)t32) = t35;
    t36 = (t21 + 4);
    t37 = (t25 + 4);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t36);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB25;

LAB26:    *((unsigned int *)t25) = 1;
    goto LAB29;

LAB28:    t31 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB29;

LAB30:    t44 = *((unsigned int *)t32);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t32) = (t44 | t45);
    t46 = (t21 + 4);
    t47 = (t25 + 4);
    t48 = *((unsigned int *)t21);
    t49 = (~(t48));
    t50 = *((unsigned int *)t46);
    t51 = (~(t50));
    t52 = *((unsigned int *)t25);
    t53 = (~(t52));
    t54 = *((unsigned int *)t47);
    t55 = (~(t54));
    t56 = (t49 & t51);
    t57 = (t53 & t55);
    t58 = (~(t56));
    t59 = (~(t57));
    t60 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t60 & t58);
    t61 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t61 & t59);
    t62 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t62 & t58);
    t63 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t63 & t59);
    goto LAB32;

LAB33:    xsi_set_current_line(27716, ng0);

LAB36:    xsi_set_current_line(27717, ng0);
    t71 = (t0 + 16040U);
    t72 = *((char **)t71);
    memset(t70, 0, 8);
    t71 = (t70 + 4);
    t73 = (t72 + 4);
    t74 = *((unsigned int *)t72);
    t75 = (t74 >> 0);
    *((unsigned int *)t70) = t75;
    t76 = *((unsigned int *)t73);
    t77 = (t76 >> 0);
    *((unsigned int *)t71) = t77;
    t78 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t78 & 15U);
    t79 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t79 & 15U);
    t80 = (t0 + 26360);
    xsi_vlogvar_wait_assign_value(t80, t70, 0, 0, 4, 500LL);
    goto LAB35;

}

static void Cont_27774_38(char *t0)
{
    char t5[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;

LAB0:    t1 = (t0 + 37016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27774, ng0);
    t2 = (t0 + 22120U);
    t3 = *((char **)t2);
    t2 = (t0 + 22440U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t32 = (t0 + 22760U);
    t33 = *((char **)t32);
    t35 = *((unsigned int *)t5);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t32 = (t5 + 4);
    t38 = (t33 + 4);
    t39 = (t34 + 4);
    t40 = *((unsigned int *)t32);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB7;

LAB8:
LAB9:    t61 = (t0 + 40472);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    memset(t65, 0, 8);
    t66 = 1U;
    t67 = t66;
    t68 = (t34 + 4);
    t69 = *((unsigned int *)t34);
    t66 = (t66 & t69);
    t70 = *((unsigned int *)t68);
    t67 = (t67 & t70);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t72 | t66);
    t73 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t73 | t67);
    xsi_driver_vfirst_trans_delayed(t61, 0, 0, 500LL, 0);
    t74 = (t0 + 38440);
    *((int *)t74) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

LAB7:    t45 = *((unsigned int *)t34);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t34) = (t45 | t46);
    t47 = (t5 + 4);
    t48 = (t33 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t5);
    t52 = (t51 & t50);
    t53 = *((unsigned int *)t48);
    t54 = (~(t53));
    t55 = *((unsigned int *)t33);
    t56 = (t55 & t54);
    t57 = (~(t52));
    t58 = (~(t56));
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    goto LAB9;

}

static void NetDecl_27778_39(char *t0)
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

LAB0:    t1 = (t0 + 37264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27778, ng0);
    t2 = (t0 + 13800U);
    t4 = *((char **)t2);
    t2 = (t0 + 13960U);
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
    t54 = (t0 + 40536);
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
    t67 = (t0 + 38456);
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

static void Always_27780_40(char *t0)
{
    char t4[8];
    char t21[8];
    char t23[8];
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
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 37512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27780, ng0);
    t2 = (t0 + 38472);
    *((int *)t2) = 1;
    t3 = (t0 + 37544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27780, ng0);

LAB5:    xsi_set_current_line(27781, ng0);
    t5 = (t0 + 22920U);
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

LAB11:    xsi_set_current_line(27783, ng0);
    t2 = (t0 + 21960U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(27787, ng0);
    t2 = (t0 + 22280U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(27791, ng0);
    t2 = (t0 + 22600U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB22;

LAB23:
LAB24:
LAB20:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(27781, ng0);

LAB13:    xsi_set_current_line(27782, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 23960);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 16, 500LL);
    goto LAB12;

LAB14:    xsi_set_current_line(27783, ng0);

LAB17:    xsi_set_current_line(27784, ng0);
    t5 = (t0 + 3400U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t12 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 0);
    *((unsigned int *)t21) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    *((unsigned int *)t5) = t17;
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t18 & 127U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 127U);
    t13 = ((char*)((ng1)));
    t19 = (t0 + 20360U);
    t20 = *((char **)t19);
    memset(t23, 0, 8);
    t19 = (t23 + 4);
    t24 = (t20 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (t25 >> 0);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 0);
    *((unsigned int *)t19) = t28;
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t29 & 127U);
    t30 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t30 & 127U);
    t31 = ((char*)((ng1)));
    xsi_vlogtype_concat(t4, 16, 16, 4U, t31, 1, t23, 7, t13, 1, t21, 7);
    t32 = (t0 + 23960);
    xsi_vlogvar_wait_assign_value(t32, t4, 0, 0, 16, 500LL);
    goto LAB16;

LAB18:    xsi_set_current_line(27787, ng0);

LAB21:    xsi_set_current_line(27788, ng0);
    t5 = (t0 + 20040U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t12 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 0);
    *((unsigned int *)t21) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    *((unsigned int *)t5) = t17;
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t18 & 63U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 63U);
    t13 = ((char*)((ng1)));
    t19 = (t0 + 20200U);
    t20 = *((char **)t19);
    memset(t23, 0, 8);
    t19 = (t23 + 4);
    t24 = (t20 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (t25 >> 0);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 0);
    *((unsigned int *)t19) = t28;
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t29 & 63U);
    t30 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t30 & 63U);
    t31 = ((char*)((ng1)));
    xsi_vlogtype_concat(t4, 16, 16, 4U, t31, 2, t23, 6, t13, 2, t21, 6);
    t32 = (t0 + 23960);
    xsi_vlogvar_wait_assign_value(t32, t4, 0, 0, 16, 500LL);
    goto LAB20;

LAB22:    xsi_set_current_line(27791, ng0);

LAB25:    xsi_set_current_line(27792, ng0);
    t5 = (t0 + 17160U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t12 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 0);
    *((unsigned int *)t21) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    *((unsigned int *)t5) = t17;
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t18 & 127U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 127U);
    t13 = ((char*)((ng1)));
    t19 = (t0 + 17320U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng1)));
    xsi_vlogtype_concat(t4, 16, 16, 4U, t19, 7, t20, 1, t13, 1, t21, 7);
    t24 = (t0 + 23960);
    xsi_vlogvar_wait_assign_value(t24, t4, 0, 0, 16, 500LL);
    goto LAB24;

}


extern void secureip_m_18201158743542122881_1824104860_init()
{
	static char *pe[] = {(void *)Cont_27121_0,(void *)Cont_27122_1,(void *)Cont_27123_2,(void *)Cont_27124_3,(void *)Cont_27125_4,(void *)NetDecl_27209_5,(void *)NetDecl_27210_6,(void *)NetDecl_27211_7,(void *)Cont_27285_8,(void *)Cont_27287_9,(void *)Cont_27289_10,(void *)Cont_27292_11,(void *)Cont_27294_12,(void *)Cont_27296_13,(void *)Cont_27298_14,(void *)Cont_27300_15,(void *)Cont_27302_16,(void *)Cont_27442_17,(void *)Cont_27443_18,(void *)Cont_27444_19,(void *)Cont_27445_20,(void *)Cont_27458_21,(void *)Cont_27459_22,(void *)Always_27461_23,(void *)Always_27478_24,(void *)Cont_27552_25,(void *)Always_27554_26,(void *)Always_27564_27,(void *)Cont_27580_28,(void *)Always_27622_29,(void *)Always_27632_30,(void *)Cont_27658_31,(void *)Cont_27669_32,(void *)Cont_27671_33,(void *)Cont_27673_34,(void *)Cont_27679_35,(void *)Always_27685_36,(void *)Always_27710_37,(void *)Cont_27774_38,(void *)NetDecl_27778_39,(void *)Always_27780_40};
	static char *se[] = {(void *)sp_gray};
	xsi_register_didat("secureip_m_18201158743542122881_1824104860", "isim/isim_system.sim/secureip/m_18201158743542122881_1824104860.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
