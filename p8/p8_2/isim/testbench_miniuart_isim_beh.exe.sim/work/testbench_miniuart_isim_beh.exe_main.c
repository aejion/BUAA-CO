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
    work_m_00000000000575230568_0513670005_init();
    work_m_00000000002486647947_3157228389_init();
    work_m_00000000000463507127_1100204504_init();
    work_m_00000000004037481237_2102251087_init();
    work_m_00000000001636784709_3929297694_init();
    work_m_00000000002883056285_0298418595_init();
    work_m_00000000003843449306_2962164981_init();
    work_m_00000000001664875520_2702854164_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001664875520_2702854164");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
