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
static const char *ng0 = "/root/NetFPGA-10G-live-release_5.0.7/lib/hw/std/pcores/nf10_10g_interface_v1_10_a/hdl/verilog/xilinx/cc_2b_1skp.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};
static int ng7[] = {4, 0};
static int ng8[] = {5, 0};
static int ng9[] = {6, 0};
static int ng10[] = {7, 0};
static int ng11[] = {8, 0};
static int ng12[] = {9, 0};
static const char *ng13 = "Error. Default state\n";
static unsigned int ng14[] = {3U, 0U};
static unsigned int ng15[] = {2U, 0U};



static void Always_1266_0(char *t0)
{
    char t15[8];
    char t18[8];
    char t45[8];
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
    int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
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
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;

LAB0:    t1 = (t0 + 6528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1266, ng0);
    t2 = (t0 + 8336);
    *((int *)t2) = 1;
    t3 = (t0 + 6560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1267, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 6336);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(1268, ng0);
    t6 = (t0 + 3296U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(1277, ng0);

LAB14:    xsi_set_current_line(1278, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 10000LL);
    xsi_set_current_line(1280, ng0);
    t2 = ((char*)((ng2)));

LAB15:    t3 = (t0 + 4976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    t16 = xsi_vlog_unsigned_case_compare(t2, 1, t15, 1);
    if (t16 == 1)
        goto LAB16;

LAB17:    t3 = (t0 + 4976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    t16 = xsi_vlog_unsigned_case_compare(t2, 1, t15, 1);
    if (t16 == 1)
        goto LAB18;

LAB19:    t3 = (t0 + 4976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    t16 = xsi_vlog_unsigned_case_compare(t2, 1, t15, 1);
    if (t16 == 1)
        goto LAB20;

LAB21:    t3 = (t0 + 4976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    t16 = xsi_vlog_unsigned_case_compare(t2, 1, t15, 1);
    if (t16 == 1)
        goto LAB22;

LAB23:    t3 = (t0 + 4976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    t16 = xsi_vlog_unsigned_case_compare(t2, 1, t15, 1);
    if (t16 == 1)
        goto LAB24;

LAB25:    t3 = (t0 + 4976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 5);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 5);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    t16 = xsi_vlog_unsigned_case_compare(t2, 1, t15, 1);
    if (t16 == 1)
        goto LAB26;

LAB27:    t3 = (t0 + 4976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 6);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 6);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    t16 = xsi_vlog_unsigned_case_compare(t2, 1, t15, 1);
    if (t16 == 1)
        goto LAB28;

LAB29:    t3 = (t0 + 4976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 7);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 7);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    t16 = xsi_vlog_unsigned_case_compare(t2, 1, t15, 1);
    if (t16 == 1)
        goto LAB30;

LAB31:    t3 = (t0 + 4976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    t16 = xsi_vlog_unsigned_case_compare(t2, 1, t15, 1);
    if (t16 == 1)
        goto LAB32;

LAB33:    t3 = (t0 + 4976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 9);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 9);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    t16 = xsi_vlog_unsigned_case_compare(t2, 1, t15, 1);
    if (t16 == 1)
        goto LAB34;

LAB35:
LAB37:
LAB36:    xsi_set_current_line(1354, ng0);

LAB109:    xsi_set_current_line(1355, ng0);
    t3 = (t0 + 280);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t3);
    xsi_set_current_line(1356, ng0);
    xsi_vlog_stop(1);

LAB38:
LAB10:    t3 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t3);

LAB6:    t4 = (t0 + 6336);
    xsi_vlog_dispose_process_subprogram_invocation(t4);
    goto LAB2;

LAB8:    xsi_set_current_line(1269, ng0);

LAB11:    xsi_set_current_line(1270, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 4976);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 10, 10000LL);
    xsi_set_current_line(1271, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4976);
    t4 = (t0 + 4976);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t15, t6, 2, t7, 32, 1);
    t13 = (t15 + 4);
    t8 = *((unsigned int *)t13);
    t16 = (!(t8));
    if (t16 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(1272, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 10000LL);
    xsi_set_current_line(1273, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 10000LL);
    goto LAB10;

LAB12:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t15), 1, 10000LL);
    goto LAB13;

LAB16:    xsi_set_current_line(1281, ng0);

