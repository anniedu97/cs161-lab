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
static const char *ng0 = "C:/Users/Anaya/Documents/CS161L/Lab1/my_alu.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {8U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {14U, 0U};
static unsigned int ng10[] = {12U, 0U};
static unsigned int ng11[] = {7U, 0U};



static void Cont_40_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 5944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2864U);
    t3 = *((char **)t2);
    t2 = (t0 + 7928);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 7752);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_41_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 6192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3024U);
    t3 = *((char **)t2);
    t2 = (t0 + 7992);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 7768);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_43_2(char *t0)
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

LAB0:    t1 = (t0 + 6440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8056);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 7784);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_44_3(char *t0)
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

LAB0:    t1 = (t0 + 6688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8120);
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
    t18 = (t0 + 7800);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_45_4(char *t0)
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

LAB0:    t1 = (t0 + 6936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8184);
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
    t18 = (t0 + 7816);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_46_5(char *t0)
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

LAB0:    t1 = (t0 + 7184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8248);
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
    t18 = (t0 + 7832);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_60_6(char *t0)
{
    char t8[8];
    char t12[8];
    char t29[8];
    char t32[8];
    char t40[8];
    char t79[8];
    char t83[8];
    char t84[8];
    char t90[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
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
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
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
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    int t110;
    int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;

LAB0:    t1 = (t0 + 7432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 7848);
    *((int *)t2) = 1;
    t3 = (t0 + 7464);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4864);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3184U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(145, ng0);

LAB251:    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_unary_minus(t8, 32, t2, 32);
    t4 = (t0 + 4544);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4864);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB29:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 3344U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t4, 32, t2, 32);
    t5 = (t8 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB252;

LAB253:    xsi_set_current_line(156, ng0);

LAB256:    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4704);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB254:    goto LAB2;

LAB7:    xsi_set_current_line(69, ng0);

LAB30:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);
    t4 = (t0 + 3024U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 4544);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4544);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2864U);
    t9 = *((char **)t7);
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB32;

LAB31:    t10 = (t9 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t5) < *((unsigned int *)t9))
        goto LAB33;

LAB34:    memset(t12, 0, 8);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t13) != 0)
        goto LAB38;

LAB39:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB40;

LAB41:    memcpy(t40, t12, 8);

LAB42:    t71 = (t40 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t40);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(74, ng0);

LAB59:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB57:    goto LAB29;

LAB9:    xsi_set_current_line(78, ng0);

LAB60:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 3984U);
    t5 = *((char **)t4);
    t4 = (t0 + 4144U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 4544);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3984U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greatereq(t8, 32, t4, 32, t2, 32);
    memset(t12, 0, 8);
    t5 = (t8 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t5) != 0)
        goto LAB63;

LAB64:    t9 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t9);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB65;

LAB66:    memcpy(t40, t12, 8);

LAB67:    memset(t79, 0, 8);
    t28 = (t40 + 4);
    t72 = *((unsigned int *)t28);
    t73 = (~(t72));
    t74 = *((unsigned int *)t40);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t28) != 0)
        goto LAB77;

LAB78:    t31 = (t79 + 4);
    t80 = *((unsigned int *)t79);
    t81 = *((unsigned int *)t31);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB79;

LAB80:    memcpy(t90, t79, 8);

LAB81:    t118 = (t90 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (~(t119));
    t121 = *((unsigned int *)t90);
    t122 = (t121 & t120);
    t123 = (t122 != 0);
    if (t123 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3984U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 32, t2, 32);
    memset(t12, 0, 8);
    t5 = (t8 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t5) != 0)
        goto LAB95;

LAB96:    t9 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t9);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB97;

LAB98:    memcpy(t40, t12, 8);

LAB99:    memset(t79, 0, 8);
    t28 = (t40 + 4);
    t72 = *((unsigned int *)t28);
    t73 = (~(t72));
    t74 = *((unsigned int *)t40);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t28) != 0)
        goto LAB109;

LAB110:    t31 = (t79 + 4);
    t80 = *((unsigned int *)t79);
    t81 = *((unsigned int *)t31);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB111;

