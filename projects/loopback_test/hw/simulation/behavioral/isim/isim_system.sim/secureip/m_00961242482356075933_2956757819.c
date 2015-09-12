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



static void Initial_15889_0(char *t0)
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

LAB0:    t1 = (t0 + 6520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15890, ng0);

LAB4:    xsi_set_current_line(15891, ng0);
    t2 = (t0 + 6328);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(15892, ng0);
    t2 = (t0 + 5048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t2) == 0)
        goto LAB6;

LAB8:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB9:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB10:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 5608);
    xsi_vlogvar_assign_value(t21, t3, 0, 0, 1);
    goto LAB1;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB11:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB10;

}

static void NetDecl_15896_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t18[8];
    char t21[8];
    char t31[8];
    char t41[8];
    char t51[8];
    char t61[8];
    char t71[8];
    char t81[8];
    char t91[8];
    char t101[8];
    char t111[8];
    char t121[8];
    char t131[8];
    char t141[8];
    char t151[8];
    char t161[8];
    char t171[8];
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
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    char *t160;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    char *t185;
    char *t186;
    char *t187;
    char *t188;
    unsigned int t189;
    unsigned int t190;
    char *t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;

LAB0:    t1 = (t0 + 6768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15896, ng0);
    t2 = (t0 + 5608);
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

LAB9:    t179 = *((unsigned int *)t4);
    t180 = (~(t179));
    t181 = *((unsigned int *)t14);
    t182 = (t180 || t181);
    if (t182 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t184, 8);

