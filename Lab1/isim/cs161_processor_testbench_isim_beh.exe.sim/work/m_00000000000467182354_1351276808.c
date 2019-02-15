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



static void Cont_35_0(char *t0)
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

LAB0:    t1 = (t0 + 4328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3408);
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
    t14 = (t0 + 6840);
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
    t27 = (t0 + 6632);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_36_1(char *t0)
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

LAB0:    t1 = (t0 + 4576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3408);
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
    t14 = (t0 + 6904);
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
    t27 = (t0 + 6648);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_37_2(char *t0)
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

LAB0:    t1 = (t0 + 4824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3408);
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
    t14 = (t0 + 6968);
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
    t27 = (t0 + 6664);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_38_3(char *t0)
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

LAB0:    t1 = (t0 + 5072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3408);
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
    t14 = (t0 + 7032);
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
    t27 = (t0 + 6680);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_39_4(char *t0)
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

LAB0:    t1 = (t0 + 5320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3408);
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
    t14 = (t0 + 7096);
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
    t27 = (t0 + 6696);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_40_5(char *t0)
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

LAB0:    t1 = (t0 + 5568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3408);
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
    t27 = (t0 + 6712);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_41_6(char *t0)
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

LAB0:    t1 = (t0 + 5816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3408);
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
    t27 = (t0 + 6728);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_42_7(char *t0)
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

LAB0:    t1 = (t0 + 6064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3408);
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
    t14 = (t0 + 7288);
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
    t27 = (t0 + 6744);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_51_8(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;

LAB0:    t1 = (t0 + 6312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 6760);
    *((int *)t2) = 1;
    t3 = (t0 + 6344);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 9);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1728U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(85, ng0);

LAB51:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(55, ng0);

LAB20:    xsi_set_current_line(56, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3408);
    t8 = (t0 + 3408);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t7, t10, 2, t11, 32, 1);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3408);
    t5 = (t0 + 3408);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t7, t9, 2, t10, 32, 1);
    t11 = (t7 + 4);
    t13 = *((unsigned int *)t11);
    t6 = (!(t13));
    if (t6 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3408);
    t5 = (t0 + 3408);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t7, t9, 2, t10, 32, 1);
    t11 = (t7 + 4);
    t13 = *((unsigned int *)t11);
    t6 = (!(t13));
    if (t6 == 1)
        goto LAB25;

LAB26:    goto LAB19;

LAB9:    xsi_set_current_line(61, ng0);

LAB27:    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3408);
    t8 = (t0 + 3408);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t7, t10, 2, t11, 32, 1);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3408);
    t5 = (t0 + 3408);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t7, t9, 2, t10, 32, 1);
    t11 = (t7 + 4);
    t13 = *((unsigned int *)t11);
    t6 = (!(t13));
    if (t6 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3408);
    t5 = (t0 + 3408);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t7, t9, 2, t10, 32, 1);
    t11 = (t7 + 4);
    t13 = *((unsigned int *)t11);
    t6 = (!(t13));
    if (t6 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3408);
    t5 = (t0 + 3408);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t7, t9, 2, t10, 32, 1);
    t11 = (t7 + 4);
    t13 = *((unsigned int *)t11);
    t6 = (!(t13));
    if (t6 == 1)
        goto LAB34;

LAB35:    goto LAB19;

LAB11:    xsi_set_current_line(69, ng0);

LAB36:    xsi_set_current_line(70, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3408);
    t8 = (t0 + 3408);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t7, t10, 2, t11, 32, 1);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3408);
    t5 = (t0 + 3408);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t7, t9, 2, t10, 32, 1);
    t11 = (t7 + 4);
    t13 = *((unsigned int *)t11);
    t6 = (!(t13));
    if (t6 == 1)
        goto LAB39;

LAB40:    goto LAB19;

LAB13:    xsi_set_current_line(75, ng0);

LAB41:    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3408);
    t8 = (t0 + 3408);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng14)));
    xsi_vlog_generic_convert_bit_index(t7, t10, 2, t11, 32, 1);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3408);
    t5 = (t0 + 3408);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t7, t9, 2, t10, 32, 1);
    t11 = (t7 + 4);
    t13 = *((unsigned int *)t11);
    t6 = (!(t13));
    if (t6 == 1)
        goto LAB44;

LAB45:    goto LAB19;

LAB15:    xsi_set_current_line(80, ng0);

LAB46:    xsi_set_current_line(81, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3408);
    t8 = (t0 + 3408);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t7, t10, 2, t11, 32, 1);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3408);
    t5 = (t0 + 3408);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t7, t9, 2, t10, 32, 1);
    t11 = (t7 + 4);
    t13 = *((unsigned int *)t11);
    t6 = (!(t13));
    if (t6 == 1)
        goto LAB49;

LAB50:    goto LAB19;

LAB21:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), 1);
    goto LAB22;

LAB23:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t7), 1);
    goto LAB24;

LAB25:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t7), 1);
    goto LAB26;

LAB28:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), 1);
    goto LAB29;

LAB30:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t7), 1);
    goto LAB31;

LAB32:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t7), 1);
    goto LAB33;

LAB34:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t7), 1);
    goto LAB35;

LAB37:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), 1);
    goto LAB38;

LAB39:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t7), 1);
    goto LAB40;

LAB42:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), 1);
    goto LAB43;

LAB44:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t7), 1);
    goto LAB45;

LAB47:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), 1);
    goto LAB48;

LAB49:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t7), 1);
    goto LAB50;

}


extern void work_m_00000000000467182354_1351276808_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Cont_36_1,(void *)Cont_37_2,(void *)Cont_38_3,(void *)Cont_39_4,(void *)Cont_40_5,(void *)Cont_41_6,(void *)Cont_42_7,(void *)Always_51_8};
	xsi_register_didat("work_m_00000000000467182354_1351276808", "isim/cs161_processor_testbench_isim_beh.exe.sim/work/m_00000000000467182354_1351276808.didat");
	xsi_register_executes(pe);
}
