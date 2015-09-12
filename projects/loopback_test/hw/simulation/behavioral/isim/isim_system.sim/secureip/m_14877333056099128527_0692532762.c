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
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {10U, 0U};
static unsigned int ng12[] = {11U, 0U};
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {13U, 0U};
static unsigned int ng15[] = {14U, 0U};
static unsigned int ng16[] = {15U, 0U};
static unsigned int ng17[] = {16U, 0U};
static unsigned int ng18[] = {17U, 0U};
static unsigned int ng19[] = {18U, 0U};
static unsigned int ng20[] = {19U, 0U};
static unsigned int ng21[] = {20U, 0U};
static unsigned int ng22[] = {21U, 0U};
static unsigned int ng23[] = {22U, 0U};
static unsigned int ng24[] = {23U, 0U};
static unsigned int ng25[] = {24U, 0U};
static unsigned int ng26[] = {25U, 0U};
static unsigned int ng27[] = {26U, 0U};
static unsigned int ng28[] = {27U, 0U};
static unsigned int ng29[] = {28U, 0U};
static unsigned int ng30[] = {29U, 0U};
static unsigned int ng31[] = {30U, 0U};
static unsigned int ng32[] = {31U, 0U};
static unsigned int ng33[] = {32U, 0U};
static unsigned int ng34[] = {33U, 0U};
static unsigned int ng35[] = {34U, 0U};
static unsigned int ng36[] = {35U, 0U};
static unsigned int ng37[] = {36U, 0U};
static unsigned int ng38[] = {37U, 0U};
static unsigned int ng39[] = {38U, 0U};
static unsigned int ng40[] = {39U, 0U};
static unsigned int ng41[] = {40U, 0U};
static unsigned int ng42[] = {41U, 0U};
static unsigned int ng43[] = {42U, 0U};
static unsigned int ng44[] = {43U, 0U};
static unsigned int ng45[] = {44U, 0U};
static unsigned int ng46[] = {45U, 0U};
static unsigned int ng47[] = {46U, 0U};
static unsigned int ng48[] = {47U, 0U};
static unsigned int ng49[] = {48U, 0U};
static unsigned int ng50[] = {49U, 0U};
static unsigned int ng51[] = {50U, 0U};
static unsigned int ng52[] = {51U, 0U};
static unsigned int ng53[] = {52U, 0U};
static unsigned int ng54[] = {53U, 0U};
static unsigned int ng55[] = {54U, 0U};
static unsigned int ng56[] = {55U, 0U};
static unsigned int ng57[] = {56U, 0U};
static unsigned int ng58[] = {57U, 0U};
static unsigned int ng59[] = {58U, 0U};
static unsigned int ng60[] = {59U, 0U};
static unsigned int ng61[] = {60U, 0U};
static unsigned int ng62[] = {61U, 0U};
static unsigned int ng63[] = {62U, 0U};
static unsigned int ng64[] = {63U, 0U};
static int ng65[] = {0, 0};
static int ng66[] = {1, 0};



static void Always_18135_0(char *t0)
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 8760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18135, ng0);
    t2 = (t0 + 14040);
    *((int *)t2) = 1;
    t3 = (t0 + 8792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18135, ng0);

LAB5:    xsi_set_current_line(18136, ng0);
    t5 = (t0 + 2808U);
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

LAB11:    xsi_set_current_line(18138, ng0);

LAB14:    xsi_set_current_line(18139, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 500LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(18136, ng0);

LAB13:    xsi_set_current_line(18137, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 500LL);
    goto LAB12;

}

static void Always_18170_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 9008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18170, ng0);
    t2 = (t0 + 14056);
    *((int *)t2) = 1;
    t3 = (t0 + 9040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18171, ng0);

LAB5:    xsi_set_current_line(18172, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    t5 = (t0 + 6728);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t4, 6, 6, 2U, t8, 3, t6, 3);

LAB6:    t9 = ((char*)((ng1)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t9, 6);
    if (t10 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng12)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng13)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng14)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng15)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng16)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng17)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng18)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng19)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng20)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng21)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng22)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng23)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng24)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng25)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng26)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng27)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng28)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng29)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng30)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng31)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng32)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng33)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng34)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng35)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng36)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng37)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng38)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng39)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB83;

