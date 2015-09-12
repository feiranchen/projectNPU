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
static unsigned int ng3[] = {0U, 0U, 0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {7U, 0U};
static int ng6[] = {19, 0};
static int ng7[] = {0, 0};
static int ng8[] = {50, 0};
static int ng9[] = {20, 0};



static void NetDecl_3259_0(char *t0)
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
    char *t10;

LAB0:    t1 = (t0 + 5968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3259, ng0);
    t2 = (t0 + 4416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9536);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 51);
    xsi_driver_vfirst_trans(t5, 0, 50U);
    t10 = (t0 + 9264);
    *((int *)t10) = 1;

LAB1:    return;
}

static void NetDecl_3265_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t30[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
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
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;

LAB0:    t1 = (t0 + 6216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3248, ng0);
    t2 = (t0 + 1776U);
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

LAB9:    t43 = *((unsigned int *)t4);
    t44 = (~(t43));
    t45 = *((unsigned int *)t12);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t47, 8);

LAB16:    t48 = (t0 + 9600);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t52, 0, 8);
    t53 = 1048575U;
    t54 = t53;
    t55 = (t3 + 4);
    t56 = *((unsigned int *)t3);
    t53 = (t53 & t56);
    t57 = *((unsigned int *)t55);
    t54 = (t54 & t57);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t59 | t53);
    t60 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t60 | t54);
    xsi_driver_vfirst_trans(t48, 0, 19U);
    t61 = (t0 + 9280);
    *((int *)t61) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 4416);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t16, 0, 8);
    t20 = (t16 + 4);
    t21 = (t19 + 4);
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t16) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t26 & 1048575U);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 1048575U);
    t28 = (t0 + 2576U);
    t29 = *((char **)t28);
    t31 = *((unsigned int *)t16);
    t32 = *((unsigned int *)t29);
    t33 = (t31 ^ t32);
    *((unsigned int *)t30) = t33;
    t28 = (t16 + 4);
    t34 = (t29 + 4);
    t35 = (t30 + 4);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t34);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB9;

LAB10:    t47 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 20, t30, 20, t47, 20);
    goto LAB16;

LAB14:    memcpy(t3, t30, 8);
    goto LAB16;

LAB17:    t41 = *((unsigned int *)t30);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t30) = (t41 | t42);
    goto LAB19;

}

static void NetDecl_3266_2(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
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
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 6464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3266, ng0);
    t2 = (t0 + 1456U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 12);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 12);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 255U);
    memset(t3, 0, 8);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 255U);
    if (t18 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t13) != 0)
        goto LAB6;

LAB7:    t20 = (t0 + 9664);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t3 + 4);
    t28 = *((unsigned int *)t3);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0U);
    t33 = (t0 + 9296);
    *((int *)t33) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB6:    t19 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_3267_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t22[8];
    char t32[8];
    char t40[8];
    char t68[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;

LAB0:    t1 = (t0 + 6712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3267, ng0);
    t2 = (t0 + 1456U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 10);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 10);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 3U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 3U);
    memset(t3, 0, 8);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 3U);
    if (t18 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t13) != 0)
        goto LAB6;

LAB7:    t20 = (t0 + 2256U);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    t20 = (t22 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 1);
    t26 = (t25 & 1);
    *((unsigned int *)t22) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 >> 1);
    t29 = (t28 & 1);
    *((unsigned int *)t20) = t29;
    t30 = (t0 + 2256U);
    t31 = *((char **)t30);
    memset(t32, 0, 8);
    t30 = (t32 + 4);
    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 0);
    t36 = (t35 & 1);
    *((unsigned int *)t32) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 0);
    t39 = (t38 & 1);
    *((unsigned int *)t30) = t39;
    t41 = *((unsigned int *)t22);
    t42 = *((unsigned int *)t32);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = (t22 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB8;

LAB9:
LAB10:    t69 = *((unsigned int *)t3);
    t70 = *((unsigned int *)t40);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t72 = (t3 + 4);
    t73 = (t40 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB11;

LAB12:
LAB13:    t100 = (t0 + 9728);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    memset(t104, 0, 8);
    t105 = 1U;
    t106 = t105;
    t107 = (t68 + 4);
    t108 = *((unsigned int *)t68);
    t105 = (t105 & t108);
    t109 = *((unsigned int *)t107);
    t106 = (t106 & t109);
    t110 = (t104 + 4);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t111 | t105);
    t112 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t112 | t106);
    xsi_driver_vfirst_trans(t100, 0, 0U);
    t113 = (t0 + 9312);
    *((int *)t113) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB6:    t19 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB8:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t22 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t54);
    t57 = (~(t56));
    t58 = *((unsigned int *)t22);
    t59 = (t58 & t57);
    t60 = *((unsigned int *)t55);
    t61 = (~(t60));
    t62 = *((unsigned int *)t32);
    t63 = (t62 & t61);
    t64 = (~(t59));
    t65 = (~(t63));
    t66 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t66 & t64);
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    goto LAB10;

