//////////////////////////////////////////////////////////////////////////////
////                        GPIO CLR TEST                                 ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test the clear functionality.      ////
////                                                                      ////
////                                                                      ////
////    Board Setup:                                                      ////
////        Output pins for which GPIO CLR is set will be cleared.        //// 
////                                                                      ////
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdint.h> 

#include "uart_stdout.h"

#include "GPIO_CAPI.h"

#define GPIO_REGS  ((GPIO_REGS_s *) 0x40010000)
#define IOMUX_REGS  ((IOMUX_REGS_s *) 0x3FFC4000 )

int main(void) {

    uint32_t iomux_val;
    uint32_t iomux_val_rd;
    uint32_t failed = 0;
    uint32_t i;
    UartStdOutInit();
    IOMUX_PA_REG_s iomux_cfg_struct;

    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
    printf("Power EN Reg Written.\n");

    printf("GPIO CLR Base Test\n");
    
    gpio_dout_en(GPIO_REGS, 0xFFFFFFFF);
    
    printf("All Pins are enabled on GPIO.\n");

    for (i=0;i<29;i=i+1)
    {
        IOMUX_PA_N_WRITE(IOMUX_REGS, i, 1, 0, 0, 0, 0, 0, 0, 1, 0);
    } 
    iomux_cfg_struct = get_gpio_iomux_cfg(IOMUX_REGS, 5);
    
    print_int_var("output_en      ",iomux_cfg_struct.output_en     ,0); 
    print_int_var("input_en       ",iomux_cfg_struct.input_en      ,0); 
    print_int_var("drive_strength ",iomux_cfg_struct.drive_strength,0); 
    print_int_var("slew_rate      ",iomux_cfg_struct.slew_rate     ,0); 
    print_int_var("pull_up        ",iomux_cfg_struct.pull_up       ,0); 
    print_int_var("pull_down      ",iomux_cfg_struct.pull_down     ,0); 
    print_int_var("hysteresis     ",iomux_cfg_struct.hysteresis    ,0); 
    print_int_var("sel            ",iomux_cfg_struct.sel           ,0); 
    print_int_var("rsvd_0         ",iomux_cfg_struct.rsvd_0        ,0); 
    print_int_var("input_val      ",iomux_cfg_struct.input_val     ,0); 

    printf("Writing AAAA_AAAA on O/P of GPIO.\n");
    gpio_dout(GPIO_REGS, 0xAAAAAAAA);
    gpio_clr(GPIO_REGS, 0xFFFFFFFF);
    gpio_clr_en(GPIO_REGS, 0x00000000);

    iomux_val_rd = get_gpio_dout(GPIO_REGS); 
    if(iomux_val_rd == 0)
    {
        failed = 0;
    }
    else
    {
        failed++;
    }

    if(failed == 0)
    {
        printf("-- GPIO CLR TEST PASSED **\n");
        UartPass();
    }
    else
    { 
        printf("** GPIO CLR TEST FAILED**\n");
        UartFail();
    }

    for (int i = 0; i< 10000 ; i++ );
    UartEndSimulation();
    return 0;
}

