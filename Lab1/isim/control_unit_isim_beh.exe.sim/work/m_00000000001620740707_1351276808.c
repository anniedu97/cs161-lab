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
static const char *ng0 = "C:/Users/Anaya/Documents/CS161L/Lab1/control_unit.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {8, 0};
static int ng5[] = {5, 0};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {35U, 0U};
static int ng8[] = {7, 0};
static int ng9[] = {6, 0};
static int ng10[] = {4, 0};
static unsigned int ng11[] = {43U, 0U};
static int ng12[] = {3, 0};
static unsigned int ng13[] = {4U, 0U};
static int ng14[] = {2, 0};
static unsigned int ng15[] = {8U, 0U};



static void Cont_37_0(char *t0)
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

LAB0:    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 7160);
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
    t27 = (t0 + 6952);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_38_1(char *t0)
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

LAB0:    t1 = (t0 + 4896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 7);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 7224);
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
    t27 = (t0 + 6968);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_39_2(char *t0)
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

LAB0:    t1 = (t0 + 5144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 6);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 6);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 7288);
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
    t27 = (t0 + 6984);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_40_3(char *t0)
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

LAB0:    t1 = (t0 + 5392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 5);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 5);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 7352);
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
    t27 = (t0 + 7000);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_41_4(char *t0)
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

LAB0:    t1 = (t0 + 5640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 7416);
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
    t27 = (t0 + 7016);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_42_5(char *t0)
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

LAB0:    t1 = (t0 + 5888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3728);
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
    t14 = (t0 + 7480);
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
    t27 = (t0 + 7032);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_43_6(char *t0)
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

LAB0:    t1 = (t0 + 6136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 7544);
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
    t27 = (t0 + 7048);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_44_7(char *t0)
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

LAB0:    t1 = (t0 + 6384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3728);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 3U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = (t0 + 7608);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 15U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 3);
    t27 = (t0 + 7064);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_53_8(char *t0)
{
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
    int t13;
    char *t15;
    char *t16;
    char *t17;
    int t18;

LAB0:    t1 = (t0 + 6632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 7080);
    *((int *)t2) = 1;
    t3 = (t0 + 6664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(58, ng0);

LAB10:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);

LAB11:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:    xsi_set_current_line(92, ng0);

LAB56:
LAB24:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(54, ng0);

LAB9:    xsi_set_current_line(55, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3728);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 9);
    goto LAB8;

LAB12:    xsi_set_current_line(62, ng0);

LAB25:    xsi_set_current_line(63, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3728);
    t11 = (t0 + 3728);
    t12 = (t11 + 72U);
    t15 = *((char **)t12);
    t16 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t14, t15, 2, t16, 32, 1);
    t17 = (t14 + 4);
    t6 = *((unsigned int *)t17);
    t18 = (!(t6));
    if (t18 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3728);
    t5 = (t0 + 3728);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t14, t12, 2, t15, 32, 1);
    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3728);
    t5 = (t0 + 3728);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t14, t12, 2, t15, 32, 1);
    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB30;

LAB31:    goto LAB24;

LAB14:    xsi_set_current_line(68, ng0);

LAB32:    xsi_set_current_line(69, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3728);
    t11 = (t0 + 3728);
    t12 = (t11 + 72U);
    t15 = *((char **)t12);
    t16 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t14, t15, 2, t16, 32, 1);
    t17 = (t14 + 4);
    t6 = *((unsigned int *)t17);
    t18 = (!(t6));
    if (t18 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3728);
    t5 = (t0 + 3728);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t14, t12, 2, t15, 32, 1);
    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3728);
    t5 = (t0 + 3728);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t14, t12, 2, t15, 32, 1);
    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3728);
    t5 = (t0 + 3728);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t14, t12, 2, t15, 32, 1);
    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB39;

LAB40:    goto LAB24;

LAB16:    xsi_set_current_line(76, ng0);

LAB41:    xsi_set_current_line(77, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3728);
    t11 = (t0 + 3728);
    t12 = (t11 + 72U);
    t15 = *((char **)t12);
    t16 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t14, t15, 2, t16, 32, 1);
    t17 = (t14 + 4);
    t6 = *((unsigned int *)t17);
    t18 = (!(t6));
    if (t18 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3728);
    t5 = (t0 + 3728);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t14, t12, 2, t15, 32, 1);
    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB44;

LAB45:    goto LAB24;

LAB18:    xsi_set_current_line(82, ng0);

LAB46:    xsi_set_current_line(83, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3728);
    t11 = (t0 + 3728);
    t12 = (t11 + 72U);
    t15 = *((char **)t12);
    t16 = ((char*)((ng14)));
    xsi_vlog_generic_convert_bit_index(t14, t15, 2, t16, 32, 1);
    t17 = (t14 + 4);
    t6 = *((unsigned int *)t17);
    t18 = (!(t6));
    if (t18 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3728);
    t5 = (t0 + 3728);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t14, t12, 2, t15, 32, 1);
    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB49;

LAB50:    goto LAB24;

LAB20:    xsi_set_current_line(87, ng0);

LAB51:    xsi_set_current_line(88, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3728);
    t11 = (t0 + 3728);
    t12 = (t11 + 72U);
    t15 = *((char **)t12);
    t16 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t14, t15, 2, t16, 32, 1);
    t17 = (t14 + 4);
    t6 = *((unsigned int *)t17);
    t18 = (!(t6));
    if (t18 == 1)
        goto LAB52;

LAB53:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3728);
    t5 = (t0 + 3728);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t14, t12, 2, t15, 32, 1);
    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB54;

LAB55:    goto LAB24;

LAB26:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t14), 1);
    goto LAB27;

LAB28:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t14), 1);
    goto LAB29;

LAB30:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t14), 1);
    goto LAB31;

LAB33:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t14), 1);
    goto LAB34;

LAB35:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t14), 1);
    goto LAB36;

LAB37:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t14), 1);
    goto LAB38;

LAB39:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t14), 1);
    goto LAB40;

LAB42:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t14), 1);
    goto LAB43;

LAB44:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t14), 1);
    goto LAB45;

LAB47:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t14), 1);
    goto LAB48;

LAB49:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t14), 1);
    goto LAB50;

LAB52:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t14), 1);
    goto LAB53;

LAB54:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t14), 1);
    goto LAB55;

}


extern void work_m_00000000001620740707_1351276808_init()
{
	static char *pe[] = {(void *)Cont_37_0,(void *)Cont_38_1,(void *)Cont_39_2,(void *)Cont_40_3,(void *)Cont_41_4,(void *)Cont_42_5,(void *)Cont_43_6,(void *)Cont_44_7,(void *)Always_53_8};
	xsi_register_didat("work_m_00000000001620740707_1351276808", "isim/control_unit_isim_beh.exe.sim/work/m_00000000001620740707_1351276808.didat");
	xsi_register_executes(pe);
}