LAB16:    t183 = (t0 + 8752);
    t185 = (t183 + 56U);
    t186 = *((char **)t185);
    t187 = (t186 + 56U);
    t188 = *((char **)t187);
    memset(t188, 0, 8);
    t189 = 65535U;
    t190 = t189;
    t191 = (t3 + 4);
    t192 = *((unsigned int *)t3);
    t189 = (t189 & t192);
    t193 = *((unsigned int *)t191);
    t190 = (t190 & t193);
    t194 = (t188 + 4);
    t195 = *((unsigned int *)t188);
    *((unsigned int *)t188) = (t195 | t189);
    t196 = *((unsigned int *)t194);
    *((unsigned int *)t194) = (t196 | t190);
    xsi_driver_vfirst_trans(t183, 0, 15U);
    t197 = (t0 + 8576);
    *((int *)t197) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t19 = (t21 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 15);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 15);
    t28 = (t27 & 1);
    *((unsigned int *)t19) = t28;
    t29 = (t0 + 1048U);
    t30 = *((char **)t29);
    memset(t31, 0, 8);
    t29 = (t31 + 4);
    t32 = (t30 + 4);
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 14);
    t35 = (t34 & 1);
    *((unsigned int *)t31) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 14);
    t38 = (t37 & 1);
    *((unsigned int *)t29) = t38;
    t39 = (t0 + 1048U);
    t40 = *((char **)t39);
    memset(t41, 0, 8);
    t39 = (t41 + 4);
    t42 = (t40 + 4);
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 13);
    t45 = (t44 & 1);
    *((unsigned int *)t41) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 >> 13);
    t48 = (t47 & 1);
    *((unsigned int *)t39) = t48;
    t49 = (t0 + 1048U);
    t50 = *((char **)t49);
    memset(t51, 0, 8);
    t49 = (t51 + 4);
    t52 = (t50 + 4);
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 12);
    t55 = (t54 & 1);
    *((unsigned int *)t51) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 >> 12);
    t58 = (t57 & 1);
    *((unsigned int *)t49) = t58;
    t59 = (t0 + 1048U);
    t60 = *((char **)t59);
    memset(t61, 0, 8);
    t59 = (t61 + 4);
    t62 = (t60 + 4);
    t63 = *((unsigned int *)t60);
    t64 = (t63 >> 11);
    t65 = (t64 & 1);
    *((unsigned int *)t61) = t65;
    t66 = *((unsigned int *)t62);
    t67 = (t66 >> 11);
    t68 = (t67 & 1);
    *((unsigned int *)t59) = t68;
    t69 = (t0 + 1048U);
    t70 = *((char **)t69);
    memset(t71, 0, 8);
    t69 = (t71 + 4);
    t72 = (t70 + 4);
    t73 = *((unsigned int *)t70);
    t74 = (t73 >> 10);
    t75 = (t74 & 1);
    *((unsigned int *)t71) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 >> 10);
    t78 = (t77 & 1);
    *((unsigned int *)t69) = t78;
    t79 = (t0 + 1048U);
    t80 = *((char **)t79);
    memset(t81, 0, 8);
    t79 = (t81 + 4);
    t82 = (t80 + 4);
    t83 = *((unsigned int *)t80);
    t84 = (t83 >> 9);
    t85 = (t84 & 1);
    *((unsigned int *)t81) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 >> 9);
    t88 = (t87 & 1);
    *((unsigned int *)t79) = t88;
    t89 = (t0 + 1048U);
    t90 = *((char **)t89);
    memset(t91, 0, 8);
    t89 = (t91 + 4);
    t92 = (t90 + 4);
    t93 = *((unsigned int *)t90);
    t94 = (t93 >> 8);
    t95 = (t94 & 1);
    *((unsigned int *)t91) = t95;
    t96 = *((unsigned int *)t92);
    t97 = (t96 >> 8);
    t98 = (t97 & 1);
    *((unsigned int *)t89) = t98;
    t99 = (t0 + 1048U);
    t100 = *((char **)t99);
    memset(t101, 0, 8);
    t99 = (t101 + 4);
    t102 = (t100 + 4);
    t103 = *((unsigned int *)t100);
    t104 = (t103 >> 7);
    t105 = (t104 & 1);
    *((unsigned int *)t101) = t105;
    t106 = *((unsigned int *)t102);
    t107 = (t106 >> 7);
    t108 = (t107 & 1);
    *((unsigned int *)t99) = t108;
    t109 = (t0 + 1048U);
    t110 = *((char **)t109);
    memset(t111, 0, 8);
    t109 = (t111 + 4);
    t112 = (t110 + 4);
    t113 = *((unsigned int *)t110);
    t114 = (t113 >> 6);
    t115 = (t114 & 1);
    *((unsigned int *)t111) = t115;
    t116 = *((unsigned int *)t112);
    t117 = (t116 >> 6);
    t118 = (t117 & 1);
    *((unsigned int *)t109) = t118;
    t119 = (t0 + 1048U);
    t120 = *((char **)t119);
    memset(t121, 0, 8);
    t119 = (t121 + 4);
    t122 = (t120 + 4);
    t123 = *((unsigned int *)t120);
    t124 = (t123 >> 5);
    t125 = (t124 & 1);
    *((unsigned int *)t121) = t125;
    t126 = *((unsigned int *)t122);
    t127 = (t126 >> 5);
    t128 = (t127 & 1);
    *((unsigned int *)t119) = t128;
    t129 = (t0 + 1048U);
    t130 = *((char **)t129);
    memset(t131, 0, 8);
    t129 = (t131 + 4);
    t132 = (t130 + 4);
    t133 = *((unsigned int *)t130);
    t134 = (t133 >> 4);
    t135 = (t134 & 1);
    *((unsigned int *)t131) = t135;
    t136 = *((unsigned int *)t132);
    t137 = (t136 >> 4);
    t138 = (t137 & 1);
    *((unsigned int *)t129) = t138;
    t139 = (t0 + 1048U);
    t140 = *((char **)t139);
    memset(t141, 0, 8);
    t139 = (t141 + 4);
    t142 = (t140 + 4);
    t143 = *((unsigned int *)t140);
    t144 = (t143 >> 3);
    t145 = (t144 & 1);
    *((unsigned int *)t141) = t145;
    t146 = *((unsigned int *)t142);
    t147 = (t146 >> 3);
    t148 = (t147 & 1);
    *((unsigned int *)t139) = t148;
    t149 = (t0 + 1048U);
    t150 = *((char **)t149);
    memset(t151, 0, 8);
    t149 = (t151 + 4);
    t152 = (t150 + 4);
    t153 = *((unsigned int *)t150);
    t154 = (t153 >> 2);
    t155 = (t154 & 1);
    *((unsigned int *)t151) = t155;
    t156 = *((unsigned int *)t152);
    t157 = (t156 >> 2);
    t158 = (t157 & 1);
    *((unsigned int *)t149) = t158;
    t159 = (t0 + 1048U);
    t160 = *((char **)t159);
    memset(t161, 0, 8);
    t159 = (t161 + 4);
    t162 = (t160 + 4);
    t163 = *((unsigned int *)t160);
    t164 = (t163 >> 1);
    t165 = (t164 & 1);
    *((unsigned int *)t161) = t165;
    t166 = *((unsigned int *)t162);
    t167 = (t166 >> 1);
    t168 = (t167 & 1);
    *((unsigned int *)t159) = t168;
    t169 = (t0 + 1048U);
    t170 = *((char **)t169);
    memset(t171, 0, 8);
    t169 = (t171 + 4);
    t172 = (t170 + 4);
    t173 = *((unsigned int *)t170);
    t174 = (t173 >> 0);
    t175 = (t174 & 1);
    *((unsigned int *)t171) = t175;
    t176 = *((unsigned int *)t172);
    t177 = (t176 >> 0);
    t178 = (t177 & 1);
    *((unsigned int *)t169) = t178;
    xsi_vlogtype_concat(t18, 16, 16, 16U, t171, 1, t161, 1, t151, 1, t141, 1, t131, 1, t121, 1, t111, 1, t101, 1, t91, 1, t81, 1, t71, 1, t61, 1, t51, 1, t41, 1, t31, 1, t21, 1);
    goto LAB9;

