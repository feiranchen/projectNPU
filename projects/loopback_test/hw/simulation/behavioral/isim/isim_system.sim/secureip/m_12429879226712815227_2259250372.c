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
static unsigned int ng1[] = {1431655765U, 0U};



static void NetDecl_3879_0(char *t0)
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

LAB0:    t1 = (t0 + 3888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3879, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5344);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 2147483647U;
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
    xsi_driver_vfirst_trans(t5, 0, 30U);
    t18 = (t0 + 5200);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_3881_1(char *t0)
{
    char t13[8];
    char t14[8];
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
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 4136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3881, ng0);
    t2 = (t0 + 5216);
    *((int *)t2) = 1;
    t3 = (t0 + 4168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(3881, ng0);

LAB5:    xsi_set_current_line(3882, ng0);
    t4 = (t0 + 1776U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(3884, ng0);

LAB10:    xsi_set_current_line(3885, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t2) != 0)
        goto LAB13;

LAB14:    t5 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB15;

LAB16:    t18 = *((unsigned int *)t14);
    t19 = (~(t18));
    t20 = *((unsigned int *)t5);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t5) > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t14) > 0)
        goto LAB21;

LAB22:    memcpy(t13, t23, 8);

LAB23:    t24 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t24, t13, 0, 0, 31, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(3882, ng0);

LAB9:    xsi_set_current_line(3883, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 31, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t14) = 1;
    goto LAB14;

LAB13:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB15:    t11 = (t0 + 2256U);
    t12 = *((char **)t11);
    goto LAB16;

LAB17:    t11 = (t0 + 2976);
    t22 = (t11 + 56U);
    t23 = *((char **)t22);
    goto LAB18;

LAB19:    xsi_vlog_unsigned_bit_combine(t13, 31, t12, 31, t23, 31);
    goto LAB23;

LAB21:    memcpy(t13, t12, 8);
    goto LAB23;

}

static void Cont_3892_2(char *t0)
{
    char t3[8];
    char t14[8];
    char t26[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
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
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;

LAB0:    t1 = (t0 + 4384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3892, ng0);
    t2 = (t0 + 2976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 8);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 1048575U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 1048575U);
    t15 = (t0 + 2976);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t14, 0, 8);
    t18 = (t14 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 11);
    *((unsigned int *)t14) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 11);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t24 & 1048575U);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 1048575U);
    t27 = *((unsigned int *)t3);
    t28 = *((unsigned int *)t14);
    t29 = (t27 ^ t28);
    *((unsigned int *)t26) = t29;
    t30 = (t3 + 4);
    t31 = (t14 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB4;

LAB5:
LAB6:    t40 = (t0 + 5408);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t44, 0, 8);
    t45 = 1048575U;
    t46 = t45;
    t47 = (t26 + 4);
    t48 = *((unsigned int *)t26);
    t45 = (t45 & t48);
    t49 = *((unsigned int *)t47);
    t46 = (t46 & t49);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t51 | t45);
    t52 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t52 | t46);
    xsi_driver_vfirst_trans(t40, 0, 19);
    t53 = (t0 + 5232);
    *((int *)t53) = 1;

LAB1:    return;
LAB4:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    goto LAB6;

}

static void Cont_3894_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
    char t26[8];
    char t29[8];
    char t48[8];
    char t49[8];
    char t59[8];
    char t75[8];
    char t76[8];
    char t86[8];
    char t102[8];
    char t103[8];
    char t106[8];
    char t125[8];
    char t126[8];
    char t136[8];
    char t152[8];
    char t153[8];
    char t163[8];
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
    char *t27;
    char *t28;
    char *t30;
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
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t104;
    char *t105;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t137;
    char *t138;
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
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t154;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t164;
    char *t165;
    char *t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    unsigned int t186;
    unsigned int t187;
    char *t188;

LAB0:    t1 = (t0 + 4632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3894, ng0);
    t2 = (t0 + 2096U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
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

LAB9:    t98 = *((unsigned int *)t4);
    t99 = (~(t98));
    t100 = *((unsigned int *)t21);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t102, 8);