LAB84:    t2 = ((char*)((ng40)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB85;

LAB86:    t2 = ((char*)((ng41)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng42)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB89;

LAB90:    t2 = ((char*)((ng43)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB91;

LAB92:    t2 = ((char*)((ng44)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng45)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng46)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng47)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB99;

LAB100:    t2 = ((char*)((ng48)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB101;

LAB102:    t2 = ((char*)((ng49)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB103;

LAB104:    t2 = ((char*)((ng50)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB105;

LAB106:    t2 = ((char*)((ng51)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB107;

LAB108:    t2 = ((char*)((ng52)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB109;

LAB110:    t2 = ((char*)((ng53)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB111;

LAB112:    t2 = ((char*)((ng54)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB113;

LAB114:    t2 = ((char*)((ng55)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB115;

LAB116:    t2 = ((char*)((ng56)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB117;

LAB118:    t2 = ((char*)((ng57)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB119;

LAB120:    t2 = ((char*)((ng58)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB121;

LAB122:    t2 = ((char*)((ng59)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB123;

LAB124:    t2 = ((char*)((ng60)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB125;

LAB126:    t2 = ((char*)((ng61)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB127;

LAB128:    t2 = ((char*)((ng62)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB129;

LAB130:    t2 = ((char*)((ng63)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB131;

LAB132:    t2 = ((char*)((ng64)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB133;

LAB134:
LAB135:    goto LAB2;

LAB7:    xsi_set_current_line(18173, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 500LL);
    goto LAB135;

LAB9:    xsi_set_current_line(18174, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB11:    xsi_set_current_line(18175, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB13:    xsi_set_current_line(18176, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB15:    xsi_set_current_line(18177, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB17:    xsi_set_current_line(18178, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB19:    xsi_set_current_line(18179, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB21:    xsi_set_current_line(18180, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB23:    xsi_set_current_line(18181, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB25:    xsi_set_current_line(18182, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB27:    xsi_set_current_line(18183, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB29:    xsi_set_current_line(18184, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB31:    xsi_set_current_line(18185, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB33:    xsi_set_current_line(18186, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB35:    xsi_set_current_line(18187, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB37:    xsi_set_current_line(18188, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB39:    xsi_set_current_line(18189, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB41:    xsi_set_current_line(18190, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB43:    xsi_set_current_line(18191, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB45:    xsi_set_current_line(18192, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB47:    xsi_set_current_line(18193, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB49:    xsi_set_current_line(18194, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB51:    xsi_set_current_line(18195, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB53:    xsi_set_current_line(18196, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB55:    xsi_set_current_line(18197, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB57:    xsi_set_current_line(18198, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB59:    xsi_set_current_line(18199, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB61:    xsi_set_current_line(18200, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB63:    xsi_set_current_line(18201, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB65:    xsi_set_current_line(18202, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB67:    xsi_set_current_line(18203, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB69:    xsi_set_current_line(18204, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB71:    xsi_set_current_line(18205, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB73:    xsi_set_current_line(18206, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB75:    xsi_set_current_line(18207, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB77:    xsi_set_current_line(18208, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB79:    xsi_set_current_line(18209, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB81:    xsi_set_current_line(18210, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB83:    xsi_set_current_line(18211, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB85:    xsi_set_current_line(18212, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB87:    xsi_set_current_line(18213, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB89:    xsi_set_current_line(18214, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB91:    xsi_set_current_line(18215, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB93:    xsi_set_current_line(18216, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB95:    xsi_set_current_line(18217, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB97:    xsi_set_current_line(18218, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB99:    xsi_set_current_line(18219, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB101:    xsi_set_current_line(18220, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB103:    xsi_set_current_line(18221, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB105:    xsi_set_current_line(18222, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB107:    xsi_set_current_line(18223, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB109:    xsi_set_current_line(18224, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB111:    xsi_set_current_line(18225, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB113:    xsi_set_current_line(18226, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB115:    xsi_set_current_line(18227, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB117:    xsi_set_current_line(18228, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB119:    xsi_set_current_line(18229, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB121:    xsi_set_current_line(18230, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB123:    xsi_set_current_line(18231, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB125:    xsi_set_current_line(18232, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB127:    xsi_set_current_line(18233, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB129:    xsi_set_current_line(18234, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB131:    xsi_set_current_line(18235, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

LAB133:    xsi_set_current_line(18236, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 500LL);
    goto LAB135;

}

static void Always_18258_2(char *t0)
{
    char t6[8];
    char t33[8];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;

LAB0:    t1 = (t0 + 9256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18258, ng0);
    t2 = (t0 + 14072);
    *((int *)t2) = 1;
    t3 = (t0 + 9288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18263, ng0);

LAB5:    xsi_set_current_line(18264, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
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
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(18266, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(18269, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(18272, ng0);

LAB25:    xsi_set_current_line(18275, ng0);
    t2 = (t0 + 7048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 500LL);

LAB23:
LAB19:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(18264, ng0);

LAB13:    xsi_set_current_line(18265, ng0);
    t28 = (t0 + 6728);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 1048U);
    t32 = *((char **)t31);
    t34 = *((unsigned int *)t30);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t31 = (t30 + 4);
    t37 = (t32 + 4);
    t38 = (t33 + 4);
    t39 = *((unsigned int *)t31);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB14;

LAB15:
LAB16:    t60 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t60, t33, 0, 0, 3, 500LL);
    goto LAB12;

LAB14:    t44 = *((unsigned int *)t33);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t33) = (t44 | t45);
    t46 = (t30 + 4);
    t47 = (t32 + 4);
    t48 = *((unsigned int *)t46);
    t49 = (~(t48));
    t50 = *((unsigned int *)t30);
    t51 = (t50 & t49);
    t52 = *((unsigned int *)t47);
    t53 = (~(t52));
    t54 = *((unsigned int *)t32);
    t55 = (t54 & t53);
    t56 = (~(t51));
    t57 = (~(t55));
    t58 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t58 & t56);
    t59 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t59 & t57);
    goto LAB16;

LAB17:    xsi_set_current_line(18266, ng0);

LAB20:    xsi_set_current_line(18268, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 3, 500LL);
    goto LAB19;

LAB21:    xsi_set_current_line(18269, ng0);

LAB24:    xsi_set_current_line(18271, ng0);
    t7 = (t0 + 6728);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 3, 500LL);
    goto LAB23;

}

static void Cont_18289_3(char *t0)
{
    char t3[8];
    char t4[8];
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

LAB0:    t1 = (t0 + 9504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18289, ng0);
    t2 = (t0 + 3288U);
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

LAB15:    memcpy(t3, t22, 8);

LAB16:    t16 = (t0 + 14440);
    t23 = (t16 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 7U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans_delayed(t16, 0, 2, 500LL, 0);
    t35 = (t0 + 14088);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 1208U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 1048U);
    t22 = *((char **)t16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 3, t17, 3, t22, 3);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Cont_18291_4(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 9752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18291, ng0);
    t2 = (t0 + 3288U);
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

LAB15:    memcpy(t3, t23, 8);

LAB16:    t24 = (t0 + 14504);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 7U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans_delayed(t24, 0, 2, 500LL, 0);
    t37 = (t0 + 14104);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 7208);
    t22 = (t16 + 56U);
    t23 = *((char **)t22);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 3, t17, 3, t23, 3);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Cont_18293_5(char *t0)
{
    char t3[8];
    char t21[8];
    char t40[8];
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
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
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
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;

LAB0:    t1 = (t0 + 10000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18293, ng0);
    t2 = (t0 + 3448U);
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
    t22 = (t0 + 2648U);
    t23 = *((char **)t22);
    memset(t21, 0, 8);
    t22 = (t23 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t23);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t22) == 0)
        goto LAB10;

LAB12:    t29 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t29) = 1;

LAB13:    t30 = (t21 + 4);
    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (~(t32));
    *((unsigned int *)t21) = t33;
    *((unsigned int *)t30) = 0;
    if (*((unsigned int *)t31) != 0)
        goto LAB15;

LAB14:    t38 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t38 & 1U);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t39 & 1U);
    t41 = *((unsigned int *)t3);
    t42 = *((unsigned int *)t21);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = (t3 + 4);
    t45 = (t21 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB16;

LAB17:
LAB18:    t68 = (t0 + 14568);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    memset(t72, 0, 8);
    t73 = 1U;
    t74 = t73;
    t75 = (t40 + 4);
    t76 = *((unsigned int *)t40);
    t73 = (t73 & t76);
    t77 = *((unsigned int *)t75);
    t74 = (t74 & t77);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t79 | t73);
    t80 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t80 | t74);
    xsi_driver_vfirst_trans_delayed(t68, 0, 0, 500LL, 0);
    t81 = (t0 + 14120);
    *((int *)t81) = 1;

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

LAB10:    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t31);
    *((unsigned int *)t21) = (t34 | t35);
    t36 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t31);
    *((unsigned int *)t30) = (t36 | t37);
    goto LAB14;

LAB16:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t3 + 4);
    t55 = (t21 + 4);
    t56 = *((unsigned int *)t54);
    t57 = (~(t56));
    t58 = *((unsigned int *)t3);
    t59 = (t58 & t57);
    t60 = *((unsigned int *)t55);
    t61 = (~(t60));
    t62 = *((unsigned int *)t21);
    t63 = (t62 & t61);
    t64 = (~(t59));
    t65 = (~(t63));
    t66 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t66 & t64);
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    goto LAB18;

}

static void Cont_18294_6(char *t0)
{
    char t3[8];
    char t23[8];
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;

LAB0:    t1 = (t0 + 10248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18294, ng0);
    t2 = (t0 + 3448U);
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
    t21 = (t0 + 2648U);
    t22 = *((char **)t21);
    t24 = *((unsigned int *)t3);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t21 = (t3 + 4);
    t27 = (t22 + 4);
    t28 = (t23 + 4);
    t29 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB10;

LAB11:
LAB12:    t50 = (t0 + 14632);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    memset(t54, 0, 8);
    t55 = 1U;
    t56 = t55;
    t57 = (t23 + 4);
    t58 = *((unsigned int *)t23);
    t55 = (t55 & t58);
    t59 = *((unsigned int *)t57);
    t56 = (t56 & t59);
    t60 = (t54 + 4);
    t61 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t61 | t55);
    t62 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t62 | t56);
    xsi_driver_vfirst_trans_delayed(t50, 0, 0, 500LL, 0);
    t63 = (t0 + 14136);
    *((int *)t63) = 1;

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

LAB10:    t34 = *((unsigned int *)t23);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t23) = (t34 | t35);
    t36 = (t3 + 4);
    t37 = (t22 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (~(t38));
    t40 = *((unsigned int *)t3);
    t41 = (t40 & t39);
    t42 = *((unsigned int *)t37);
    t43 = (~(t42));
    t44 = *((unsigned int *)t22);
    t45 = (t44 & t43);
    t46 = (~(t41));
    t47 = (~(t45));
    t48 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t48 & t46);
    t49 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t49 & t47);
    goto LAB12;

}

static void Always_18300_7(char *t0)
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 10496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18300, ng0);
    t2 = (t0 + 14152);
    *((int *)t2) = 1;
    t3 = (t0 + 10528);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18300, ng0);

LAB5:    xsi_set_current_line(18301, ng0);
    t5 = (t0 + 2808U);
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

LAB11:    xsi_set_current_line(18304, ng0);

LAB14:    xsi_set_current_line(18305, ng0);
    t2 = (t0 + 4408U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(18306, ng0);
    t2 = (t0 + 4568U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(18301, ng0);

LAB13:    xsi_set_current_line(18302, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 6728);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 3, 500LL);
    xsi_set_current_line(18303, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 500LL);
    goto LAB12;

LAB15:    xsi_set_current_line(18305, ng0);
    t5 = (t0 + 4088U);
    t6 = *((char **)t5);
    t5 = (t0 + 6728);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 3, 500LL);
    goto LAB17;

LAB18:    xsi_set_current_line(18306, ng0);
    t5 = (t0 + 4248U);
    t6 = *((char **)t5);
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 3, 500LL);
    goto LAB20;

}

static void Always_18321_8(char *t0)
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
    char *t73;
    char *t74;

LAB0:    t1 = (t0 + 10744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18321, ng0);
    t2 = (t0 + 14168);
    *((int *)t2) = 1;
    t3 = (t0 + 10776);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18321, ng0);

LAB5:    xsi_set_current_line(18322, ng0);
    t5 = (t0 + 2968U);
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

LAB11:    xsi_set_current_line(18324, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    t2 = (t0 + 3288U);
    t5 = *((char **)t2);
    t2 = (t0 + 2488U);
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
        goto LAB14;

LAB15:
LAB16:    t38 = *((unsigned int *)t3);
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
        goto LAB17;

LAB18:
LAB19:    t65 = (t37 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t37);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(18326, ng0);

LAB24:    xsi_set_current_line(18327, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    t2 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 500LL);

LAB22:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(18322, ng0);

LAB13:    xsi_set_current_line(18323, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 3, 500LL);
    goto LAB12;

LAB14:    t17 = *((unsigned int *)t4);
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
    goto LAB16;

LAB17:    t49 = *((unsigned int *)t37);
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
    goto LAB19;

LAB20:    xsi_set_current_line(18324, ng0);

LAB23:    xsi_set_current_line(18325, ng0);
    t71 = (t0 + 6568);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    t74 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t74, t73, 0, 0, 3, 500LL);
    goto LAB22;

}

static void NetDecl_18351_9(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
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
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
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
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;

LAB0:    t1 = (t0 + 10992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18351, ng0);
    t2 = (t0 + 3608U);
    t4 = *((char **)t2);
    t2 = (t0 + 3768U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t2 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t3, 0, 8);
    t37 = (t6 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t6);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t37) == 0)
        goto LAB7;

LAB9:    t43 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t43) = 1;

LAB10:    t44 = (t3 + 4);
    t45 = (t6 + 4);
    t46 = *((unsigned int *)t6);
    t47 = (~(t46));
    *((unsigned int *)t3) = t47;
    *((unsigned int *)t44) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB12;

LAB11:    t52 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t52 & 1U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 & 1U);
    t54 = (t0 + 14696);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t58, 0, 8);
    t59 = 1U;
    t60 = t59;
    t61 = (t3 + 4);
    t62 = *((unsigned int *)t3);
    t59 = (t59 & t62);
    t63 = *((unsigned int *)t61);
    t60 = (t60 & t63);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t65 | t59);
    t66 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t66 | t60);
    xsi_driver_vfirst_trans_delayed(t54, 0, 0U, 500LL, 0);
    t67 = (t0 + 14184);
    *((int *)t67) = 1;

LAB1:    return;
LAB4:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & t31);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t34 & t32);
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & t31);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    goto LAB6;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB12:    t48 = *((unsigned int *)t3);
    t49 = *((unsigned int *)t45);
    *((unsigned int *)t3) = (t48 | t49);
    t50 = *((unsigned int *)t44);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t44) = (t50 | t51);
    goto LAB11;

}

static void Always_18353_10(char *t0)
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

LAB0:    t1 = (t0 + 11240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18353, ng0);
    t2 = (t0 + 14200);
    *((int *)t2) = 1;
    t3 = (t0 + 11272);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18353, ng0);

LAB5:    xsi_set_current_line(18354, ng0);
    t5 = (t0 + 5208U);
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

LAB11:    xsi_set_current_line(18356, ng0);

LAB14:    xsi_set_current_line(18357, ng0);
    t2 = (t0 + 7528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 1);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 1848U);
    t19 = *((char **)t13);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t19, 1, t21, 1);
    t13 = (t0 + 7528);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 2, 500LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(18354, ng0);

LAB13:    xsi_set_current_line(18355, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 7528);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 500LL);
    goto LAB12;

}

static void Always_18363_11(char *t0)
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

LAB0:    t1 = (t0 + 11488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18363, ng0);
    t2 = (t0 + 14216);
    *((int *)t2) = 1;
    t3 = (t0 + 11520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18363, ng0);

LAB5:    xsi_set_current_line(18364, ng0);
    t5 = (t0 + 5208U);
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

LAB11:    xsi_set_current_line(18366, ng0);

LAB14:    xsi_set_current_line(18367, ng0);
    t2 = (t0 + 7688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 1);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 1848U);
    t19 = *((char **)t13);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t19, 1, t21, 1);
    t13 = (t0 + 7688);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 2, 500LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(18364, ng0);

LAB13:    xsi_set_current_line(18365, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 7688);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 500LL);
    goto LAB12;

}

static void Always_18373_12(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 11736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18373, ng0);
    t2 = (t0 + 14232);
    *((int *)t2) = 1;
    t3 = (t0 + 11768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18373, ng0);

LAB5:    xsi_set_current_line(18374, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(18376, ng0);

LAB10:    xsi_set_current_line(18377, ng0);
    t2 = (t0 + 7848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 1);
    t15 = (t10 & 1);
    *((unsigned int *)t5) = t15;
    t12 = ((char*)((ng2)));
    xsi_vlogtype_concat(t13, 2, 2, 2U, t12, 1, t14, 1);
    t16 = (t0 + 7848);
    xsi_vlogvar_wait_assign_value(t16, t13, 0, 0, 2, 500LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(18374, ng0);

LAB9:    xsi_set_current_line(18375, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 7848);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 500LL);
    goto LAB8;

}

static void NetDecl_18386_13(char *t0)
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

LAB0:    t1 = (t0 + 11984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18386, ng0);
    t2 = (t0 + 7528);
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
    t14 = (t0 + 14760);
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
    xsi_driver_vfirst_trans_delayed(t14, 0, 0U, 500LL, 0);
    t27 = (t0 + 14248);
    *((int *)t27) = 1;

LAB1:    return;
}

static void NetDecl_18387_14(char *t0)
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

LAB0:    t1 = (t0 + 12232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18387, ng0);
    t2 = (t0 + 7688);
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
    t14 = (t0 + 14824);
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
    xsi_driver_vfirst_trans_delayed(t14, 0, 0U, 500LL, 0);
    t27 = (t0 + 14264);
    *((int *)t27) = 1;

LAB1:    return;
}

static void NetDecl_18389_15(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t42[8];
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
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
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
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;

LAB0:    t1 = (t0 + 12480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18389, ng0);
    t2 = (t0 + 3608U);
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

LAB9:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t12);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t42, 8);

LAB16:    t51 = (t0 + 14888);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    memset(t55, 0, 8);
    t56 = 1U;
    t57 = t56;
    t58 = (t3 + 4);
    t59 = *((unsigned int *)t3);
    t56 = (t56 & t59);
    t60 = *((unsigned int *)t58);
    t57 = (t57 & t60);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t62 | t56);
    t63 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t63 | t57);
    xsi_driver_vfirst_trans_delayed(t51, 0, 0U, 500LL, 0);
    t64 = (t0 + 14280);
    *((int *)t64) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 3768U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t18 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (~(t19));
    t21 = *((unsigned int *)t18);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t17) == 0)
        goto LAB17;

LAB19:    t24 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t24) = 1;

LAB20:    t25 = (t16 + 4);
    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = (~(t27));
    *((unsigned int *)t16) = t28;
    *((unsigned int *)t25) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB22;

LAB21:    t33 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t33 & 1U);
    t34 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t34 & 1U);
    goto LAB9;

LAB10:    t39 = (t0 + 7848);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t43 = (t42 + 4);
    t44 = (t41 + 4);
    t45 = *((unsigned int *)t41);
    t46 = (t45 >> 0);
    t47 = (t46 & 1);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 >> 0);
    t50 = (t49 & 1);
    *((unsigned int *)t43) = t50;
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t42, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t16) = 1;
    goto LAB20;

LAB22:    t29 = *((unsigned int *)t16);
    t30 = *((unsigned int *)t26);
    *((unsigned int *)t16) = (t29 | t30);
    t31 = *((unsigned int *)t25);
    t32 = *((unsigned int *)t26);
    *((unsigned int *)t25) = (t31 | t32);
    goto LAB21;

}

static void Cont_18395_16(char *t0)
{
    char t5[8];
    char t34[8];
    char t52[8];
    char t84[8];
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
    char *t35;
    unsigned int t36;
    unsigned int t37;
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
    unsigned int t51;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
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
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;

LAB0:    t1 = (t0 + 12728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18395, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 5368U);
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
LAB6:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = (t0 + 3288U);
    t35 = *((char **)t32);
    memset(t34, 0, 8);
    t32 = (t35 + 4);
    t36 = *((unsigned int *)t32);
    t37 = (~(t36));
    t38 = *((unsigned int *)t35);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t32) == 0)
        goto LAB7;

LAB9:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;

LAB10:    t42 = (t34 + 4);
    t43 = (t35 + 4);
    t44 = *((unsigned int *)t35);
    t45 = (~(t44));
    *((unsigned int *)t34) = t45;
    *((unsigned int *)t42) = 0;
    if (*((unsigned int *)t43) != 0)
        goto LAB12;

LAB11:    t50 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t50 & 1U);
    t51 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t51 & 1U);
    t53 = *((unsigned int *)t33);
    t54 = *((unsigned int *)t34);
    t55 = (t53 & t54);
    *((unsigned int *)t52) = t55;
    t56 = (t33 + 4);
    t57 = (t34 + 4);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t56);
    t60 = *((unsigned int *)t57);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB13;

LAB14:
LAB15:    t85 = *((unsigned int *)t5);
    t86 = *((unsigned int *)t52);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = (t5 + 4);
    t89 = (t52 + 4);
    t90 = (t84 + 4);
    t91 = *((unsigned int *)t88);
    t92 = *((unsigned int *)t89);
    t93 = (t91 | t92);
    *((unsigned int *)t90) = t93;
    t94 = *((unsigned int *)t90);
    t95 = (t94 != 0);
    if (t95 == 1)
        goto LAB16;

LAB17:
LAB18:    t112 = (t0 + 14952);
    t113 = (t112 + 56U);
    t114 = *((char **)t113);
    t115 = (t114 + 56U);
    t116 = *((char **)t115);
    memset(t116, 0, 8);
    t117 = 1U;
    t118 = t117;
    t119 = (t84 + 4);
    t120 = *((unsigned int *)t84);
    t117 = (t117 & t120);
    t121 = *((unsigned int *)t119);
    t118 = (t118 & t121);
    t122 = (t116 + 4);
    t123 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t123 | t117);
    t124 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t124 | t118);
    xsi_driver_vfirst_trans_delayed(t112, 0, 0, 500LL, 0);
    t125 = (t0 + 14296);
    *((int *)t125) = 1;

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

LAB7:    *((unsigned int *)t34) = 1;
    goto LAB10;

LAB12:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t43);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = *((unsigned int *)t42);
    t49 = *((unsigned int *)t43);
    *((unsigned int *)t42) = (t48 | t49);
    goto LAB11;

LAB13:    t64 = *((unsigned int *)t52);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t52) = (t64 | t65);
    t66 = (t33 + 4);
    t67 = (t34 + 4);
    t68 = *((unsigned int *)t33);
    t69 = (~(t68));
    t70 = *((unsigned int *)t66);
    t71 = (~(t70));
    t72 = *((unsigned int *)t34);
    t73 = (~(t72));
    t74 = *((unsigned int *)t67);
    t75 = (~(t74));
    t76 = (t69 & t71);
    t77 = (t73 & t75);
    t78 = (~(t76));
    t79 = (~(t77));
    t80 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t80 & t78);
    t81 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t81 & t79);
    t82 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t82 & t78);
    t83 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t83 & t79);
    goto LAB15;

LAB16:    t96 = *((unsigned int *)t84);
    t97 = *((unsigned int *)t90);
    *((unsigned int *)t84) = (t96 | t97);
    t98 = (t5 + 4);
    t99 = (t52 + 4);
    t100 = *((unsigned int *)t98);
    t101 = (~(t100));
    t102 = *((unsigned int *)t5);
    t103 = (t102 & t101);
    t104 = *((unsigned int *)t99);
    t105 = (~(t104));
    t106 = *((unsigned int *)t52);
    t107 = (t106 & t105);
    t108 = (~(t103));
    t109 = (~(t107));
    t110 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t110 & t108);
    t111 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t111 & t109);
    goto LAB18;

}

static void Cont_18398_17(char *t0)
{
    char t5[8];
    char t34[8];
    char t64[8];
    char t73[8];
    char t92[8];
    char t124[8];
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
    char *t63;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
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
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;

LAB0:    t1 = (t0 + 12976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18398, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 5368U);
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
LAB6:    t32 = (t0 + 1368U);
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
LAB9:    t61 = (t0 + 7368);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    memset(t64, 0, 8);
    t65 = (t64 + 4);
    t66 = (t63 + 4);
    t67 = *((unsigned int *)t63);
    t68 = (t67 >> 0);
    t69 = (t68 & 1);
    *((unsigned int *)t64) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 >> 0);
    t72 = (t71 & 1);
    *((unsigned int *)t65) = t72;
    t74 = (t0 + 3288U);
    t75 = *((char **)t74);
    memset(t73, 0, 8);
    t74 = (t75 + 4);
    t76 = *((unsigned int *)t74);
    t77 = (~(t76));
    t78 = *((unsigned int *)t75);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t74) == 0)
        goto LAB10;

LAB12:    t81 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t81) = 1;

LAB13:    t82 = (t73 + 4);
    t83 = (t75 + 4);
    t84 = *((unsigned int *)t75);
    t85 = (~(t84));
    *((unsigned int *)t73) = t85;
    *((unsigned int *)t82) = 0;
    if (*((unsigned int *)t83) != 0)
        goto LAB15;

LAB14:    t90 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t90 & 1U);
    t91 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t91 & 1U);
    t93 = *((unsigned int *)t64);
    t94 = *((unsigned int *)t73);
    t95 = (t93 & t94);
    *((unsigned int *)t92) = t95;
    t96 = (t64 + 4);
    t97 = (t73 + 4);
    t98 = (t92 + 4);
    t99 = *((unsigned int *)t96);
    t100 = *((unsigned int *)t97);
    t101 = (t99 | t100);
    *((unsigned int *)t98) = t101;
    t102 = *((unsigned int *)t98);
    t103 = (t102 != 0);
    if (t103 == 1)
        goto LAB16;

LAB17:
LAB18:    t125 = *((unsigned int *)t34);
    t126 = *((unsigned int *)t92);
    t127 = (t125 | t126);
    *((unsigned int *)t124) = t127;
    t128 = (t34 + 4);
    t129 = (t92 + 4);
    t130 = (t124 + 4);
    t131 = *((unsigned int *)t128);
    t132 = *((unsigned int *)t129);
    t133 = (t131 | t132);
    *((unsigned int *)t130) = t133;
    t134 = *((unsigned int *)t130);
    t135 = (t134 != 0);
    if (t135 == 1)
        goto LAB19;

LAB20:
LAB21:    t152 = (t0 + 15016);
    t153 = (t152 + 56U);
    t154 = *((char **)t153);
    t155 = (t154 + 56U);
    t156 = *((char **)t155);
    memset(t156, 0, 8);
    t157 = 1U;
    t158 = t157;
    t159 = (t124 + 4);
    t160 = *((unsigned int *)t124);
    t157 = (t157 & t160);
    t161 = *((unsigned int *)t159);
    t158 = (t158 & t161);
    t162 = (t156 + 4);
    t163 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t163 | t157);
    t164 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t164 | t158);
    xsi_driver_vfirst_trans_delayed(t152, 0, 0, 500LL, 0);
    t165 = (t0 + 14312);
    *((int *)t165) = 1;

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

LAB10:    *((unsigned int *)t73) = 1;
    goto LAB13;

LAB15:    t86 = *((unsigned int *)t73);
    t87 = *((unsigned int *)t83);
    *((unsigned int *)t73) = (t86 | t87);
    t88 = *((unsigned int *)t82);
    t89 = *((unsigned int *)t83);
    *((unsigned int *)t82) = (t88 | t89);
    goto LAB14;

LAB16:    t104 = *((unsigned int *)t92);
    t105 = *((unsigned int *)t98);
    *((unsigned int *)t92) = (t104 | t105);
    t106 = (t64 + 4);
    t107 = (t73 + 4);
    t108 = *((unsigned int *)t64);
    t109 = (~(t108));
    t110 = *((unsigned int *)t106);
    t111 = (~(t110));
    t112 = *((unsigned int *)t73);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (~(t114));
    t116 = (t109 & t111);
    t117 = (t113 & t115);
    t118 = (~(t116));
    t119 = (~(t117));
    t120 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t120 & t118);
    t121 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t121 & t119);
    t122 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t122 & t118);
    t123 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t123 & t119);
    goto LAB18;

LAB19:    t136 = *((unsigned int *)t124);
    t137 = *((unsigned int *)t130);
    *((unsigned int *)t124) = (t136 | t137);
    t138 = (t34 + 4);
    t139 = (t92 + 4);
    t140 = *((unsigned int *)t138);
    t141 = (~(t140));
    t142 = *((unsigned int *)t34);
    t143 = (t142 & t141);
    t144 = *((unsigned int *)t139);
    t145 = (~(t144));
    t146 = *((unsigned int *)t92);
    t147 = (t146 & t145);
    t148 = (~(t143));
    t149 = (~(t147));
    t150 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t150 & t148);
    t151 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t151 & t149);
    goto LAB21;

}

static void Always_18415_18(char *t0)
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;

LAB0:    t1 = (t0 + 13224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18415, ng0);
    t2 = (t0 + 14328);
    *((int *)t2) = 1;
    t3 = (t0 + 13256);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18415, ng0);

LAB5:    xsi_set_current_line(18416, ng0);
    t5 = (t0 + 5208U);
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

LAB11:    xsi_set_current_line(18418, ng0);

LAB14:    xsi_set_current_line(18419, ng0);
    t2 = (t0 + 4408U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(18420, ng0);
    t2 = (t0 + 4568U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB20;

LAB21:
LAB22:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(18416, ng0);

LAB13:    xsi_set_current_line(18417, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 7368);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 500LL);
    goto LAB12;

LAB15:    xsi_set_current_line(18419, ng0);
    t5 = (t0 + 4728U);
    t6 = *((char **)t5);
    t5 = (t0 + 7368);
    t12 = (t0 + 7368);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng65)));
    xsi_vlog_generic_convert_bit_index(t4, t19, 2, t20, 32, 1);
    t21 = (t4 + 4);
    t14 = *((unsigned int *)t21);
    t22 = (!(t14));
    if (t22 == 1)
        goto LAB18;

LAB19:    goto LAB17;

LAB18:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t4), 1, 500LL);
    goto LAB19;

LAB20:    xsi_set_current_line(18420, ng0);
    t5 = (t0 + 4888U);
    t6 = *((char **)t5);
    t5 = (t0 + 7368);
    t12 = (t0 + 7368);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng66)));
    xsi_vlog_generic_convert_bit_index(t4, t19, 2, t20, 32, 1);
    t21 = (t4 + 4);
    t14 = *((unsigned int *)t21);
    t22 = (!(t14));
    if (t22 == 1)
        goto LAB23;

LAB24:    goto LAB22;

LAB23:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t4), 1, 500LL);
    goto LAB24;

}

static void Always_18437_19(char *t0)
{
    char t4[8];
    char t37[8];
    char t74[8];
    char t85[8];
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
    char *t73;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;

LAB0:    t1 = (t0 + 13472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18437, ng0);
    t2 = (t0 + 14344);
    *((int *)t2) = 1;
    t3 = (t0 + 13504);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18437, ng0);

LAB5:    xsi_set_current_line(18438, ng0);
    t5 = (t0 + 5208U);
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

LAB11:    xsi_set_current_line(18440, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    t2 = (t0 + 3288U);
    t5 = *((char **)t2);
    t2 = (t0 + 2488U);
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
        goto LAB14;

LAB15:
LAB16:    t38 = *((unsigned int *)t3);
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
        goto LAB17;

LAB18:
LAB19:    t65 = (t37 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t37);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(18442, ng0);

LAB27:    xsi_set_current_line(18443, ng0);
    t2 = (t0 + 5048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 5528U);
    t12 = *((char **)t6);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t12);
    t17 = (t15 | t16);
    *((unsigned int *)t37) = t17;
    t6 = (t4 + 4);
    t13 = (t12 + 4);
    t19 = (t37 + 4);
    t18 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t13);
    t22 = (t18 | t21);
    *((unsigned int *)t19) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB28;

LAB29:
LAB30:    t42 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t42, t37, 0, 0, 1, 500LL);