LAB11:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    t82 = (t3 + 4);
    t83 = (t40 + 4);
    t84 = *((unsigned int *)t3);
    t85 = (~(t84));
    t86 = *((unsigned int *)t82);
    t87 = (~(t86));
    t88 = *((unsigned int *)t40);
    t89 = (~(t88));
    t90 = *((unsigned int *)t83);
    t91 = (~(t90));
    t92 = (t85 & t87);
    t93 = (t89 & t91);
    t94 = (~(t92));
    t95 = (~(t93));
    t96 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t96 & t94);
    t97 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t97 & t95);
    t98 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t98 & t94);
    t99 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t99 & t95);
    goto LAB13;

}

static void NetDecl_3268_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t22[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
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
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;

LAB0:    t1 = (t0 + 6960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3268, ng0);
    t2 = (t0 + 1456U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 4);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 4);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 63U);
    memset(t3, 0, 8);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 63U);
    if (t18 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t13) != 0)
        goto LAB6;

LAB7:    t20 = (t0 + 2256U);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    t20 = (t22 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 1);
    t26 = (t25 & 1);
    *((unsigned int *)t22) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 >> 1);
    t29 = (t28 & 1);
    *((unsigned int *)t20) = t29;
    t31 = *((unsigned int *)t3);
    t32 = *((unsigned int *)t22);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t34 = (t3 + 4);
    t35 = (t22 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB8;

LAB9:
LAB10:    t62 = (t0 + 9792);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    memset(t66, 0, 8);
    t67 = 1U;
    t68 = t67;
    t69 = (t30 + 4);
    t70 = *((unsigned int *)t30);
    t67 = (t67 & t70);
    t71 = *((unsigned int *)t69);
    t68 = (t68 & t71);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t73 | t67);
    t74 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t74 | t68);
    xsi_driver_vfirst_trans(t62, 0, 0U);
    t75 = (t0 + 9328);
    *((int *)t75) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB6:    t19 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB8:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t3 + 4);
    t45 = (t22 + 4);
    t46 = *((unsigned int *)t3);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t22);
    t51 = (~(t50));
    t52 = *((unsigned int *)t45);
    t53 = (~(t52));
    t54 = (t47 & t49);
    t55 = (t51 & t53);
    t56 = (~(t54));
    t57 = (~(t55));
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t56);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t59 & t57);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t60 & t56);
    t61 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t61 & t57);
    goto LAB10;

}

static void NetDecl_3269_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t22[8];
    char t32[8];
    char t40[8];
    char t72[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    int t96;
    int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;

LAB0:    t1 = (t0 + 7208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3269, ng0);
    t2 = (t0 + 1456U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 15U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 15U);
    memset(t3, 0, 8);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 15U);
    if (t18 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t13) != 0)
        goto LAB6;

LAB7:    t20 = (t0 + 2256U);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    t20 = (t22 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 1);
    t26 = (t25 & 1);
    *((unsigned int *)t22) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 >> 1);
    t29 = (t28 & 1);
    *((unsigned int *)t20) = t29;
    t30 = (t0 + 2256U);
    t31 = *((char **)t30);
    memset(t32, 0, 8);
    t30 = (t32 + 4);
    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 0);
    t36 = (t35 & 1);
    *((unsigned int *)t32) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 0);
    t39 = (t38 & 1);
    *((unsigned int *)t30) = t39;
    t41 = *((unsigned int *)t22);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t22 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB8;

LAB9:
LAB10:    t73 = *((unsigned int *)t3);
    t74 = *((unsigned int *)t40);
    t75 = (t73 & t74);
    *((unsigned int *)t72) = t75;
    t76 = (t3 + 4);
    t77 = (t40 + 4);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t76);
    t80 = *((unsigned int *)t77);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB11;

LAB12:
LAB13:    t104 = (t0 + 9856);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    memset(t108, 0, 8);
    t109 = 1U;
    t110 = t109;
    t111 = (t72 + 4);
    t112 = *((unsigned int *)t72);
    t109 = (t109 & t112);
    t113 = *((unsigned int *)t111);
    t110 = (t110 & t113);
    t114 = (t108 + 4);
    t115 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t115 | t109);
    t116 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t116 | t110);
    xsi_driver_vfirst_trans(t104, 0, 0U);
    t117 = (t0 + 9344);
    *((int *)t117) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB6:    t19 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB8:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t22 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t22);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB10;