LAB10:    t183 = (t0 + 1048U);
    t184 = *((char **)t183);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t18, 16, t184, 16);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_15925_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t23[8];
    char t41[8];
    char t71[8];
    char t79[8];
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
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;

LAB0:    t1 = (t0 + 7016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15925, ng0);
    t2 = (t0 + 2008U);
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

LAB15:    memcpy(t3, t79, 8);

LAB16:    t107 = (t0 + 8816);
    t108 = (t107 + 56U);
    t109 = *((char **)t108);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    memset(t111, 0, 8);
    t112 = 1U;
    t113 = t112;
    t114 = (t3 + 4);
    t115 = *((unsigned int *)t3);
    t112 = (t112 & t115);
    t116 = *((unsigned int *)t114);
    t113 = (t113 & t116);
    t117 = (t111 + 4);
    t118 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t118 | t112);
    t119 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t119 | t113);
    xsi_driver_vfirst_trans(t107, 0, 0);
    t120 = (t0 + 8592);
    *((int *)t120) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 2168U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 1528U);
    t22 = *((char **)t16);
    t16 = (t0 + 1848U);
    t24 = *((char **)t16);
    memset(t23, 0, 8);
    t16 = (t24 + 4);
    t25 = *((unsigned int *)t16);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t16) == 0)
        goto LAB17;

LAB19:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;

LAB20:    t31 = (t23 + 4);
    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (~(t33));
    *((unsigned int *)t23) = t34;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB22;

LAB21:    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 1U);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 1U);
    t42 = *((unsigned int *)t22);
    t43 = *((unsigned int *)t23);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = (t22 + 4);
    t46 = (t23 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB23;

LAB24:
LAB25:    t69 = (t0 + 1688U);
    t70 = *((char **)t69);
    memset(t71, 0, 8);
    t69 = (t71 + 4);
    t72 = (t70 + 4);
    t73 = *((unsigned int *)t70);
    t74 = (t73 >> 0);
    t75 = (t74 & 1);
    *((unsigned int *)t71) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 >> 0);
    t78 = (t77 & 1);
    *((unsigned int *)t69) = t78;
    t80 = *((unsigned int *)t41);
    t81 = *((unsigned int *)t71);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t83 = (t41 + 4);
    t84 = (t71 + 4);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t83);
    t87 = *((unsigned int *)t84);
    t88 = (t86 | t87);
    *((unsigned int *)t85) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t17, 1, t79, 1);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t23) = 1;
    goto LAB20;

LAB22:    t35 = *((unsigned int *)t23);
    t36 = *((unsigned int *)t32);
    *((unsigned int *)t23) = (t35 | t36);
    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t37 | t38);
    goto LAB21;

LAB23:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t22 + 4);
    t56 = (t23 + 4);
    t57 = *((unsigned int *)t55);
    t58 = (~(t57));
    t59 = *((unsigned int *)t22);
    t60 = (t59 & t58);
    t61 = *((unsigned int *)t56);
    t62 = (~(t61));
    t63 = *((unsigned int *)t23);
    t64 = (t63 & t62);
    t65 = (~(t60));
    t66 = (~(t64));
    t67 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t67 & t65);
    t68 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t68 & t66);
    goto LAB25;

LAB26:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t79) = (t91 | t92);
    t93 = (t41 + 4);
    t94 = (t71 + 4);
    t95 = *((unsigned int *)t93);
    t96 = (~(t95));
    t97 = *((unsigned int *)t41);
    t98 = (t97 & t96);
    t99 = *((unsigned int *)t94);
    t100 = (~(t99));
    t101 = *((unsigned int *)t71);
    t102 = (t101 & t100);
    t103 = (~(t98));
    t104 = (~(t102));
    t105 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t105 & t103);
    t106 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t106 & t104);
    goto LAB28;

}

