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
static const char *ng0 = "F:/cpu5/EXT.v";
static int ng1[] = {0, 0};
static int ng2[] = {31, 0};
static int ng3[] = {16, 0};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};



static void Initial_28_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(28, ng0);

LAB2:    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Cont_31_1(char *t0)
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

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3760);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 3664);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_32_2(char *t0)
{
    char t6[8];
    char t30[8];
    char t33[8];
    char t42[8];
    char t45[8];
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
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    int t41;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3680);
    *((int *)t2) = 1;
    t3 = (t0 + 3376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
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

LAB11:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB29;

LAB26:    if (t18 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t6) = 1;

LAB29:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB49;

LAB46:    if (t18 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t6) = 1;

LAB49:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB50;

LAB51:
LAB52:
LAB32:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(33, ng0);

LAB13:    xsi_set_current_line(34, ng0);
    xsi_set_current_line(34, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);

LAB14:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    goto LAB12;

LAB15:    xsi_set_current_line(34, ng0);

LAB17:    xsi_set_current_line(35, ng0);
    t8 = (t0 + 1928);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng3)));
    memset(t30, 0, 8);
    xsi_vlog_signed_greatereq(t30, 32, t22, 32, t28, 32);
    t29 = (t30 + 4);
    t14 = *((unsigned int *)t29);
    t15 = (~(t14));
    t16 = *((unsigned int *)t30);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 1928);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    xsi_vlog_generic_get_index_select_value(t6, 1, t3, t5, 2, t21, 32, 1);
    t22 = (t0 + 1768);
    t28 = (t0 + 1768);
    t29 = (t28 + 72U);
    t31 = *((char **)t29);
    t32 = (t0 + 1928);
    t34 = (t32 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_generic_convert_bit_index(t30, t31, 2, t35, 32, 1);
    t36 = (t30 + 4);
    t9 = *((unsigned int *)t36);
    t41 = (!(t9));
    if (t41 == 1)
        goto LAB24;

LAB25:
LAB20:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

LAB18:    xsi_set_current_line(35, ng0);

LAB21:    xsi_set_current_line(36, ng0);
    t31 = ((char*)((ng1)));
    t32 = (t0 + 1768);
    t34 = (t0 + 1768);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t0 + 1928);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    xsi_vlog_generic_convert_bit_index(t33, t36, 2, t39, 32, 1);
    t40 = (t33 + 4);
    t19 = *((unsigned int *)t40);
    t41 = (!(t19));
    if (t41 == 1)
        goto LAB22;

LAB23:    goto LAB20;

LAB22:    xsi_vlogvar_wait_assign_value(t32, t31, 0, *((unsigned int *)t33), 1, 0LL);
    goto LAB23;

LAB24:    xsi_vlogvar_wait_assign_value(t22, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB25;

LAB28:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(41, ng0);

LAB33:    xsi_set_current_line(42, ng0);
    xsi_set_current_line(42, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);

LAB34:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB35;

LAB36:    goto LAB32;

LAB35:    xsi_set_current_line(42, ng0);

LAB37:    xsi_set_current_line(43, ng0);
    t8 = (t0 + 1928);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng3)));
    memset(t30, 0, 8);
    xsi_vlog_signed_greatereq(t30, 32, t22, 32, t28, 32);
    t29 = (t30 + 4);
    t14 = *((unsigned int *)t29);
    t15 = (~(t14));
    t16 = *((unsigned int *)t30);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 1928);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    xsi_vlog_generic_get_index_select_value(t6, 1, t3, t5, 2, t21, 32, 1);
    t22 = (t0 + 1768);
    t28 = (t0 + 1768);
    t29 = (t28 + 72U);
    t31 = *((char **)t29);
    t32 = (t0 + 1928);
    t34 = (t32 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_generic_convert_bit_index(t30, t31, 2, t35, 32, 1);
    t36 = (t30 + 4);
    t9 = *((unsigned int *)t36);
    t41 = (!(t9));
    if (t41 == 1)
        goto LAB44;

LAB45:
LAB40:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB34;

LAB38:    xsi_set_current_line(43, ng0);

LAB41:    xsi_set_current_line(44, ng0);
    t31 = (t0 + 1048U);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    t31 = (t33 + 4);
    t34 = (t32 + 4);
    t19 = *((unsigned int *)t32);
    t20 = (t19 >> 15);
    t23 = (t20 & 1);
    *((unsigned int *)t33) = t23;
    t24 = *((unsigned int *)t34);
    t25 = (t24 >> 15);
    t26 = (t25 & 1);
    *((unsigned int *)t31) = t26;
    t35 = (t0 + 1768);
    t36 = (t0 + 1768);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t39 = (t0 + 1928);
    t40 = (t39 + 56U);
    t43 = *((char **)t40);
    xsi_vlog_generic_convert_bit_index(t42, t38, 2, t43, 32, 1);
    t44 = (t42 + 4);
    t27 = *((unsigned int *)t44);
    t41 = (!(t27));
    if (t41 == 1)
        goto LAB42;

LAB43:    goto LAB40;

LAB42:    xsi_vlogvar_wait_assign_value(t35, t33, 0, *((unsigned int *)t42), 1, 0LL);
    goto LAB43;

LAB44:    xsi_vlogvar_wait_assign_value(t22, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB45;

LAB48:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(49, ng0);

LAB53:    xsi_set_current_line(50, ng0);
    xsi_set_current_line(50, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);

LAB54:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB55;

LAB56:    goto LAB52;

LAB55:    xsi_set_current_line(50, ng0);

LAB57:    xsi_set_current_line(51, ng0);
    t8 = (t0 + 1928);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng3)));
    memset(t30, 0, 8);
    xsi_vlog_signed_greatereq(t30, 32, t22, 32, t28, 32);
    t29 = (t30 + 4);
    t14 = *((unsigned int *)t29);
    t15 = (~(t14));
    t16 = *((unsigned int *)t30);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 1928);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t22, 32, 1);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t41 = (!(t9));
    if (t41 == 1)
        goto LAB64;

LAB65:
LAB60:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB54;

LAB58:    xsi_set_current_line(51, ng0);

LAB61:    xsi_set_current_line(52, ng0);
    t31 = (t0 + 1048U);
    t32 = *((char **)t31);
    t31 = (t0 + 1008U);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = (t0 + 1928);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng3)));
    memset(t42, 0, 8);
    xsi_vlog_signed_minus(t42, 32, t38, 32, t39, 32);
    xsi_vlog_generic_get_index_select_value(t33, 1, t32, t35, 2, t42, 32, 1);
    t40 = (t0 + 1768);
    t43 = (t0 + 1768);
    t44 = (t43 + 72U);
    t46 = *((char **)t44);
    t47 = (t0 + 1928);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    xsi_vlog_generic_convert_bit_index(t45, t46, 2, t49, 32, 1);
    t50 = (t45 + 4);
    t19 = *((unsigned int *)t50);
    t41 = (!(t19));
    if (t41 == 1)
        goto LAB62;

LAB63:    goto LAB60;

LAB62:    xsi_vlogvar_wait_assign_value(t40, t33, 0, *((unsigned int *)t45), 1, 0LL);
    goto LAB63;

LAB64:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB65;

}


extern void work_m_00000000003047983750_1785967555_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Cont_31_1,(void *)Always_32_2};
	xsi_register_didat("work_m_00000000003047983750_1785967555", "isim/tb_isim_beh.exe.sim/work/m_00000000003047983750_1785967555.didat");
	xsi_register_executes(pe);
}
