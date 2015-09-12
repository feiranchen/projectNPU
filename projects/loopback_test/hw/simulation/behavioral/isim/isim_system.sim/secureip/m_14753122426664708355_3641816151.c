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
static int ng2[] = {10, 0};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};



static void Always_20486_0(char *t0)
{
    char t4[8];
    char t38[8];
    char t41[8];
    char t50[8];
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
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;

LAB0:    t1 = (t0 + 5856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20486, ng0);
    t2 = (t0 + 7912);
    *((int *)t2) = 1;
    t3 = (t0 + 5888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20486, ng0);

LAB5:    xsi_set_current_line(20487, ng0);
    t5 = (t0 + 3104U);
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

LAB11:    xsi_set_current_line(20489, ng0);
    t2 = (t0 + 3264U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
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

LAB10:    xsi_set_current_line(20487, ng0);

LAB13:    xsi_set_current_line(20488, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4304);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 11, 0LL);
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

LAB17:    xsi_set_current_line(20489, ng0);

LAB20:    xsi_set_current_line(20490, ng0);
    t39 = (t0 + 1984U);
    t40 = *((char **)t39);
    t39 = (t0 + 2144U);
    t42 = *((char **)t39);
    memset(t41, 0, 8);
    t39 = (t41 + 4);
    t43 = (t42 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (t44 >> 0);
    *((unsigned int *)t41) = t45;
    t46 = *((unsigned int *)t43);
    t47 = (t46 >> 0);
    *((unsigned int *)t39) = t47;
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t48 & 127U);
    t49 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t49 & 127U);
    t51 = (t0 + 1824U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t53 = (t52 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 0);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 0);
    *((unsigned int *)t51) = t57;
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 7U);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 7U);
    xsi_vlogtype_concat(t38, 11, 11, 3U, t50, 3, t41, 7, t40, 1);
    t60 = (t0 + 4304);
    xsi_vlogvar_wait_assign_value(t60, t38, 0, 0, 11, 0LL);
    goto LAB19;

}

static void Always_20573_1(char *t0)
{
    char t4[8];
    char t37[8];
    char t71[8];
    char t72[8];
    char t85[8];
    char t101[8];
    char t112[8];
    char t113[8];
    char t114[8];
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
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
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
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    unsigned int t121;
    int t122;
    char *t123;
    unsigned int t124;
    int t125;
    int t126;
    char *t127;
    unsigned int t128;
    int t129;
    int t130;
    unsigned int t131;
    int t132;
    unsigned int t133;
    unsigned int t134;
    int t135;
    int t136;

LAB0:    t1 = (t0 + 6104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20573, ng0);
    t2 = (t0 + 7928);
    *((int *)t2) = 1;
    t3 = (t0 + 6136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20573, ng0);

LAB5:    xsi_set_current_line(20574, ng0);
    t5 = (t0 + 2944U);
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

LAB11:    xsi_set_current_line(20576, ng0);

LAB14:    xsi_set_current_line(20577, ng0);
    t2 = (t0 + 3264U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t5 = *((char **)t2);
    t2 = (t0 + 2784U);
    t6 = *((char **)t2);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 & t8);
    *((unsigned int *)t4) = t9;
    t2 = (t5 + 4);
    t12 = (t6 + 4);
    t13 = (t4 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t12);
    t14 = (t10 | t11);
    *((unsigned int *)t13) = t14;
    t15 = *((unsigned int *)t13);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB15;

LAB16:
LAB17:    t38 = *((unsigned int *)t3);
    t39 = *((unsigned int *)t4);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = (t3 + 4);
    t42 = (t4 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB18;

LAB19:
LAB20:    t65 = (t37 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t37);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(20584, ng0);
    t2 = (t0 + 3264U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
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
        goto LAB40;

LAB41:
LAB42:    t20 = (t4 + 4);
    t33 = *((unsigned int *)t20);
    t34 = (~(t33));
    t35 = *((unsigned int *)t4);
    t36 = (t35 & t34);
    t38 = (t36 != 0);
    if (t38 > 0)
        goto LAB43;

LAB44:
LAB45:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(20574, ng0);

LAB13:    xsi_set_current_line(20575, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 11, 500LL);
    goto LAB12;

LAB15:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t13);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = (t5 + 4);
    t20 = (t6 + 4);
    t21 = *((unsigned int *)t5);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t31);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t32);
    t35 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t35 & t31);
    t36 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t36 & t32);
    goto LAB17;

