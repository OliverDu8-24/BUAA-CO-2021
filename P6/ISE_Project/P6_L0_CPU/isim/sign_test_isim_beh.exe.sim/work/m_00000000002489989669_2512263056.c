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
static const char *ng0 = "F:/MyWorkspace/Computer_Organization/P6/P6_L0_CPU/sign_test.v";
static unsigned int ng1[] = {3U, 0U};
static const char *ng2 = "%b";



static void Initial_5_0(char *t0)
{
    char t1[8];
    char *t2;
    char *t3;
    char *t4;

LAB0:    xsi_set_current_line(5, ng0);

LAB2:    xsi_set_current_line(6, ng0);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_sign_extend(t1, 8, t2, 3);
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t1, 0, 0, 8);
    xsi_set_current_line(7, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng2, 2, t0, (char)118, t4, 8);

LAB1:    return;
}


extern void work_m_00000000002489989669_2512263056_init()
{
	static char *pe[] = {(void *)Initial_5_0};
	xsi_register_didat("work_m_00000000002489989669_2512263056", "isim/sign_test_isim_beh.exe.sim/work/m_00000000002489989669_2512263056.didat");
	xsi_register_executes(pe);
}
