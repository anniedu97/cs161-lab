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
static const char *ng0 = "C:/Users/Anaya/Documents/CS161L/Lab1/alu_control.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {32U, 0U};
static unsigned int ng6[] = {34U, 0U};
static unsigned int ng7[] = {36U, 0U};
static unsigned int ng8[] = {37U, 0U};
static unsigned int ng9[] = {39U, 0U};
static unsigned int ng10[] = {12U, 0U};
static unsigned int ng11[] = {42U, 0U};
static unsigned int ng12[] = {7U, 0U};



static void Cont_29_0(char *t0)
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

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2992);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4576);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
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
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 4480);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_43_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    int t9;

LAB0:    t1 = (t0 + 4160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4496);
    *((int *)t2) = 1;
    t3 = (t0 + 4192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 2272U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(85, ng0);

LAB39:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2992);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(46, ng0);

LAB16:    xsi_set_current_line(47, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2992);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB15;

LAB9:    xsi_set_current_line(50, ng0);

LAB17:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2992);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB15;

LAB11:    xsi_set_current_line(54, ng0);

LAB18:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 2432U);
    t4 = *((char **)t3);

LAB19:    t3 = ((char*)((ng5)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 6, t3, 6);
    if (t9 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB15;

LAB20:    xsi_set_current_line(56, ng0);

LAB33:    xsi_set_current_line(57, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2992);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB32;

LAB22:    xsi_set_current_line(60, ng0);

LAB34:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 2992);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB32;

LAB24:    xsi_set_current_line(64, ng0);

LAB35:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng1)));
    t7 = (t0 + 2992);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB32;

LAB26:    xsi_set_current_line(68, ng0);

LAB36:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng3)));
    t7 = (t0 + 2992);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB32;

LAB28:    xsi_set_current_line(72, ng0);

LAB37:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng10)));
    t7 = (t0 + 2992);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB32;

LAB30:    xsi_set_current_line(76, ng0);

LAB38:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng12)));
    t7 = (t0 + 2992);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB32;

}


extern void work_m_00000000003483008524_1059438215_init()
{
	static char *pe[] = {(void *)Cont_29_0,(void *)Always_43_1};
	xsi_register_didat("work_m_00000000003483008524_1059438215", "isim/cs161_datapath_isim_beh.exe.sim/work/m_00000000003483008524_1059438215.didat");
	xsi_register_executes(pe);
}