LAB18:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t3 + 4);
    t52 = (t4 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (~(t53));
    t55 = *((unsigned int *)t3);
    t56 = (t55 & t54);
    t57 = *((unsigned int *)t52);
    t58 = (~(t57));
    t59 = *((unsigned int *)t4);
    t60 = (t59 & t58);
    t61 = (~(t56));
    t62 = (~(t60));
    t63 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t63 & t61);
    t64 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t64 & t62);
    goto LAB20;

LAB21:    xsi_set_current_line(20577, ng0);

LAB24:    xsi_set_current_line(20578, ng0);
    t73 = (t0 + 3424U);
    t74 = *((char **)t73);
    memset(t72, 0, 8);
    t73 = (t74 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t74);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t73) != 0)
        goto LAB27;

LAB28:    t81 = (t72 + 4);
    t82 = *((unsigned int *)t72);
    t83 = *((unsigned int *)t81);
    t84 = (t82 || t83);
    if (t84 > 0)
        goto LAB29;

LAB30:    t97 = *((unsigned int *)t72);
    t98 = (~(t97));
    t99 = *((unsigned int *)t81);
    t100 = (t98 || t99);
    if (t100 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t81) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t72) > 0)
        goto LAB35;

LAB36:    memcpy(t71, t101, 8);

LAB37:    t111 = (t0 + 4464);
    t115 = (t0 + 4464);
    t116 = (t115 + 72U);
    t117 = *((char **)t116);
    t118 = ((char*)((ng2)));
    t119 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t112, t113, t114, ((int*)(t117)), 2, t118, 32, 1, t119, 32, 1);
    t120 = (t112 + 4);
    t121 = *((unsigned int *)t120);
    t122 = (!(t121));
    t123 = (t113 + 4);
    t124 = *((unsigned int *)t123);
    t125 = (!(t124));
    t126 = (t122 && t125);
    t127 = (t114 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (!(t128));
    t130 = (t126 && t129);
    if (t130 == 1)
        goto LAB38;

LAB39:    goto LAB23;

LAB25:    *((unsigned int *)t72) = 1;
    goto LAB28;

LAB27:    t80 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB28;

LAB29:    t86 = (t0 + 4304);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    memset(t85, 0, 8);
    t89 = (t85 + 4);
    t90 = (t88 + 4);
    t91 = *((unsigned int *)t88);
    t92 = (t91 >> 1);
    *((unsigned int *)t85) = t92;
    t93 = *((unsigned int *)t90);
    t94 = (t93 >> 1);
    *((unsigned int *)t89) = t94;
    t95 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t95 & 1023U);
    t96 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t96 & 1023U);
    goto LAB30;

LAB31:    t102 = (t0 + 3744U);
    t103 = *((char **)t102);
    memset(t101, 0, 8);
    t102 = (t101 + 4);
    t104 = (t103 + 4);
    t105 = *((unsigned int *)t103);
    t106 = (t105 >> 1);
    *((unsigned int *)t101) = t106;
    t107 = *((unsigned int *)t104);
    t108 = (t107 >> 1);
    *((unsigned int *)t102) = t108;
    t109 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t109 & 1023U);
    t110 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t110 & 1023U);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t71, 10, t85, 10, t101, 10);
    goto LAB37;

LAB35:    memcpy(t71, t85, 8);
    goto LAB37;

LAB38:    t131 = *((unsigned int *)t114);
    t132 = (t131 + 0);
    t133 = *((unsigned int *)t112);
    t134 = *((unsigned int *)t113);
    t135 = (t133 - t134);
    t136 = (t135 + 1);
    xsi_vlogvar_wait_assign_value(t111, t71, t132, *((unsigned int *)t113), t136, 500LL);
    goto LAB39;

LAB40:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    t13 = (t3 + 4);
    t19 = (t5 + 4);
    t21 = *((unsigned int *)t13);
    t22 = (~(t21));
    t23 = *((unsigned int *)t3);
    t29 = (t23 & t22);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t30 = (t26 & t25);
    t27 = (~(t29));
    t28 = (~(t30));
    t31 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t31 & t27);
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t28);
    goto LAB42;

LAB43:    xsi_set_current_line(20584, ng0);

LAB46:    xsi_set_current_line(20585, ng0);
    t41 = (t0 + 3424U);
    t42 = *((char **)t41);
    memset(t71, 0, 8);
    t41 = (t42 + 4);
    t39 = *((unsigned int *)t41);
    t40 = (~(t39));
    t44 = *((unsigned int *)t42);
    t45 = (t44 & t40);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t41) != 0)
        goto LAB49;

