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
    work_m_00000000003796020975_3037777339_init();
    work_m_00000000000851539280_1452706411_init();
    work_m_00000000000320142437_0060011589_init();
    work_m_00000000002007219380_1003191996_init();
    work_m_00000000001350655466_2484743739_init();
    work_m_00000000002014602294_2663932823_init();
    work_m_00000000002786251667_2862431528_init();
    work_m_00000000002194573028_3650585529_init();
    work_m_00000000004210320199_1264842247_init();
    work_m_00000000003958264467_4245161272_init();
    work_m_00000000000004860487_1019967060_init();
    work_m_00000000002729906552_2957995619_init();
    work_m_00000000004189802993_1158014626_init();
    work_m_00000000000687925541_0325009700_init();
    work_m_00000000000885682977_3975733304_init();
    work_m_00000000003339583890_1984717613_init();
    work_m_00000000002994298625_1937630325_init();
    work_m_00000000002906898964_0156190743_init();
    work_m_00000000000056312757_0053799672_init();
    work_m_00000000001876600983_3877310806_init();
    work_m_00000000002630123405_1131260308_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002630123405_1131260308");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}