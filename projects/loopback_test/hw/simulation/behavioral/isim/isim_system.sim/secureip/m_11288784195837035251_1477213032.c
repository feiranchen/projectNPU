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
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {0U, 0U};



static void NetDecl_23048_0(char *t0)
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

LAB0:    t1 = (t0 + 4280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23048, ng0);
    t2 = (t0 + 1528U);
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
    t21 = (t0 + 6264);
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
    t34 = (t0 + 6088);
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

static void NetDecl_23051_1(char *t0)
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
    unsigned int t12;
    unsigned int t13;
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

LAB0:    t1 = (t0 + 4528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23051, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 6328);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0U);
    t33 = (t0 + 6104);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_23052_2(char *t0)
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
    unsigned int t12;
    unsigned int t13;
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

LAB0:    t1 = (t0 + 4776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23052, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 6392);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0U);
    t33 = (t0 + 6120);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_23053_3(char *t0)
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
    unsigned int t12;
    unsigned int t13;
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

LAB0:    t1 = (t0 + 5024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23053, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 6456);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0U);
    t33 = (t0 + 6136);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void Always_23078_4(char *t0)
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
    int t13;

LAB0:    t1 = (t0 + 5272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23078, ng0);
    t2 = (t0 + 6152);
    *((int *)t2) = 1;
    t3 = (t0 + 5304);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23078, ng0);

LAB5:    xsi_set_current_line(23079, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(23081, ng0);

LAB10:    xsi_set_current_line(23082, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB11:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB18;

LAB19:
LAB20:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(23079, ng0);

LAB9:    xsi_set_current_line(23080, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 20, 500LL);
    goto LAB8;

LAB12:    xsi_set_current_line(23083, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 20, 500LL);
    goto LAB20;

LAB14:    xsi_set_current_line(23084, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 20, 500LL);
    goto LAB20;

LAB16:    xsi_set_current_line(23085, ng0);
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 20, 500LL);
    goto LAB20;

LAB18:    xsi_set_current_line(23086, ng0);
    t4 = (t0 + 2328U);
    t5 = *((char **)t4);
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 20, 500LL);
    goto LAB20;

}

