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
    char t14[8];
    char t17[8];
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
    char *t18;
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
    t4 = (t0 + 2704U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(66, ng0);

LAB10:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3184U);
    t3 = *((char **)t2);

LAB11:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB30;

LAB31:
LAB33:
LAB32:    xsi_set_current_line(154, ng0);

LAB257:    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_signed_unary_minus(t14, 32, t2, 32);
    t4 = (t0 + 4544);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4864);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB34:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 3344U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t14, 0, 8);
    xsi_vlog_signed_equal(t14, 32, t4, 32, t2, 32);
    t5 = (t14 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB258;

LAB259:    xsi_set_current_line(165, ng0);

LAB262:    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4704);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB260:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(61, ng0);

LAB9:    xsi_set_current_line(62, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4544);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB8;

LAB12:    xsi_set_current_line(75, ng0);

LAB35:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);
    t4 = (t0 + 3024U);
    t11 = *((char **)t4);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 32, t11, 32);
    t4 = (t0 + 4544);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4544);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2864U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB37;

LAB36:    t15 = (t12 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t5) < *((unsigned int *)t12))
        goto LAB38;

LAB39:    memset(t17, 0, 8);
    t18 = (t14 + 4);
    t6 = *((unsigned int *)t18);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t18) != 0)
        goto LAB43;

LAB44:    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB45;

LAB46:    memcpy(t40, t17, 8);

LAB47:    t71 = (t40 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t40);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(80, ng0);

LAB64:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB62:    goto LAB34;

LAB14:    xsi_set_current_line(84, ng0);

LAB65:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 3984U);
    t5 = *((char **)t4);
    t4 = (t0 + 4144U);
    t11 = *((char **)t4);
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t11, 32);
    t4 = (t0 + 4544);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3984U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t14, 0, 8);
    xsi_vlog_signed_greatereq(t14, 32, t4, 32, t2, 32);
    memset(t17, 0, 8);
    t5 = (t14 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t5) != 0)
        goto LAB68;

LAB69:    t12 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB70;

LAB71:    memcpy(t40, t17, 8);

LAB72:    memset(t79, 0, 8);
    t28 = (t40 + 4);
    t72 = *((unsigned int *)t28);
    t73 = (~(t72));
    t74 = *((unsigned int *)t40);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t28) != 0)
        goto LAB82;

LAB83:    t31 = (t79 + 4);
    t80 = *((unsigned int *)t79);
    t81 = *((unsigned int *)t31);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB84;

LAB85:    memcpy(t90, t79, 8);

LAB86:    t118 = (t90 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (~(t119));
    t121 = *((unsigned int *)t90);
    t122 = (t121 & t120);
    t123 = (t122 != 0);
    if (t123 > 0)
        goto LAB94;

LAB95:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3984U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t14, 0, 8);
    xsi_vlog_signed_less(t14, 32, t4, 32, t2, 32);
    memset(t17, 0, 8);
    t5 = (t14 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t5) != 0)
        goto LAB100;

LAB101:    t12 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB102;

LAB103:    memcpy(t40, t17, 8);

LAB104:    memset(t79, 0, 8);
    t28 = (t40 + 4);
    t72 = *((unsigned int *)t28);
    t73 = (~(t72));
    t74 = *((unsigned int *)t40);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t28) != 0)
        goto LAB114;

LAB115:    t31 = (t79 + 4);
    t80 = *((unsigned int *)t79);
    t81 = *((unsigned int *)t31);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB116;

LAB117:    memcpy(t90, t79, 8);

LAB118:    t118 = (t90 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (~(t119));
    t121 = *((unsigned int *)t90);
    t122 = (t121 & t120);
    t123 = (t122 != 0);
    if (t123 > 0)
        goto LAB126;

LAB127:    xsi_set_current_line(92, ng0);

LAB130:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4864);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB128:
LAB96:    goto LAB34;

LAB16:    xsi_set_current_line(97, ng0);

LAB131:    xsi_set_current_line(98, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);
    t4 = (t0 + 3024U);
    t11 = *((char **)t4);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t5, 32, t11, 32);
    t4 = (t0 + 4544);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4544);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2864U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB133;