LAB11:    t84 = *((unsigned int *)t72);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t72) = (t84 | t85);
    t86 = (t3 + 4);
    t87 = (t40 + 4);
    t88 = *((unsigned int *)t3);
    t89 = (~(t88));
    t90 = *((unsigned int *)t86);
    t91 = (~(t90));
    t92 = *((unsigned int *)t40);
    t93 = (~(t92));
    t94 = *((unsigned int *)t87);
    t95 = (~(t94));
    t96 = (t89 & t91);
    t97 = (t93 & t95);
    t98 = (~(t96));
    t99 = (~(t97));
    t100 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t100 & t98);
    t101 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t101 & t99);
    t102 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t102 & t98);
    t103 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t103 & t99);
    goto LAB13;

}

static void NetDecl_3270_6(char *t0)
{
    char t5[8];
    char t34[8];
    char t63[8];
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
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;

LAB0:    t1 = (t0 + 7456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3270, ng0);
    t2 = (t0 + 2736U);
    t3 = *((char **)t2);
    t2 = (t0 + 2896U);
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
LAB6:    t32 = (t0 + 3056U);
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
LAB9:    t61 = (t0 + 3216U);
    t62 = *((char **)t61);
    t64 = *((unsigned int *)t34);
    t65 = *((unsigned int *)t62);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t61 = (t34 + 4);
    t67 = (t62 + 4);
    t68 = (t63 + 4);
    t69 = *((unsigned int *)t61);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB10;

LAB11:
LAB12:    t90 = (t0 + 9920);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    memset(t94, 0, 8);
    t95 = 1U;
    t96 = t95;
    t97 = (t63 + 4);
    t98 = *((unsigned int *)t63);
    t95 = (t95 & t98);
    t99 = *((unsigned int *)t97);
    t96 = (t96 & t99);
    t100 = (t94 + 4);
    t101 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t101 | t95);
    t102 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t102 | t96);
    xsi_driver_vfirst_trans(t90, 0, 0U);
    t103 = (t0 + 9360);
    *((int *)t103) = 1;

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

LAB10:    t74 = *((unsigned int *)t63);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t63) = (t74 | t75);
    t76 = (t34 + 4);
    t77 = (t62 + 4);
    t78 = *((unsigned int *)t76);
    t79 = (~(t78));
    t80 = *((unsigned int *)t34);
    t81 = (t80 & t79);
    t82 = *((unsigned int *)t77);
    t83 = (~(t82));
    t84 = *((unsigned int *)t62);
    t85 = (t84 & t83);
    t86 = (~(t81));
    t87 = (~(t85));
    t88 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t88 & t86);
    t89 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t89 & t87);
    goto LAB12;

}

static void Always_3279_7(char *t0)
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

LAB0:    t1 = (t0 + 7704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3279, ng0);
    t2 = (t0 + 9376);
    *((int *)t2) = 1;
    t3 = (t0 + 7736);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(3280, ng0);