static void NetDecl_23094_5(char *t0)
{
    char t3[8];
    char t6[8];
    char t18[8];
    char t30[8];
    char t42[8];
    char t54[8];
    char t66[8];
    char t78[8];
    char t90[8];
    char t102[8];
    char t114[8];
    char t126[8];
    char t138[8];
    char t150[8];
    char t162[8];
    char t174[8];
    char t186[8];
    char t198[8];
    char t210[8];
    char t222[8];
    char t234[8];
    char *t1;
    char *t2;
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
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t101;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    char *t113;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    char *t125;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    char *t137;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    char *t149;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    char *t160;
    char *t161;
    char *t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    char *t173;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    char *t185;
    char *t187;
    char *t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;
    char *t196;
    char *t197;
    char *t199;
    char *t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;
    char *t208;
    char *t209;
    char *t211;
    char *t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    char *t219;
    char *t220;
    char *t221;
    char *t223;
    char *t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    char *t232;
    char *t233;
    char *t235;
    char *t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    char *t243;
    char *t244;
    char *t245;
    char *t246;
    char *t247;
    unsigned int t248;
    unsigned int t249;
    char *t250;
    unsigned int t251;
    unsigned int t252;
    char *t253;
    unsigned int t254;
    unsigned int t255;
    char *t256;

LAB0:    t1 = (t0 + 5520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23094, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 19);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 19);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t0 + 3368);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 18);
    t23 = (t22 & 1);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 18);
    t26 = (t25 & 1);
    *((unsigned int *)t19) = t26;
    t27 = (t0 + 3368);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t32 = (t29 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 17);
    t35 = (t34 & 1);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 17);
    t38 = (t37 & 1);
    *((unsigned int *)t31) = t38;
    t39 = (t0 + 3368);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t43 = (t42 + 4);
    t44 = (t41 + 4);
    t45 = *((unsigned int *)t41);
    t46 = (t45 >> 16);
    t47 = (t46 & 1);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 >> 16);
    t50 = (t49 & 1);
    *((unsigned int *)t43) = t50;
    t51 = (t0 + 3368);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    memset(t54, 0, 8);
    t55 = (t54 + 4);
    t56 = (t53 + 4);
    t57 = *((unsigned int *)t53);
    t58 = (t57 >> 15);
    t59 = (t58 & 1);
    *((unsigned int *)t54) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 >> 15);
    t62 = (t61 & 1);
    *((unsigned int *)t55) = t62;
    t63 = (t0 + 3368);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    memset(t66, 0, 8);
    t67 = (t66 + 4);
    t68 = (t65 + 4);
    t69 = *((unsigned int *)t65);
    t70 = (t69 >> 14);
    t71 = (t70 & 1);
    *((unsigned int *)t66) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 >> 14);
    t74 = (t73 & 1);
    *((unsigned int *)t67) = t74;
    t75 = (t0 + 3368);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    memset(t78, 0, 8);
    t79 = (t78 + 4);
    t80 = (t77 + 4);
    t81 = *((unsigned int *)t77);
    t82 = (t81 >> 13);
    t83 = (t82 & 1);
    *((unsigned int *)t78) = t83;
    t84 = *((unsigned int *)t80);
    t85 = (t84 >> 13);
    t86 = (t85 & 1);
    *((unsigned int *)t79) = t86;
    t87 = (t0 + 3368);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    memset(t90, 0, 8);
    t91 = (t90 + 4);
    t92 = (t89 + 4);
    t93 = *((unsigned int *)t89);
    t94 = (t93 >> 12);
    t95 = (t94 & 1);
    *((unsigned int *)t90) = t95;
    t96 = *((unsigned int *)t92);
    t97 = (t96 >> 12);
    t98 = (t97 & 1);
    *((unsigned int *)t91) = t98;
    t99 = (t0 + 3368);
    t100 = (t99 + 56U);
    t101 = *((char **)t100);
    memset(t102, 0, 8);
    t103 = (t102 + 4);
    t104 = (t101 + 4);
    t105 = *((unsigned int *)t101);
    t106 = (t105 >> 11);
    t107 = (t106 & 1);
    *((unsigned int *)t102) = t107;
    t108 = *((unsigned int *)t104);
    t109 = (t108 >> 11);
    t110 = (t109 & 1);
    *((unsigned int *)t103) = t110;
    t111 = (t0 + 3368);
    t112 = (t111 + 56U);
    t113 = *((char **)t112);
    memset(t114, 0, 8);
    t115 = (t114 + 4);
    t116 = (t113 + 4);
    t117 = *((unsigned int *)t113);
    t118 = (t117 >> 10);
    t119 = (t118 & 1);
    *((unsigned int *)t114) = t119;
    t120 = *((unsigned int *)t116);
    t121 = (t120 >> 10);
    t122 = (t121 & 1);
    *((unsigned int *)t115) = t122;
    t123 = (t0 + 3368);
    t124 = (t123 + 56U);
    t125 = *((char **)t124);
    memset(t126, 0, 8);
    t127 = (t126 + 4);
    t128 = (t125 + 4);
    t129 = *((unsigned int *)t125);
    t130 = (t129 >> 9);
    t131 = (t130 & 1);
    *((unsigned int *)t126) = t131;
    t132 = *((unsigned int *)t128);
    t133 = (t132 >> 9);
    t134 = (t133 & 1);
    *((unsigned int *)t127) = t134;
    t135 = (t0 + 3368);
    t136 = (t135 + 56U);
    t137 = *((char **)t136);
    memset(t138, 0, 8);
    t139 = (t138 + 4);
    t140 = (t137 + 4);
    t141 = *((unsigned int *)t137);
    t142 = (t141 >> 8);
    t143 = (t142 & 1);
    *((unsigned int *)t138) = t143;
    t144 = *((unsigned int *)t140);
    t145 = (t144 >> 8);
    t146 = (t145 & 1);
    *((unsigned int *)t139) = t146;
    t147 = (t0 + 3368);
    t148 = (t147 + 56U);
    t149 = *((char **)t148);
    memset(t150, 0, 8);
    t151 = (t150 + 4);
    t152 = (t149 + 4);
    t153 = *((unsigned int *)t149);
    t154 = (t153 >> 7);
    t155 = (t154 & 1);
    *((unsigned int *)t150) = t155;
    t156 = *((unsigned int *)t152);
    t157 = (t156 >> 7);
    t158 = (t157 & 1);
    *((unsigned int *)t151) = t158;
    t159 = (t0 + 3368);
    t160 = (t159 + 56U);
    t161 = *((char **)t160);
    memset(t162, 0, 8);
    t163 = (t162 + 4);
    t164 = (t161 + 4);
    t165 = *((unsigned int *)t161);
    t166 = (t165 >> 6);
    t167 = (t166 & 1);
    *((unsigned int *)t162) = t167;
    t168 = *((unsigned int *)t164);
    t169 = (t168 >> 6);
    t170 = (t169 & 1);
    *((unsigned int *)t163) = t170;
    t171 = (t0 + 3368);
    t172 = (t171 + 56U);
    t173 = *((char **)t172);
    memset(t174, 0, 8);
    t175 = (t174 + 4);
    t176 = (t173 + 4);
    t177 = *((unsigned int *)t173);
    t178 = (t177 >> 5);
    t179 = (t178 & 1);
    *((unsigned int *)t174) = t179;
    t180 = *((unsigned int *)t176);
    t181 = (t180 >> 5);
    t182 = (t181 & 1);
    *((unsigned int *)t175) = t182;
    t183 = (t0 + 3368);
    t184 = (t183 + 56U);
    t185 = *((char **)t184);
    memset(t186, 0, 8);
    t187 = (t186 + 4);
    t188 = (t185 + 4);
    t189 = *((unsigned int *)t185);
    t190 = (t189 >> 4);
    t191 = (t190 & 1);
    *((unsigned int *)t186) = t191;
    t192 = *((unsigned int *)t188);
    t193 = (t192 >> 4);
    t194 = (t193 & 1);
    *((unsigned int *)t187) = t194;
    t195 = (t0 + 3368);
    t196 = (t195 + 56U);
    t197 = *((char **)t196);
    memset(t198, 0, 8);
    t199 = (t198 + 4);
    t200 = (t197 + 4);
    t201 = *((unsigned int *)t197);
    t202 = (t201 >> 3);
    t203 = (t202 & 1);
    *((unsigned int *)t198) = t203;
    t204 = *((unsigned int *)t200);
    t205 = (t204 >> 3);
    t206 = (t205 & 1);
    *((unsigned int *)t199) = t206;
    t207 = (t0 + 3368);
    t208 = (t207 + 56U);
    t209 = *((char **)t208);
    memset(t210, 0, 8);
    t211 = (t210 + 4);
    t212 = (t209 + 4);
    t213 = *((unsigned int *)t209);
    t214 = (t213 >> 2);
    t215 = (t214 & 1);
    *((unsigned int *)t210) = t215;
    t216 = *((unsigned int *)t212);
    t217 = (t216 >> 2);
    t218 = (t217 & 1);
    *((unsigned int *)t211) = t218;
    t219 = (t0 + 3368);
    t220 = (t219 + 56U);
    t221 = *((char **)t220);
    memset(t222, 0, 8);
    t223 = (t222 + 4);
    t224 = (t221 + 4);
    t225 = *((unsigned int *)t221);
    t226 = (t225 >> 1);
    t227 = (t226 & 1);
    *((unsigned int *)t222) = t227;
    t228 = *((unsigned int *)t224);
    t229 = (t228 >> 1);
    t230 = (t229 & 1);
    *((unsigned int *)t223) = t230;
    t231 = (t0 + 3368);
    t232 = (t231 + 56U);
    t233 = *((char **)t232);
    memset(t234, 0, 8);
    t235 = (t234 + 4);
    t236 = (t233 + 4);
    t237 = *((unsigned int *)t233);
    t238 = (t237 >> 0);
    t239 = (t238 & 1);
    *((unsigned int *)t234) = t239;
    t240 = *((unsigned int *)t236);
    t241 = (t240 >> 0);
    t242 = (t241 & 1);
    *((unsigned int *)t235) = t242;
    xsi_vlogtype_concat(t3, 20, 20, 20U, t234, 1, t222, 1, t210, 1, t198, 1, t186, 1, t174, 1, t162, 1, t150, 1, t138, 1, t126, 1, t114, 1, t102, 1, t90, 1, t78, 1, t66, 1, t54, 1, t42, 1, t30, 1, t18, 1, t6, 1);
    t243 = (t0 + 6520);
    t244 = (t243 + 56U);
    t245 = *((char **)t244);
    t246 = (t245 + 56U);
    t247 = *((char **)t246);
    memset(t247, 0, 8);
    t248 = 1048575U;
    t249 = t248;
    t250 = (t3 + 4);
    t251 = *((unsigned int *)t3);
    t248 = (t248 & t251);
    t252 = *((unsigned int *)t250);
    t249 = (t249 & t252);
    t253 = (t247 + 4);
    t254 = *((unsigned int *)t247);
    *((unsigned int *)t247) = (t254 | t248);
    t255 = *((unsigned int *)t253);
    *((unsigned int *)t253) = (t255 | t249);
    xsi_driver_vfirst_trans(t243, 0, 19U);
    t256 = (t0 + 6168);
    *((int *)t256) = 1;