LAB50:    t51 = (t71 + 4);
    t47 = *((unsigned int *)t71);
    t48 = *((unsigned int *)t51);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB51;

LAB52:    t97 = *((unsigned int *)t71);
    t98 = (~(t97));
    t99 = *((unsigned int *)t51);
    t100 = (t98 || t99);
    if (t100 > 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t51) > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t71) > 0)
        goto LAB57;

LAB58:    memcpy(t37, t101, 8);

LAB59:    t111 = (t0 + 4464);
    t115 = (t0 + 4464);
    t116 = (t115 + 72U);
    t117 = *((char **)t116);
    t118 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t112, t117, 2, t118, 32, 1);
    t119 = (t112 + 4);
    t121 = *((unsigned int *)t119);
    t122 = (!(t121));
    if (t122 == 1)
        goto LAB63;

LAB64:    goto LAB45;

LAB47:    *((unsigned int *)t71) = 1;
    goto LAB50;

LAB49:    t43 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB50;

LAB51:    t52 = (t0 + 4304);
    t65 = (t52 + 56U);
    t73 = *((char **)t65);
    memset(t72, 0, 8);
    t74 = (t72 + 4);
    t80 = (t73 + 4);
    t50 = *((unsigned int *)t73);
    t53 = (t50 >> 0);
    t54 = (t53 & 1);
    *((unsigned int *)t72) = t54;
    t55 = *((unsigned int *)t80);
    t57 = (t55 >> 0);
    t58 = (t57 & 1);
    *((unsigned int *)t74) = t58;
    t81 = (t0 + 2784U);
    t86 = *((char **)t81);
    t59 = *((unsigned int *)t72);
    t61 = *((unsigned int *)t86);
    t62 = (t59 & t61);
    *((unsigned int *)t85) = t62;
    t81 = (t72 + 4);
    t87 = (t86 + 4);
    t88 = (t85 + 4);
    t63 = *((unsigned int *)t81);
    t64 = *((unsigned int *)t87);
    t66 = (t63 | t64);
    *((unsigned int *)t88) = t66;
    t67 = *((unsigned int *)t88);
    t68 = (t67 != 0);
    if (t68 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB52;

LAB53:    t102 = (t0 + 3744U);
    t103 = *((char **)t102);
    memset(t101, 0, 8);
    t102 = (t101 + 4);
    t104 = (t103 + 4);
    t105 = *((unsigned int *)t103);
    t106 = (t105 >> 0);
    t107 = (t106 & 1);
    *((unsigned int *)t101) = t107;
    t108 = *((unsigned int *)t104);
    t109 = (t108 >> 0);
    t110 = (t109 & 1);
    *((unsigned int *)t102) = t110;
    goto LAB54;

LAB55:    xsi_vlog_unsigned_bit_combine(t37, 1, t85, 1, t101, 1);
    goto LAB59;

LAB57:    memcpy(t37, t85, 8);
    goto LAB59;

LAB60:    t69 = *((unsigned int *)t85);
    t70 = *((unsigned int *)t88);
    *((unsigned int *)t85) = (t69 | t70);
    t89 = (t72 + 4);
    t90 = (t86 + 4);
    t75 = *((unsigned int *)t72);
    t76 = (~(t75));
    t77 = *((unsigned int *)t89);
    t78 = (~(t77));
    t79 = *((unsigned int *)t86);
    t82 = (~(t79));
    t83 = *((unsigned int *)t90);
    t84 = (~(t83));
    t56 = (t76 & t78);
    t60 = (t82 & t84);
    t91 = (~(t56));
    t92 = (~(t60));
    t93 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t93 & t91);
    t94 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t94 & t92);
    t95 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t95 & t91);
    t96 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t96 & t92);
    goto LAB62;

LAB63:    xsi_vlogvar_wait_assign_value(t111, t37, 0, *((unsigned int *)t112), 1, 500LL);
    goto LAB64;

}

static void Cont_20591_2(char *t0)
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

LAB0:    t1 = (t0 + 6352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20591, ng0);
    t2 = (t0 + 4464);
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
    *((unsigned int *)t3) = (t12 & 7U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 7U);
    t14 = (t0 + 8104);
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
    t27 = (t0 + 7944);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_20592_3(char *t0)
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

LAB0:    t1 = (t0 + 6600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20592, ng0);
    t2 = (t0 + 4464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 127U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 127U);
    t14 = (t0 + 8168);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 127U;
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
    xsi_driver_vfirst_trans(t14, 0, 6);
    t27 = (t0 + 7960);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_20593_4(char *t0)
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