LAB22:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(18438, ng0);

LAB13:    xsi_set_current_line(18439, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 500LL);
    goto LAB12;

LAB14:    t17 = *((unsigned int *)t4);
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
    goto LAB16;

LAB17:    t49 = *((unsigned int *)t37);
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
    goto LAB19;

LAB20:    xsi_set_current_line(18440, ng0);

LAB23:    xsi_set_current_line(18441, ng0);
    t71 = (t0 + 7368);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    memset(t74, 0, 8);
    t75 = (t74 + 4);
    t76 = (t73 + 4);
    t77 = *((unsigned int *)t73);
    t78 = (t77 >> 1);
    t79 = (t78 & 1);
    *((unsigned int *)t74) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 >> 1);
    t82 = (t81 & 1);
    *((unsigned int *)t75) = t82;
    t83 = (t0 + 5528U);
    t84 = *((char **)t83);
    t86 = *((unsigned int *)t74);
    t87 = *((unsigned int *)t84);
    t88 = (t86 | t87);
    *((unsigned int *)t85) = t88;
    t83 = (t74 + 4);
    t89 = (t84 + 4);
    t90 = (t85 + 4);
    t91 = *((unsigned int *)t83);
    t92 = *((unsigned int *)t89);
    t93 = (t91 | t92);
    *((unsigned int *)t90) = t93;
    t94 = *((unsigned int *)t90);
    t95 = (t94 != 0);
    if (t95 == 1)
        goto LAB24;

