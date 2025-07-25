//////////////////////////////////////////////////////////////////////////////
////                            COMP2 BASIC TEST                          ////
////    DESCRIPTION:                                                      ////      
////       This is a basic comparator test case.                          ////
////                                                                      ////
////    Board Setup:                                                      ////
////        PA20 - COMP INPUT                                             //// 
////        PA26 - COMP THRESHOLD INPUT                                   ////
//////////////////////////////////////////////////////////////////////////////

#include <stdint.h> 

#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "comp.h"
#include "gpio.h"

int main(void){

    uint32_t comp_sts;
    UartStdOutInit();
    UartPuts("COMP2 Basic Test.\n");

    comp_cfg_s          comp_cfg_struct, comp_cfg_struct2;
    IOMUX_PA_REG_s      iomux_cfg_struct;
    
    COMP_PWR_EN_WRITE(COMP2_REGS, 1, 0xAB);
    COMP_INTR_EVENT_EN(COMP2_REGS, COMP_INTR_EVENT_COMP_OUT_IDX);
    comp_cfg_struct.enable = 1;
    comp_cfg_struct.hyst = COMP_HYST_HIGH;
    comp_cfg_struct.in_p_en = 1;
    comp_cfg_struct.in_p_sel = COMP_IN_P_SEL_NON_INV_1;
    comp_cfg_struct.in_m_en = 1;
    comp_cfg_struct.in_m_sel = COMP_IN_M_SEL_INV_0;
    comp_cfg_struct.in_short = 0;
    comp_cfg_struct.in_swap = 0;
    comp_cfg(COMP2_REGS, &comp_cfg_struct);
    comp_cfg_struct2 = get_comp_cfg(COMP2_REGS);
    print_int_var("enable : ", comp_cfg_struct2.enable, 0);
    print_int_var("hyst : ", comp_cfg_struct2.hyst, 0);
    print_int_var("in_p_en : ", comp_cfg_struct2.in_p_en, 0);
    print_int_var("in_p_sel : ", comp_cfg_struct2.in_p_sel, 0);
    print_int_var("in_m_en : ", comp_cfg_struct2.in_m_en, 0);
    print_int_var("in_m_sel : ", comp_cfg_struct2.in_m_sel, 0);
    print_int_var("in_short : ", comp_cfg_struct2.in_short, 0);
    print_int_var("in_swap : ", comp_cfg_struct2.in_swap, 0);

    iomux_cfg_struct.output_en        = 0;
    iomux_cfg(IOMUX_REGS, &iomux_cfg_struct, 26);
    iomux_cfg(IOMUX_REGS, &iomux_cfg_struct, 20);

    while(COMP2_REGS->INTR_STS.intr_first == COMP_INTR_EVENT_COMP_OUT_IDX);
    comp_sts = get_comp_out_sts(COMP2_REGS);
    print_int_var("COMP2_STS : ", comp_sts, 0);
    return 0;
}