LAB112:    memcpy(t90, t79, 8);

LAB113:    t118 = (t90 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (~(t119));
    t121 = *((unsigned int *)t90);
    t122 = (t121 & t120);
    t123 = (t122 != 0);
    if (t123 > 0)
        goto LAB121;

LAB122:    xsi_set_current_line(86, ng0);

LAB125:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4864);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB123:
LAB91:    goto LAB29;

LAB11:    xsi_set_current_line(91, ng0);

LAB126:    xsi_set_current_line(92, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);
    t4 = (t0 + 3024U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 4544);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4544);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2864U);
    t9 = *((char **)t7);
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB128;

LAB127:    t10 = (t9 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB128;

LAB131:    if (*((unsigned int *)t5) > *((unsigned int *)t9))
        goto LAB129;

LAB130:    memset(t12, 0, 8);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t13) != 0)
        goto LAB134;

LAB135:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB136;

LAB137:    memcpy(t40, t12, 8);

LAB138:    t71 = (t40 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t40);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB151;

LAB152:    xsi_set_current_line(96, ng0);

LAB155:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB153:    goto LAB29;

LAB13:    xsi_set_current_line(102, ng0);

LAB156:    xsi_set_current_line(103, ng0);
    t4 = (t0 + 3984U);
    t5 = *((char **)t4);
    t4 = (t0 + 4144U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 4544);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3984U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greatereq(t8, 32, t4, 32, t2, 32);
    memset(t12, 0, 8);
    t5 = (t8 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB157;

LAB158:    if (*((unsigned int *)t5) != 0)
        goto LAB159;

LAB160:    t9 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t9);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB161;

LAB162:    memcpy(t40, t12, 8);

LAB163:    memset(t79, 0, 8);
    t28 = (t40 + 4);
    t72 = *((unsigned int *)t28);
    t73 = (~(t72));
    t74 = *((unsigned int *)t40);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB171;

LAB172:    if (*((unsigned int *)t28) != 0)
        goto LAB173;

LAB174:    t31 = (t79 + 4);
    t80 = *((unsigned int *)t79);
    t81 = *((unsigned int *)t31);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB175;

LAB176:    memcpy(t90, t79, 8);

LAB177:    t118 = (t90 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (~(t119));
    t121 = *((unsigned int *)t90);
    t122 = (t121 & t120);
    t123 = (t122 != 0);
    if (t123 > 0)
        goto LAB185;

LAB186:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3984U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 32, t2, 32);
    memset(t12, 0, 8);
    t5 = (t8 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB189;

LAB190:    if (*((unsigned int *)t5) != 0)
        goto LAB191;

LAB192:    t9 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t9);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB193;

LAB194:    memcpy(t40, t12, 8);

LAB195:    memset(t79, 0, 8);
    t28 = (t40 + 4);
    t72 = *((unsigned int *)t28);
    t73 = (~(t72));
    t74 = *((unsigned int *)t40);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB203;

LAB204:    if (*((unsigned int *)t28) != 0)
        goto LAB205;

LAB206:    t31 = (t79 + 4);
    t80 = *((unsigned int *)t79);
    t81 = *((unsigned int *)t31);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB207;

LAB208:    memcpy(t90, t79, 8);

LAB209:    t118 = (t90 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (~(t119));
    t121 = *((unsigned int *)t90);
    t122 = (t121 & t120);
    t123 = (t122 != 0);
    if (t123 > 0)
        goto LAB217;

LAB218:    xsi_set_current_line(110, ng0);

LAB221:    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4864);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB219:
LAB187:    goto LAB29;

LAB15:    xsi_set_current_line(116, ng0);

LAB222:    xsi_set_current_line(117, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);
    t4 = (t0 + 3024U);
    t7 = *((char **)t4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 & t15);
    *((unsigned int *)t8) = t16;
    t4 = (t5 + 4);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t9);
    t21 = (t17 | t18);
    *((unsigned int *)t10) = t21;
    t22 = *((unsigned int *)t10);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB223;