LAB132:    t15 = (t12 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB133;

LAB136:    if (*((unsigned int *)t5) > *((unsigned int *)t12))
        goto LAB134;

LAB135:    memset(t17, 0, 8);
    t18 = (t14 + 4);
    t6 = *((unsigned int *)t18);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB137;

LAB138:    if (*((unsigned int *)t18) != 0)
        goto LAB139;

LAB140:    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB141;

LAB142:    memcpy(t40, t17, 8);

LAB143:    t71 = (t40 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t40);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB156;

LAB157:    xsi_set_current_line(102, ng0);

LAB160:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB158:    goto LAB34;

LAB18:    xsi_set_current_line(108, ng0);

LAB161:    xsi_set_current_line(109, ng0);
    t4 = (t0 + 3984U);
    t5 = *((char **)t4);
    t4 = (t0 + 4144U);
    t11 = *((char **)t4);
    memset(t14, 0, 8);
    xsi_vlog_signed_minus(t14, 32, t5, 32, t11, 32);
    t4 = (t0 + 4544);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3984U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t14, 0, 8);
    xsi_vlog_signed_greatereq(t14, 32, t4, 32, t2, 32);
    memset(t17, 0, 8);
    t5 = (t14 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB162;

LAB163:    if (*((unsigned int *)t5) != 0)
        goto LAB164;

LAB165:    t12 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB166;

LAB167:    memcpy(t40, t17, 8);

LAB168:    memset(t79, 0, 8);
    t28 = (t40 + 4);
    t72 = *((unsigned int *)t28);
    t73 = (~(t72));
    t74 = *((unsigned int *)t40);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB176;

LAB177:    if (*((unsigned int *)t28) != 0)
        goto LAB178;

LAB179:    t31 = (t79 + 4);
    t80 = *((unsigned int *)t79);
    t81 = *((unsigned int *)t31);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB180;

LAB181:    memcpy(t90, t79, 8);

LAB182:    t118 = (t90 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (~(t119));
    t121 = *((unsigned int *)t90);
    t122 = (t121 & t120);
    t123 = (t122 != 0);
    if (t123 > 0)
        goto LAB190;

LAB191:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3984U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t14, 0, 8);
    xsi_vlog_signed_less(t14, 32, t4, 32, t2, 32);
    memset(t17, 0, 8);
    t5 = (t14 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB194;

LAB195:    if (*((unsigned int *)t5) != 0)
        goto LAB196;

LAB197:    t12 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB198;

LAB199:    memcpy(t40, t17, 8);

LAB200:    memset(t79, 0, 8);
    t28 = (t40 + 4);
    t72 = *((unsigned int *)t28);
    t73 = (~(t72));
    t74 = *((unsigned int *)t40);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB208;

LAB209:    if (*((unsigned int *)t28) != 0)
        goto LAB210;

LAB211:    t31 = (t79 + 4);
    t80 = *((unsigned int *)t79);
    t81 = *((unsigned int *)t31);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB212;

LAB213:    memcpy(t90, t79, 8);

LAB214:    t118 = (t90 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (~(t119));
    t121 = *((unsigned int *)t90);
    t122 = (t121 & t120);
    t123 = (t122 != 0);
    if (t123 > 0)
        goto LAB222;

LAB223:    xsi_set_current_line(116, ng0);

LAB226:    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4864);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB224:
LAB192:    goto LAB34;

LAB20:    xsi_set_current_line(122, ng0);

LAB227:    xsi_set_current_line(123, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);
    t4 = (t0 + 3024U);
    t11 = *((char **)t4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 & t7);
    *((unsigned int *)t14) = t8;
    t4 = (t5 + 4);
    t12 = (t11 + 4);
    t15 = (t14 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    t21 = (t9 | t10);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB228;

LAB229:
LAB230:    t19 = (t0 + 4544);
    xsi_vlogvar_assign_value(t19, t14, 0, 0, 32);
    goto LAB34;

LAB22:    xsi_set_current_line(126, ng0);

LAB231:    xsi_set_current_line(127, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);
    t4 = (t0 + 3024U);
    t11 = *((char **)t4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 | t7);
    *((unsigned int *)t14) = t8;
    t4 = (t5 + 4);
    t12 = (t11 + 4);
    t15 = (t14 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    t21 = (t9 | t10);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB232;

LAB233:
LAB234:    t19 = (t0 + 4544);
    xsi_vlogvar_assign_value(t19, t14, 0, 0, 32);
    goto LAB34;

LAB24:    xsi_set_current_line(130, ng0);

LAB235:    xsi_set_current_line(131, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);
    t4 = (t0 + 3024U);
    t11 = *((char **)t4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    *((unsigned int *)t14) = t8;
    t4 = (t5 + 4);
    t12 = (t11 + 4);
    t15 = (t14 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    t21 = (t9 | t10);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB236;

LAB237:
LAB238:    t16 = (t0 + 4544);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 32);
    goto LAB34;

LAB26:    xsi_set_current_line(135, ng0);

LAB239:    xsi_set_current_line(136, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t14, 32, t5, 32, t4, 32);
    t11 = (t0 + 4544);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 32);
    goto LAB34;

LAB28:    xsi_set_current_line(140, ng0);

LAB240:    xsi_set_current_line(141, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);
    t4 = (t0 + 3024U);
    t11 = *((char **)t4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 | t7);
    *((unsigned int *)t17) = t8;
    t4 = (t5 + 4);
    t12 = (t11 + 4);
    t15 = (t17 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    t21 = (t9 | t10);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB241;

LAB242:
LAB243:    memset(t14, 0, 8);
    t19 = (t14 + 4);
    t20 = (t17 + 4);
    t51 = *((unsigned int *)t17);
    t52 = (~(t51));
    *((unsigned int *)t14) = t52;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t20) != 0)
        goto LAB245;

LAB244:    t59 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t59 & 4294967295U);
    t60 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t60 & 4294967295U);
    t24 = (t0 + 4544);
    xsi_vlogvar_assign_value(t24, t14, 0, 0, 32);
    goto LAB34;

LAB30:    xsi_set_current_line(145, ng0);

LAB246:    xsi_set_current_line(146, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);
    t4 = (t0 + 3024U);
    t11 = *((char **)t4);
    memset(t14, 0, 8);
    t4 = (t5 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB248;

LAB247:    t12 = (t11 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB248;

LAB251:    if (*((unsigned int *)t5) < *((unsigned int *)t11))
        goto LAB249;

LAB250:    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB252;

LAB253:    xsi_set_current_line(149, ng0);

LAB256:    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4544);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB254:    goto LAB34;

LAB37:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t14) = 1;
    goto LAB39;

LAB41:    *((unsigned int *)t17) = 1;
    goto LAB44;

LAB43:    t19 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB44;

LAB45:    t24 = (t0 + 4544);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 3024U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t27 = (t26 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB49;

LAB48:    t30 = (t28 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB49;

LAB52:    if (*((unsigned int *)t26) < *((unsigned int *)t28))
        goto LAB50;

LAB51:    memset(t32, 0, 8);
    t33 = (t29 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t33) != 0)
        goto LAB55;

LAB56:    t41 = *((unsigned int *)t17);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t17 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB47;

LAB49:    t31 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB51;

LAB50:    *((unsigned int *)t29) = 1;
    goto LAB51;

LAB53:    *((unsigned int *)t32) = 1;
    goto LAB56;

LAB55:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB56;

LAB57:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t17 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t17);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t13 = (t57 & t59);
    t64 = (t61 & t63);
    t65 = (~(t13));
    t66 = (~(t64));
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB59;

LAB60:    xsi_set_current_line(77, ng0);

LAB63:    xsi_set_current_line(78, ng0);
    t77 = ((char*)((ng3)));
    t78 = (t0 + 5024);
    xsi_vlogvar_assign_value(t78, t77, 0, 0, 1);
    goto LAB62;

LAB66:    *((unsigned int *)t17) = 1;
    goto LAB69;

LAB68:    t11 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB69;

LAB70:    t15 = (t0 + 4144U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_signed_greatereq(t29, 32, t16, 32, t15, 32);
    memset(t32, 0, 8);
    t18 = (t29 + 4);
    t34 = *((unsigned int *)t18);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t18) != 0)
        goto LAB75;