LAB0:    t1 = (t0 + 6848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20593, ng0);
    t2 = (t0 + 4464);
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
    t14 = (t0 + 8232);
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
    t27 = (t0 + 7976);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_20607_5(char *t0)
{
    char t4[8];
    char t37[8];
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
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
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
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;

LAB0:    t1 = (t0 + 7096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20607, ng0);
    t2 = (t0 + 7992);
    *((int *)t2) = 1;
    t3 = (t0 + 7128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20607, ng0);

LAB5:    xsi_set_current_line(20608, ng0);
    t5 = (t0 + 2944U);
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

LAB11:    xsi_set_current_line(20611, ng0);

LAB14:    xsi_set_current_line(20612, ng0);
    t2 = (t0 + 3264U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t5 = *((char **)t2);
    t2 = (t0 + 2784U);
    t6 = *((char **)t2);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 & t8);
    *((unsigned int *)t4) = t9;
    t2 = (t5 + 4);
    t12 = (t6 + 4);
    t13 = (t4 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t12);
    t14 = (t10 | t11);
    *((unsigned int *)t13) = t14;
    t15 = *((unsigned int *)t13);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB15;

LAB16:
LAB17:    t38 = *((unsigned int *)t3);
    t39 = *((unsigned int *)t4);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = (t3 + 4);
    t42 = (t4 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB18;

LAB19:
LAB20:    t65 = (t37 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t37);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(20615, ng0);
    t2 = (t0 + 4624);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4784);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 500LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(20608, ng0);

LAB13:    xsi_set_current_line(20609, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4624);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 500LL);
    xsi_set_current_line(20610, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 500LL);
    goto LAB12;

LAB15:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t13);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = (t5 + 4);
    t20 = (t6 + 4);
    t21 = *((unsigned int *)t5);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t31);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t32);
    t35 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t35 & t31);
    t36 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t36 & t32);
    goto LAB17;

LAB18:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t3 + 4);
    t52 = (t4 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (~(t53));
    t55 = *((unsigned int *)t3);
    t56 = (t55 & t54);
    t57 = *((unsigned int *)t52);
    t58 = (~(t57));
    t59 = *((unsigned int *)t4);
    t60 = (t59 & t58);
    t61 = (~(t56));
    t62 = (~(t60));
    t63 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t63 & t61);
    t64 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t64 & t62);
    goto LAB20;

LAB21:    xsi_set_current_line(20612, ng0);

LAB24:    xsi_set_current_line(20613, ng0);
    t71 = (t0 + 1664U);
    t72 = *((char **)t71);
    t71 = (t0 + 4624);
    xsi_vlogvar_wait_assign_value(t71, t72, 0, 0, 1, 500LL);
    goto LAB23;

}

static void Always_20626_6(char *t0)
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
    char *t24;

LAB0:    t1 = (t0 + 7344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20626, ng0);
    t2 = (t0 + 8008);
    *((int *)t2) = 1;
    t3 = (t0 + 7376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20626, ng0);

LAB5:    xsi_set_current_line(20627, ng0);
    t5 = (t0 + 3104U);
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

LAB11:    xsi_set_current_line(20629, ng0);

LAB14:    xsi_set_current_line(20630, ng0);
    t2 = (t0 + 3424U);
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

LAB26:    memcpy(t4, t24, 8);

LAB27:    t20 = (t0 + 4944);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 1, 500LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(20627, ng0);

LAB13:    xsi_set_current_line(20628, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4944);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 500LL);
    goto LAB12;

LAB15:    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB17:    t5 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB18;

LAB19:    t12 = (t0 + 4624);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    goto LAB20;

LAB21:    t20 = (t0 + 3904U);
    t24 = *((char **)t20);
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t4, 1, t19, 1, t24, 1);
    goto LAB27;

LAB25:    memcpy(t4, t19, 8);
    goto LAB27;

}

static void Cont_20634_7(char *t0)
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

LAB0:    t1 = (t0 + 7592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20634, ng0);
    t2 = (t0 + 4944);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8296);
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
    t18 = (t0 + 8024);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void secureip_m_14753122426664708355_3641816151_init()
{
	static char *pe[] = {(void *)Always_20486_0,(void *)Always_20573_1,(void *)Cont_20591_2,(void *)Cont_20592_3,(void *)Cont_20593_4,(void *)Always_20607_5,(void *)Always_20626_6,(void *)Cont_20634_7};
	xsi_register_didat("secureip_m_14753122426664708355_3641816151", "isim/isim_system.sim/secureip/m_14753122426664708355_3641816151.didat");
	xsi_register_executes(pe);
}