LAB224:
LAB225:    t19 = (t0 + 4544);
    xsi_vlogvar_assign_value(t19, t8, 0, 0, 32);
    goto LAB29;

LAB17:    xsi_set_current_line(120, ng0);

LAB226:    xsi_set_current_line(121, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);
    t4 = (t0 + 3024U);
    t7 = *((char **)t4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 | t15);
    *((unsigned int *)t8) = t16;
    t4 = (t5 + 4);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t9);
    t21 = (t17 | t18);
    *((unsigned int *)t10) = t21;
    t22 = *((unsigned int *)t10);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB227;

LAB228:
LAB229:    t19 = (t0 + 4544);
    xsi_vlogvar_assign_value(t19, t8, 0, 0, 32);
    goto LAB29;

LAB19:    xsi_set_current_line(124, ng0);

LAB230:    xsi_set_current_line(125, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);
    t4 = (t0 + 3024U);
    t7 = *((char **)t4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    *((unsigned int *)t8) = t16;
    t4 = (t5 + 4);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t9);
    t21 = (t17 | t18);
    *((unsigned int *)t10) = t21;
    t22 = *((unsigned int *)t10);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB231;

LAB232:
LAB233:    t11 = (t0 + 4544);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 32);
    goto LAB29;

LAB21:    xsi_set_current_line(129, ng0);

LAB234:    xsi_set_current_line(130, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t8, 32, t5, 32, t4, 32);
    t7 = (t0 + 4544);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB29;

LAB23:    xsi_set_current_line(134, ng0);

LAB235:    xsi_set_current_line(135, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);
    t4 = (t0 + 3024U);
    t7 = *((char **)t4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 | t15);
    *((unsigned int *)t12) = t16;
    t4 = (t5 + 4);
    t9 = (t7 + 4);
    t10 = (t12 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t9);
    t21 = (t17 | t18);
    *((unsigned int *)t10) = t21;
    t22 = *((unsigned int *)t10);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB236;

LAB237:
LAB238:    memset(t8, 0, 8);
    t19 = (t8 + 4);
    t20 = (t12 + 4);
    t51 = *((unsigned int *)t12);
    t52 = (~(t51));
    *((unsigned int *)t8) = t52;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t20) != 0)
        goto LAB240;

LAB239:    t59 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t59 & 4294967295U);
    t60 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t60 & 4294967295U);
    t24 = (t0 + 4544);
    xsi_vlogvar_assign_value(t24, t8, 0, 0, 32);
    goto LAB29;

LAB25:    xsi_set_current_line(139, ng0);

LAB241:    xsi_set_current_line(140, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);
    t4 = (t0 + 3024U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t5 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB243;

LAB242:    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB243;

LAB246:    if (*((unsigned int *)t5) < *((unsigned int *)t7))
        goto LAB244;

LAB245:    t11 = (t8 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB247;

LAB248:
LAB249:    goto LAB29;

LAB32:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB34;

LAB33:    *((unsigned int *)t8) = 1;
    goto LAB34;

LAB36:    *((unsigned int *)t12) = 1;
    goto LAB39;

LAB38:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB39;

LAB40:    t24 = (t0 + 4544);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 3024U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t27 = (t26 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB44;

LAB43:    t30 = (t28 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB44;

LAB47:    if (*((unsigned int *)t26) < *((unsigned int *)t28))
        goto LAB45;

LAB46:    memset(t32, 0, 8);
    t33 = (t29 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t33) != 0)
        goto LAB50;

LAB51:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t12 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB42;

LAB44:    t31 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB46;

LAB45:    *((unsigned int *)t29) = 1;
    goto LAB46;

LAB48:    *((unsigned int *)t32) = 1;
    goto LAB51;

LAB50:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB51;

LAB52:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t12 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t6 = (t57 & t59);
    t64 = (t61 & t63);
    t65 = (~(t6));
    t66 = (~(t64));
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB54;

LAB55:    xsi_set_current_line(71, ng0);

LAB58:    xsi_set_current_line(72, ng0);
    t77 = ((char*)((ng3)));
    t78 = (t0 + 5024);
    xsi_vlogvar_assign_value(t78, t77, 0, 0, 1);
    goto LAB57;

LAB61:    *((unsigned int *)t12) = 1;
    goto LAB64;

LAB63:    t7 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB64;

LAB65:    t10 = (t0 + 4144U);
    t11 = *((char **)t10);
    t10 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_signed_greatereq(t29, 32, t11, 32, t10, 32);
    memset(t32, 0, 8);
    t13 = (t29 + 4);
    t34 = *((unsigned int *)t13);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t13) != 0)
        goto LAB70;

LAB71:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t20 = (t12 + 4);
    t24 = (t32 + 4);
    t25 = (t40 + 4);
    t47 = *((unsigned int *)t20);
    t48 = *((unsigned int *)t24);
    t49 = (t47 | t48);
    *((unsigned int *)t25) = t49;
    t50 = *((unsigned int *)t25);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB72;

LAB73:
LAB74:    goto LAB67;

LAB68:    *((unsigned int *)t32) = 1;
    goto LAB71;

LAB70:    t19 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB71;

LAB72:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t25);
    *((unsigned int *)t40) = (t52 | t53);
    t26 = (t12 + 4);
    t27 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t26);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t27);
    t63 = (~(t62));
    t6 = (t57 & t59);
    t64 = (t61 & t63);
    t65 = (~(t6));
    t66 = (~(t64));
    t67 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t67 & t65);
    t68 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB74;