LAB16:    t175 = (t0 + 5472);
    t176 = (t175 + 56U);
    t177 = *((char **)t176);
    t178 = (t177 + 56U);
    t179 = *((char **)t178);
    memset(t179, 0, 8);
    t180 = 2147483647U;
    t181 = t180;
    t182 = (t3 + 4);
    t183 = *((unsigned int *)t3);
    t180 = (t180 & t183);
    t184 = *((unsigned int *)t182);
    t181 = (t181 & t184);
    t185 = (t179 + 4);
    t186 = *((unsigned int *)t179);
    *((unsigned int *)t179) = (t186 | t180);
    t187 = *((unsigned int *)t185);
    *((unsigned int *)t185) = (t187 | t181);
    xsi_driver_vfirst_trans(t175, 0, 30);
    t188 = (t0 + 5248);
    *((int *)t188) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t27 = (t0 + 2096U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t27 = (t29 + 4);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 0);
    t33 = (t32 & 1);
    *((unsigned int *)t29) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 >> 0);
    t36 = (t35 & 1);
    *((unsigned int *)t27) = t36;
    memset(t26, 0, 8);
    t37 = (t29 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t29);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t37) != 0)
        goto LAB19;

LAB20:    t44 = (t26 + 4);
    t45 = *((unsigned int *)t26);
    t46 = *((unsigned int *)t44);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB21;

LAB22:    t71 = *((unsigned int *)t26);
    t72 = (~(t71));
    t73 = *((unsigned int *)t44);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t44) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t26) > 0)
        goto LAB27;

LAB28:    memcpy(t25, t75, 8);

LAB29:    goto LAB9;

LAB10:    t104 = (t0 + 2096U);
    t105 = *((char **)t104);
    memset(t106, 0, 8);
    t104 = (t106 + 4);
    t107 = (t105 + 4);
    t108 = *((unsigned int *)t105);
    t109 = (t108 >> 0);
    t110 = (t109 & 1);
    *((unsigned int *)t106) = t110;
    t111 = *((unsigned int *)t107);
    t112 = (t111 >> 0);
    t113 = (t112 & 1);
    *((unsigned int *)t104) = t113;
    memset(t103, 0, 8);
    t114 = (t106 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t106);
    t118 = (t117 & t116);
    t119 = (t118 & 1U);
    if (t119 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t114) != 0)
        goto LAB32;

LAB33:    t121 = (t103 + 4);
    t122 = *((unsigned int *)t103);
    t123 = *((unsigned int *)t121);
    t124 = (t122 || t123);
    if (t124 > 0)
        goto LAB34;

LAB35:    t148 = *((unsigned int *)t103);
    t149 = (~(t148));
    t150 = *((unsigned int *)t121);
    t151 = (t149 || t150);
    if (t151 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t121) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t103) > 0)
        goto LAB40;

LAB41:    memcpy(t102, t152, 8);

LAB42:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 31, t25, 31, t102, 31);
    goto LAB16;

LAB14:    memcpy(t3, t25, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t26) = 1;
    goto LAB20;

LAB19:    t43 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB20;

LAB21:    t50 = (t0 + 2416U);
    t51 = *((char **)t50);
    memset(t49, 0, 8);
    t50 = (t49 + 4);
    t52 = (t51 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (t53 >> 0);
    *((unsigned int *)t49) = t54;
    t55 = *((unsigned int *)t52);
    t56 = (t55 >> 0);
    *((unsigned int *)t50) = t56;
    t57 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t57 & 1048575U);
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 1048575U);
    t60 = (t0 + 2976);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memset(t59, 0, 8);
    t63 = (t59 + 4);
    t64 = (t62 + 4);
    t65 = *((unsigned int *)t62);
    t66 = (t65 >> 0);
    *((unsigned int *)t59) = t66;
    t67 = *((unsigned int *)t64);
    t68 = (t67 >> 0);
    *((unsigned int *)t63) = t68;
    t69 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t69 & 2047U);
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t70 & 2047U);
    xsi_vlogtype_concat(t48, 31, 31, 2U, t59, 11, t49, 20);
    goto LAB22;

