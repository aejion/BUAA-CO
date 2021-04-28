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
    xilinxcorelib_ver_m_00000000001358910285_0564169447_init();
    xilinxcorelib_ver_m_00000000001687936702_1486898983_init();
    xilinxcorelib_ver_m_00000000000277421008_3177710682_init();
    xilinxcorelib_ver_m_00000000001603977570_1554326276_init();
    work_m_00000000000403262735_0946837280_init();
    work_m_00000000001337536701_2924402094_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001337536701_2924402094");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