LAB75:    *((unsigned int *)t79) = 1;
    goto LAB78;

LAB77:    t30 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB78;

LAB79:    t33 = (t0 + 4544);
    t39 = (t33 + 56U);
    t44 = *((char **)t39);
    t45 = ((char*)((ng1)));
    memset(t83, 0, 8);
    xsi_vlog_signed_less(t83, 32, t44, 32, t45, 32);
    memset(t84, 0, 8);
    t46 = (t83 + 4);
    t85 = *((unsigned int *)t46);
    t86 = (~(t85));
    t87 = *((unsigned int *)t83);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t46) != 0)
        goto LAB84;

LAB85:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t84);
    t93 = (t91 & t92);
    *((unsigned int *)t90) = t93;
    t55 = (t79 + 4);
    t71 = (t84 + 4);
    t77 = (t90 + 4);
    t94 = *((unsigned int *)t55);
    t95 = *((unsigned int *)t71);
    t96 = (t94 | t95);
    *((unsigned int *)t77) = t96;
    t97 = *((unsigned int *)t77);
    t98 = (t97 != 0);
    if (t98 == 1)
        goto LAB86;

LAB87:
LAB88:    goto LAB81;

LAB82:    *((unsigned int *)t84) = 1;
    goto LAB85;

LAB84:    t54 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB85;

LAB86:    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t77);
    *((unsigned int *)t90) = (t99 | t100);
    t78 = (t79 + 4);
    t101 = (t84 + 4);
    t102 = *((unsigned int *)t79);
    t103 = (~(t102));
    t104 = *((unsigned int *)t78);
    t105 = (~(t104));
    t106 = *((unsigned int *)t84);
    t107 = (~(t106));
    t108 = *((unsigned int *)t101);
    t109 = (~(t108));
    t110 = (t103 & t105);
    t111 = (t107 & t109);
    t112 = (~(t110));
    t113 = (~(t111));
    t114 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t114 & t112);
    t115 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t115 & t113);
    t116 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t116 & t112);
    t117 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t117 & t113);
    goto LAB88;

LAB89:    xsi_set_current_line(80, ng0);

LAB92:    xsi_set_current_line(81, ng0);
    t124 = ((char*)((ng3)));
    t125 = (t0 + 4864);
    xsi_vlogvar_assign_value(t125, t124, 0, 0, 1);
    goto LAB91;

LAB93:    *((unsigned int *)t12) = 1;
    goto LAB96;

LAB95:    t7 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB96;