LAB39:    xsi_set_current_line(1282, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 4976);
    t19 = (t0 + 4976);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t18, t21, 2, t22, 32, 1);
    t23 = (t18 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    if (t25 == 1)
        goto LAB40;

LAB41:    goto LAB38;

LAB18:    xsi_set_current_line(1285, ng0);

LAB42:    xsi_set_current_line(1286, ng0);
    t13 = (t0 + 5616);
    t14 = (t13 + 56U);
    t19 = *((char **)t14);
    t20 = ((char*)((ng1)));
    memset(t18, 0, 8);
    t21 = (t19 + 4);
    t22 = (t20 + 4);
    t24 = *((unsigned int *)t19);
    t26 = *((unsigned int *)t20);
    t27 = (t24 ^ t26);
    t28 = *((unsigned int *)t21);
    t29 = *((unsigned int *)t22);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t21);
    t33 = *((unsigned int *)t22);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB44;

LAB43:    if (t34 != 0)
        goto LAB45;

LAB46:    t37 = (t18 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t18);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(1289, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4976);
    t5 = (t0 + 4976);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t15, t7, 2, t13, 32, 1);
    t14 = (t15 + 4);
    t8 = *((unsigned int *)t14);
    t16 = (!(t8));
    if (t16 == 1)
        goto LAB52;

LAB53:
LAB49:    xsi_set_current_line(1291, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5296);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 10000LL);
    goto LAB38;

LAB20:    xsi_set_current_line(1294, ng0);

LAB54:    xsi_set_current_line(1295, ng0);
    t13 = (t0 + 3616U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng1)));
    memset(t18, 0, 8);
    t19 = (t14 + 4);
    t20 = (t13 + 4);
    t24 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t13);
    t27 = (t24 ^ t26);
    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t20);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t19);
    t33 = *((unsigned int *)t20);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB56;

LAB55:    if (t34 != 0)
        goto LAB57;

LAB58:    t22 = (t18 + 4);
    t38 = *((unsigned int *)t22);
    t39 = (~(t38));
    t40 = *((unsigned int *)t18);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(1301, ng0);

LAB65:    xsi_set_current_line(1302, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4976);
    t5 = (t0 + 4976);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t13 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t15, t7, 2, t13, 32, 1);
    t14 = (t15 + 4);
    t8 = *((unsigned int *)t14);
    t16 = (!(t8));
    if (t16 == 1)
        goto LAB66;

LAB67:    xsi_set_current_line(1303, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5136);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 10000LL);

LAB61:    goto LAB38;

LAB22:    xsi_set_current_line(1307, ng0);

LAB68:    xsi_set_current_line(1308, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 4976);
    t19 = (t0 + 4976);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t18, t21, 2, t22, 32, 1);
    t23 = (t18 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    if (t25 == 1)
        goto LAB69;

LAB70:    goto LAB38;

LAB24:    xsi_set_current_line(1312, ng0);

LAB71:    xsi_set_current_line(1313, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 4976);
    t19 = (t0 + 4976);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t18, t21, 2, t22, 32, 1);
    t23 = (t18 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    if (t25 == 1)
        goto LAB72;

LAB73:    goto LAB38;

LAB26:    xsi_set_current_line(1316, ng0);

LAB74:    xsi_set_current_line(1317, ng0);
    t13 = (t0 + 3616U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng1)));
    memset(t18, 0, 8);
    t19 = (t14 + 4);
    t20 = (t13 + 4);
    t24 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t13);
    t27 = (t24 ^ t26);
    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t20);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t19);
    t33 = *((unsigned int *)t20);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB76;

LAB75:    if (t34 != 0)
        goto LAB77;

LAB78:    t22 = (t18 + 4);
    t38 = *((unsigned int *)t22);
    t39 = (~(t38));
    t40 = *((unsigned int *)t18);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(1323, ng0);

LAB85:    xsi_set_current_line(1324, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4976);
    t5 = (t0 + 4976);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t13 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t15, t7, 2, t13, 32, 1);
    t14 = (t15 + 4);
    t8 = *((unsigned int *)t14);
    t16 = (!(t8));
    if (t16 == 1)
        goto LAB86;

LAB87:    xsi_set_current_line(1325, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5296);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 10000LL);

LAB81:    xsi_set_current_line(1328, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5136);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 10000LL);
    goto LAB38;

LAB28:    xsi_set_current_line(1332, ng0);

