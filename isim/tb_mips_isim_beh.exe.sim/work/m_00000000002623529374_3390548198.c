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
static const char *ng0 = "V:/Verilog/MIPSPipelined/register_file.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {8, 0};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {85U, 0U};
static unsigned int ng6[] = {10U, 0U};



static void Always_15_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t35[8];
    char t36[8];
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
    char *t32;
    char *t33;
    char *t34;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    int t47;
    char *t48;
    int t49;
    int t50;
    int t51;
    int t52;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 3896);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16, ng0);

LAB5:    xsi_set_current_line(17, ng0);
    t4 = (t0 + 1688U);
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

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(18, ng0);

LAB13:    xsi_set_current_line(19, ng0);
    xsi_set_current_line(19, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2408);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);

LAB14:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    goto LAB12;

LAB15:    xsi_set_current_line(20, ng0);

LAB17:    xsi_set_current_line(21, ng0);
    t8 = (t0 + 2408);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng4)));
    memset(t30, 0, 8);
    xsi_vlog_signed_mod(t30, 32, t22, 32, t28, 32);
    t29 = ((char*)((ng2)));
    memset(t31, 0, 8);
    xsi_vlog_signed_equal(t31, 32, t30, 32, t29, 32);
    t32 = (t31 + 4);
    t14 = *((unsigned int *)t32);
    t15 = (~(t14));
    t16 = *((unsigned int *)t31);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 2248);
    t21 = (t8 + 64U);
    t22 = *((char **)t21);
    t28 = (t0 + 2408);
    t29 = (t28 + 56U);
    t32 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t6, t30, t7, t22, 2, 1, t32, 32, 1);
    t33 = (t6 + 4);
    t9 = *((unsigned int *)t33);
    t47 = (!(t9));
    t34 = (t30 + 4);
    t10 = *((unsigned int *)t34);
    t49 = (!(t10));
    t50 = (t47 && t49);
    if (t50 == 1)
        goto LAB23;

LAB24:
LAB20:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

LAB18:    xsi_set_current_line(22, ng0);
    t33 = ((char*)((ng5)));
    t34 = (t0 + 2248);
    t37 = (t0 + 2248);
    t38 = (t37 + 72U);
    t39 = *((char **)t38);
    t40 = (t0 + 2248);
    t41 = (t40 + 64U);
    t42 = *((char **)t41);
    t43 = (t0 + 2408);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    xsi_vlog_generic_convert_array_indices(t35, t36, t39, t42, 2, 1, t45, 32, 1);
    t46 = (t35 + 4);
    t19 = *((unsigned int *)t46);
    t47 = (!(t19));
    t48 = (t36 + 4);
    t20 = *((unsigned int *)t48);
    t49 = (!(t20));
    t50 = (t47 && t49);
    if (t50 == 1)
        goto LAB21;

LAB22:    goto LAB20;

LAB21:    t23 = *((unsigned int *)t35);
    t24 = *((unsigned int *)t36);
    t51 = (t23 - t24);
    t52 = (t51 + 1);
    xsi_vlogvar_assign_value(t34, t33, 0, *((unsigned int *)t36), t52);
    goto LAB22;

LAB23:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t30);
    t51 = (t11 - t12);
    t52 = (t51 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t30), t52);
    goto LAB24;

}

static void Always_30_1(char *t0)
{
    char t7[8];
    char t33[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    int t39;
    char *t40;
    unsigned int t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3912);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2248);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2248);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 8, t6, t10, t13, 2, 1, t15, 3, 2);
    t14 = (t0 + 2088);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t2);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t5);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB9;

LAB6:    if (t25 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t7) = 1;

LAB9:    t8 = (t7 + 4);
    t28 = *((unsigned int *)t8);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(36, ng0);
    t9 = (t0 + 1528U);
    t10 = *((char **)t9);
    t9 = (t0 + 2248);
    t11 = (t0 + 2248);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 2248);
    t15 = (t14 + 64U);
    t35 = *((char **)t15);
    t36 = (t0 + 1208U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t33, t34, t13, t35, 2, 1, t37, 3, 2);
    t36 = (t33 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (!(t38));
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (!(t41));
    t43 = (t39 && t42);
    if (t43 == 1)
        goto LAB13;

LAB14:    goto LAB12;

LAB13:    t44 = *((unsigned int *)t33);
    t45 = *((unsigned int *)t34);
    t46 = (t44 - t45);
    t47 = (t46 + 1);
    xsi_vlogvar_assign_value(t9, t10, 0, *((unsigned int *)t34), t47);
    goto LAB14;

}


extern void work_m_00000000002623529374_3390548198_init()
{
	static char *pe[] = {(void *)Always_15_0,(void *)Always_30_1};
	xsi_register_didat("work_m_00000000002623529374_3390548198", "isim/tb_mips_isim_beh.exe.sim/work/m_00000000002623529374_3390548198.didat");
	xsi_register_executes(pe);
}