LAB97:    t10 = (t0 + 4144U);
    t11 = *((char **)t10);
    t10 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_signed_less(t29, 32, t11, 32, t10, 32);
    memset(t32, 0, 8);
    t13 = (t29 + 4);
    t34 = *((unsigned int *)t13);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t13) != 0)
        goto LAB102;

LAB103:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t20 = (t12 + 4);
    t24 = (t32 + 4);
    t25 = (t40 + 4);
    t47 = *((unsigned int *)t20);
    t48 = *((unsigned int *)t24);
    t49 = (t47 | t48);
    *((unsigned int *)t25) = t49;
    t50 = *((unsigned int *)t25);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB104;

LAB105:
LAB106:    goto LAB99;

LAB100:    *((unsigned int *)t32) = 1;
    goto LAB103;

LAB102:    t19 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB103;

LAB104:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t25);
    *((unsigned int *)t40) = (t52 | t53);
    t26 = (t12 + 4);
    t27 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t26);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t27);
    t63 = (~(t62));
    t6 = (t57 & t59);
    t64 = (t61 & t63);
    t65 = (~(t6));
    t66 = (~(t64));
    t67 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t67 & t65);
    t68 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB106;

LAB107:    *((unsigned int *)t79) = 1;
    goto LAB110;

LAB109:    t30 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB110;

LAB111:    t33 = (t0 + 4544);
    t39 = (t33 + 56U);
    t44 = *((char **)t39);
    t45 = ((char*)((ng1)));
    memset(t83, 0, 8);
    xsi_vlog_signed_greatereq(t83, 32, t44, 32, t45, 32);
    memset(t84, 0, 8);
    t46 = (t83 + 4);
    t85 = *((unsigned int *)t46);
    t86 = (~(t85));
    t87 = *((unsigned int *)t83);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t46) != 0)
        goto LAB116;

LAB117:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t84);
    t93 = (t91 & t92);
    *((unsigned int *)t90) = t93;
    t55 = (t79 + 4);
    t71 = (t84 + 4);
    t77 = (t90 + 4);
    t94 = *((unsigned int *)t55);
    t95 = *((unsigned int *)t71);
    t96 = (t94 | t95);
    *((unsigned int *)t77) = t96;
    t97 = *((unsigned int *)t77);
    t98 = (t97 != 0);
    if (t98 == 1)
        goto LAB118;

LAB119:
LAB120:    goto LAB113;

LAB114:    *((unsigned int *)t84) = 1;
    goto LAB117;

LAB116:    t54 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB117;

LAB118:    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t77);
    *((unsigned int *)t90) = (t99 | t100);
    t78 = (t79 + 4);
    t101 = (t84 + 4);
    t102 = *((unsigned int *)t79);
    t103 = (~(t102));
    t104 = *((unsigned int *)t78);
    t105 = (~(t104));
    t106 = *((unsigned int *)t84);
    t107 = (~(t106));
    t108 = *((unsigned int *)t101);
    t109 = (~(t108));
    t110 = (t103 & t105);
    t111 = (t107 & t109);
    t112 = (~(t110));
    t113 = (~(t111));
    t114 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t114 & t112);
    t115 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t115 & t113);
    t116 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t116 & t112);
    t117 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t117 & t113);
    goto LAB120;

LAB121:    xsi_set_current_line(83, ng0);

LAB124:    xsi_set_current_line(84, ng0);
    t124 = ((char*)((ng3)));
    t125 = (t0 + 4864);
    xsi_vlogvar_assign_value(t125, t124, 0, 0, 1);
    goto LAB123;

LAB128:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB130;

LAB129:    *((unsigned int *)t8) = 1;
    goto LAB130;

LAB132:    *((unsigned int *)t12) = 1;
    goto LAB135;

LAB134:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB135;