LAB88:    xsi_set_current_line(1333, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 4976);
    t19 = (t0 + 4976);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t18, t21, 2, t22, 32, 1);
    t23 = (t18 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    if (t25 == 1)
        goto LAB89;

LAB90:    goto LAB38;

LAB30:    xsi_set_current_line(1336, ng0);

LAB91:    xsi_set_current_line(1337, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 4976);
    t19 = (t0 + 4976);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t18, t21, 2, t22, 32, 1);
    t23 = (t18 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    if (t25 == 1)
        goto LAB92;

LAB93:    goto LAB38;

LAB32:    xsi_set_current_line(1340, ng0);

LAB94:    xsi_set_current_line(1341, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 4976);
    t19 = (t0 + 4976);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t18, t21, 2, t22, 32, 1);
    t23 = (t18 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    if (t25 == 1)
        goto LAB95;

LAB96:    goto LAB38;

LAB34:    xsi_set_current_line(1346, ng0);

LAB97:    xsi_set_current_line(1347, ng0);
    t13 = (t0 + 5456);
    t14 = (t13 + 56U);
    t19 = *((char **)t14);
    t20 = ((char*)((ng1)));
    memset(t18, 0, 8);
    t21 = (t19 + 4);
    t22 = (t20 + 4);
    t24 = *((unsigned int *)t19);
    t26 = *((unsigned int *)t20);
    t27 = (t24 ^ t26);
    t28 = *((unsigned int *)t21);
    t29 = *((unsigned int *)t22);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t21);
    t33 = *((unsigned int *)t22);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB101;

LAB98:    if (t34 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t18) = 1;

LAB101:    t37 = (t18 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t18);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB102;

LAB103:    xsi_set_current_line(1350, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4976);
    t5 = (t0 + 4976);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t13 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t15, t7, 2, t13, 32, 1);
    t14 = (t15 + 4);
    t8 = *((unsigned int *)t14);
    t16 = (!(t8));
    if (t16 == 1)
        goto LAB107;

LAB108:
LAB104:    goto LAB38;

LAB40:    xsi_vlogvar_wait_assign_value(t14, t13, 0, *((unsigned int *)t18), 1, 10000LL);
    goto LAB41;

LAB44:    *((unsigned int *)t18) = 1;
    goto LAB46;

LAB45:    t23 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(1287, ng0);
    t43 = ((char*)((ng2)));
    t44 = (t0 + 4976);
    t46 = (t0 + 4976);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t45, t48, 2, t49, 32, 1);
    t50 = (t45 + 4);
    t51 = *((unsigned int *)t50);
    t25 = (!(t51));
    if (t25 == 1)
        goto LAB50;

LAB51:    goto LAB49;

LAB50:    xsi_vlogvar_wait_assign_value(t44, t43, 0, *((unsigned int *)t45), 1, 10000LL);
    goto LAB51;

LAB52:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t15), 1, 10000LL);
    goto LAB53;

LAB56:    *((unsigned int *)t18) = 1;
    goto LAB58;

LAB57:    t21 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(1296, ng0);

LAB62:    xsi_set_current_line(1297, ng0);
    t23 = ((char*)((ng2)));
    t37 = (t0 + 4976);
    t43 = (t0 + 4976);
    t44 = (t43 + 72U);
    t46 = *((char **)t44);
    t47 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t45, t46, 2, t47, 32, 1);
    t48 = (t45 + 4);
    t51 = *((unsigned int *)t48);
    t25 = (!(t51));
    if (t25 == 1)
        goto LAB63;

LAB64:    xsi_set_current_line(1298, ng0);
    t3 = (t0 + 3616U);
    t4 = *((char **)t3);
    t3 = (t0 + 5136);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 2, 10000LL);
    goto LAB61;

LAB63:    xsi_vlogvar_wait_assign_value(t37, t23, 0, *((unsigned int *)t45), 1, 10000LL);
    goto LAB64;

LAB66:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t15), 1, 10000LL);
    goto LAB67;

LAB69:    xsi_vlogvar_wait_assign_value(t14, t13, 0, *((unsigned int *)t18), 1, 10000LL);
    goto LAB70;

LAB72:    xsi_vlogvar_wait_assign_value(t14, t13, 0, *((unsigned int *)t18), 1, 10000LL);
    goto LAB73;

LAB76:    *((unsigned int *)t18) = 1;
    goto LAB78;

LAB77:    t21 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB78;

