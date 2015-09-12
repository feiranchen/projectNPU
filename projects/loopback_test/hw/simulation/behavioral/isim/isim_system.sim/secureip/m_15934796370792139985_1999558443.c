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
static unsigned int ng2[] = {11U, 0U};
static unsigned int ng3[] = {1U, 0U};



static void Always_8830_0(char *t0)
{
    char t4[8];
    char t21[8];
    char t30[8];
    char t70[8];
    char t89[8];
    char t99[8];
    char t107[8];
    char t135[8];
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
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    int t159;
    int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    char *t174;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8830, ng0);
    t2 = (t0 + 3960);
    *((int *)t2) = 1;
    t3 = (t0 + 3672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(8830, ng0);

LAB5:    xsi_set_current_line(8831, ng0);
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

LAB11:    xsi_set_current_line(8836, ng0);

LAB14:    xsi_set_current_line(8837, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 16, 500LL);
    xsi_set_current_line(8838, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 500LL);
    xsi_set_current_line(8839, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
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
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);
    t12 = ((char*)((ng2)));
    memset(t21, 0, 8);
    t13 = (t4 + 4);
    t19 = (t12 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t12);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t19);
    t23 = (t18 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t19);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB18;

LAB15:    if (t27 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t21) = 1;

LAB18:    t31 = *((unsigned int *)t3);
    t32 = *((unsigned int *)t21);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t34 = (t3 + 4);
    t35 = (t21 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB19;

LAB20:
LAB21:    t62 = (t30 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t30);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(8842, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 3);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t4);
    t17 = (t15 & t16);
    *((unsigned int *)t21) = t17;
    t12 = (t3 + 4);
    t13 = (t4 + 4);
    t19 = (t21 + 4);
    t18 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t18 | t22);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t19);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB39;

LAB40:
LAB41:    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    memset(t30, 0, 8);
    t35 = (t30 + 4);
    t44 = (t36 + 4);
    t48 = *((unsigned int *)t36);
    t49 = (t48 >> 2);
    t50 = (t49 & 1);
    *((unsigned int *)t30) = t50;
    t51 = *((unsigned int *)t44);
    t52 = (t51 >> 2);
    t53 = (t52 & 1);
    *((unsigned int *)t35) = t53;
    t56 = *((unsigned int *)t21);
    t57 = *((unsigned int *)t30);
    t58 = (t56 & t57);
    *((unsigned int *)t70) = t58;
    t45 = (t21 + 4);
    t62 = (t30 + 4);
    t68 = (t70 + 4);
    t59 = *((unsigned int *)t45);
    t60 = *((unsigned int *)t62);
    t61 = (t59 | t60);
    *((unsigned int *)t68) = t61;
    t63 = *((unsigned int *)t68);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB42;

LAB43:
LAB44:    t87 = (t0 + 1048U);
    t88 = *((char **)t87);
    memset(t89, 0, 8);
    t87 = (t89 + 4);
    t90 = (t88 + 4);
    t91 = *((unsigned int *)t88);
    t92 = (t91 >> 1);
    t93 = (t92 & 1);
    *((unsigned int *)t89) = t93;
    t94 = *((unsigned int *)t90);
    t95 = (t94 >> 1);
    t96 = (t95 & 1);
    *((unsigned int *)t87) = t96;
    t97 = (t0 + 1048U);
    t98 = *((char **)t97);
    memset(t99, 0, 8);
    t97 = (t99 + 4);
    t100 = (t98 + 4);
    t101 = *((unsigned int *)t98);
    t102 = (t101 >> 0);
    t103 = (t102 & 1);
    *((unsigned int *)t99) = t103;
    t104 = *((unsigned int *)t100);
    t105 = (t104 >> 0);
    t106 = (t105 & 1);
    *((unsigned int *)t97) = t106;
    t108 = *((unsigned int *)t89);
    t109 = *((unsigned int *)t99);
    t110 = (t108 | t109);
    *((unsigned int *)t107) = t110;
    t111 = (t89 + 4);
    t112 = (t99 + 4);
    t113 = (t107 + 4);
    t114 = *((unsigned int *)t111);
    t115 = *((unsigned int *)t112);
    t116 = (t114 | t115);
    *((unsigned int *)t113) = t116;
    t117 = *((unsigned int *)t113);
    t118 = (t117 != 0);
    if (t118 == 1)
        goto LAB45;

LAB46:
LAB47:    t136 = *((unsigned int *)t70);
    t137 = *((unsigned int *)t107);
    t138 = (t136 & t137);
    *((unsigned int *)t135) = t138;
    t139 = (t70 + 4);
    t140 = (t107 + 4);
    t141 = (t135 + 4);
    t142 = *((unsigned int *)t139);
    t143 = *((unsigned int *)t140);
    t144 = (t142 | t143);
    *((unsigned int *)t141) = t144;
    t145 = *((unsigned int *)t141);
    t146 = (t145 != 0);
    if (t146 == 1)
        goto LAB48;

LAB49:
LAB50:    t167 = (t135 + 4);
    t168 = *((unsigned int *)t167);
    t169 = (~(t168));
    t170 = *((unsigned int *)t135);
    t171 = (t170 & t169);
    t172 = (t171 != 0);
    if (t172 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(8846, ng0);

LAB55:    xsi_set_current_line(8847, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 500LL);

LAB53:
LAB24:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(8831, ng0);

LAB13:    xsi_set_current_line(8832, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 16, 500LL);
    xsi_set_current_line(8833, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 500LL);
    xsi_set_current_line(8834, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 500LL);
    xsi_set_current_line(8835, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 500LL);
    goto LAB12;

LAB17:    t20 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB18;

LAB19:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t3 + 4);
    t45 = (t21 + 4);
    t46 = *((unsigned int *)t3);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t21);
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
    goto LAB21;