LAB136:    t24 = (t0 + 4544);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 3024U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t27 = (t26 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB140;

LAB139:    t30 = (t28 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB140;

LAB143:    if (*((unsigned int *)t26) > *((unsigned int *)t28))
        goto LAB141;

LAB142:    memset(t32, 0, 8);
    t33 = (t29 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t33) != 0)
        goto LAB146;

LAB147:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t12 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB148;

LAB149:
LAB150:    goto LAB138;

LAB140:    t31 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB142;

LAB141:    *((unsigned int *)t29) = 1;
    goto LAB142;

LAB144:    *((unsigned int *)t32) = 1;
    goto LAB147;

LAB146:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB147;

LAB148:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t12 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t6 = (t57 & t59);
    t64 = (t61 & t63);
    t65 = (~(t6));
    t66 = (~(t64));
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB150;

LAB151:    xsi_set_current_line(93, ng0);

LAB154:    xsi_set_current_line(94, ng0);
    t77 = ((char*)((ng3)));
    t78 = (t0 + 5024);
    xsi_vlogvar_assign_value(t78, t77, 0, 0, 1);
    goto LAB153;

LAB157:    *((unsigned int *)t12) = 1;
    goto LAB160;

LAB159:    t7 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB160;

LAB161:    t10 = (t0 + 4144U);
    t11 = *((char **)t10);
    t10 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_signed_less(t29, 32, t11, 32, t10, 32);
    memset(t32, 0, 8);
    t13 = (t29 + 4);
    t34 = *((unsigned int *)t13);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB164;

LAB165:    if (*((unsigned int *)t13) != 0)
        goto LAB166;

LAB167:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t20 = (t12 + 4);
    t24 = (t32 + 4);
    t25 = (t40 + 4);
    t47 = *((unsigned int *)t20);
    t48 = *((unsigned int *)t24);
    t49 = (t47 | t48);
    *((unsigned int *)t25) = t49;
    t50 = *((unsigned int *)t25);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB168;

LAB169:
LAB170:    goto LAB163;

LAB164:    *((unsigned int *)t32) = 1;
    goto LAB167;

LAB166:    t19 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB167;

LAB168:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t25);
    *((unsigned int *)t40) = (t52 | t53);
    t26 = (t12 + 4);
    t27 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t26);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t27);
    t63 = (~(t62));
    t6 = (t57 & t59);
    t64 = (t61 & t63);
    t65 = (~(t6));
    t66 = (~(t64));
    t67 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t67 & t65);
    t68 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB170;

LAB171:    *((unsigned int *)t79) = 1;
    goto LAB174;

LAB173:    t30 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB174;

LAB175:    t33 = (t0 + 4544);
    t39 = (t33 + 56U);
    t44 = *((char **)t39);
    t45 = ((char*)((ng1)));
    memset(t83, 0, 8);
    xsi_vlog_signed_less(t83, 32, t44, 32, t45, 32);
    memset(t84, 0, 8);
    t46 = (t83 + 4);
    t85 = *((unsigned int *)t46);
    t86 = (~(t85));
    t87 = *((unsigned int *)t83);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB178;

LAB179:    if (*((unsigned int *)t46) != 0)
        goto LAB180;

LAB181:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t84);
    t93 = (t91 & t92);
    *((unsigned int *)t90) = t93;
    t55 = (t79 + 4);
    t71 = (t84 + 4);
    t77 = (t90 + 4);
    t94 = *((unsigned int *)t55);
    t95 = *((unsigned int *)t71);
    t96 = (t94 | t95);
    *((unsigned int *)t77) = t96;
    t97 = *((unsigned int *)t77);
    t98 = (t97 != 0);
    if (t98 == 1)
        goto LAB182;

LAB183:
LAB184:    goto LAB177;

LAB178:    *((unsigned int *)t84) = 1;
    goto LAB181;

LAB180:    t54 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB181;

LAB182:    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t77);
    *((unsigned int *)t90) = (t99 | t100);
    t78 = (t79 + 4);
    t101 = (t84 + 4);
    t102 = *((unsigned int *)t79);
    t103 = (~(t102));
    t104 = *((unsigned int *)t78);
    t105 = (~(t104));
    t106 = *((unsigned int *)t84);
    t107 = (~(t106));
    t108 = *((unsigned int *)t101);
    t109 = (~(t108));
    t110 = (t103 & t105);
    t111 = (t107 & t109);
    t112 = (~(t110));
    t113 = (~(t111));
    t114 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t114 & t112);
    t115 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t115 & t113);
    t116 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t116 & t112);
    t117 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t117 & t113);
    goto LAB184;