static void Cont_15929_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t23[8];
    char t41[8];
    char t69[8];
    char t72[8];
    char t97[8];
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
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t70;
    char *t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;

LAB0:    t1 = (t0 + 7264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15929, ng0);
    t2 = (t0 + 2008U);
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

LAB15:    memcpy(t3, t97, 8);

LAB16:    t125 = (t0 + 8880);
    t126 = (t125 + 56U);
    t127 = *((char **)t126);
    t128 = (t127 + 56U);
    t129 = *((char **)t128);
    memset(t129, 0, 8);
    t130 = 1U;
    t131 = t130;
    t132 = (t3 + 4);
    t133 = *((unsigned int *)t3);
    t130 = (t130 & t133);
    t134 = *((unsigned int *)t132);
    t131 = (t131 & t134);
    t135 = (t129 + 4);
    t136 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t136 | t130);
    t137 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t137 | t131);
    xsi_driver_vfirst_trans(t125, 0, 0);
    t138 = (t0 + 8608);
    *((int *)t138) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 2168U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 1528U);
    t22 = *((char **)t16);
    t16 = (t0 + 1848U);
    t24 = *((char **)t16);
    memset(t23, 0, 8);
    t16 = (t24 + 4);
    t25 = *((unsigned int *)t16);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t16) == 0)
        goto LAB17;

LAB19:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;

LAB20:    t31 = (t23 + 4);
    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (~(t33));
    *((unsigned int *)t23) = t34;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB22;

LAB21:    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 1U);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 1U);
    t42 = *((unsigned int *)t22);
    t43 = *((unsigned int *)t23);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = (t22 + 4);
    t46 = (t23 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB23;

LAB24:
LAB25:    t70 = (t0 + 1688U);
    t71 = *((char **)t70);
    memset(t72, 0, 8);
    t70 = (t72 + 4);
    t73 = (t71 + 4);
    t74 = *((unsigned int *)t71);
    t75 = (t74 >> 0);
    t76 = (t75 & 1);
    *((unsigned int *)t72) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 >> 0);
    t79 = (t78 & 1);
    *((unsigned int *)t70) = t79;
    memset(t69, 0, 8);
    t80 = (t72 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t72);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t80) == 0)
        goto LAB26;

LAB28:    t86 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t86) = 1;

LAB29:    t87 = (t69 + 4);
    t88 = (t72 + 4);
    t89 = *((unsigned int *)t72);
    t90 = (~(t89));
    *((unsigned int *)t69) = t90;
    *((unsigned int *)t87) = 0;
    if (*((unsigned int *)t88) != 0)
        goto LAB31;

LAB30:    t95 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t95 & 1U);
    t96 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t96 & 1U);
    t98 = *((unsigned int *)t41);
    t99 = *((unsigned int *)t69);
    t100 = (t98 | t99);
    *((unsigned int *)t97) = t100;
    t101 = (t41 + 4);
    t102 = (t69 + 4);
    t103 = (t97 + 4);
    t104 = *((unsigned int *)t101);
    t105 = *((unsigned int *)t102);
    t106 = (t104 | t105);
    *((unsigned int *)t103) = t106;
    t107 = *((unsigned int *)t103);
    t108 = (t107 != 0);
    if (t108 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t17, 1, t97, 1);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t23) = 1;
    goto LAB20;

LAB22:    t35 = *((unsigned int *)t23);
    t36 = *((unsigned int *)t32);
    *((unsigned int *)t23) = (t35 | t36);
    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t37 | t38);
    goto LAB21;

LAB23:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t22 + 4);
    t56 = (t23 + 4);
    t57 = *((unsigned int *)t55);
    t58 = (~(t57));
    t59 = *((unsigned int *)t22);
    t60 = (t59 & t58);
    t61 = *((unsigned int *)t56);
    t62 = (~(t61));
    t63 = *((unsigned int *)t23);
    t64 = (t63 & t62);
    t65 = (~(t60));
    t66 = (~(t64));
    t67 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t67 & t65);
    t68 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t68 & t66);
    goto LAB25;

LAB26:    *((unsigned int *)t69) = 1;
    goto LAB29;

LAB31:    t91 = *((unsigned int *)t69);
    t92 = *((unsigned int *)t88);
    *((unsigned int *)t69) = (t91 | t92);
    t93 = *((unsigned int *)t87);
    t94 = *((unsigned int *)t88);
    *((unsigned int *)t87) = (t93 | t94);
    goto LAB30;

