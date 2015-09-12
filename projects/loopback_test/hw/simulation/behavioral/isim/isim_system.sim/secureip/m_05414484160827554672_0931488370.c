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
static unsigned int ng0[] = {0U, 0U};



static void Gate_32774_0(char *t0)
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

LAB0:    t1 = (t0 + 4368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2096U);
    t3 = *((char **)t2);
    t2 = (t0 + 6616);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_notGate(t7, t3);
    t8 = (t0 + 6616);
    xsi_driver_vfirst_trans_delayed(t8, 0, 0, 0LL, 0);
    t9 = (t0 + 6424);
    *((int *)t9) = 1;

LAB1:    return;
}

static void Gate_32775_1(char *t0)
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

LAB0:    t1 = (t0 + 4616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 6680);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_notGate(t7, t3);
    t8 = (t0 + 6680);
    xsi_driver_vfirst_trans_delayed(t8, 0, 0, 0LL, 0);
    t9 = (t0 + 6440);
    *((int *)t9) = 1;

LAB1:    return;
}

static void Gate_32776_2(char *t0)
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

LAB0:    t1 = (t0 + 4864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 6744);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_notGate(t7, t3);
    t8 = (t0 + 6744);
    xsi_driver_vfirst_trans_delayed(t8, 0, 0, 0LL, 0);
    t9 = (t0 + 6456);
    *((int *)t9) = 1;

LAB1:    return;
}

static void Gate_32777_3(char *t0)
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

LAB0:    t1 = (t0 + 5112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    t2 = (t0 + 6808);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_notGate(t7, t3);
    t8 = (t0 + 6808);
    xsi_driver_vfirst_trans_delayed(t8, 0, 0, 0LL, 0);
    t9 = (t0 + 6472);
    *((int *)t9) = 1;

LAB1:    return;
}

static void Gate_32778_4(char *t0)
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
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 5360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng0)));
    t3 = (t0 + 2416U);
    t4 = *((char **)t3);
    t3 = (t0 + 6872);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_nmosSwitch(t8, t2, t4);
    t9 = (t0 + 6872);
    t10 = (t9 + 56U);
    xsi_vlog_switch_set_trans_strength(*((char **)t10), 0, 0, 0, 0);
    t11 = (t0 + 6872);
    xsi_driver_vfirst_trans_bufif_delayed(t11, 0, 0, 10LL, 0);
    t12 = (t0 + 6488);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Gate_32779_5(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 5608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3216U);
    t3 = *((char **)t2);
    t2 = (t0 + 2256U);
    t4 = *((char **)t2);
    t2 = (t0 + 6936);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 3176U);
    xsi_vlog_nmosSwitch_new(t8, t9, 0, 0, t4);
    t10 = (t0 + 6936);
    t11 = (t10 + 56U);
    t12 = (t0 + 3176U);
    xsi_vlog_switch_set_trans_strength(*((char **)t11), t12, 0, 0, 0);
    t13 = (t0 + 6936);
    xsi_driver_vfirst_trans_bufif_delayed(t13, 0, 0, 10LL, 0);
    t14 = (t0 + 6504);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Gate_32780_6(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 5856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3056U);
    t3 = *((char **)t2);
    t2 = (t0 + 2256U);
    t4 = *((char **)t2);
    t2 = (t0 + 7000);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 3016U);
    xsi_vlog_nmosSwitch_new(t8, t9, 0, 0, t4);
    t10 = (t0 + 7000);
    t11 = (t10 + 56U);
    t12 = (t0 + 3016U);
    xsi_vlog_switch_set_trans_strength(*((char **)t11), t12, 0, 0, 0);
    t13 = (t0 + 7000);
    xsi_driver_vfirst_trans_bufif_delayed(t13, 0, 0, 10LL, 0);
    t14 = (t0 + 6520);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Gate_32781_7(char *t0)
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
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 6104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng0)));
    t3 = (t0 + 2896U);
    t4 = *((char **)t3);
    t3 = (t0 + 7064);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_nmosSwitch(t8, t2, t4);
    t9 = (t0 + 7064);
    t10 = (t9 + 56U);
    xsi_vlog_switch_set_trans_strength(*((char **)t10), 0, 0, 0, 0);
    t11 = (t0 + 7064);
    xsi_driver_vfirst_trans_bufif_delayed(t11, 0, 0, 10LL, 0);
    t12 = (t0 + 6536);
    *((int *)t12) = 1;

LAB1:    return;
}


extern void secureip_m_05414484160827554672_0931488370_init()
{
	static char *pe[] = {(void *)Gate_32774_0,(void *)Gate_32775_1,(void *)Gate_32776_2,(void *)Gate_32777_3,(void *)Gate_32778_4,(void *)Gate_32779_5,(void *)Gate_32780_6,(void *)Gate_32781_7};
	xsi_register_didat("secureip_m_05414484160827554672_0931488370", "isim/isim_system.sim/secureip/m_05414484160827554672_0931488370.didat");
	xsi_register_executes(pe);
}
