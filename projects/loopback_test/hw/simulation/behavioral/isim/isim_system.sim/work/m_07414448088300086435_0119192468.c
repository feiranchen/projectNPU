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
static const char *ng0 = "/root/NetFPGA-10G-live-release_5.0.7/lib/hw/std/pcores/nf10_10g_interface_v1_10_a/hdl/verilog/nf10/rx_queue.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {255U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {1, 0};



static void Always_146_0(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 7632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 9440);
    *((int *)t2) = 1;
    t3 = (t0 + 7664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(146, ng0);

LAB5:    xsi_set_current_line(147, ng0);
    t4 = (t0 + 5920);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(147, ng0);

LAB9:    xsi_set_current_line(148, ng0);
    t13 = (t0 + 3920U);
    t14 = *((char **)t13);
    t13 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t13, t14, 0, 0, 64, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 4080U);
    t3 = *((char **)t2);
    t2 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB8;

}

static void Always_153_1(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
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
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;

LAB0:    t1 = (t0 + 7880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 9456);
    *((int *)t2) = 1;
    t3 = (t0 + 7912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(153, ng0);

LAB5:    xsi_set_current_line(154, ng0);
    t4 = (t0 + 6080);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 6240);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 6080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 608);
    t6 = *((char **)t5);
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t6, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(159, ng0);

LAB14:    xsi_set_current_line(160, ng0);
    t5 = (t0 + 2640U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t10 = (t7 + 4);
    t11 = (t5 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB18;

LAB15:    if (t21 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t9) = 1;

LAB18:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB19;

LAB20:
LAB21:    goto LAB13;

LAB9:    xsi_set_current_line(172, ng0);

LAB34:    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 5440);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 2640U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t6);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB38;

LAB35:    if (t21 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t9) = 1;

LAB38:    t10 = (t9 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB39;

LAB40:
LAB41:    goto LAB13;

LAB11:    xsi_set_current_line(179, ng0);

LAB43:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 2640U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t6 = (t5 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB45;

LAB44:    if (t21 != 0)
        goto LAB46;

LAB47:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB48;

LAB49:
LAB50:    goto LAB13;

LAB17:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(160, ng0);

LAB22:    xsi_set_current_line(161, ng0);
    t31 = ((char*)((ng3)));
    t32 = (t0 + 5760);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 1);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 3280U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t2) == 0)
        goto LAB23;

LAB25:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;

LAB26:    t6 = (t9 + 4);
    t7 = (t3 + 4);
    t17 = *((unsigned int *)t3);
    t18 = (~(t17));
    *((unsigned int *)t9) = t18;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB28;

LAB27:    t23 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t23 & 1U);
    t26 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t26 & 1U);
    t10 = (t9 + 4);
    t27 = *((unsigned int *)t10);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (t29 & t28);
    t33 = (t30 != 0);
    if (t33 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(166, ng0);

LAB33:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 6240);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB31:    goto LAB21;

LAB23:    *((unsigned int *)t9) = 1;
    goto LAB26;

LAB28:    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t9) = (t19 | t20);
    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t21 | t22);
    goto LAB27;

LAB29:    xsi_set_current_line(162, ng0);

LAB32:    xsi_set_current_line(163, ng0);
    t11 = ((char*)((ng3)));
    t24 = (t0 + 5440);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 6240);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB31;

LAB37:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(174, ng0);

LAB42:    xsi_set_current_line(175, ng0);
    t11 = (t0 + 608);
    t24 = *((char **)t11);
    t11 = (t0 + 6240);
    xsi_vlogvar_assign_value(t11, t24, 0, 0, 3);
    goto LAB41;

LAB45:    *((unsigned int *)t9) = 1;
    goto LAB47;

LAB46:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(180, ng0);

LAB51:    xsi_set_current_line(181, ng0);
    t24 = (t0 + 608);
    t25 = *((char **)t24);
    t24 = (t0 + 6240);
    xsi_vlogvar_assign_value(t24, t25, 0, 0, 3);
    goto LAB50;

}

static void Always_187_2(char *t0)
{
    char t8[8];
    char t28[8];
    char t60[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;

LAB0:    t1 = (t0 + 8128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 9472);
    *((int *)t2) = 1;
    t3 = (t0 + 8160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(187, ng0);

LAB5:    xsi_set_current_line(188, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 5600);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 6400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6560);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 6400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 1016);
    t6 = *((char **)t5);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t6, 32);
    if (t7 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t7 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t7 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(197, ng0);

LAB14:    xsi_set_current_line(198, ng0);
    t5 = (t0 + 3440U);
    t9 = *((char **)t5);
    memset(t8, 0, 8);
    t5 = (t9 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t5) == 0)
        goto LAB15;

LAB17:    t15 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t15) = 1;