LAB185:    xsi_set_current_line(104, ng0);

LAB188:    xsi_set_current_line(105, ng0);
    t124 = ((char*)((ng3)));
    t125 = (t0 + 4864);
    xsi_vlogvar_assign_value(t125, t124, 0, 0, 1);
    goto LAB187;

LAB189:    *((unsigned int *)t12) = 1;
    goto LAB192;

LAB191:    t7 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB192;

LAB193:    t10 = (t0 + 4144U);
    t11 = *((char **)t10);
    t10 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_signed_greatereq(t29, 32, t11, 32, t10, 32);
    memset(t32, 0, 8);
    t13 = (t29 + 4);
    t34 = *((unsigned int *)t13);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB196;

LAB197:    if (*((unsigned int *)t13) != 0)
        goto LAB198;

LAB199:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t20 = (t12 + 4);
    t24 = (t32 + 4);
    t25 = (t40 + 4);
    t47 = *((unsigned int *)t20);
    t48 = *((unsigned int *)t24);
    t49 = (t47 | t48);
    *((unsigned int *)t25) = t49;
    t50 = *((unsigned int *)t25);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB200;

LAB201:
LAB202:    goto LAB195;

LAB196:    *((unsigned int *)t32) = 1;
    goto LAB199;

LAB198:    t19 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB199;

LAB200:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t25);
    *((unsigned int *)t40) = (t52 | t53);
    t26 = (t12 + 4);
    t27 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t26);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t27);
    t63 = (~(t62));
    t6 = (t57 & t59);
    t64 = (t61 & t63);
    t65 = (~(t6));
    t66 = (~(t64));
    t67 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t67 & t65);
    t68 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB202;

LAB203:    *((unsigned int *)t79) = 1;
    goto LAB206;

LAB205:    t30 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB206;

LAB207:    t33 = (t0 + 4544);
    t39 = (t33 + 56U);
    t44 = *((char **)t39);
    t45 = ((char*)((ng1)));
    memset(t83, 0, 8);
    xsi_vlog_signed_greatereq(t83, 32, t44, 32, t45, 32);
    memset(t84, 0, 8);
    t46 = (t83 + 4);
    t85 = *((unsigned int *)t46);
    t86 = (~(t85));
    t87 = *((unsigned int *)t83);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB210;

LAB211:    if (*((unsigned int *)t46) != 0)
        goto LAB212;

LAB213:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t84);
    t93 = (t91 & t92);
    *((unsigned int *)t90) = t93;
    t55 = (t79 + 4);
    t71 = (t84 + 4);
    t77 = (t90 + 4);
    t94 = *((unsigned int *)t55);
    t95 = *((unsigned int *)t71);
    t96 = (t94 | t95);
    *((unsigned int *)t77) = t96;
    t97 = *((unsigned int *)t77);
    t98 = (t97 != 0);
    if (t98 == 1)
        goto LAB214;

LAB215:
LAB216:    goto LAB209;

LAB210:    *((unsigned int *)t84) = 1;
    goto LAB213;

LAB212:    t54 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB213;

LAB214:    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t77);
    *((unsigned int *)t90) = (t99 | t100);
    t78 = (t79 + 4);
    t101 = (t84 + 4);
    t102 = *((unsigned int *)t79);
    t103 = (~(t102));
    t104 = *((unsigned int *)t78);
    t105 = (~(t104));
    t106 = *((unsigned int *)t84);
    t107 = (~(t106));
    t108 = *((unsigned int *)t101);
    t109 = (~(t108));
    t110 = (t103 & t105);
    t111 = (t107 & t109);
    t112 = (~(t110));
    t113 = (~(t111));
    t114 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t114 & t112);
    t115 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t115 & t113);
    t116 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t116 & t112);
    t117 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t117 & t113);
    goto LAB216;

LAB217:    xsi_set_current_line(107, ng0);

