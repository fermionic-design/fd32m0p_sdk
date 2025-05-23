//////////////////////////////////////////////////////////////////////////////
////                        GPIO SUBSCRIBER TEST                          ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test the gpio as a subscriber      ////
////                                                                      ////
////    Board Setup:                                                      ////
////        The pins configured for subscriber will see the desired       ////
////        action on them(i.e. Set, TGL or CLR)                          ////
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////


#include <stdint.h> 

#include "uart_stdout_mcu.h"
#include "FD32M0P.h"
#include "gpio.h"
#include "EVENT_FABRIC_CAPI.h"

int main(void) {
    #if SEED
        srand(SEED);
    #endif
    uint32_t gpio_outs;
    uint32_t i, sub_cfg_reg, sub_en, action, bit_num, dout;
    GPIO_SUB_CFG_REG_s sub_cfg_val;
    IOMUX_PA_REG_s iomux_cfg_struct;
    UartStdOutInit();

    GPIO_PWR_EN_WRITE(GPIO_REGS, 1, GPIO_PWR_EN_PWR_EN_KEY);
    UartPuts("Power EN Reg Written.\n");

    UartPuts("GPIO Base Test\n");
  
    iomux_cfg_struct.output_en        = 1;
    iomux_cfg_struct.input_en         = 0;
    iomux_cfg_struct.drive_strength   = 0;
    iomux_cfg_struct.slew_rate        = 0;
    iomux_cfg_struct.pull_up          = 0;
    iomux_cfg_struct.pull_down        = 0;
    iomux_cfg_struct.hysteresis       = 0;
    iomux_cfg_struct.sel              = 1;
    iomux_cfg_struct.input_val        = 0;

    for (i=0;i<28;i=i+1)
    {
        iomux_cfg(IOMUX_REGS, iomux_cfg_struct, i);
        
    }

    gpio_dout_en(GPIO_REGS, 0xFFFFFFFF);
   
    GPIO_GENERIC_EVENT_EN(GPIO_REGS, 10);
    GPIO_GENERIC_EVENT_EN(GPIO_REGS, 24);
    //GPIO_REGS->EVENT_EN0.packed_w = 0xFFFFFFFF;
    //GPIO_REGS->EVENT_EN1.packed_w = 0xFFFFFFFF;
    
    //dout = sram_mem_loc->mem[2];
    gpio_dout(GPIO_REGS, dout);
    
    sub_en      =   1;
    action      =   0;
    bit_num     =   10;
    
    gpio_sub_cfg(GPIO_REGS, 0, sub_en, action, bit_num);
    
    sub_en      =   1; 
    action      =   2;
    bit_num     =   24;

    gpio_sub_cfg(GPIO_REGS, 1, sub_en, action, bit_num);
    
    print_int_var("SUB1 : ",GPIO_REGS->SUB_CFG[1].packed_w,1);

    sub_cfg_val = get_gpio_sub_cfg(GPIO_REGS, 0);
    print_int_var("SUB_CFG0_sub_en : ",sub_cfg_val.sub_en, 1);
    print_int_var("SUB_CFG0_action : ",sub_cfg_val.action, 1);
    print_int_var("SUB_CFG0_bit_num : ",sub_cfg_val.bit_num, 1);

    sub_cfg_val = get_gpio_sub_cfg(GPIO_REGS, 1);
    print_int_var("SUB_CFG1_sub_en : ",sub_cfg_val.sub_en, 1);
    print_int_var("SUB_CFG1_action : ",sub_cfg_val.action, 1);
    print_int_var("SUB_CFG1_bit_num : ",sub_cfg_val.bit_num, 1);

    EVENT_FABRIC_GEN_SUB_N_WRITE(EVENT_FABRIC_REGS, 3, 2);
    EVENT_FABRIC_GEN_PUB_N_WRITE(EVENT_FABRIC_REGS, 9, 2);

    DAC_REGS->EVENT_EN.packed_w = 0x00020002;
    DAC_REGS->INTR_SW_SET.packed_w = 2; //setting DAC interrupt

    gpio_outs =  get_gpio_dout(GPIO_REGS);
    print_int_var("gpio_outs :  ",gpio_outs,1);

    for (int i = 0; i< 10000 ; i++ );
    UartEndSimulation();
    return 0;
}
