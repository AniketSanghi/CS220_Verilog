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
    work_m_07958154198403372893_3190593924_init();
    work_m_04365956194771462723_0711356568_init();
    work_m_17981860466059323287_3779407456_init();
    work_m_06139631154805195948_3346189889_init();
    work_m_14448309000184304323_0720660573_init();
    work_m_00508161227332690720_0606406362_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_00508161227332690720_0606406362");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
