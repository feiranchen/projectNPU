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
static unsigned int ng2[] = {2U, 0U};



static void Cont_20134_0(char *t0)
{
    char t3[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 6976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20134, ng0);
    t2 = (t0 + 2464U);
    t4 = *((char **)t2);
    t2 = (t0 + 2304U);
    t5 = *((char **)t2);
    t2 = (t0 + 2144U);
    t6 = *((char **)t2);
    t2 = (t0 + 1984U);
    t8 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 0);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 7U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 7U);
    xsi_vlogtype_concat(t3, 6, 6, 4U, t7, 3, t6, 1, t5, 1, t4, 1);
    t16 = (t0 + 10808);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t20, 0, 8);
    t21 = 63U;
    t22 = t21;
    t23 = (t3 + 4);
    t24 = *((unsigned int *)t3);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t23);
    t22 = (t22 & t25);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 | t21);
    t28 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t28 | t22);
    xsi_driver_vfirst_trans(t16, 0, 5);
    t29 = (t0 + 10520);
    *((int *)t29) = 1;

LAB1:    return;
}

static void Always_20141_1(char *t0)
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

LAB0:    t1 = (t0 + 7224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20141, ng0);
    t2 = (t0 + 10536);
    *((int *)t2) = 1;
    t3 = (t0 + 7256);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20141, ng0);

LAB5:    xsi_set_current_line(20142, ng0);
    t5 = (t0 + 3264U);
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

LAB11:    xsi_set_current_line(20144, ng0);

LAB14:    xsi_set_current_line(20145, ng0);
    t2 = (t0 + 4224U);
    t3 = *((char **)t2);
    t2 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 500LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(20142, ng0);

LAB13:    xsi_set_current_line(20143, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 6, 500LL);
    goto LAB12;

}

static void Cont_20149_2(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 7472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20149, ng0);
    t2 = (t0 + 5264);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t25 = (t0 + 10872);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 63U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans_delayed(t25, 0, 5, 500LL, 0);
    t39 = (t0 + 10552);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 5424);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t25 = (t0 + 4224U);
    t26 = *((char **)t25);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 6, t20, 6, t26, 6);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void NetDecl_20153_3(char *t0)
{
    char t5[8];
    char t23[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
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
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;

LAB0:    t1 = (t0 + 7720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20153, ng0);
    t2 = (t0 + 3584U);
    t3 = *((char **)t2);
    t2 = (t0 + 3744U);
    t4 = *((char **)t2);
    t2 = (t0 + 3104U);
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
    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t5);
    t26 = (t24 & t25);
    *((unsigned int *)t23) = t26;
    t27 = (t4 + 4);
    t28 = (t5 + 4);
    t29 = (t23 + 4);
    t30 = *((unsigned int *)t27);
    t31 = *((unsigned int *)t28);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB10;

LAB11:
LAB12:    t56 = *((unsigned int *)t3);
    t57 = *((unsigned int *)t23);
    t58 = (t56 | t57);
    *((unsigned int *)t55) = t58;
    t59 = (t3 + 4);
    t60 = (t23 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB13;

LAB14:
LAB15:    t83 = (t0 + 10936);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memset(t87, 0, 8);
    t88 = 1U;
    t89 = t88;
    t90 = (t55 + 4);
    t91 = *((unsigned int *)t55);
    t88 = (t88 & t91);
    t92 = *((unsigned int *)t90);
    t89 = (t89 & t92);
    t93 = (t87 + 4);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t94 | t88);
    t95 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t95 | t89);
    xsi_driver_vfirst_trans_delayed(t83, 0, 0U, 500LL, 0);
    t96 = (t0 + 10568);
    *((int *)t96) = 1;

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

LAB10:    t35 = *((unsigned int *)t23);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t23) = (t35 | t36);
    t37 = (t4 + 4);
    t38 = (t5 + 4);
    t39 = *((unsigned int *)t4);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (~(t41));
    t43 = *((unsigned int *)t5);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (~(t45));
    t47 = (t40 & t42);
    t48 = (t44 & t46);
    t49 = (~(t47));
    t50 = (~(t48));
    t51 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t51 & t49);
    t52 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t52 & t50);
    t53 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t53 & t49);
    t54 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t54 & t50);
    goto LAB12;