LAB18:    t16 = (t8 + 4);
    t17 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    *((unsigned int *)t8) = t19;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB20;

LAB19:    t24 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t24 & 1U);
    t25 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t25 & 1U);
    t26 = (t0 + 2000U);
    t27 = *((char **)t26);
    t29 = *((unsigned int *)t8);
    t30 = *((unsigned int *)t27);
    t31 = (t29 & t30);
    *((unsigned int *)t28) = t31;
    t26 = (t8 + 4);
    t32 = (t27 + 4);
    t33 = (t28 + 4);
    t34 = *((unsigned int *)t26);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB21;

LAB22:
LAB23:    t59 = (t0 + 5920);
    xsi_vlogvar_assign_value(t59, t28, 0, 0, 1);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 3440U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB27;

LAB25:    if (*((unsigned int *)t2) == 0)
        goto LAB24;

LAB26:    t5 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t5) = 1;

LAB27:    t6 = (t8 + 4);
    t9 = (t3 + 4);
    t18 = *((unsigned int *)t3);
    t19 = (~(t18));
    *((unsigned int *)t8) = t19;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB29;

LAB28:    t24 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t24 & 1U);
    t25 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t25 & 1U);
    t15 = (t0 + 5120);
    xsi_vlogvar_assign_value(t15, t8, 0, 0, 1);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 4080U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    t18 = (t13 ^ t14);
    t19 = (t12 | t18);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t6);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB33;

LAB30:    if (t22 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t8) = 1;

LAB33:    t15 = (t0 + 3440U);
    t16 = *((char **)t15);
    memset(t28, 0, 8);
    t15 = (t16 + 4);
    t25 = *((unsigned int *)t15);
    t29 = (~(t25));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t34 = (t31 & 1U);
    if (t34 != 0)
        goto LAB37;

LAB35:    if (*((unsigned int *)t15) == 0)
        goto LAB34;

LAB36:    t17 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t17) = 1;

LAB37:    t26 = (t28 + 4);
    t27 = (t16 + 4);
    t35 = *((unsigned int *)t16);
    t36 = (~(t35));
    *((unsigned int *)t28) = t36;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB39;

LAB38:    t43 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t43 & 1U);
    t44 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t44 & 1U);
    t45 = *((unsigned int *)t8);
    t46 = *((unsigned int *)t28);
    t47 = (t45 & t46);
    *((unsigned int *)t60) = t47;
    t32 = (t8 + 4);
    t33 = (t28 + 4);
    t41 = (t60 + 4);
    t48 = *((unsigned int *)t32);
    t49 = *((unsigned int *)t33);
    t50 = (t48 | t49);
    *((unsigned int *)t41) = t50;
    t53 = *((unsigned int *)t41);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB40;

LAB41:
LAB42:    t73 = (t60 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t60);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB43;

LAB44:
LAB45:    goto LAB13;

LAB9:    xsi_set_current_line(206, ng0);

LAB47:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 3600U);
    t5 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t5 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB51;

LAB49:    if (*((unsigned int *)t2) == 0)
        goto LAB48;

LAB50:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;

LAB51:    t9 = (t8 + 4);
    t15 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (~(t18));
    *((unsigned int *)t8) = t19;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB53;

LAB52:    t24 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t24 & 1U);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t25 & 1U);
    t16 = (t8 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    t31 = *((unsigned int *)t8);
    t34 = (t31 & t30);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB54;

LAB55:
LAB56:    goto LAB13;

LAB11:    xsi_set_current_line(218, ng0);

LAB62:    xsi_set_current_line(219, ng0);
    t2 = (t0 + 3440U);
    t5 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t5 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB66;

LAB64:    if (*((unsigned int *)t2) == 0)
        goto LAB63;

LAB65:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;

LAB66:    t9 = (t8 + 4);
    t15 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (~(t18));
    *((unsigned int *)t8) = t19;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB68;

LAB67:    t24 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t24 & 1U);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t25 & 1U);
    t16 = (t8 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    t31 = *((unsigned int *)t8);
    t34 = (t31 & t30);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB69;

LAB70:
LAB71:    goto LAB13;

LAB15:    *((unsigned int *)t8) = 1;
    goto LAB18;

LAB20:    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t17);
    *((unsigned int *)t8) = (t20 | t21);
    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t22 | t23);
    goto LAB19;

LAB21:    t39 = *((unsigned int *)t28);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t28) = (t39 | t40);
    t41 = (t8 + 4);
    t42 = (t27 + 4);
    t43 = *((unsigned int *)t8);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t27);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    t56 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t56 & t54);
    t57 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t57 & t53);
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t54);
    goto LAB23;

LAB24:    *((unsigned int *)t8) = 1;
    goto LAB27;