LAB76:    t41 = *((unsigned int *)t17);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t20 = (t17 + 4);
    t24 = (t32 + 4);
    t25 = (t40 + 4);
    t47 = *((unsigned int *)t20);
    t48 = *((unsigned int *)t24);
    t49 = (t47 | t48);
    *((unsigned int *)t25) = t49;
    t50 = *((unsigned int *)t25);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB77;

LAB78:
LAB79:    goto LAB72;

LAB73:    *((unsigned int *)t32) = 1;
    goto LAB76;

LAB75:    t19 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB76;

LAB77:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t25);
    *((unsigned int *)t40) = (t52 | t53);
    t26 = (t17 + 4);
    t27 = (t32 + 4);
    t56 = *((unsigned int *)t17);
    t57 = (~(t56));
    t58 = *((unsigned int *)t26);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t27);
    t63 = (~(t62));
    t13 = (t57 & t59);
    t64 = (t61 & t63);
    t65 = (~(t13));
    t66 = (~(t64));
    t67 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t67 & t65);
    t68 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB79;

LAB80:    *((unsigned int *)t79) = 1;
    goto LAB83;

LAB82:    t30 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB83;

LAB84:    t33 = (t0 + 4544);
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
        goto LAB87;

LAB88:    if (*((unsigned int *)t46) != 0)
        goto LAB89;