LAB13:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = (t3 + 4);
    t70 = (t23 + 4);
    t71 = *((unsigned int *)t69);
    t72 = (~(t71));
    t73 = *((unsigned int *)t3);
    t74 = (t73 & t72);
    t75 = *((unsigned int *)t70);
    t76 = (~(t75));
    t77 = *((unsigned int *)t23);
    t78 = (t77 & t76);
    t79 = (~(t74));
    t80 = (~(t78));
    t81 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t81 & t79);
    t82 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t82 & t80);
    goto LAB15;

}

static void Always_20155_4(char *t0)
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

LAB0:    t1 = (t0 + 7968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20155, ng0);
    t2 = (t0 + 10584);
    *((int *)t2) = 1;
    t3 = (t0 + 8000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20155, ng0);

LAB5:    xsi_set_current_line(20156, ng0);
    t5 = (t0 + 3264U);
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

LAB11:    xsi_set_current_line(20158, ng0);
    t2 = (t0 + 4704U);
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

LAB10:    xsi_set_current_line(20156, ng0);

LAB13:    xsi_set_current_line(20157, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 5584);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 6, 500LL);
    goto LAB12;

LAB14:    xsi_set_current_line(20158, ng0);

LAB17:    xsi_set_current_line(20159, ng0);
    t5 = (t0 + 4384U);
    t6 = *((char **)t5);
    t5 = (t0 + 5584);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 6, 500LL);
    goto LAB16;

}

static void Always_20208_5(char *t0)
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

LAB0:    t1 = (t0 + 8216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20208, ng0);
    t2 = (t0 + 10600);
    *((int *)t2) = 1;
    t3 = (t0 + 8248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20208, ng0);

LAB5:    xsi_set_current_line(20209, ng0);
    t5 = (t0 + 3424U);
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

LAB11:    xsi_set_current_line(20211, ng0);
    t2 = (t0 + 3904U);
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

LAB19:    xsi_set_current_line(20216, ng0);

LAB22:    xsi_set_current_line(20217, ng0);
    t2 = (t0 + 4544U);
    t3 = *((char **)t2);
    t2 = (t0 + 5744);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 500LL);

LAB20:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(20209, ng0);

LAB13:    xsi_set_current_line(20210, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 5744);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 6, 500LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(20211, ng0);

LAB21:    xsi_set_current_line(20212, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 5744);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 6, 500LL);
    goto LAB20;

}

static void Cont_20221_6(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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

LAB0:    t1 = (t0 + 8464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20221, ng0);
    t2 = (t0 + 5744);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 3);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 3);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 7U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 7U);
    t14 = (t0 + 11000);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 7U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 2);
    t27 = (t0 + 10616);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_20222_7(char *t0)
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

LAB0:    t1 = (t0 + 8712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20222, ng0);
    t2 = (t0 + 5744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 11064);
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
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 10632);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_20223_8(char *t0)
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

LAB0:    t1 = (t0 + 8960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20223, ng0);
    t2 = (t0 + 5744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 11128);
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
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 10648);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_20224_9(char *t0)
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

LAB0:    t1 = (t0 + 9208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20224, ng0);
    t2 = (t0 + 5744);
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
    t14 = (t0 + 11192);
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
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 10664);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_20228_10(char *t0)
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
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
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
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;

LAB0:    t1 = (t0 + 9456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20228, ng0);
    t2 = (t0 + 10680);
    *((int *)t2) = 1;
    t3 = (t0 + 9488);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20228, ng0);

LAB5:    xsi_set_current_line(20229, ng0);
    t5 = (t0 + 3264U);
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

LAB11:    xsi_set_current_line(20231, ng0);
    t2 = (t0 + 3904U);
    t3 = *((char **)t2);
    t2 = (t0 + 3744U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t21) = t9;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t12 = (t21 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t14 = (t10 | t11);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB14;

LAB15:
LAB16:    memset(t4, 0, 8);
    t20 = (t21 + 4);
    t38 = *((unsigned int *)t20);
    t39 = (~(t38));
    t40 = *((unsigned int *)t21);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t20) == 0)
        goto LAB17;

LAB19:    t43 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t43) = 1;

LAB20:    t44 = (t4 + 4);
    t45 = (t21 + 4);
    t46 = *((unsigned int *)t21);
    t47 = (~(t46));
    *((unsigned int *)t4) = t47;
    *((unsigned int *)t44) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB22;