LAB5:    xsi_set_current_line(3281, ng0);
    t4 = (t0 + 1936U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(3285, ng0);
    t2 = (t0 + 5056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(3282, ng0);

LAB9:    xsi_set_current_line(3283, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(3286, ng0);

LAB13:    xsi_set_current_line(3287, ng0);
    t11 = (t0 + 3376U);
    t12 = *((char **)t11);
    t11 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 1, 0LL);
    goto LAB12;

}

static void Always_3295_8(char *t0)
{
    char t13[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 7952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3295, ng0);
    t2 = (t0 + 9392);
    *((int *)t2) = 1;
    t3 = (t0 + 7984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(3296, ng0);

LAB5:    xsi_set_current_line(3297, ng0);
    t4 = (t0 + 1936U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(3303, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t2) == 0)
        goto LAB10;

LAB12:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB13:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(3310, ng0);

LAB18:    xsi_set_current_line(3311, ng0);
    t2 = (t0 + 4896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5056);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(3312, ng0);
    t2 = (t0 + 4736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4896);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(3313, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4736);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(3298, ng0);

LAB9:    xsi_set_current_line(3299, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5056);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(3300, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(3301, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4736);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(3304, ng0);

LAB17:    xsi_set_current_line(3305, ng0);
    t11 = (t0 + 5056);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    t20 = (t0 + 5056);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(3306, ng0);
    t2 = (t0 + 4896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4896);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(3307, ng0);
    t2 = (t0 + 4736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4736);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB16;

}

static void NetDecl_3318_9(char *t0)
{
    char t6[8];
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

LAB0:    t1 = (t0 + 8200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3318, ng0);
    t2 = (t0 + 4576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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

LAB7:    t22 = (t0 + 9984);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0U);
    t35 = (t0 + 9408);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void NetDecl_3318_10(char *t0)
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

LAB0:    t1 = (t0 + 8448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3318, ng0);
    t2 = (t0 + 3536U);
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
    t21 = (t0 + 10048);
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
    t34 = (t0 + 9424);
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

static void Always_3319_11(char *t0)
{
    char t13[8];
    char t14[8];
    char t35[8];
    char t42[8];
    char t50[8];
    char t79[8];
    char t80[8];
    char t87[8];
    char t88[8];
    char t89[8];
    char t110[8];
    char t111[8];
    char t114[8];
    char t133[8];
    char t157[8];
    char t181[8];
    char t202[8];
    char t203[8];
    char t204[8];
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
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
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
    unsigned int t108;
    unsigned int t109;
    char *t112;
    char *t113;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    char *t182;
    char *t183;
    char *t184;
    char *t185;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    char *t191;
    char *t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    char *t205;
    char *t206;
    char *t207;
    char *t208;
    char *t209;
    char *t210;
    unsigned int t211;
    char *t212;
    unsigned int t213;
    char *t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;

LAB0:    t1 = (t0 + 8696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3319, ng0);
    t2 = (t0 + 9440);
    *((int *)t2) = 1;
    t3 = (t0 + 8728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(3319, ng0);

LAB5:    xsi_set_current_line(3320, ng0);
    t4 = (t0 + 1936U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(3324, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(3320, ng0);

LAB9:    xsi_set_current_line(3321, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4576);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(3322, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(3323, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 51, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(3324, ng0);

LAB13:    xsi_set_current_line(3328, ng0);
    t4 = (t0 + 4096);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    memset(t14, 0, 8);
    t12 = (t11 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (~(t15));
    t17 = *((unsigned int *)t11);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t12) != 0)
        goto LAB16;

LAB17:    t21 = (t14 + 4);
    t22 = *((unsigned int *)t14);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB18;

LAB19:    t26 = *((unsigned int *)t14);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t21) > 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t14) > 0)
        goto LAB24;

LAB25:    memcpy(t13, t35, 8);

LAB26:    t33 = (t0 + 4576);
    xsi_vlogvar_wait_assign_value(t33, t13, 0, 0, 3, 0LL);
    xsi_set_current_line(3329, ng0);
    t2 = (t0 + 3536U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t2) != 0)
        goto LAB29;

LAB30:    t5 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB31;

LAB32:    t18 = *((unsigned int *)t14);
    t19 = (~(t18));
    t22 = *((unsigned int *)t5);
    t23 = (t19 || t22);
    if (t23 > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t5) > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t14) > 0)
        goto LAB37;

LAB38:    memcpy(t13, t50, 8);

LAB39:    t78 = (t0 + 4256);
    xsi_vlogvar_wait_assign_value(t78, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(3330, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t2) != 0)
        goto LAB56;

LAB57:    t5 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB58;

LAB59:    t27 = *((unsigned int *)t14);
    t28 = (~(t27));
    t29 = *((unsigned int *)t5);
    t36 = (t28 || t29);
    if (t36 > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t5) > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t14) > 0)
        goto LAB64;

LAB65:    memcpy(t13, t42, 8);

LAB66:    t33 = (t0 + 4416);
    t34 = (t0 + 4416);
    t40 = (t34 + 72U);
    t41 = *((char **)t40);
    t43 = ((char*)((ng6)));
    t49 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t50, t79, t80, ((int*)(t41)), 2, t43, 32, 1, t49, 32, 1);
    t54 = (t50 + 4);
    t47 = *((unsigned int *)t54);
    t69 = (!(t47));
    t55 = (t79 + 4);
    t48 = *((unsigned int *)t55);
    t73 = (!(t48));
    t81 = (t69 && t73);
    t56 = (t80 + 4);
    t51 = *((unsigned int *)t56);
    t82 = (!(t51));
    t83 = (t81 && t82);
    if (t83 == 1)
        goto LAB67;

LAB68:    xsi_set_current_line(3333, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t2) != 0)
        goto LAB71;

LAB72:    t5 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB73;