LAB79:    xsi_set_current_line(1318, ng0);

LAB82:    xsi_set_current_line(1319, ng0);
    t23 = ((char*)((ng2)));
    t37 = (t0 + 4976);
    t43 = (t0 + 4976);
    t44 = (t43 + 72U);
    t46 = *((char **)t44);
    t47 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t45, t46, 2, t47, 32, 1);
    t48 = (t45 + 4);
    t51 = *((unsigned int *)t48);
    t25 = (!(t51));
    if (t25 == 1)
        goto LAB83;

LAB84:    xsi_set_current_line(1320, ng0);
    t3 = (t0 + 3616U);
    t4 = *((char **)t3);
    t3 = (t0 + 5296);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 2, 10000LL);
    goto LAB81;

LAB83:    xsi_vlogvar_wait_assign_value(t37, t23, 0, *((unsigned int *)t45), 1, 10000LL);
    goto LAB84;

LAB86:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t15), 1, 10000LL);
    goto LAB87;

LAB89:    xsi_vlogvar_wait_assign_value(t14, t13, 0, *((unsigned int *)t18), 1, 10000LL);
    goto LAB90;

LAB92:    xsi_vlogvar_wait_assign_value(t14, t13, 0, *((unsigned int *)t18), 1, 10000LL);
    goto LAB93;

LAB95:    xsi_vlogvar_wait_assign_value(t14, t13, 0, *((unsigned int *)t18), 1, 10000LL);
    goto LAB96;

LAB100:    t23 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB101;

LAB102:    xsi_set_current_line(1348, ng0);
    t43 = ((char*)((ng2)));
    t44 = (t0 + 4976);
    t46 = (t0 + 4976);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t45, t48, 2, t49, 32, 1);
    t50 = (t45 + 4);
    t51 = *((unsigned int *)t50);
    t25 = (!(t51));
    if (t25 == 1)
        goto LAB105;

LAB106:    goto LAB104;

LAB105:    xsi_vlogvar_wait_assign_value(t44, t43, 0, *((unsigned int *)t45), 1, 10000LL);
    goto LAB106;

LAB107:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t15), 1, 10000LL);
    goto LAB108;

}

static void Always_1366_1(char *t0)
{
    char t10[8];
    char t22[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 6776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1366, ng0);
    t2 = (t0 + 8352);
    *((int *)t2) = 1;
    t3 = (t0 + 6808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1367, ng0);

LAB5:    t4 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 6584);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(1369, ng0);
    t6 = ((char*)((ng2)));

LAB8:    t7 = (t0 + 4976);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t10 + 4);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t11) = t18;
    t19 = xsi_vlog_unsigned_case_compare(t6, 1, t10, 1);
    if (t19 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t5 = (t10 + 4);
    t7 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 1);
    t18 = (t17 & 1);
    *((unsigned int *)t5) = t18;
    t19 = xsi_vlog_unsigned_case_compare(t6, 1, t10, 1);
    if (t19 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t5 = (t10 + 4);
    t7 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 2);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 2);
    t18 = (t17 & 1);
    *((unsigned int *)t5) = t18;
    t19 = xsi_vlog_unsigned_case_compare(t6, 1, t10, 1);
    if (t19 == 1)
        goto LAB13;

LAB14:    t8 = (t0 + 4976);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memset(t22, 0, 8);
    t12 = (t22 + 4);
    t20 = (t11 + 4);
    t23 = *((unsigned int *)t11);
    t24 = (t23 >> 9);
    t25 = (t24 & 1);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t20);
    t27 = (t26 >> 9);
    t28 = (t27 & 1);
    *((unsigned int *)t12) = t28;
    t29 = xsi_vlog_unsigned_case_compare(t6, 1, t22, 1);
    if (t29 == 1)
        goto LAB15;