LAB90:    t91 = *((unsigned int *)t79);
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
        goto LAB91;

LAB92:
LAB93:    goto LAB86;

LAB87:    *((unsigned int *)t84) = 1;
    goto LAB90;

LAB89:    t54 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB90;

LAB91:    t99 = *((unsigned int *)t90);
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
    goto LAB93;

LAB94:    xsi_set_current_line(86, ng0);

LAB97:    xsi_set_current_line(87, ng0);
    t124 = ((char*)((ng3)));
    t125 = (t0 + 4864);
    xsi_vlogvar_assign_value(t125, t124, 0, 0, 1);
    goto LAB96;

LAB98:    *((unsigned int *)t17) = 1;
    goto LAB101;

LAB100:    t11 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB101;

LAB102:    t15 = (t0 + 4144U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_signed_less(t29, 32, t16, 32, t15, 32);
    memset(t32, 0, 8);
    t18 = (t29 + 4);
    t34 = *((unsigned int *)t18);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t18) != 0)
        goto LAB107;

LAB108:    t41 = *((unsigned int *)t17);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t20 = (t17 + 4);
    t24 = (t32 + 4);
    t25 = (t40 + 4);
    t47 = *((unsigned int *)t20);
    t48 = *((unsigned int *)t24);
    t49 = (t47 | t48);
    *((unsigned int *)t25) = t49;
    t50 = *((unsigned int *)t25);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB109;

LAB110:
LAB111:    goto LAB104;

LAB105:    *((unsigned int *)t32) = 1;
    goto LAB108;

LAB107:    t19 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB108;

LAB109:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t25);
    *((unsigned int *)t40) = (t52 | t53);
    t26 = (t17 + 4);
    t27 = (t32 + 4);
    t56 = *((unsigned int *)t17);
    t57 = (~(t56));
    t58 = *((unsigned int *)t26);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t27);
    t63 = (~(t62));
    t13 = (t57 & t59);
    t64 = (t61 & t63);
    t65 = (~(t13));
    t66 = (~(t64));
    t67 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t67 & t65);
    t68 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB111;

LAB112:    *((unsigned int *)t79) = 1;
    goto LAB115;

LAB114:    t30 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB115;

LAB116:    t33 = (t0 + 4544);
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
        goto LAB119;

LAB120:    if (*((unsigned int *)t46) != 0)
        goto LAB121;

LAB122:    t91 = *((unsigned int *)t79);
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
        goto LAB123;

LAB124:
LAB125:    goto LAB118;

LAB119:    *((unsigned int *)t84) = 1;
    goto LAB122;

LAB121:    t54 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB122;

LAB123:    t99 = *((unsigned int *)t90);
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
    goto LAB125;

LAB126:    xsi_set_current_line(89, ng0);

LAB129:    xsi_set_current_line(90, ng0);
    t124 = ((char*)((ng3)));
    t125 = (t0 + 4864);
    xsi_vlogvar_assign_value(t125, t124, 0, 0, 1);
    goto LAB128;

LAB133:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB135;

LAB134:    *((unsigned int *)t14) = 1;
    goto LAB135;

LAB137:    *((unsigned int *)t17) = 1;
    goto LAB140;

LAB139:    t19 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB140;

