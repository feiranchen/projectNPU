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
static const char *ng0 = "/root/NetFPGA-10G-live-release_5.0.7/lib/hw/xilinx/pcores/axi_interconnect_v1_02_a/hdl/verilog/wdata_mux.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {1U, 0U};



static int sp_f_decoder(char *t1, char *t2)
{
    char t8[8];
    char t20[8];
    char t37[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
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
    char *t19;
    char *t21;
    char *t22;
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
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    int t46;

LAB0:    t0 = 1;
    xsi_set_current_line(100, ng0);

LAB2:    xsi_set_current_line(101, ng0);
    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 5760);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 5760);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 744);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t5, 32, t7, 32);
    t6 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(101, ng0);

LAB6:    xsi_set_current_line(102, ng0);
    t14 = (t1 + 5440);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 5760);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t21 = (t16 + 4);
    t22 = (t19 + 4);
    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t21);
    t27 = *((unsigned int *)t22);
    t28 = (t26 ^ t27);
    t29 = (t25 | t28);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t22);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB10;

LAB7:    if (t32 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t20) = 1;

LAB10:    t36 = (t1 + 5600);
    t38 = (t1 + 5600);
    t39 = (t38 + 72U);
    t40 = *((char **)t39);
    t41 = (t1 + 5760);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_generic_convert_bit_index(t37, t40, 2, t43, 32, 1);
    t44 = (t37 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    if (t46 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(101, ng0);
    t3 = (t1 + 5760);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t5, 32, t6, 32);
    t7 = (t1 + 5760);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB3;

LAB9:    t35 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB10;

LAB11:    xsi_vlogvar_assign_value(t36, t20, 0, *((unsigned int *)t37), 1);
    goto LAB12;

}

static void Cont_161_0(char *t0)
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
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 6672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8112);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Cont_162_1(char *t0)
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
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 2800U);
    t3 = *((char **)t2);
    t2 = (t0 + 8176);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 7984);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_163_2(char *t0)
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
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 7168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 3600U);
    t3 = *((char **)t2);
    t2 = (t0 + 8240);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 8000);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_164_3(char *t0)
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
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 7416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 2640U);
    t3 = *((char **)t2);
    t2 = (t0 + 8304);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 8016);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_165_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 7664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 2480U);
    t3 = *((char **)t2);
    t2 = (t0 + 8368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_bit_copy(t7, 0, t3, 0, 37);
    xsi_driver_vfirst_trans(t2, 0, 36);
    t8 = (t0 + 8032);
    *((int *)t8) = 1;

LAB1:    return;
}


extern void axi_interconnect_v1_02_a_m_11692290042704218759_2321779981_init()
{
	static char *pe[] = {(void *)Cont_161_0,(void *)Cont_162_1,(void *)Cont_163_2,(void *)Cont_164_3,(void *)Cont_165_4};
	static char *se[] = {(void *)sp_f_decoder};
	xsi_register_didat("axi_interconnect_v1_02_a_m_11692290042704218759_2321779981", "isim/isim_system.sim/axi_interconnect_v1_02_a/m_11692290042704218759_2321779981.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