LAB16:    t21 = (t0 + 4976);
    t30 = (t21 + 56U);
    t31 = *((char **)t30);
    memset(t32, 0, 8);
    t33 = (t32 + 4);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 3);
    t37 = (t36 & 1);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 3);
    t40 = (t39 & 1);
    *((unsigned int *)t33) = t40;
    t41 = xsi_vlog_unsigned_case_compare(t6, 1, t32, 1);
    if (t41 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t5 = (t10 + 4);
    t7 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 4);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 4);
    t18 = (t17 & 1);
    *((unsigned int *)t5) = t18;
    t19 = xsi_vlog_unsigned_case_compare(t6, 1, t10, 1);
    if (t19 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t8 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 5);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t8);
    t17 = (t16 >> 5);
    t18 = (t17 & 1);
    *((unsigned int *)t7) = t18;
    t19 = xsi_vlog_unsigned_case_compare(t6, 1, t10, 1);
    if (t19 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t8 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 6);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t8);
    t17 = (t16 >> 6);
    t18 = (t17 & 1);
    *((unsigned int *)t7) = t18;
    t19 = xsi_vlog_unsigned_case_compare(t6, 1, t10, 1);
    if (t19 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 7);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 7);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    t19 = xsi_vlog_unsigned_case_compare(t6, 1, t10, 1);
    if (t19 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 8);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 8);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    t19 = xsi_vlog_unsigned_case_compare(t6, 1, t10, 1);
    if (t19 == 1)
        goto LAB27;

LAB28:
LAB30:
LAB29:    xsi_set_current_line(1419, ng0);

LAB62:    xsi_set_current_line(1420, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(1420, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(1420, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB31:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 6584);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(1370, ng0);

LAB32:    xsi_set_current_line(1371, ng0);
    t20 = ((char*)((ng1)));
    t21 = (t0 + 4336);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 2);
    xsi_set_current_line(1371, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(1371, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB11:    xsi_set_current_line(1374, ng0);

LAB33:    xsi_set_current_line(1375, ng0);
    t8 = ((char*)((ng1)));
    t9 = (t0 + 4336);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 2);
    xsi_set_current_line(1375, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(1375, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB13:    goto LAB11;

LAB15:    goto LAB11;

LAB17:    xsi_set_current_line(1377, ng0);

LAB34:    xsi_set_current_line(1378, ng0);
    t42 = ((char*)((ng1)));
    t43 = (t0 + 4336);
    xsi_vlogvar_assign_value(t43, t42, 0, 0, 2);
    xsi_set_current_line(1378, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(1378, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB19:    xsi_set_current_line(1381, ng0);

LAB35:    xsi_set_current_line(1382, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t0 + 4656);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    xsi_set_current_line(1383, ng0);
    t2 = (t0 + 5136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB36:    t5 = ((char*)((ng2)));
    t19 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t19 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng15)));
    t19 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t19 == 1)
        goto LAB39;

LAB40:
LAB42:
LAB41:    xsi_set_current_line(1390, ng0);

LAB46:    xsi_set_current_line(1390, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(1390, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB43:    goto LAB31;

LAB21:    xsi_set_current_line(1394, ng0);

LAB47:    xsi_set_current_line(1395, ng0);
    t9 = ((char*)((ng14)));
    t11 = (t0 + 4336);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 2);
    xsi_set_current_line(1395, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(1395, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB23:    xsi_set_current_line(1398, ng0);

LAB48:    xsi_set_current_line(1399, ng0);
    t9 = ((char*)((ng2)));
    t11 = (t0 + 4656);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 1);
    xsi_set_current_line(1400, ng0);
    t2 = (t0 + 5296);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB49:    t7 = ((char*)((ng2)));
    t19 = xsi_vlog_unsigned_case_compare(t5, 2, t7, 2);
    if (t19 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng15)));
    t19 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t19 == 1)
        goto LAB52;

LAB53:
LAB55:
LAB54:    xsi_set_current_line(1407, ng0);

LAB59:    xsi_set_current_line(1407, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(1407, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB56:    goto LAB31;

LAB25:    xsi_set_current_line(1411, ng0);

LAB60:    xsi_set_current_line(1412, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 4336);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 2);
    xsi_set_current_line(1412, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(1412, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB27:    xsi_set_current_line(1415, ng0);

LAB61:    xsi_set_current_line(1416, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4336);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 2);
    xsi_set_current_line(1416, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(1416, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB37:    xsi_set_current_line(1386, ng0);

LAB44:    xsi_set_current_line(1386, ng0);
    t7 = ((char*)((ng14)));
    t8 = (t0 + 4336);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 2);
    xsi_set_current_line(1386, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB43;

LAB39:    xsi_set_current_line(1387, ng0);

LAB45:    xsi_set_current_line(1387, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 4336);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 2);
    xsi_set_current_line(1387, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB43;

LAB50:    xsi_set_current_line(1403, ng0);

LAB57:    xsi_set_current_line(1403, ng0);
    t8 = ((char*)((ng14)));
    t9 = (t0 + 4336);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 2);
    xsi_set_current_line(1403, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB56;

LAB52:    xsi_set_current_line(1404, ng0);

LAB58:    xsi_set_current_line(1404, ng0);
    t3 = ((char*)((ng14)));
    t7 = (t0 + 4336);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 2);
    xsi_set_current_line(1404, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB56;

}

static void Always_1427_2(char *t0)
{
    char t13[8];
    char t15[8];
    char t41[8];
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
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;

LAB0:    t1 = (t0 + 7024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1427, ng0);
    t2 = (t0 + 8368);
    *((int *)t2) = 1;
    t3 = (t0 + 7056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1428, ng0);
    t4 = (t0 + 3296U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(1430, ng0);
    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 9);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 9);
    t14 = (t10 & 1);
    *((unsigned int *)t5) = t14;
    t12 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t16 = (t13 + 4);
    t17 = (t12 + 4);
    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t12);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB11;

LAB8:    if (t27 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t15) = 1;

LAB11:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB12;

LAB13:
LAB14:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(1429, ng0);
    t11 = ((char*)((ng14)));
    t12 = (t0 + 5456);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 10000LL);
    goto LAB7;

LAB10:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(1431, ng0);
    t37 = (t0 + 5456);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng2)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_minus(t41, 2, t39, 2, t40, 2);
    t42 = (t0 + 5456);
    xsi_vlogvar_wait_assign_value(t42, t41, 0, 0, 2, 10000LL);
    goto LAB14;

}

static void Cont_1434_3(char *t0)
{
    char t5[8];
    char t15[8];
    char t31[8];
    char t47[8];
    char t57[8];
    char t73[8];
    char t81[8];
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
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t58;
    char *t59;
    unsigned int t60;
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
    char *t72;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;

LAB0:    t1 = (t0 + 7272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1434, ng0);
    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    memset(t31, 0, 8);
    t32 = (t15 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t32) != 0)
        goto LAB10;

LAB11:    t39 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (!(t40));
    t42 = *((unsigned int *)t39);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB12;

LAB13:    memcpy(t81, t31, 8);

LAB14:    t109 = (t0 + 8512);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    t112 = (t111 + 56U);
    t113 = *((char **)t112);
    memset(t113, 0, 8);
    t114 = 1U;
    t115 = t114;
    t116 = (t81 + 4);
    t117 = *((unsigned int *)t81);
    t114 = (t114 & t117);
    t118 = *((unsigned int *)t116);
    t115 = (t115 & t118);
    t119 = (t113 + 4);
    t120 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t120 | t114);
    t121 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t121 | t115);
    xsi_driver_vfirst_trans(t109, 0, 0);
    t122 = (t0 + 8384);
    *((int *)t122) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB10:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB11;