LAB29:    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t20 | t21);
    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t6) = (t22 | t23);
    goto LAB28;

LAB32:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t28) = 1;
    goto LAB37;

LAB39:    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t27);
    *((unsigned int *)t28) = (t37 | t38);
    t39 = *((unsigned int *)t26);
    t40 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t39 | t40);
    goto LAB38;

LAB40:    t55 = *((unsigned int *)t60);
    t56 = *((unsigned int *)t41);
    *((unsigned int *)t60) = (t55 | t56);
    t42 = (t8 + 4);
    t59 = (t28 + 4);
    t57 = *((unsigned int *)t8);
    t58 = (~(t57));
    t61 = *((unsigned int *)t42);
    t62 = (~(t61));
    t63 = *((unsigned int *)t28);
    t64 = (~(t63));
    t65 = *((unsigned int *)t59);
    t66 = (~(t65));
    t7 = (t58 & t62);
    t51 = (t64 & t66);
    t67 = (~(t7));
    t68 = (~(t51));
    t69 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t69 & t67);
    t70 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t70 & t68);
    t71 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t71 & t67);
    t72 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t72 & t68);
    goto LAB42;

LAB43:    xsi_set_current_line(200, ng0);

LAB46:    xsi_set_current_line(201, ng0);
    t79 = ((char*)((ng4)));
    t80 = (t0 + 5920);
    xsi_vlogvar_assign_value(t80, t79, 0, 0, 1);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 6560);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB45;

LAB48:    *((unsigned int *)t8) = 1;
    goto LAB51;

LAB53:    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t8) = (t20 | t21);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t9) = (t22 | t23);
    goto LAB52;

LAB54:    xsi_set_current_line(207, ng0);

LAB57:    xsi_set_current_line(208, ng0);
    t17 = ((char*)((ng5)));
    t26 = (t0 + 5280);
    xsi_vlogvar_assign_value(t26, t17, 0, 0, 1);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 2000U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB58;

LAB59:
LAB60:    goto LAB56;

LAB58:    xsi_set_current_line(210, ng0);

LAB61:    xsi_set_current_line(211, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 5600);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 3760U);
    t3 = *((char **)t2);
    t2 = (t0 + 6720);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 6560);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB60;

LAB63:    *((unsigned int *)t8) = 1;
    goto LAB66;

LAB68:    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t8) = (t20 | t21);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t9) = (t22 | t23);
    goto LAB67;

LAB69:    xsi_set_current_line(219, ng0);

LAB72:    xsi_set_current_line(220, ng0);
    t17 = ((char*)((ng5)));
    t26 = (t0 + 5920);
    xsi_vlogvar_assign_value(t26, t17, 0, 0, 1);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 6560);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB71;

}

static void Always_227_3(char *t0)
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

LAB0:    t1 = (t0 + 8376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 9488);
    *((int *)t2) = 1;
    t3 = (t0 + 8408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(227, ng0);

LAB5:    xsi_set_current_line(228, ng0);
    t4 = (t0 + 2320U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(231, ng0);

LAB10:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 6240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6080);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(228, ng0);

LAB9:    xsi_set_current_line(229, ng0);
    t11 = (t0 + 608);
    t12 = *((char **)t11);
    t11 = (t0 + 6080);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 3, 0LL);
    goto LAB8;

}

static void Always_235_4(char *t0)
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

LAB0:    t1 = (t0 + 8624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(235, ng0);
    t2 = (t0 + 9504);
    *((int *)t2) = 1;
    t3 = (t0 + 8656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(235, ng0);

LAB5:    xsi_set_current_line(236, ng0);
    t4 = (t0 + 2320U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(239, ng0);

LAB10:    xsi_set_current_line(240, ng0);
    t2 = (t0 + 6560);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6400);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(236, ng0);

LAB9:    xsi_set_current_line(237, ng0);
    t11 = (t0 + 1288);
    t12 = *((char **)t11);
    t11 = (t0 + 6400);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 3, 0LL);
    goto LAB8;

}

static void implSig1_execute(char *t0)
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

LAB0:    t1 = (t0 + 8872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2320U);
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
    t21 = (t0 + 9616);
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
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 9520);
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

static void implSig2_execute(char *t0)
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

LAB0:    t1 = (t0 + 9120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2320U);
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
    t21 = (t0 + 9680);
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
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 9536);
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


extern void work_m_07414448088300086435_0119192468_init()
{
	static char *pe[] = {(void *)Always_146_0,(void *)Always_153_1,(void *)Always_187_2,(void *)Always_227_3,(void *)Always_235_4,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_07414448088300086435_0119192468", "isim/isim_system.sim/work/m_07414448088300086435_0119192468.didat");
	xsi_register_executes(pe);
}