LAB22:    xsi_set_current_line(8839, ng0);

LAB25:    xsi_set_current_line(8840, ng0);
    t68 = ((char*)((ng3)));
    t69 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t69, t68, 0, 0, 1, 500LL);
    xsi_set_current_line(8841, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t30 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 4);
    t9 = (t8 & 1);
    *((unsigned int *)t30) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 4);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t21, 0, 8);
    t6 = (t30 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t30);
    t18 = (t17 & t16);
    t22 = (t18 & 1U);
    if (t22 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t6) != 0)
        goto LAB28;

LAB29:    t13 = (t21 + 4);
    t23 = *((unsigned int *)t21);
    t24 = *((unsigned int *)t13);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB30;

LAB31:    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t13) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t21) > 0)
        goto LAB36;

LAB37:    memcpy(t4, t34, 8);

LAB38:    t19 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t19, t4, 0, 0, 16, 500LL);
    goto LAB24;

LAB26:    *((unsigned int *)t21) = 1;
    goto LAB29;

LAB28:    t12 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB29;

LAB30:    t19 = (t0 + 1688U);
    t20 = *((char **)t19);
    goto LAB31;

LAB32:    t19 = (t0 + 1528U);
    t34 = *((char **)t19);
    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t4, 16, t20, 16, t34, 16);
    goto LAB38;

LAB36:    memcpy(t4, t20, 8);
    goto LAB38;

LAB39:    t26 = *((unsigned int *)t21);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t21) = (t26 | t27);
    t20 = (t3 + 4);
    t34 = (t4 + 4);
    t28 = *((unsigned int *)t3);
    t29 = (~(t28));
    t31 = *((unsigned int *)t20);
    t32 = (~(t31));
    t33 = *((unsigned int *)t4);
    t37 = (~(t33));
    t38 = *((unsigned int *)t34);
    t39 = (~(t38));
    t54 = (t29 & t32);
    t55 = (t37 & t39);
    t40 = (~(t54));
    t41 = (~(t55));
    t42 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t42 & t40);
    t43 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t43 & t41);
    t46 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t46 & t40);
    t47 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t47 & t41);
    goto LAB41;

LAB42:    t65 = *((unsigned int *)t70);
    t66 = *((unsigned int *)t68);
    *((unsigned int *)t70) = (t65 | t66);
    t69 = (t21 + 4);
    t71 = (t30 + 4);
    t67 = *((unsigned int *)t21);
    t72 = (~(t67));
    t73 = *((unsigned int *)t69);
    t74 = (~(t73));
    t75 = *((unsigned int *)t30);
    t76 = (~(t75));
    t77 = *((unsigned int *)t71);
    t78 = (~(t77));
    t79 = (t72 & t74);
    t80 = (t76 & t78);
    t81 = (~(t79));
    t82 = (~(t80));
    t83 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t83 & t81);
    t84 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t84 & t82);
    t85 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t85 & t81);
    t86 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t86 & t82);
    goto LAB44;

LAB45:    t119 = *((unsigned int *)t107);
    t120 = *((unsigned int *)t113);
    *((unsigned int *)t107) = (t119 | t120);
    t121 = (t89 + 4);
    t122 = (t99 + 4);
    t123 = *((unsigned int *)t121);
    t124 = (~(t123));
    t125 = *((unsigned int *)t89);
    t126 = (t125 & t124);
    t127 = *((unsigned int *)t122);
    t128 = (~(t127));
    t129 = *((unsigned int *)t99);
    t130 = (t129 & t128);
    t131 = (~(t126));
    t132 = (~(t130));
    t133 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t133 & t131);
    t134 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t134 & t132);
    goto LAB47;

LAB48:    t147 = *((unsigned int *)t135);
    t148 = *((unsigned int *)t141);
    *((unsigned int *)t135) = (t147 | t148);
    t149 = (t70 + 4);
    t150 = (t107 + 4);
    t151 = *((unsigned int *)t70);
    t152 = (~(t151));
    t153 = *((unsigned int *)t149);
    t154 = (~(t153));
    t155 = *((unsigned int *)t107);
    t156 = (~(t155));
    t157 = *((unsigned int *)t150);
    t158 = (~(t157));
    t159 = (t152 & t154);
    t160 = (t156 & t158);
    t161 = (~(t159));
    t162 = (~(t160));
    t163 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t163 & t161);
    t164 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t164 & t162);
    t165 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t165 & t161);
    t166 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t166 & t162);
    goto LAB50;

LAB51:    xsi_set_current_line(8843, ng0);

LAB54:    xsi_set_current_line(8844, ng0);
    t173 = ((char*)((ng3)));
    t174 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t174, t173, 0, 0, 1, 500LL);
    xsi_set_current_line(8845, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 500LL);
    goto LAB53;

}


extern void secureip_m_15934796370792139985_1999558443_init()
{
	static char *pe[] = {(void *)Always_8830_0};
	xsi_register_didat("secureip_m_15934796370792139985_1999558443", "isim/isim_system.sim/secureip/m_15934796370792139985_1999558443.didat");
	xsi_register_executes(pe);
}
