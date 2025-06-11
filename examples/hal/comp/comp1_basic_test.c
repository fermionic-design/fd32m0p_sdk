//////////////////////////////////////////////////////////////////////////////
////                            COMP1 BASIC TEST                          ////
////    DESCRIPTION:                                                      ////      
////       This is a basic comparator test case.                          ////
////                                                                      ////
////    Board Setup:                                                      ////
////        PA11 - COMP INPUT                                             //// 
////        PA9 - COMP THRESHOLD INPUT                                    ////
//////////////////////////////////////////////////////////////////////////////

#include <stdint.h> 

#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "comp.h"
#include "gpio.h"

int main(void){

    uint32_t comp_sts;
    UartStdOutInit();
    UartPuts("COMP1 Basic Test.\n");

    comp_cfg_s          comp_cfg_struct;
    IOMUX_PA_REG_s      iomux_cfg_struct;
    
    COMP_PWR_EN_WRITE(COMP1_REGS, 1, 0xAB);
    COMP_INTR_EVENT_EN(COMP1_REGS, COMP_INTR_EVENT_COMP_OUT_IDX);
    comp_cfg_struct.enable = 1;
    comp_cfg_struct.hyst = COMP_HYST_MEDIUM;
    comp_cfg_struct.in_p_en = 1;
    comp_cfg_struct.in_p_sel = COMP_IN_P_SEL_COMP1_NON_INV_2;
    comp_cfg_struct.in_m_en = 1;
    comp_cfg_struct.in_m_sel = COMP_IN_M_SEL_COMP1_INV_2;
    comp_cfg_struct.in_short = 0;
    comp_cfg_struct.in_swap = 0;
    comp_cfg(COMP1_REGS, comp_cfg_struct);

    iomux_cfg_struct.output_en        = 0;
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 11);
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 9);

    while(COMP1_REGS->INTR_STS.intr_first == COMP_INTR_EVENT_COMP_OUT_IDX);
    comp_sts = get_comp_out_sts(COMP1_REGS);
    print_int_var("COMP1_STS : ", comp_sts, 0);
    return 0;
}