LAB74:    t177 = *((unsigned int *)t14);
    t178 = (~(t177));
    t179 = *((unsigned int *)t5);
    t180 = (t178 || t179);
    if (t180 > 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t5) > 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t14) > 0)
        goto LAB79;

LAB80:    memcpy(t13, t181, 8);

LAB81:    t201 = (t0 + 4416);
    t205 = (t0 + 4416);
    t206 = (t205 + 72U);
    t207 = *((char **)t206);
    t208 = ((char*)((ng8)));
    t209 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t202, t203, t204, ((int*)(t207)), 2, t208, 32, 1, t209, 32, 1);
    t210 = (t202 + 4);
    t211 = *((unsigned int *)t210);
    t69 = (!(t211));
    t212 = (t203 + 4);
    t213 = *((unsigned int *)t212);
    t73 = (!(t213));
    t81 = (t69 && t73);
    t214 = (t204 + 4);
    t215 = *((unsigned int *)t214);
    t82 = (!(t215));
    t83 = (t81 && t82);
    if (t83 == 1)
        goto LAB121;

LAB122:    goto LAB12;

LAB14:    *((unsigned int *)t14) = 1;
    goto LAB17;

LAB16:    t20 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB17;

LAB18:    t25 = ((char*)((ng5)));
    goto LAB19;

LAB20:    t30 = (t0 + 4576);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 3696U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 3, t32, 3, t34, 1);
    goto LAB21;

LAB22:    xsi_vlog_unsigned_bit_combine(t13, 3, t25, 3, t35, 3);
    goto LAB26;

LAB24:    memcpy(t13, t25, 8);
    goto LAB26;

LAB27:    *((unsigned int *)t14) = 1;
    goto LAB30;

LAB29:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB30;

LAB31:    t11 = (t0 + 4096);
    t12 = (t11 + 56U);
    t20 = *((char **)t12);
    goto LAB32;

LAB33:    t21 = (t0 + 4256);
    t25 = (t21 + 56U);
    t30 = *((char **)t25);
    memset(t35, 0, 8);
    t31 = (t30 + 4);
    t24 = *((unsigned int *)t31);
    t26 = (~(t24));
    t27 = *((unsigned int *)t30);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t31) != 0)
        goto LAB42;

LAB43:    t33 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = *((unsigned int *)t33);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB44;

LAB45:    memcpy(t50, t35, 8);

LAB46:    goto LAB34;

LAB35:    xsi_vlog_unsigned_bit_combine(t13, 1, t20, 1, t50, 1);
    goto LAB39;

LAB37:    memcpy(t13, t20, 8);
    goto LAB39;

LAB40:    *((unsigned int *)t35) = 1;
    goto LAB43;

LAB42:    t32 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB43;

LAB44:    t34 = (t0 + 4096);
    t40 = (t34 + 56U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t41);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t43) != 0)
        goto LAB49;

LAB50:    t51 = *((unsigned int *)t35);
    t52 = *((unsigned int *)t42);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = (t35 + 4);
    t55 = (t42 + 4);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t54);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB46;

LAB47:    *((unsigned int *)t42) = 1;
    goto LAB50;

LAB49:    t49 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB50;

LAB51:    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t50) = (t62 | t63);
    t64 = (t35 + 4);
    t65 = (t42 + 4);
    t66 = *((unsigned int *)t64);
    t67 = (~(t66));
    t68 = *((unsigned int *)t35);
    t69 = (t68 & t67);
    t70 = *((unsigned int *)t65);
    t71 = (~(t70));
    t72 = *((unsigned int *)t42);
    t73 = (t72 & t71);
    t74 = (~(t69));
    t75 = (~(t73));
    t76 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t76 & t74);
    t77 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t77 & t75);
    goto LAB53;

LAB54:    *((unsigned int *)t14) = 1;
    goto LAB57;

LAB56:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB57;

LAB58:    t11 = (t0 + 1616U);
    t12 = *((char **)t11);
    memset(t35, 0, 8);
    t11 = (t35 + 4);
    t20 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = (t18 >> 0);
    *((unsigned int *)t35) = t19;
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 0);
    *((unsigned int *)t11) = t23;
    t24 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t24 & 1048575U);
    t26 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t26 & 1048575U);
    goto LAB59;

LAB60:    t21 = (t0 + 4416);
    t25 = (t21 + 56U);
    t30 = *((char **)t25);
    memset(t42, 0, 8);
    t31 = (t42 + 4);
    t32 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    t38 = (t37 >> 0);
    *((unsigned int *)t42) = t38;
    t39 = *((unsigned int *)t32);
    t44 = (t39 >> 0);
    *((unsigned int *)t31) = t44;
    t45 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t45 & 1048575U);
    t46 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t46 & 1048575U);
    goto LAB61;