LAB21:    t52 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t52 & 1U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 & 1U);
    t54 = (t4 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t4);
    t58 = (t57 & t56);
    t59 = (t58 != 0);
    if (t59 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(20233, ng0);
    t2 = (t0 + 2144U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB27;

LAB28:
LAB29:
LAB25:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(20229, ng0);

LAB13:    xsi_set_current_line(20230, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 5264);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 500LL);
    goto LAB12;

LAB14:    t17 = *((unsigned int *)t21);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t21) = (t17 | t18);
    t13 = (t3 + 4);
    t19 = (t5 + 4);
    t22 = *((unsigned int *)t3);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (~(t26));
    t28 = *((unsigned int *)t19);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t36 & t32);
    t37 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t37 & t33);
    goto LAB16;

LAB17:    *((unsigned int *)t4) = 1;
    goto LAB20;

LAB22:    t48 = *((unsigned int *)t4);
    t49 = *((unsigned int *)t45);
    *((unsigned int *)t4) = (t48 | t49);
    t50 = *((unsigned int *)t44);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t44) = (t50 | t51);
    goto LAB21;

LAB23:    xsi_set_current_line(20231, ng0);

LAB26:    xsi_set_current_line(20232, ng0);
    t60 = ((char*)((ng1)));
    t61 = (t0 + 5264);
    xsi_vlogvar_wait_assign_value(t61, t60, 0, 0, 1, 500LL);
    goto LAB25;

LAB27:    xsi_set_current_line(20233, ng0);

LAB30:    xsi_set_current_line(20234, ng0);
    t5 = (t0 + 3104U);
    t6 = *((char **)t5);
    t5 = (t0 + 5264);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 1, 500LL);
    goto LAB29;

}

static void Always_20246_11(char *t0)
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;

LAB0:    t1 = (t0 + 9704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20246, ng0);
    t2 = (t0 + 10696);
    *((int *)t2) = 1;
    t3 = (t0 + 9736);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20246, ng0);

LAB5:    xsi_set_current_line(20247, ng0);
    t5 = (t0 + 3424U);
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

LAB11:    xsi_set_current_line(20249, ng0);
    t2 = (t0 + 3584U);
    t3 = *((char **)t2);
    t2 = (t0 + 3744U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t12 = (t4 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t14 = (t10 | t11);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB14;

LAB15:
LAB16:    t20 = (t4 + 4);
    t33 = *((unsigned int *)t20);
    t34 = (~(t33));
    t35 = *((unsigned int *)t4);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(20247, ng0);

LAB13:    xsi_set_current_line(20248, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 500LL);
    goto LAB12;

LAB14:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    t13 = (t3 + 4);
    t19 = (t5 + 4);
    t21 = *((unsigned int *)t13);
    t22 = (~(t21));
    t23 = *((unsigned int *)t3);
    t24 = (t23 & t22);
    t25 = *((unsigned int *)t19);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = (~(t24));
    t30 = (~(t28));
    t31 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t31 & t29);
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    goto LAB16;

LAB17:    xsi_set_current_line(20249, ng0);

LAB20:    xsi_set_current_line(20250, ng0);
    t38 = (t0 + 1824U);
    t39 = *((char **)t38);
    t38 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t38, t39, 0, 0, 1, 500LL);
    goto LAB19;

}