LAB1:    return;
}

static void Cont_23119_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t13[8];
    char t14[8];
    char t17[8];
    char t36[8];
    char t50[8];
    char t60[8];
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
    char *t15;
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
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
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;

LAB0:    t1 = (t0 + 5768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23119, ng0);
    t2 = (t0 + 2968U);
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
    *((unsigned int *)t4) = (t11 & 1023U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 1023U);
    t15 = (t0 + 1368U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t15 = (t17 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    t21 = (t20 & 1);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 0);
    t24 = (t23 & 1);
    *((unsigned int *)t15) = t24;
    memset(t14, 0, 8);
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t17);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t25) != 0)
        goto LAB6;

LAB7:    t32 = (t14 + 4);
    t33 = *((unsigned int *)t14);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB8;

LAB9:    t46 = *((unsigned int *)t14);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t32) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t14) > 0)
        goto LAB14;

LAB15:    memcpy(t13, t50, 8);

LAB16:    t61 = (t0 + 2968U);
    t62 = *((char **)t61);
    memset(t60, 0, 8);
    t61 = (t60 + 4);
    t63 = (t62 + 4);
    t64 = *((unsigned int *)t62);
    t65 = (t64 >> 18);
    *((unsigned int *)t60) = t65;
    t66 = *((unsigned int *)t63);
    t67 = (t66 >> 18);
    *((unsigned int *)t61) = t67;
    t68 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t68 & 3U);
    t69 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t69 & 3U);
    xsi_vlogtype_concat(t3, 20, 20, 3U, t60, 2, t13, 8, t4, 10);
    t70 = (t0 + 6584);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    memset(t74, 0, 8);
    t75 = 1048575U;
    t76 = t75;
    t77 = (t3 + 4);
    t78 = *((unsigned int *)t3);
    t75 = (t75 & t78);
    t79 = *((unsigned int *)t77);
    t76 = (t76 & t79);
    t80 = (t74 + 4);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t81 | t75);
    t82 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t82 | t76);
    xsi_driver_vfirst_trans_delayed(t70, 0, 19, 500LL, 0);
    t83 = (t0 + 6184);
    *((int *)t83) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB6:    t31 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB7;

LAB8:    t37 = (t0 + 2968U);
    t38 = *((char **)t37);
    memset(t36, 0, 8);
    t37 = (t36 + 4);
    t39 = (t38 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (t40 >> 10);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 10);
    *((unsigned int *)t37) = t43;
    t44 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t44 & 255U);
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 255U);
    goto LAB9;

LAB10:    t51 = (t0 + 2968U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t53 = (t52 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 8);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 8);
    *((unsigned int *)t51) = t57;
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 255U);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 255U);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t13, 8, t36, 8, t50, 8);
    goto LAB16;

LAB14:    memcpy(t13, t36, 8);
    goto LAB16;

}


extern void secureip_m_11288784195837035251_1477213032_init()
{
	static char *pe[] = {(void *)NetDecl_23048_0,(void *)NetDecl_23051_1,(void *)NetDecl_23052_2,(void *)NetDecl_23053_3,(void *)Always_23078_4,(void *)NetDecl_23094_5,(void *)Cont_23119_6};
	xsi_register_didat("secureip_m_11288784195837035251_1477213032", "isim/isim_system.sim/secureip/m_11288784195837035251_1477213032.didat");
	xsi_register_executes(pe);
}
