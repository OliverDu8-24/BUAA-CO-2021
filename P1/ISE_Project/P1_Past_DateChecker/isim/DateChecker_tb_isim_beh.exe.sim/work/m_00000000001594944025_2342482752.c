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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "G:/MyWorkspace/Computer_Organization/ISE_Project/P1_Past_DateChecker/DateChecker_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {841822514, 0, 842083633, 0, 841822773, 0, 842149169, 0, 758133298, 0, 842019122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng4[] = {8, 0};
static int ng5[] = {80, 0};



static void Always_45_0(char *t0)
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
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1448);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_48_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t33[256];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
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
    char *t32;
    char *t34;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);

LAB4:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1024);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3064);
    xsi_process_wait(t2, 4000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);

LAB6:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t5, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 248);
    t9 = (t6 + 252);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 24);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 24);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 255U);
    memset(t4, 0, 8);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t5);
    t20 = (t19 & t18);
    t21 = (t20 & 255U);
    if (t21 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t16) == 0)
        goto LAB7;

LAB9:    t22 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;

LAB10:    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(59, ng0);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB13:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t6, 32, t7, 32);
    t8 = (t4 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(65, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(56, ng0);
    t29 = (t0 + 1928);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng4)));
    xsi_vlog_unsigned_lshift(t33, 1024, t31, 1024, t32, 32);
    t34 = (t0 + 1928);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 1024);
    goto LAB6;

LAB14:    xsi_set_current_line(59, ng0);

LAB16:    xsi_set_current_line(60, ng0);
    t9 = (t0 + 1928);
    t16 = (t9 + 56U);
    t22 = *((char **)t16);
    memset(t5, 0, 8);
    t23 = (t5 + 4);
    t29 = (t22 + 248);
    t30 = (t22 + 252);
    t15 = *((unsigned int *)t29);
    t17 = (t15 >> 24);
    *((unsigned int *)t5) = t17;
    t18 = *((unsigned int *)t30);
    t19 = (t18 >> 24);
    *((unsigned int *)t23) = t19;
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 255U);
    t21 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t21 & 255U);
    t31 = (t0 + 1768);
    xsi_vlogvar_assign_value(t31, t5, 0, 0, 8);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng4)));
    xsi_vlog_unsigned_lshift(t33, 1024, t6, 1024, t7, 32);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t33, 0, 0, 1024);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3064);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t7, 32);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);
    goto LAB13;

}


extern void work_m_00000000001594944025_2342482752_init()
{
	static char *pe[] = {(void *)Always_45_0,(void *)Initial_48_1};
	xsi_register_didat("work_m_00000000001594944025_2342482752", "isim/DateChecker_tb_isim_beh.exe.sim/work/m_00000000001594944025_2342482752.didat");
	xsi_register_executes(pe);
}