LAB12:    t44 = (t0 + 4976);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t47, 0, 8);
    t48 = (t47 + 4);
    t49 = (t46 + 4);
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 6);
    t52 = (t51 & 1);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 >> 6);
    t55 = (t54 & 1);
    *((unsigned int *)t48) = t55;
    t56 = ((char*)((ng2)));
    memset(t57, 0, 8);
    t58 = (t47 + 4);
    t59 = (t56 + 4);
    t60 = *((unsigned int *)t47);
    t61 = *((unsigned int *)t56);
    t62 = (t60 ^ t61);
    t63 = *((unsigned int *)t58);
    t64 = *((unsigned int *)t59);
    t65 = (t63 ^ t64);
    t66 = (t62 | t65);
    t67 = *((unsigned int *)t58);
    t68 = *((unsigned int *)t59);
    t69 = (t67 | t68);
    t70 = (~(t69));
    t71 = (t66 & t70);
    if (t71 != 0)
        goto LAB18;

LAB15:    if (t69 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t57) = 1;

LAB18:    memset(t73, 0, 8);
    t74 = (t57 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t57);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t74) != 0)
        goto LAB21;

LAB22:    t82 = *((unsigned int *)t31);
    t83 = *((unsigned int *)t73);
    t84 = (t82 | t83);
    *((unsigned int *)t81) = t84;
    t85 = (t31 + 4);
    t86 = (t73 + 4);
    t87 = (t81 + 4);
    t88 = *((unsigned int *)t85);
    t89 = *((unsigned int *)t86);
    t90 = (t88 | t89);
    *((unsigned int *)t87) = t90;
    t91 = *((unsigned int *)t87);
    t92 = (t91 != 0);
    if (t92 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t72 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t73) = 1;
    goto LAB22;