LAB23:    t77 = (t0 + 2416U);
    t78 = *((char **)t77);
    memset(t76, 0, 8);
    t77 = (t76 + 4);
    t79 = (t78 + 4);
    t80 = *((unsigned int *)t78);
    t81 = (t80 >> 4);
    *((unsigned int *)t76) = t81;
    t82 = *((unsigned int *)t79);
    t83 = (t82 >> 4);
    *((unsigned int *)t77) = t83;
    t84 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t84 & 65535U);
    t85 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t85 & 65535U);
    t87 = (t0 + 2976);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    memset(t86, 0, 8);
    t90 = (t86 + 4);
    t91 = (t89 + 4);
    t92 = *((unsigned int *)t89);
    t93 = (t92 >> 0);
    *((unsigned int *)t86) = t93;
    t94 = *((unsigned int *)t91);
    t95 = (t94 >> 0);
    *((unsigned int *)t90) = t95;
    t96 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t96 & 32767U);
    t97 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t97 & 32767U);
    xsi_vlogtype_concat(t75, 31, 31, 2U, t86, 15, t76, 16);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t25, 31, t48, 31, t75, 31);
    goto LAB29;

LAB27:    memcpy(t25, t48, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t103) = 1;
    goto LAB33;

LAB32:    t120 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB33;

LAB34:    t127 = (t0 + 2416U);
    t128 = *((char **)t127);
    memset(t126, 0, 8);
    t127 = (t126 + 4);
    t129 = (t128 + 4);
    t130 = *((unsigned int *)t128);
    t131 = (t130 >> 10);
    *((unsigned int *)t126) = t131;
    t132 = *((unsigned int *)t129);
    t133 = (t132 >> 10);
    *((unsigned int *)t127) = t133;
    t134 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t134 & 1023U);
    t135 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t135 & 1023U);
    t137 = (t0 + 2976);
    t138 = (t137 + 56U);
    t139 = *((char **)t138);
    memset(t136, 0, 8);
    t140 = (t136 + 4);
    t141 = (t139 + 4);
    t142 = *((unsigned int *)t139);
    t143 = (t142 >> 0);
    *((unsigned int *)t136) = t143;
    t144 = *((unsigned int *)t141);
    t145 = (t144 >> 0);
    *((unsigned int *)t140) = t145;
    t146 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t146 & 2097151U);
    t147 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t147 & 2097151U);
    xsi_vlogtype_concat(t125, 31, 31, 2U, t136, 21, t126, 10);
    goto LAB35;

LAB36:    t154 = (t0 + 2416U);
    t155 = *((char **)t154);
    memset(t153, 0, 8);
    t154 = (t153 + 4);
    t156 = (t155 + 4);
    t157 = *((unsigned int *)t155);
    t158 = (t157 >> 12);
    *((unsigned int *)t153) = t158;
    t159 = *((unsigned int *)t156);
    t160 = (t159 >> 12);
    *((unsigned int *)t154) = t160;
    t161 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t161 & 255U);
    t162 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t162 & 255U);
    t164 = (t0 + 2976);
    t165 = (t164 + 56U);
    t166 = *((char **)t165);
    memset(t163, 0, 8);
    t167 = (t163 + 4);
    t168 = (t166 + 4);
    t169 = *((unsigned int *)t166);
    t170 = (t169 >> 0);
    *((unsigned int *)t163) = t170;
    t171 = *((unsigned int *)t168);
    t172 = (t171 >> 0);
    *((unsigned int *)t167) = t172;
    t173 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t173 & 8388607U);
    t174 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t174 & 8388607U);
    xsi_vlogtype_concat(t152, 31, 31, 2U, t163, 23, t153, 8);
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t102, 31, t125, 31, t152, 31);
    goto LAB42;

LAB40:    memcpy(t102, t125, 8);
    goto LAB42;

}

static void Cont_3901_4(char *t0)
{
    char t3[8];
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

LAB0:    t1 = (t0 + 4880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3901, ng0);
    t2 = (t0 + 2416U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 1048575U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 1048575U);
    t12 = (t0 + 5536);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1048575U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 19);
    t25 = (t0 + 5264);
    *((int *)t25) = 1;

LAB1:    return;
}


extern void secureip_m_12429879226712815227_2259250372_init()
{
	static char *pe[] = {(void *)NetDecl_3879_0,(void *)Always_3881_1,(void *)Cont_3892_2,(void *)Cont_3894_3,(void *)Cont_3901_4};
	xsi_register_didat("secureip_m_12429879226712815227_2259250372", "isim/isim_system.sim/secureip/m_12429879226712815227_2259250372.didat");
	xsi_register_executes(pe);
}
