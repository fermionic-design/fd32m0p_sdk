#include <stdio.h>
#include <stdint.h>

#include "uart_stdout.h"

#include "UART_REGS.h"
#include "UART_RW_API.h"

#include "dac.h"

#define IOMUX_REGS  ((IOMUX_REGS_s *) 0x3FFC4000 )
#define UART0_REGS  ((UART_REGS_s *)  0x3ffcc000)
#define DAC_REGS  ((DAC_REGS_s *) 0x3FFD1000)


void UartStdOutInit1(UART_REGS_s * UART_REGS)/*{{{*/
{
    UART_PWR_EN_WRITE(UART_REGS, 1, 0x7D);

    UART_REGS->RST_CTRL.packed_w = 0x7D000001;
    if((UART_REGS->RST_STS.packed_w & UART_RST_STS_RST_STS_MASK) == 1){
      UART_RST_CTRL_WRITE(UART_REGS, 0, 1, 0x7D);
        }
    return;
}/*}}}*/

int main(void) {
    UartStdOutInit1(UART0_REGS);
    UartPuts("DAC Base Test.\n");

    uint32_t dac_code;

    dac_cfg_s   dac_cfg_struct;

    dac_code = 512;

    DAC_REGS->PWR_EN.packed_w = 0xAB000001;
    IOMUX_REGS->PA[15].pull_up = 0;
    IOMUX_REGS->PA[15].input_en = 0;

    dac_cfg_struct.data_fmt         = DAC_CTRL0_DATA_FMT_BINARY;
    dac_cfg_struct.enable           = 1;
    dac_cfg_struct.res              = DAC_CTRL0_RES_13BIT;
    dac_cfg_struct.amp_en           = 1;
    dac_cfg_struct.amp_hiz          = 1;
    dac_cfg_struct.out_en           = 1;
    dac_cfg_struct.vrefp_sel        = DAC_CTRL1_VREFP_SEL_EXT;
    dac_cfg(DAC_REGS, dac_cfg_struct);
        
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
    for (int i = 0; i< 10000 ; i++ );
    UartEndSimulation();
    return 0;
}