LAB25:
LAB26:    t112 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t112, t85, 0, 0, 1, 500LL);
    goto LAB22;

LAB24:    t96 = *((unsigned int *)t85);
    t97 = *((unsigned int *)t90);
    *((unsigned int *)t85) = (t96 | t97);
    t98 = (t74 + 4);
    t99 = (t84 + 4);
    t100 = *((unsigned int *)t98);
    t101 = (~(t100));
    t102 = *((unsigned int *)t74);
    t103 = (t102 & t101);
    t104 = *((unsigned int *)t99);
    t105 = (~(t104));
    t106 = *((unsigned int *)t84);
    t107 = (t106 & t105);
    t108 = (~(t103));
    t109 = (~(t107));
    t110 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t110 & t108);
    t111 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t111 & t109);
    goto LAB26;

LAB28:    t25 = *((unsigned int *)t37);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t37) = (t25 | t26);
    t20 = (t4 + 4);
    t41 = (t12 + 4);
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t31 = *((unsigned int *)t4);
    t29 = (t31 & t28);
    t32 = *((unsigned int *)t41);
    t33 = (~(t32));
    t34 = *((unsigned int *)t12);
    t30 = (t34 & t33);
    t35 = (~(t29));
    t36 = (~(t30));
    t38 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t38 & t35);
    t39 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t39 & t36);
    goto LAB30;

}

