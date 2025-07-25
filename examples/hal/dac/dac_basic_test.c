//////////////////////////////////////////////////////////////////////////////
////                        DAC BASIC TEST                                ////
////    DESCRIPTION:                                                      ////      
////        This is DAC basic test. DAC code is written and output        ////
////        can be observed on PA15                                       ////
////    Board Setup:                                                      ////
////        PA15 - DAC output                                             ////
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////

#include <stdint.h>

#include "uart_stdout_mcu.h"
#include "gpio.h"
#include "dac.h"

int main(void) {
    UartStdOutInit();
    UartPuts("DAC Basic Test.\n");

    uint32_t        dac_code;
    IOMUX_PA_REG_s  iomux_cfg_struct;
    dac_cfg_s       dac_cfg_struct;

    dac_code = 4096;

    DAC_PWR_EN_WRITE(DAC_REGS, 1, DAC_PWR_EN_PWR_EN_KEY);

    iomux_cfg_struct.output_en        = 0;
    iomux_cfg_struct.input_en         = 0;
    iomux_cfg(IOMUX_REGS, &iomux_cfg_struct, 15);

    dac_cfg_struct.data_fmt         = DAC_CTRL0_DATA_FMT_BINARY;
    dac_cfg_struct.enable           = 1;
    dac_cfg_struct.res              = DAC_CTRL0_RES_13BIT;
    dac_cfg_struct.amp_en           = 1;
    dac_cfg_struct.amp_hiz          = 1;
    dac_cfg_struct.out_en           = 1;
    dac_cfg_struct.vrefp_sel        = DAC_CTRL1_VREFP_SEL_EXT;
    dac_cfg(DAC_REGS, &dac_cfg_struct);
    dac_cfg_struct = get_dac_cfg(DAC_REGS);
    print_int_var("data_fmt ", dac_cfg_struct.data_fmt, 0);
    print_int_var("enable ", dac_cfg_struct.enable, 0);
    print_int_var("res ", dac_cfg_struct.res, 0);     
    print_int_var("amp_en ", dac_cfg_struct.amp_en, 0);  
    print_int_var("amp_hiz ", dac_cfg_struct.amp_hiz, 0); 
    print_int_var("out_en ", dac_cfg_struct.out_en, 0);  
    print_int_var("vrefp_sel ", dac_cfg_struct.vrefp_sel, 0);

    dac_wr_code(DAC_REGS, dac_code);
    UartPuts("DAC DATA Written\n.");
    
    dac_code = get_dac_wr_code(DAC_REGS);
    print_int_var("dac_code :", dac_code, 0);

    UartPuts("Test Ended\n.");
    UartEndSimulation();
    return 0;
}
