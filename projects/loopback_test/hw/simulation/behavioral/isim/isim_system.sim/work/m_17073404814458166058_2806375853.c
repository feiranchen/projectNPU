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
static const char *ng0 = "/root/NetFPGA-10G-live-release_5.0.7/lib/hw/std/pcores/nf10_10g_interface_v1_10_a/hdl/verilog/xilinx/chanbond_monitor.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {8U, 0U};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {1, 0};



static void Cont_78_0(char *t0)
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

LAB0:    t1 = (t0 + 4344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5800);
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
    t18 = (t0 + 5656);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_80_1(char *t0)
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

LAB0:    t1 = (t0 + 4592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 5672);
    *((int *)t2) = 1;
    t3 = (t0 + 4624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(83, ng0);

LAB10:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(81, ng0);

LAB9:    xsi_set_current_line(82, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB8;

}

static void Always_89_2(char *t0)
{
    char t9[8];
    char t20[8];
    char t39[8];
    char t47[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t40;
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
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;

LAB0:    t1 = (t0 + 4840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5688);
    *((int *)t2) = 1;
    t3 = (t0 + 4872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);

LAB5:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 2792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(95, ng0);
    t6 = (t0 + 2072U);
    t7 = *((char **)t6);
    memset(t9, 0, 8);
    t6 = (t7 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t6) != 0)
        goto LAB20;

LAB21:    t16 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB22;

LAB23:    memcpy(t47, t9, 8);

LAB24:    t79 = (t47 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t47);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB17;

LAB9:    xsi_set_current_line(100, ng0);
    t3 = (t0 + 1912U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB42;

LAB43:
LAB44:    goto LAB17;

LAB11:    xsi_set_current_line(105, ng0);
    t3 = (t0 + 1912U);
    t5 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB49;

LAB47:    if (*((unsigned int *)t3) == 0)
        goto LAB46;

LAB48:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;

LAB49:    t7 = (t9 + 4);
    t15 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    *((unsigned int *)t9) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB51;

LAB50:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t27 & 1U);
    t16 = (t9 + 4);
    t31 = *((unsigned int *)t16);
    t32 = (~(t31));
    t33 = *((unsigned int *)t9);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t9, 0, 8);
    t6 = (t9 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 7);
    t17 = (t14 & 1);
    *((unsigned int *)t6) = t17;
    t15 = (t9 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (~(t18));
    t23 = *((unsigned int *)t9);
    t24 = (t23 & t19);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(111, ng0);

LAB64:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB62:
LAB58:
LAB54:    goto LAB17;

LAB13:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB17;

LAB18:    *((unsigned int *)t9) = 1;
    goto LAB21;

LAB20:    t15 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB21;

LAB22:    t21 = (t0 + 2232U);
    t22 = *((char **)t21);
    memset(t20, 0, 8);
    t21 = (t22 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t21) == 0)
        goto LAB25;

LAB27:    t28 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t28) = 1;

LAB28:    t29 = (t20 + 4);
    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (~(t31));
    *((unsigned int *)t20) = t32;
    *((unsigned int *)t29) = 0;
    if (*((unsigned int *)t30) != 0)
        goto LAB30;

LAB29:    t37 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t37 & 1U);
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 1U);
    memset(t39, 0, 8);
    t40 = (t20 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t20);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t40) != 0)
        goto LAB33;

LAB34:    t48 = *((unsigned int *)t9);
    t49 = *((unsigned int *)t39);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t51 = (t9 + 4);
    t52 = (t39 + 4);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t51);
    t55 = *((unsigned int *)t52);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB24;

LAB25:    *((unsigned int *)t20) = 1;
    goto LAB28;

LAB30:    t33 = *((unsigned int *)t20);
    t34 = *((unsigned int *)t30);
    *((unsigned int *)t20) = (t33 | t34);
    t35 = *((unsigned int *)t29);
    t36 = *((unsigned int *)t30);
    *((unsigned int *)t29) = (t35 | t36);
    goto LAB29;

LAB31:    *((unsigned int *)t39) = 1;
    goto LAB34;

LAB33:    t46 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB34;

LAB35:    t59 = *((unsigned int *)t47);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t47) = (t59 | t60);
    t61 = (t9 + 4);
    t62 = (t39 + 4);
    t63 = *((unsigned int *)t9);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t39);
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
    goto LAB37;

LAB38:    xsi_set_current_line(95, ng0);

LAB41:    xsi_set_current_line(96, ng0);
    t85 = ((char*)((ng2)));
    t86 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t86, t85, 0, 0, 4, 0LL);
    goto LAB40;

LAB42:    xsi_set_current_line(100, ng0);

LAB45:    xsi_set_current_line(101, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB44;

LAB46:    *((unsigned int *)t9) = 1;
    goto LAB49;

LAB51:    t19 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t9) = (t19 | t23);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t7) = (t24 | t25);
    goto LAB50;

LAB52:    xsi_set_current_line(105, ng0);

LAB55:    xsi_set_current_line(106, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 4, 0LL);
    goto LAB54;

LAB56:    xsi_set_current_line(107, ng0);

LAB59:    xsi_set_current_line(108, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB58;

LAB60:    xsi_set_current_line(109, ng0);

LAB63:    xsi_set_current_line(110, ng0);
    t16 = ((char*)((ng4)));
    t21 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t21, t16, 0, 0, 4, 0LL);
    goto LAB62;

}

static void Always_125_3(char *t0)
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

LAB0:    t1 = (t0 + 5088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 5704);
    *((int *)t2) = 1;
    t3 = (t0 + 5120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(125, ng0);

LAB5:    xsi_set_current_line(126, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(129, ng0);

LAB10:    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB14;

LAB15:
LAB17:
LAB16:    xsi_set_current_line(141, ng0);

LAB19:    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(126, ng0);

LAB9:    xsi_set_current_line(127, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(136, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB18;

LAB14:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB18;

}

static void Always_150_4(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
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

LAB0:    t1 = (t0 + 5336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 5720);
    *((int *)t2) = 1;
    t3 = (t0 + 5368);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(150, ng0);

LAB5:    xsi_set_current_line(151, ng0);
    t5 = (t0 + 3272);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB11;

LAB10:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t4 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(153, ng0);

LAB16:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 8, t6, 32);
    t7 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 8, 0LL);

LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB10;

LAB12:    xsi_set_current_line(151, ng0);

LAB15:    xsi_set_current_line(152, ng0);
    t31 = ((char*)((ng5)));
    t32 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 8, 0LL);
    goto LAB14;

}


extern void work_m_17073404814458166058_2806375853_init()
{
	static char *pe[] = {(void *)Cont_78_0,(void *)Always_80_1,(void *)Always_89_2,(void *)Always_125_3,(void *)Always_150_4};
	xsi_register_didat("work_m_17073404814458166058_2806375853", "isim/isim_system.sim/work/m_17073404814458166058_2806375853.didat");
	xsi_register_executes(pe);
}