LAB32:    t109 = *((unsigned int *)t97);
    t110 = *((unsigned int *)t103);
    *((unsigned int *)t97) = (t109 | t110);
    t111 = (t41 + 4);
    t112 = (t69 + 4);
    t113 = *((unsigned int *)t111);
    t114 = (~(t113));
    t115 = *((unsigned int *)t41);
    t116 = (t115 & t114);
    t117 = *((unsigned int *)t112);
    t118 = (~(t117));
    t119 = *((unsigned int *)t69);
    t120 = (t119 & t118);
    t121 = (~(t116));
    t122 = (~(t120));
    t123 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t123 & t121);
    t124 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t124 & t122);
    goto LAB34;

}

static void Cont_15935_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
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
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 7512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15935, ng0);
    t2 = (t0 + 1688U);
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

LAB9:    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t21);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t31, 8);

LAB16:    t25 = (t0 + 8944);
    t32 = (t25 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 65535U;
    t37 = t36;
    t38 = (t3 + 4);
    t39 = *((unsigned int *)t3);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t25, 0, 15);
    t44 = (t0 + 8624);
    *((int *)t44) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 3128U);
    t26 = *((char **)t25);
    goto LAB9;

LAB10:    t25 = (t0 + 3288U);
    t31 = *((char **)t25);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t26, 16, t31, 16);
    goto LAB16;

LAB14:    memcpy(t3, t26, 8);
    goto LAB16;

}

static void Cont_15937_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
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
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 7760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15937, ng0);
    t2 = (t0 + 1688U);
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

LAB9:    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t21);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t31, 8);

LAB16:    t25 = (t0 + 9008);
    t32 = (t25 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 1U;
    t37 = t36;
    t38 = (t3 + 4);
    t39 = *((unsigned int *)t3);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t25, 0, 0);
    t44 = (t0 + 8640);
    *((int *)t44) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 3928U);
    t26 = *((char **)t25);
    goto LAB9;

LAB10:    t25 = (t0 + 3768U);
    t31 = *((char **)t25);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t26, 1, t31, 1);
    goto LAB16;

LAB14:    memcpy(t3, t26, 8);
    goto LAB16;

}

static void Cont_15939_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
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
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;

LAB0:    t1 = (t0 + 8008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15939, ng0);
    t2 = (t0 + 1688U);
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

LAB9:    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t21);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t33, 8);

LAB16:    t32 = (t0 + 9072);
    t34 = (t32 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t37, 0, 8);
    t38 = 7U;
    t39 = t38;
    t40 = (t3 + 4);
    t41 = *((unsigned int *)t3);
    t38 = (t38 & t41);
    t42 = *((unsigned int *)t40);
    t39 = (t39 & t42);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 | t38);
    t45 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t45 | t39);
    xsi_driver_vfirst_trans(t32, 0, 2);
    t46 = (t0 + 8656);
    *((int *)t46) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t26 = (t0 + 3608U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng1)));
    xsi_vlogtype_concat(t25, 3, 3, 2U, t26, 1, t27, 2);
    goto LAB9;

LAB10:    t32 = (t0 + 3448U);
    t33 = *((char **)t32);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 3, t25, 3, t33, 3);
    goto LAB16;

LAB14:    memcpy(t3, t25, 8);
    goto LAB16;

}

static void Cont_15941_7(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
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
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 8256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15941, ng0);
    t2 = (t0 + 1688U);
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

LAB9:    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t21);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t31, 8);

LAB16:    t25 = (t0 + 9136);
    t32 = (t25 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 1U;
    t37 = t36;
    t38 = (t3 + 4);
    t39 = *((unsigned int *)t3);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t25, 0, 0);
    t44 = (t0 + 8672);
    *((int *)t44) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 4248U);
    t26 = *((char **)t25);
    goto LAB9;

LAB10:    t25 = (t0 + 4088U);
    t31 = *((char **)t25);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t26, 1, t31, 1);
    goto LAB16;

LAB14:    memcpy(t3, t26, 8);
    goto LAB16;

}


extern void secureip_m_00961242482356075933_2956757819_init()
{
	static char *pe[] = {(void *)Initial_15889_0,(void *)NetDecl_15896_1,(void *)Cont_15925_2,(void *)Cont_15929_3,(void *)Cont_15935_4,(void *)Cont_15937_5,(void *)Cont_15939_6,(void *)Cont_15941_7};
	xsi_register_didat("secureip_m_00961242482356075933_2956757819", "isim/isim_system.sim/secureip/m_00961242482356075933_2956757819.didat");
	xsi_register_executes(pe);
}
