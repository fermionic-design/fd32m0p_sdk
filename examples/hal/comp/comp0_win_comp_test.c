//////////////////////////////////////////////////////////////////////////////
////                  COMP0 WINDOW COMPARATOR TEST                        ////
////    DESCRIPTION:                                                      ////      
////       This is comparator's window comparator test case.              ////
////                                                                      ////
////    Board Setup:                                                      ////
////       PA26 - COMP0 INPUT                                             ////         
////       PA27 - COMP0 THRESHOLD INPUT                                   ////
////                                                                      ////
////       PA12 - COMP1 INPUT                                             ////
////       PA9  - COMP1 THRESHOLD INPUT                                   ////
////                                                                      ////
////       PA20 - COMP2 INPUT                                             //// 
////       PA13 - COMP2 THRESHOLD INPUT                                   ////
//////////////////////////////////////////////////////////////////////////////

#include <stdint.h> 

#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "comp.h"
#include "gpio.h"

int main(void){

    uint32_t comp_sts;
    UartStdOutInit();
    UartPuts("COMP0 Window Comparator Test.\n");

    comp_cfg_s          comp_cfg_struct;
    comp_win_comp_cfg_s win_comp_cfg, win_comp_cfg2;
    IOMUX_PA_REG_s      iomux_cfg_struct;

    COMP_PWR_EN_WRITE(COMP0_REGS, 1, 0xAB);
    COMP_INTR_EVENT_EN(COMP0_REGS, COMP_INTR_EVENT_COMP_OUT_IDX);
    comp_cfg_struct.enable      = 1;
    comp_cfg_struct.hyst        = COMP_HYST_HIGH;
    comp_cfg_struct.in_p_en     = 1;
    comp_cfg_struct.in_p_sel    = COMP_IN_P_SEL_NON_INV_1;
    comp_cfg_struct.in_m_en     = 1;
    comp_cfg_struct.in_m_sel    = COMP_IN_M_SEL_COMP0_INV_2;
    comp_cfg_struct.in_short    = 0;
    comp_cfg_struct.in_swap     = 0;
    comp_cfg(COMP0_REGS, comp_cfg_struct);

    COMP_PWR_EN_WRITE(COMP1_REGS, 1, 0xAB);
    COMP_INTR_EVENT_EN(COMP1_REGS, COMP_INTR_EVENT_COMP_OUT_IDX);
    comp_cfg_struct.enable      = 1;
    comp_cfg_struct.hyst        = COMP_HYST_HIGH;
    comp_cfg_struct.in_p_en     = 1;
    comp_cfg_struct.in_p_sel    = COMP_IN_P_SEL_NON_INV_1;
    comp_cfg_struct.in_m_en     = 1;
    comp_cfg_struct.in_m_sel    = COMP_IN_M_SEL_COMP1_INV_2;
    comp_cfg_struct.in_short    = 0;
    comp_cfg_struct.in_swap     = 0;
    comp_cfg(COMP1_REGS, comp_cfg_struct);

    win_comp_cfg.enable         = 1;
    win_comp_cfg.win_comp_sel   = COMP_WIN_COMP_SEL_1;
    comp_win_comp_cfg(COMP0_REGS, win_comp_cfg);
    win_comp_cfg2 = get_comp_win_comp_cfg(COMP0_REGS);
    print_int_var("enable : ",win_comp_cfg2.enable, 0);
    print_int_var("win_comp_sel : ",win_comp_cfg2.win_comp_sel, 0);

    iomux_cfg_struct.output_en        = 0;
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 12);
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 9);
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 20);
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 13);

    comp_sts = get_comp_out_sts(COMP0_REGS);
    print_int_var("COMP0_STS : ", comp_sts, 0);

    comp_sts = get_comp_out_sts(COMP1_REGS);
    print_int_var("COMP1_STS : ", comp_sts, 0);
    return 0;
}


