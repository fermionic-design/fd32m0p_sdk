//////////////////////////////////////////////////////////////////////////////
////                        GPIO MASK DMA TEST                            ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test the GPIO DMA Mask             ////
////        functionality.                                                ////
////                                                                      ////
////    Board Setup:                                                      ////
////        Output pins for which GPIO Mask is set will be set            //// 
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>
#include <stdint.h>

#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "gpio.h"
#include "event_fabric.h"
#include "dma.h"

typedef struct sram_memory {
    uint32_t mem[1024];
} sram_memory_t;

#define sram_mem_s    ((sram_memory_t *)   0x200000F0)
#define sram_mem_d    ((sram_memory_t *)   0x200004F0)

int main(void) {
    uint32_t current_state;
    uint32_t N;  //Number of transfers
    uint32_t failed = 0;
    uint32_t gpio_mask=0;
    uint32_t gpio_dout=0;
    uint32_t gpio_data_out=0;
    uint32_t i;

    IOMUX_PA_REG_s iomux_cfg_struct;
    UartStdOutInit();
    UartPuts("DMA Basic Test\n");
    
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
        if(i == 17) continue;
        iomux_cfg(IOMUX_REGS, iomux_cfg_struct, i);
        
    }

    DMA_MCU_REGS->CLK_CTRL.packed_w = 0xBC000001;
    DMA_MCU_REGS->RST_CTRL.packed_w = 0xBC000001;
    DMA_MCU_REGS->RST_CTRL.packed_w = 0xBC000000;
    
    //GPIO dma mask enable/disable
    gpio_data_out = 0x0FFFFFFF;
    GPIO_PWR_EN_WRITE(GPIO_REGS, 1, GPIO_PWR_EN_PWR_EN_KEY);
    gpio_dout_en(GPIO_REGS, 0xFFFFFFFF);
    
    #ifdef GPIO_DMA_MASK_EN
        gpio_dma_cfg(GPIO_REGS, 0xFFFFFFFF);
    #elif GPIO_DMA_MASK_PARTIAL_EN 
        gpio_dma_cfg(GPIO_REGS, 0x0F0F0F0F);
    #else
        gpio_dma_cfg(GPIO_REGS, 0x00000000);
    #endif
    gpio_mask = get_gpio_dma_cfg(GPIO_REGS);
    print_int_var("gpio_mask: ", gpio_mask, 1);
    N = 1; // Total 1 dma Transfers
    // Memory Population
    UartPuts("Memory Population\n");
    for(int i=0; i<20; i++) 
    {
        sram_mem_s->mem[i] = rand();
    }

    UartPuts("Configuring Primary Channel\n");
    //Initializing DMA
    dma_init(DMA_PL230_REGS, 0x20000C00);

    //DMA Configuration
    dma_channel_cfg_t default_channel_cfg = CHANNEL_TRANSFER_CFG_DEFAULT;
    dma_channel_cfg_t *primary_ch = &default_channel_cfg;

    primary_ch->src_addr = 0x200000F0;            
    primary_ch->dst_addr = 0x40060058;            
    primary_ch->total_transaction = N;   
    primary_ch->src_size = 2;  
    primary_ch->src_incr = 2;            
    primary_ch->dst_size = 2;            
    primary_ch->dst_incr = 2;
    primary_ch->r_power  = 0;

    dma_channel_cfg(DMA_MCU_REGS, DMA_PL230_REGS, primary_ch, DMA_CHANNEL_0);
    dma_channel_en_set(DMA_PL230_REGS, DMA_CHANNEL_0);
    do 
    { /* Wait until PL230 DMA controller return to idle state */
        current_state = (DMA_PL230_REGS->DMA_STATUS.packed_w >> 4)  & 0xF;
    } while (current_state!=0);

    gpio_dout = get_gpio_dout(GPIO_REGS);
    print_int_var("gpio_dout: ", gpio_dout, 1); 
    if((((gpio_dout & gpio_mask) == (sram_mem_s[0].mem[0] & gpio_data_out & gpio_mask))))
    {
        UartPuts("DATA Matching");
    }else
    {
        UartPuts("DATA NOT Matching");
        failed++;
    }
    if(failed == 0)
    {
        UartPuts("** TEST PASSED **\n");
        UartPass();
    }
    else
    { 
        UartPuts("** TEST FAILED**\n");
        UartFail();
    }
    DMA_PL230_REGS->CHNL_ENABLE_CLR.packed_w = (1<<0);   /* disable channel 0 */

    UartPuts("End of Simulation\n");
    UartEndSimulation();
    return 0;
}