LAB141:    t24 = (t0 + 4544);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 3024U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t27 = (t26 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB145;

LAB144:    t30 = (t28 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB145;

LAB148:    if (*((unsigned int *)t26) > *((unsigned int *)t28))
        goto LAB146;

LAB147:    memset(t32, 0, 8);
    t33 = (t29 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB149;

LAB150:    if (*((unsigned int *)t33) != 0)
        goto LAB151;

LAB152:    t41 = *((unsigned int *)t17);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t17 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB153;

LAB154:
LAB155:    goto LAB143;

LAB145:    t31 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB147;

LAB146:    *((unsigned int *)t29) = 1;
    goto LAB147;

LAB149:    *((unsigned int *)t32) = 1;
    goto LAB152;

LAB151:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB152;

LAB153:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t17 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t17);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t13 = (t57 & t59);
    t64 = (t61 & t63);
    t65 = (~(t13));
    t66 = (~(t64));
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB155;

LAB156:    xsi_set_current_line(99, ng0);

LAB159:    xsi_set_current_line(100, ng0);
    t77 = ((char*)((ng3)));
    t78 = (t0 + 5024);
    xsi_vlogvar_assign_value(t78, t77, 0, 0, 1);
    goto LAB158;

LAB162:    *((unsigned int *)t17) = 1;
    goto LAB165;

LAB164:    t11 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB165;

LAB166:    t15 = (t0 + 4144U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_signed_less(t29, 32, t16, 32, t15, 32);
    memset(t32, 0, 8);
    t18 = (t29 + 4);
    t34 = *((unsigned int *)t18);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB169;

LAB170:    if (*((unsigned int *)t18) != 0)
        goto LAB171;

LAB172:    t41 = *((unsigned int *)t17);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t20 = (t17 + 4);
    t24 = (t32 + 4);
    t25 = (t40 + 4);
    t47 = *((unsigned int *)t20);
    t48 = *((unsigned int *)t24);
    t49 = (t47 | t48);
    *((unsigned int *)t25) = t49;
    t50 = *((unsigned int *)t25);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB173;

LAB174:
LAB175:    goto LAB168;

LAB169:    *((unsigned int *)t32) = 1;
    goto LAB172;

LAB171:    t19 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB172;

LAB173:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t25);
    *((unsigned int *)t40) = (t52 | t53);
    t26 = (t17 + 4);
    t27 = (t32 + 4);
    t56 = *((unsigned int *)t17);
    t57 = (~(t56));
    t58 = *((unsigned int *)t26);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t27);
    t63 = (~(t62));
    t13 = (t57 & t59);
    t64 = (t61 & t63);
    t65 = (~(t13));
    t66 = (~(t64));
    t67 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t67 & t65);
    t68 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB175;

LAB176:    *((unsigned int *)t79) = 1;
    goto LAB179;

LAB178:    t30 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB179;

LAB180:    t33 = (t0 + 4544);
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
        goto LAB183;

LAB184:    if (*((unsigned int *)t46) != 0)
        goto LAB185;

LAB186:    t91 = *((unsigned int *)t79);
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
        goto LAB187;

LAB188:
LAB189:    goto LAB182;

LAB183:    *((unsigned int *)t84) = 1;
    goto LAB186;

LAB185:    t54 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB186;

LAB187:    t99 = *((unsigned int *)t90);
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
    goto LAB189;

LAB190:    xsi_set_current_line(110, ng0);

LAB193:    xsi_set_current_line(111, ng0);
    t124 = ((char*)((ng3)));
    t125 = (t0 + 4864);
    xsi_vlogvar_assign_value(t125, t124, 0, 0, 1);
    goto LAB192;

LAB194:    *((unsigned int *)t17) = 1;
    goto LAB197;

LAB196:    t11 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB197;

LAB198:    t15 = (t0 + 4144U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_signed_greatereq(t29, 32, t16, 32, t15, 32);
    memset(t32, 0, 8);
    t18 = (t29 + 4);
    t34 = *((unsigned int *)t18);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB201;

LAB202:    if (*((unsigned int *)t18) != 0)
        goto LAB203;

LAB204:    t41 = *((unsigned int *)t17);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t20 = (t17 + 4);
    t24 = (t32 + 4);
    t25 = (t40 + 4);
    t47 = *((unsigned int *)t20);
    t48 = *((unsigned int *)t24);
    t49 = (t47 | t48);
    *((unsigned int *)t25) = t49;
    t50 = *((unsigned int *)t25);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB205;

LAB206:
LAB207:    goto LAB200;

LAB201:    *((unsigned int *)t32) = 1;
    goto LAB204;

LAB203:    t19 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB204;

LAB205:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t25);
    *((unsigned int *)t40) = (t52 | t53);
    t26 = (t17 + 4);
    t27 = (t32 + 4);
    t56 = *((unsigned int *)t17);
    t57 = (~(t56));
    t58 = *((unsigned int *)t26);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t27);
    t63 = (~(t62));
    t13 = (t57 & t59);
    t64 = (t61 & t63);
    t65 = (~(t13));
    t66 = (~(t64));
    t67 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t67 & t65);
    t68 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB207;