LAB21:    t80 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB22;

LAB23:    t93 = *((unsigned int *)t81);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t81) = (t93 | t94);
    t95 = (t31 + 4);
    t96 = (t73 + 4);
    t97 = *((unsigned int *)t95);
    t98 = (~(t97));
    t99 = *((unsigned int *)t31);
    t100 = (t99 & t98);
    t101 = *((unsigned int *)t96);
    t102 = (~(t101));
    t103 = *((unsigned int *)t73);
    t104 = (t103 & t102);
    t105 = (~(t100));
    t106 = (~(t104));
    t107 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t107 & t105);
    t108 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t108 & t106);
    goto LAB25;

}

static void Always_1441_4(char *t0)
{
    char t13[8];
    char t14[8];
    char t22[8];
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
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;

LAB0:    t1 = (t0 + 7520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1441, ng0);
    t2 = (t0 + 8400);
    *((int *)t2) = 1;
    t3 = (t0 + 7552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1442, ng0);

LAB5:    xsi_set_current_line(1443, ng0);
    t4 = (t0 + 3296U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(1446, ng0);

LAB9:    xsi_set_current_line(1447, ng0);
    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 8);
    t15 = (t10 & 1);
    *((unsigned int *)t5) = t15;
    t12 = (t0 + 3456U);
    t16 = *((char **)t12);
    xsi_vlogtype_concat(t13, 2, 2, 2U, t16, 1, t14, 1);

LAB10:    t12 = ((char*)((ng15)));
    t17 = xsi_vlog_unsigned_case_compare(t13, 2, t12, 2);
    if (t17 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t17 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t17 == 1)
        goto LAB13;

LAB14:
LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(1444, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5616);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 10000LL);
    goto LAB8;

LAB11:    xsi_set_current_line(1448, ng0);

LAB16:    xsi_set_current_line(1449, ng0);
    t18 = (t0 + 5616);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t20, 2, t21, 32);
    t23 = (t0 + 5616);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 2, 10000LL);
    goto LAB15;

LAB13:    xsi_set_current_line(1451, ng0);

LAB17:    xsi_set_current_line(1452, ng0);
    t3 = (t0 + 5616);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t5, 2, t11, 32);
    t12 = (t0 + 5616);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 2, 10000LL);
    goto LAB15;

}

static void Always_1458_5(char *t0)
{
    char t13[8];
    char t23[8];
    char t41[8];
    char t44[8];
    char t70[8];
    char t102[8];
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
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
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
    char *t40;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
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
    unsigned int t69;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    int t94;
    int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    int t126;
    int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;

LAB0:    t1 = (t0 + 7768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1458, ng0);
    t2 = (t0 + 8416);
    *((int *)t2) = 1;
    t3 = (t0 + 7800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1459, ng0);

LAB5:    xsi_set_current_line(1460, ng0);
    t4 = (t0 + 3296U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(1462, ng0);
    t2 = (t0 + 4816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t5) == 0)
        goto LAB9;

LAB11:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB12:    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB13;

LAB14:
LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(1461, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4816);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 10000LL);
    goto LAB8;

LAB9:    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(1463, ng0);
    t19 = (t0 + 5616);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng14)));
    memset(t23, 0, 8);
    t24 = (t21 + 4);
    t25 = (t22 + 4);
    t26 = *((unsigned int *)t21);
    t27 = *((unsigned int *)t22);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t24);
    t30 = *((unsigned int *)t25);
    t31 = (t29 ^ t30);
    t32 = (t28 | t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB19;

LAB16:    if (t35 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t23) = 1;

LAB19:    t39 = (t0 + 3456U);
    t40 = *((char **)t39);
    t39 = (t0 + 4976);
    t42 = (t39 + 56U);
    t43 = *((char **)t42);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t46 = (t43 + 4);
    t47 = *((unsigned int *)t43);
    t48 = (t47 >> 8);
    t49 = (t48 & 1);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 8);
    t52 = (t51 & 1);
    *((unsigned int *)t45) = t52;
    memset(t41, 0, 8);
    t53 = (t44 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t44);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t53) == 0)
        goto LAB20;

LAB22:    t59 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t59) = 1;