LAB62:    xsi_vlog_unsigned_bit_combine(t13, 20, t35, 20, t42, 20);
    goto LAB66;

LAB64:    memcpy(t13, t35, 8);
    goto LAB66;

LAB67:    t52 = *((unsigned int *)t80);
    t84 = (t52 + 0);
    t53 = *((unsigned int *)t50);
    t57 = *((unsigned int *)t79);
    t85 = (t53 - t57);
    t86 = (t85 + 1);
    xsi_vlogvar_wait_assign_value(t33, t13, t84, *((unsigned int *)t79), t86, 0LL);
    goto LAB68;

LAB69:    *((unsigned int *)t14) = 1;
    goto LAB72;

LAB71:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB72;

LAB73:    t11 = (t0 + 2256U);
    t12 = *((char **)t11);
    memset(t50, 0, 8);
    t11 = (t50 + 4);
    t20 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = (t18 >> 1);
    t22 = (t19 & 1);
    *((unsigned int *)t50) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 1);
    t26 = (t24 & 1);
    *((unsigned int *)t11) = t26;
    memset(t42, 0, 8);
    t21 = (t50 + 4);
    t27 = *((unsigned int *)t21);
    t28 = (~(t27));
    t29 = *((unsigned int *)t50);
    t36 = (t29 & t28);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t21) != 0)
        goto LAB84;

LAB85:    t30 = (t42 + 4);
    t38 = *((unsigned int *)t42);
    t39 = *((unsigned int *)t30);
    t44 = (t38 || t39);
    if (t44 > 0)
        goto LAB86;

LAB87:    t106 = *((unsigned int *)t42);
    t107 = (~(t106));
    t108 = *((unsigned int *)t30);
    t109 = (t107 || t108);
    if (t109 > 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t30) > 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t42) > 0)
        goto LAB92;

LAB93:    memcpy(t35, t110, 8);

LAB94:    goto LAB74;

LAB75:    t182 = (t0 + 4416);
    t183 = (t182 + 56U);
    t184 = *((char **)t183);
    memset(t181, 0, 8);
    t185 = (t181 + 4);
    t186 = (t184 + 4);
    t187 = *((unsigned int *)t184);
    t188 = (t187 >> 20);
    *((unsigned int *)t181) = t188;
    t189 = *((unsigned int *)t186);
    t190 = (t189 >> 20);
    *((unsigned int *)t185) = t190;
    t191 = (t184 + 8);
    t192 = (t184 + 12);
    t193 = *((unsigned int *)t191);
    t194 = (t193 << 12);
    t195 = *((unsigned int *)t181);
    *((unsigned int *)t181) = (t195 | t194);
    t196 = *((unsigned int *)t192);
    t197 = (t196 << 12);
    t198 = *((unsigned int *)t185);
    *((unsigned int *)t185) = (t198 | t197);
    t199 = *((unsigned int *)t181);
    *((unsigned int *)t181) = (t199 & 2147483647U);
    t200 = *((unsigned int *)t185);
    *((unsigned int *)t185) = (t200 & 2147483647U);
    goto LAB76;

LAB77:    xsi_vlog_unsigned_bit_combine(t13, 31, t35, 31, t181, 31);
    goto LAB81;

LAB79:    memcpy(t13, t35, 8);
    goto LAB81;

LAB82:    *((unsigned int *)t42) = 1;
    goto LAB85;

LAB84:    t25 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB85;

LAB86:    t31 = (t0 + 2256U);
    t32 = *((char **)t31);
    memset(t87, 0, 8);
    t31 = (t87 + 4);
    t33 = (t32 + 4);
    t45 = *((unsigned int *)t32);
    t46 = (t45 >> 0);
    t47 = (t46 & 1);
    *((unsigned int *)t87) = t47;
    t48 = *((unsigned int *)t33);
    t51 = (t48 >> 0);
    t52 = (t51 & 1);
    *((unsigned int *)t31) = t52;
    memset(t80, 0, 8);
    t34 = (t87 + 4);
    t53 = *((unsigned int *)t34);
    t57 = (~(t53));
    t58 = *((unsigned int *)t87);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t34) != 0)
        goto LAB97;

LAB98:    t41 = (t80 + 4);
    t61 = *((unsigned int *)t80);
    t62 = *((unsigned int *)t41);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB99;