static void Always_18453_20(char *t0)
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 13720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18453, ng0);
    t2 = (t0 + 14360);
    *((int *)t2) = 1;
    t3 = (t0 + 13752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18453, ng0);

LAB5:    xsi_set_current_line(18454, ng0);
    t5 = (t0 + 5688U);
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

LAB11:    xsi_set_current_line(18456, ng0);

LAB14:    xsi_set_current_line(18457, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 500LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(18454, ng0);

LAB13:    xsi_set_current_line(18455, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 6408);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 500LL);
    goto LAB12;

}


extern void secureip_m_14877333056099128527_0692532762_init()
{
	static char *pe[] = {(void *)Always_18135_0,(void *)Always_18170_1,(void *)Always_18258_2,(void *)Cont_18289_3,(void *)Cont_18291_4,(void *)Cont_18293_5,(void *)Cont_18294_6,(void *)Always_18300_7,(void *)Always_18321_8,(void *)NetDecl_18351_9,(void *)Always_18353_10,(void *)Always_18363_11,(void *)Always_18373_12,(void *)NetDecl_18386_13,(void *)NetDecl_18387_14,(void *)NetDecl_18389_15,(void *)Cont_18395_16,(void *)Cont_18398_17,(void *)Always_18415_18,(void *)Always_18437_19,(void *)Always_18453_20};
	xsi_register_didat("secureip_m_14877333056099128527_0692532762", "isim/isim_system.sim/secureip/m_14877333056099128527_0692532762.didat");
	xsi_register_executes(pe);
}
