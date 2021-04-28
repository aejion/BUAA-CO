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
static const char *ng0 = "G:/cpu/p88/MiniUART_src/src/testbench.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {6U, 0U};
static int ng7[] = {100000, 0};
static int ng8[] = {9600, 0};
static unsigned int ng9[] = {18U, 0U};



static int sp_WB_Read(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 2952);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3112);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t4 = (t1 + 3912);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3272);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(60, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(61, ng0);
    t7 = (t1 + 1912U);
    t8 = *((char **)t7);
    t7 = (t1 + 3592);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    xsi_set_current_line(62, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(63, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2952);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3272);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB4;

}

static int sp_WB_Write(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(73, ng0);

LAB5:    xsi_set_current_line(76, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(77, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 2952);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3112);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t4 = (t1 + 4072);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3272);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(80, ng0);
    t4 = (t1 + 4232);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3432);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(81, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(82, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2952);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3112);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3272);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(85, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3432);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB4;

}

static void Initial_21_0(char *t0)
{
    char t20[8];
    char t21[8];
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
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 5152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);

LAB4:    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4960);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(30, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4960);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3912);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB8:    t7 = (t0 + 5056);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB10:    if (t15 != 0)
        goto LAB11;

LAB6:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB7:    t16 = (t0 + 5056);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4960);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    t4 = ((char*)((ng8)));
    memset(t20, 0, 8);
    xsi_vlog_signed_divide(t20, 32, t3, 32, t4, 32);
    t5 = ((char*)((ng1)));
    memset(t21, 0, 8);
    xsi_vlog_signed_minus(t21, 32, t20, 32, t5, 32);
    t6 = (t0 + 4960);
    t7 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 4072);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 4232);
    xsi_vlogvar_assign_value(t10, t21, 0, 0, 32);

LAB14:    t11 = (t0 + 5056);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t16 = (t14 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t15 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB16:    if (t15 != 0)
        goto LAB17;

LAB12:    t12 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t12);

LAB13:    t22 = (t0 + 5056);
    t23 = *((char **)t22);
    t22 = (t0 + 1280);
    t24 = (t0 + 4960);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng9)));
    t4 = (t0 + 4960);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4072);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 4232);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 32);

LAB20:    t9 = (t0 + 5056);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t16 = (t14 + 0U);
    t17 = *((char **)t16);
    t15 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB22:    if (t15 != 0)
        goto LAB23;

LAB18:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB19:    t18 = (t0 + 5056);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t22 = (t0 + 4960);
    t23 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t22, t23);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4960);
    xsi_process_wait(t2, 1200000000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB9:;
LAB11:    t7 = (t0 + 5152U);
    *((char **)t7) = &&LAB8;
    goto LAB1;

LAB15:;
LAB17:    t11 = (t0 + 5152U);
    *((char **)t11) = &&LAB14;
    goto LAB1;

LAB21:;
LAB23:    t9 = (t0 + 5152U);
    *((char **)t9) = &&LAB20;
    goto LAB1;

LAB24:    xsi_set_current_line(42, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}

static void Always_46_1(char *t0)
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

LAB0:    t1 = (t0 + 5400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5208);
    xsi_process_wait(t2, 5000000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 2632);
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
    t24 = (t0 + 2632);
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


extern void work_m_00000000001664875520_2702854164_init()
{
	static char *pe[] = {(void *)Initial_21_0,(void *)Always_46_1};
	static char *se[] = {(void *)sp_WB_Read,(void *)sp_WB_Write};
	xsi_register_didat("work_m_00000000001664875520_2702854164", "isim/testbench_miniuart_isim_beh.exe.sim/work/m_00000000001664875520_2702854164.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
