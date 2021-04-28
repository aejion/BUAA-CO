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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002463711596_0392422232_init();
    work_m_00000000000747234268_4027318241_init();
    work_m_00000000002482299212_0467708899_init();
    work_m_00000000000099111663_1064356346_init();
    work_m_00000000001305767770_2058220583_init();
    work_m_00000000002538058083_1621229167_init();
    work_m_00000000000097107526_0517320563_init();
    work_m_00000000003047983750_1785967555_init();
    work_m_00000000002926476466_2278338207_init();
    work_m_00000000001564121922_3811763532_init();
    work_m_00000000000749806422_0886308060_init();
    work_m_00000000000960455182_1115194992_init();
    work_m_00000000002964370840_2924402094_init();
    work_m_00000000000975262705_2111582603_init();
    work_m_00000000002279931595_0966459031_init();
    work_m_00000000002895819490_0562127183_init();
    work_m_00000000003499352836_3095933173_init();
    work_m_00000000000195595274_3482255459_init();
    work_m_00000000003701100916_3877310806_init();
    work_m_00000000002047498008_3671711236_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_3671711236");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