LAB100:    t74 = *((unsigned int *)t80);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t41) > 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t80) > 0)
        goto LAB105;

LAB106:    memcpy(t79, t89, 8);

LAB107:    goto LAB87;

LAB88:    t112 = (t0 + 2256U);
    t113 = *((char **)t112);
    memset(t114, 0, 8);
    t112 = (t114 + 4);
    t115 = (t113 + 4);
    t116 = *((unsigned int *)t113);
    t117 = (t116 >> 0);
    t118 = (t117 & 1);
    *((unsigned int *)t114) = t118;
    t119 = *((unsigned int *)t115);
    t120 = (t119 >> 0);
    t121 = (t120 & 1);
    *((unsigned int *)t112) = t121;
    memset(t111, 0, 8);
    t122 = (t114 + 4);
    t123 = *((unsigned int *)t122);
    t124 = (~(t123));
    t125 = *((unsigned int *)t114);
    t126 = (t125 & t124);
    t127 = (t126 & 1U);
    if (t127 != 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t122) != 0)
        goto LAB110;

LAB111:    t129 = (t111 + 4);
    t130 = *((unsigned int *)t111);
    t131 = *((unsigned int *)t129);
    t132 = (t130 || t131);
    if (t132 > 0)
        goto LAB112;

LAB113:    t153 = *((unsigned int *)t111);
    t154 = (~(t153));
    t155 = *((unsigned int *)t129);
    t156 = (t154 || t155);
    if (t156 > 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t129) > 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t111) > 0)
        goto LAB118;

LAB119:    memcpy(t110, t157, 8);

LAB120:    goto LAB89;

LAB90:    xsi_vlog_unsigned_bit_combine(t35, 31, t79, 31, t110, 31);
    goto LAB94;

LAB92:    memcpy(t35, t79, 8);
    goto LAB94;

LAB95:    *((unsigned int *)t80) = 1;
    goto LAB98;

LAB97:    t40 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB98;

LAB99:    t43 = (t0 + 4416);
    t49 = (t43 + 56U);
    t54 = *((char **)t49);
    memset(t88, 0, 8);
    t55 = (t88 + 4);
    t56 = (t54 + 4);
    t66 = *((unsigned int *)t54);
    t67 = (t66 >> 0);
    *((unsigned int *)t88) = t67;
    t68 = *((unsigned int *)t56);
    t70 = (t68 >> 0);
    *((unsigned int *)t55) = t70;
    t71 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t71 & 2147483647U);
    t72 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t72 & 2147483647U);
    goto LAB100;

LAB101:    t64 = (t0 + 4416);
    t65 = (t64 + 56U);
    t78 = *((char **)t65);
    memset(t89, 0, 8);
    t90 = (t89 + 4);
    t91 = (t78 + 4);
    t92 = *((unsigned int *)t78);
    t93 = (t92 >> 4);
    *((unsigned int *)t89) = t93;
    t94 = *((unsigned int *)t91);
    t95 = (t94 >> 4);
    *((unsigned int *)t90) = t95;
    t96 = (t78 + 8);
    t97 = (t78 + 12);
    t98 = *((unsigned int *)t96);
    t99 = (t98 << 28);
    t100 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t100 | t99);
    t101 = *((unsigned int *)t97);
    t102 = (t101 << 28);
    t103 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t103 | t102);
    t104 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t104 & 2147483647U);
    t105 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t105 & 2147483647U);
    goto LAB102;

LAB103:    xsi_vlog_unsigned_bit_combine(t79, 31, t88, 31, t89, 31);
    goto LAB107;

LAB105:    memcpy(t79, t88, 8);
    goto LAB107;

LAB108:    *((unsigned int *)t111) = 1;
    goto LAB111;

LAB110:    t128 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t128) = 1;
    goto LAB111;

LAB112:    t134 = (t0 + 4416);
    t135 = (t134 + 56U);
    t136 = *((char **)t135);
    memset(t133, 0, 8);
    t137 = (t133 + 4);
    t138 = (t136 + 4);
    t139 = *((unsigned int *)t136);
    t140 = (t139 >> 10);
    *((unsigned int *)t133) = t140;
    t141 = *((unsigned int *)t138);
    t142 = (t141 >> 10);
    *((unsigned int *)t137) = t142;
    t143 = (t136 + 8);
    t144 = (t136 + 12);
    t145 = *((unsigned int *)t143);
    t146 = (t145 << 22);
    t147 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t147 | t146);
    t148 = *((unsigned int *)t144);
    t149 = (t148 << 22);
    t150 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t150 | t149);
    t151 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t151 & 2147483647U);
    t152 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t152 & 2147483647U);
    goto LAB113;

