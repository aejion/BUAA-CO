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
    unisims_ver_m_00000000001946988858_2297623829_init();
    unisims_ver_m_00000000004091665089_2577700844_init();
    unisims_ver_m_00000000003084551676_0939277121_init();
    unisims_ver_m_00000000003266096158_2593380106_init();
    work_m_00000000001802872667_1206715471_init();
    work_m_00000000002463711596_0392422232_init();
    work_m_00000000003854908208_4261430893_init();
    work_m_00000000000747234268_4027318241_init();
    xilinxcorelib_ver_m_00000000001358910285_0564169447_init();
    xilinxcorelib_ver_m_00000000001687936702_1486898983_init();
    xilinxcorelib_ver_m_00000000000277421008_0794040122_init();
    xilinxcorelib_ver_m_00000000001603977570_2310528155_init();
    work_m_00000000000403262735_0817300595_init();
    work_m_00000000001949265285_0467708899_init();
    work_m_00000000001660478927_1064356346_init();
    work_m_00000000000041253712_2058220583_init();
    work_m_00000000002538058083_1621229167_init();
    work_m_00000000000097107526_0517320563_init();
    work_m_00000000003047983750_1785967555_init();
    work_m_00000000003389176356_2278338207_init();
    work_m_00000000001266624240_0886308060_init();
    work_m_00000000001373611575_1115194992_init();
    work_m_00000000001628247483_0195578457_init();
    xilinxcorelib_ver_m_00000000000277421008_3177710682_init();
    xilinxcorelib_ver_m_00000000001603977570_1554326276_init();
    work_m_00000000000403262735_0946837280_init();
    work_m_00000000004171249229_2924402094_init();
    work_m_00000000003599253545_1093763706_init();
    work_m_00000000003288547382_2111582603_init();
    work_m_00000000002279931595_0966459031_init();
    work_m_00000000002895819490_0562127183_init();
    work_m_00000000003499352836_3095933173_init();
    work_m_00000000000195595274_3482255459_init();
    work_m_00000000002992611391_1200043877_init();
    work_m_00000000001287770419_0156190743_init();
    work_m_00000000002103346175_0053799672_init();
    work_m_00000000002642028098_0306620462_init();
    work_m_00000000000575230568_0513670005_init();
    work_m_00000000002486647947_3157228389_init();
    work_m_00000000000463507127_1100204504_init();
    work_m_00000000004037481237_2102251087_init();
    work_m_00000000001636784709_3929297694_init();
    work_m_00000000002883056285_0298418595_init();
    work_m_00000000001905627338_2962164981_init();
    work_m_00000000003230048166_2543805730_init();
    work_m_00000000000603116517_3877310806_init();
    work_m_00000000003632548337_3968679286_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003632548337_3968679286");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}