static void Always_20261_12(char *t0)
{
    char t4[8];
    char t38[8];
    char t39[8];
    char t57[8];
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
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t40;
    char *t41;
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
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
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
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    int t81;
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

LAB0:    t1 = (t0 + 9952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20261, ng0);
    t2 = (t0 + 10712);
    *((int *)t2) = 1;
    t3 = (t0 + 9984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20261, ng0);

LAB5:    xsi_set_current_line(20262, ng0);
    t5 = (t0 + 3264U);
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

LAB11:    xsi_set_current_line(20264, ng0);
    t2 = (t0 + 3584U);
    t3 = *((char **)t2);
    t2 = (t0 + 3744U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t12 = (t4 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t14 = (t10 | t11);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB14;

LAB15:
LAB16:    t20 = (t4 + 4);
    t33 = *((unsigned int *)t20);
    t34 = (~(t33));
    t35 = *((unsigned int *)t4);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(20262, ng0);

LAB13:    xsi_set_current_line(20263, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 6064);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 500LL);
    goto LAB12;

LAB14:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    t13 = (t3 + 4);
    t19 = (t5 + 4);
    t21 = *((unsigned int *)t13);
    t22 = (~(t21));
    t23 = *((unsigned int *)t3);
    t24 = (t23 & t22);
    t25 = *((unsigned int *)t19);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = (~(t24));
    t30 = (~(t28));
    t31 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t31 & t29);
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    goto LAB16;

LAB17:    xsi_set_current_line(20264, ng0);

LAB20:    xsi_set_current_line(20265, ng0);
    t40 = (t0 + 3744U);
    t41 = *((char **)t40);
    memset(t39, 0, 8);
    t40 = (t41 + 4);
    t42 = *((unsigned int *)t40);
    t43 = (~(t42));
    t44 = *((unsigned int *)t41);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t40) != 0)
        goto LAB23;

LAB24:    t48 = (t39 + 4);
    t49 = *((unsigned int *)t39);
    t50 = *((unsigned int *)t48);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB25;

LAB26:    t88 = *((unsigned int *)t39);
    t89 = (~(t88));
    t90 = *((unsigned int *)t48);
    t91 = (t89 || t90);
    if (t91 > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t48) > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t39) > 0)
        goto LAB31;

LAB32:    memcpy(t38, t93, 8);

LAB33:    t92 = (t0 + 6064);
    xsi_vlogvar_wait_assign_value(t92, t38, 0, 0, 1, 500LL);
    goto LAB19;

LAB21:    *((unsigned int *)t39) = 1;
    goto LAB24;

LAB23:    t47 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB24;

LAB25:    t52 = (t0 + 5904);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t0 + 3104U);
    t56 = *((char **)t55);
    t58 = *((unsigned int *)t54);
    t59 = *((unsigned int *)t56);
    t60 = (t58 & t59);
    *((unsigned int *)t57) = t60;
    t55 = (t54 + 4);
    t61 = (t56 + 4);
    t62 = (t57 + 4);
    t63 = *((unsigned int *)t55);
    t64 = *((unsigned int *)t61);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t66 = *((unsigned int *)t62);
    t67 = (t66 != 0);
    if (t67 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB26;

LAB27:    t92 = (t0 + 4864U);
    t93 = *((char **)t92);
    goto LAB28;

LAB29:    xsi_vlog_unsigned_bit_combine(t38, 1, t57, 1, t93, 1);
    goto LAB33;

LAB31:    memcpy(t38, t57, 8);
    goto LAB33;

LAB34:    t68 = *((unsigned int *)t57);
    t69 = *((unsigned int *)t62);
    *((unsigned int *)t57) = (t68 | t69);
    t70 = (t54 + 4);
    t71 = (t56 + 4);
    t72 = *((unsigned int *)t54);
    t73 = (~(t72));
    t74 = *((unsigned int *)t70);
    t75 = (~(t74));
    t76 = *((unsigned int *)t56);
    t77 = (~(t76));
    t78 = *((unsigned int *)t71);
    t79 = (~(t78));
    t80 = (t73 & t75);
    t81 = (t77 & t79);
    t82 = (~(t80));
    t83 = (~(t81));
    t84 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t84 & t82);
    t85 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t85 & t83);
    t86 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t86 & t82);
    t87 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t87 & t83);
    goto LAB36;

}

static void Cont_20270_13(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 10200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20270, ng0);
    t2 = (t0 + 6064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11256);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 10728);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void secureip_m_16147600379964170558_2147777650_init()
{
	static char *pe[] = {(void *)Cont_20134_0,(void *)Always_20141_1,(void *)Cont_20149_2,(void *)NetDecl_20153_3,(void *)Always_20155_4,(void *)Always_20208_5,(void *)Cont_20221_6,(void *)Cont_20222_7,(void *)Cont_20223_8,(void *)Cont_20224_9,(void *)Always_20228_10,(void *)Always_20246_11,(void *)Always_20261_12,(void *)Cont_20270_13};
	xsi_register_didat("secureip_m_16147600379964170558_2147777650", "isim/isim_system.sim/secureip/m_16147600379964170558_2147777650.didat");
	xsi_register_executes(pe);
}