LAB114:    t158 = (t0 + 4416);
    t159 = (t158 + 56U);
    t160 = *((char **)t159);
    memset(t157, 0, 8);
    t161 = (t157 + 4);
    t162 = (t160 + 4);
    t163 = *((unsigned int *)t160);
    t164 = (t163 >> 12);
    *((unsigned int *)t157) = t164;
    t165 = *((unsigned int *)t162);
    t166 = (t165 >> 12);
    *((unsigned int *)t161) = t166;
    t167 = (t160 + 8);
    t168 = (t160 + 12);
    t169 = *((unsigned int *)t167);
    t170 = (t169 << 20);
    t171 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t171 | t170);
    t172 = *((unsigned int *)t168);
    t173 = (t172 << 20);
    t174 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t174 | t173);
    t175 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t175 & 2147483647U);
    t176 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t176 & 2147483647U);
    goto LAB115;

LAB116:    xsi_vlog_unsigned_bit_combine(t110, 31, t133, 31, t157, 31);
    goto LAB120;

LAB118:    memcpy(t110, t133, 8);
    goto LAB120;

LAB121:    t216 = *((unsigned int *)t204);
    t84 = (t216 + 0);
    t217 = *((unsigned int *)t202);
    t218 = *((unsigned int *)t203);
    t85 = (t217 - t218);
    t86 = (t85 + 1);
    xsi_vlogvar_wait_assign_value(t201, t13, t84, *((unsigned int *)t203), t86, 0LL);
    goto LAB122;

}

static void Cont_3346_12(char *t0)
{
    char t3[8];
    char t20[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
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
    unsigned int t19;
    char *t21;
    char *t22;
    char *t23;
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
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;

LAB0:    t1 = (t0 + 8944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3346, ng0);
    t2 = (t0 + 2416U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 31);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 31);
    *((unsigned int *)t2) = t9;
    t10 = (t4 + 8);
    t11 = (t4 + 12);
    t12 = *((unsigned int *)t10);
    t13 = (t12 << 1);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 | t13);
    t15 = *((unsigned int *)t11);
    t16 = (t15 << 1);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 | t16);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 1048575U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 1048575U);
    t21 = (t0 + 2416U);
    t22 = *((char **)t21);
    memset(t20, 0, 8);
    t21 = (t20 + 4);
    t23 = (t22 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (t24 >> 28);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 28);
    *((unsigned int *)t21) = t27;
    t28 = (t22 + 8);
    t29 = (t22 + 12);
    t30 = *((unsigned int *)t28);
    t31 = (t30 << 4);
    t32 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t32 | t31);
    t33 = *((unsigned int *)t29);
    t34 = (t33 << 4);
    t35 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t35 | t34);
    t36 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t36 & 1048575U);
    t37 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t37 & 1048575U);
    t39 = *((unsigned int *)t3);
    t40 = *((unsigned int *)t20);
    t41 = (t39 ^ t40);
    *((unsigned int *)t38) = t41;
    t42 = (t3 + 4);
    t43 = (t20 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB4;

LAB5:
LAB6:    t52 = (t0 + 10112);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memset(t56, 0, 8);
    t57 = 1048575U;
    t58 = t57;
    t59 = (t38 + 4);
    t60 = *((unsigned int *)t38);
    t57 = (t57 & t60);
    t61 = *((unsigned int *)t59);
    t58 = (t58 & t61);
    t62 = (t56 + 4);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t63 | t57);
    t64 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t64 | t58);
    xsi_driver_vfirst_trans(t52, 0, 19);
    t65 = (t0 + 9456);
    *((int *)t65) = 1;

LAB1:    return;
LAB4:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    goto LAB6;

}


extern void secureip_m_00481695783437748338_3769449271_init()
{
	static char *pe[] = {(void *)NetDecl_3259_0,(void *)NetDecl_3265_1,(void *)NetDecl_3266_2,(void *)NetDecl_3267_3,(void *)NetDecl_3268_4,(void *)NetDecl_3269_5,(void *)NetDecl_3270_6,(void *)Always_3279_7,(void *)Always_3295_8,(void *)NetDecl_3318_9,(void *)NetDecl_3318_10,(void *)Always_3319_11,(void *)Cont_3346_12};
	xsi_register_didat("secureip_m_00481695783437748338_3769449271", "isim/isim_system.sim/secureip/m_00481695783437748338_3769449271.didat");
	xsi_register_executes(pe);
}