LAB208:    *((unsigned int *)t79) = 1;
    goto LAB211;

LAB210:    t30 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB211;

LAB212:    t33 = (t0 + 4544);
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
        goto LAB215;

LAB216:    if (*((unsigned int *)t46) != 0)
        goto LAB217;

LAB218:    t91 = *((unsigned int *)t79);
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
        goto LAB219;

LAB220:
LAB221:    goto LAB214;

LAB215:    *((unsigned int *)t84) = 1;
    goto LAB218;

LAB217:    t54 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB218;

LAB219:    t99 = *((unsigned int *)t90);
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
    goto LAB221;

LAB222:    xsi_set_current_line(113, ng0);

LAB225:    xsi_set_current_line(114, ng0);
    t124 = ((char*)((ng3)));
    t125 = (t0 + 4864);
    xsi_vlogvar_assign_value(t125, t124, 0, 0, 1);
    goto LAB224;

LAB228:    t34 = *((unsigned int *)t14);
    t35 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t34 | t35);
    t16 = (t5 + 4);
    t18 = (t11 + 4);
    t36 = *((unsigned int *)t5);
    t37 = (~(t36));
    t38 = *((unsigned int *)t16);
    t41 = (~(t38));
    t42 = *((unsigned int *)t11);
    t43 = (~(t42));
    t47 = *((unsigned int *)t18);
    t48 = (~(t47));
    t64 = (t37 & t41);
    t110 = (t43 & t48);
    t49 = (~(t64));
    t50 = (~(t110));
    t51 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t51 & t49);
    t52 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t52 & t50);
    t53 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t53 & t49);
    t56 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t56 & t50);
    goto LAB230;

LAB232:    t34 = *((unsigned int *)t14);
    t35 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t34 | t35);
    t16 = (t5 + 4);
    t18 = (t11 + 4);
    t36 = *((unsigned int *)t16);
    t37 = (~(t36));
    t38 = *((unsigned int *)t5);
    t64 = (t38 & t37);
    t41 = *((unsigned int *)t18);
    t42 = (~(t41));
    t43 = *((unsigned int *)t11);
    t110 = (t43 & t42);
    t47 = (~(t64));
    t48 = (~(t110));
    t49 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t49 & t47);
    t50 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t50 & t48);
    goto LAB234;

LAB236:    t34 = *((unsigned int *)t14);
    t35 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t34 | t35);
    goto LAB238;

LAB241:    t34 = *((unsigned int *)t17);
    t35 = *((unsigned int *)t15);
    *((unsigned int *)t17) = (t34 | t35);
    t16 = (t5 + 4);
    t18 = (t11 + 4);
    t36 = *((unsigned int *)t16);
    t37 = (~(t36));
    t38 = *((unsigned int *)t5);
    t64 = (t38 & t37);
    t41 = *((unsigned int *)t18);
    t42 = (~(t41));
    t43 = *((unsigned int *)t11);
    t110 = (t43 & t42);
    t47 = (~(t64));
    t48 = (~(t110));
    t49 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t49 & t47);
    t50 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t50 & t48);
    goto LAB243;

LAB245:    t53 = *((unsigned int *)t14);
    t56 = *((unsigned int *)t20);
    *((unsigned int *)t14) = (t53 | t56);
    t57 = *((unsigned int *)t19);
    t58 = *((unsigned int *)t20);
    *((unsigned int *)t19) = (t57 | t58);
    goto LAB244;

LAB248:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB250;

LAB249:    *((unsigned int *)t14) = 1;
    goto LAB250;

LAB252:    xsi_set_current_line(146, ng0);

LAB255:    xsi_set_current_line(147, ng0);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 4544);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 32);
    goto LAB254;

LAB258:    xsi_set_current_line(161, ng0);

LAB261:    xsi_set_current_line(162, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 4704);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB260;

}


extern void work_m_00000000002906453410_2779603676_init()
{
	static char *pe[] = {(void *)Cont_40_0,(void *)Cont_41_1,(void *)Cont_43_2,(void *)Cont_44_3,(void *)Cont_45_4,(void *)Cont_46_5,(void *)Always_60_6};
	xsi_register_didat("work_m_00000000002906453410_2779603676", "isim/cs161_processor_testbench_isim_beh.exe.sim/work/m_00000000002906453410_2779603676.didat");
	xsi_register_executes(pe);
}
