//////////////////////////////////////////////////////////////////////////////
////                            COMPO BASIC TEST                          ////
////    DESCRIPTION:                                                      ////      
////       This is a basic comparator test case.                          ////
////                                                                      ////
////    Board Setup:                                                      ////
////        PA20 - COMP INPUT                                             //// 
////        PA13 - COMP THRESHOLD INPUT                                   ////
//////////////////////////////////////////////////////////////////////////////

#include <stdint.h> 

#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "comp.h"
#include "gpio.h"
#include "dac.h"
#include "event_fabric.h"

int main(void){

    uint32_t comp_sts;
    UartStdOutInit();
    UartPuts("COMP0 Basic Test.\n");

    comp_cfg_s          comp_cfg_struct;
    comp_out_cfg_s      comp_out_cfg_struct;
    IOMUX_PA_REG_s      iomux_cfg_struct;
    
    COMP_PWR_EN_WRITE(COMP0_REGS, 1, 0xAB);
    COMP_INTR_EVENT_EN(COMP0_REGS, COMP_INTR_EVENT_COMP_OUT_IDX);
    COMP_GENERIC_EVENT_EN(COMP0_REGS, COMP_INTR_EVENT_COMP_OUT_IDX);


    comp_cfg_struct.enable = 1;
    comp_cfg_struct.hyst = COMP_HYST_LOW;
    comp_cfg_struct.in_p_en = 1;
    comp_cfg_struct.in_p_sel = COMP_IN_P_SEL_NON_INV_0;
    comp_cfg_struct.in_m_en = 1;
    comp_cfg_struct.in_m_sel = COMP_IN_M_SEL_COMP0_INV_2;
    comp_cfg_struct.in_short = 0;
    comp_cfg_struct.in_swap = 0;
    comp_cfg(COMP0_REGS, comp_cfg_struct);
    
    comp_out_cfg_struct.samp_en = 1;
    comp_out_cfg_struct.out_pol = 0;
    comp_out_cfg(COMP0_REGS, comp_out_cfg_struct);

    EVENT_FABRIC_GEN_SUB_N_WRITE(EVENT_FABRIC_REGS, 4, 2);
    EVENT_FABRIC_GEN_PUB_N_WRITE(EVENT_FABRIC_REGS, 9, 2);

    DAC_REGS->EVENT_EN.packed_w = 0x00020002;
    DAC_REGS->INTR_SW_SET.packed_w = 2; //setting DAC interrupt

    iomux_cfg_struct.output_en        = 0;
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 20);
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 13);

    comp_sts = get_comp_out_sts(COMP0_REGS);
    print_int_var("COMP0_STS : ", comp_sts, 0);
    return 0;
}