LAB220:    xsi_set_current_line(108, ng0);
    t124 = ((char*)((ng3)));
    t125 = (t0 + 4864);
    xsi_vlogvar_assign_value(t125, t124, 0, 0, 1);
    goto LAB219;

LAB223:    t34 = *((unsigned int *)t8);
    t35 = *((unsigned int *)t10);
    *((unsigned int *)t8) = (t34 | t35);
    t11 = (t5 + 4);
    t13 = (t7 + 4);
    t36 = *((unsigned int *)t5);
    t37 = (~(t36));
    t38 = *((unsigned int *)t11);
    t41 = (~(t38));
    t42 = *((unsigned int *)t7);
    t43 = (~(t42));
    t47 = *((unsigned int *)t13);
    t48 = (~(t47));
    t64 = (t37 & t41);
    t110 = (t43 & t48);
    t49 = (~(t64));
    t50 = (~(t110));
    t51 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t51 & t49);
    t52 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t52 & t50);
    t53 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t53 & t49);
    t56 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t56 & t50);
    goto LAB225;

LAB227:    t34 = *((unsigned int *)t8);
    t35 = *((unsigned int *)t10);
    *((unsigned int *)t8) = (t34 | t35);
    t11 = (t5 + 4);
    t13 = (t7 + 4);
    t36 = *((unsigned int *)t11);
    t37 = (~(t36));
    t38 = *((unsigned int *)t5);
    t64 = (t38 & t37);
    t41 = *((unsigned int *)t13);
    t42 = (~(t41));
    t43 = *((unsigned int *)t7);
    t110 = (t43 & t42);
    t47 = (~(t64));
    t48 = (~(t110));
    t49 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t49 & t47);
    t50 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t50 & t48);
    goto LAB229;

LAB231:    t34 = *((unsigned int *)t8);
    t35 = *((unsigned int *)t10);
    *((unsigned int *)t8) = (t34 | t35);
    goto LAB233;

LAB236:    t34 = *((unsigned int *)t12);
    t35 = *((unsigned int *)t10);
    *((unsigned int *)t12) = (t34 | t35);
    t11 = (t5 + 4);
    t13 = (t7 + 4);
    t36 = *((unsigned int *)t11);
    t37 = (~(t36));
    t38 = *((unsigned int *)t5);
    t64 = (t38 & t37);
    t41 = *((unsigned int *)t13);
    t42 = (~(t41));
    t43 = *((unsigned int *)t7);
    t110 = (t43 & t42);
    t47 = (~(t64));
    t48 = (~(t110));
    t49 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t49 & t47);
    t50 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t50 & t48);
    goto LAB238;

LAB240:    t53 = *((unsigned int *)t8);
    t56 = *((unsigned int *)t20);
    *((unsigned int *)t8) = (t53 | t56);
    t57 = *((unsigned int *)t19);
    t58 = *((unsigned int *)t20);
    *((unsigned int *)t19) = (t57 | t58);
    goto LAB239;

LAB243:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB245;

LAB244:    *((unsigned int *)t8) = 1;
    goto LAB245;

LAB247:    xsi_set_current_line(140, ng0);

LAB250:    xsi_set_current_line(141, ng0);
    t13 = ((char*)((ng1)));
    t19 = (t0 + 4544);
    xsi_vlogvar_assign_value(t19, t13, 0, 0, 32);
    goto LAB249;

LAB252:    xsi_set_current_line(152, ng0);

LAB255:    xsi_set_current_line(153, ng0);
    t7 = ((char*)((ng3)));
    t9 = (t0 + 4704);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 1);
    goto LAB254;

}


extern void work_m_00000000002906453410_2779603676_init()
{
	static char *pe[] = {(void *)Cont_40_0,(void *)Cont_41_1,(void *)Cont_43_2,(void *)Cont_44_3,(void *)Cont_45_4,(void *)Cont_46_5,(void *)Always_60_6};
	xsi_register_didat("work_m_00000000002906453410_2779603676", "isim/cs161_datapath_isim_beh.exe.sim/work/m_00000000002906453410_2779603676.didat");
	xsi_register_executes(pe);
}