LAB23:    t60 = (t41 + 4);
    t61 = (t44 + 4);
    t62 = *((unsigned int *)t44);
    t63 = (~(t62));
    *((unsigned int *)t41) = t63;
    *((unsigned int *)t60) = 0;
    if (*((unsigned int *)t61) != 0)
        goto LAB25;

LAB24:    t68 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t68 & 1U);
    t69 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t69 & 1U);
    t71 = *((unsigned int *)t40);
    t72 = *((unsigned int *)t41);
    t73 = (t71 & t72);
    *((unsigned int *)t70) = t73;
    t74 = (t40 + 4);
    t75 = (t41 + 4);
    t76 = (t70 + 4);
    t77 = *((unsigned int *)t74);
    t78 = *((unsigned int *)t75);
    t79 = (t77 | t78);
    *((unsigned int *)t76) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 != 0);
    if (t81 == 1)
        goto LAB26;

LAB27:
LAB28:    t103 = *((unsigned int *)t23);
    t104 = *((unsigned int *)t70);
    t105 = (t103 & t104);
    *((unsigned int *)t102) = t105;
    t106 = (t23 + 4);
    t107 = (t70 + 4);
    t108 = (t102 + 4);
    t109 = *((unsigned int *)t106);
    t110 = *((unsigned int *)t107);
    t111 = (t109 | t110);
    *((unsigned int *)t108) = t111;
    t112 = *((unsigned int *)t108);
    t113 = (t112 != 0);
    if (t113 == 1)
        goto LAB29;

LAB30:
LAB31:    t134 = (t0 + 4816);
    xsi_vlogvar_wait_assign_value(t134, t102, 0, 0, 1, 10000LL);
    goto LAB15;

LAB18:    t38 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t41) = 1;
    goto LAB23;

LAB25:    t64 = *((unsigned int *)t41);
    t65 = *((unsigned int *)t61);
    *((unsigned int *)t41) = (t64 | t65);
    t66 = *((unsigned int *)t60);
    t67 = *((unsigned int *)t61);
    *((unsigned int *)t60) = (t66 | t67);
    goto LAB24;

LAB26:    t82 = *((unsigned int *)t70);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t70) = (t82 | t83);
    t84 = (t40 + 4);
    t85 = (t41 + 4);
    t86 = *((unsigned int *)t40);
    t87 = (~(t86));
    t88 = *((unsigned int *)t84);
    t89 = (~(t88));
    t90 = *((unsigned int *)t41);
    t91 = (~(t90));
    t92 = *((unsigned int *)t85);
    t93 = (~(t92));
    t94 = (t87 & t89);
    t95 = (t91 & t93);
    t96 = (~(t94));
    t97 = (~(t95));
    t98 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t98 & t96);
    t99 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t99 & t97);
    t100 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t100 & t96);
    t101 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t101 & t97);
    goto LAB28;

LAB29:    t114 = *((unsigned int *)t102);
    t115 = *((unsigned int *)t108);
    *((unsigned int *)t102) = (t114 | t115);
    t116 = (t23 + 4);
    t117 = (t70 + 4);
    t118 = *((unsigned int *)t23);
    t119 = (~(t118));
    t120 = *((unsigned int *)t116);
    t121 = (~(t120));
    t122 = *((unsigned int *)t70);
    t123 = (~(t122));
    t124 = *((unsigned int *)t117);
    t125 = (~(t124));
    t126 = (t119 & t121);
    t127 = (t123 & t125);
    t128 = (~(t126));
    t129 = (~(t127));
    t130 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t130 & t128);
    t131 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t131 & t129);
    t132 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t132 & t128);
    t133 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t133 & t129);
    goto LAB31;

}

static void Cont_1474_6(char *t0)
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

LAB0:    t1 = (t0 + 8016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1474, ng0);
    t2 = (t0 + 4976);
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
    t14 = (t0 + 8576);
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
    t27 = (t0 + 8432);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_03515194204417596400_2601992804_init()
{
	static char *pe[] = {(void *)Always_1266_0,(void *)Always_1366_1,(void *)Always_1427_2,(void *)Cont_1434_3,(void *)Always_1441_4,(void *)Always_1458_5,(void *)Cont_1474_6};
	xsi_register_didat("work_m_03515194204417596400_2601992804", "isim/isim_system.sim/work/m_03515194204417596400_2601992804.didat");
	xsi_register_executes(pe);
}
