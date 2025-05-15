#include <stdio.h>
#include "CMSDK_CM0plus.h"
#include "core_cm0plus.h"
#include "uart_stdout.h"

#include "../../hal/dma/dma.h"

#define PL230_BASE_ADDRESS  0x3FFC1000
#define DMA_BASE_ADDRESS    0x3FFC2000
#define PL230_REGS ((PL230_REGS_s *)    PL230_BASE_ADDRESS) 
#define DMA_REGS   ((DMA_REGS_s   *)    DMA_BASE_ADDRESS)  

// SRAM Memory
typedef struct sram_memory {
    uint32_t mem[1024];
} sram_memory_t;

#define sram_mem_s    ((sram_memory_t *)   0x200000F0)
#define sram_mem_d    ((sram_memory_t *)   0x200004F0)

int main(){
    // Initializing UART
    UartStdOutInit();
    printf("DMA Basic Test\n");
    
    uint32_t failed;
    uint32_t N=10;
    
    // Clk Enable
    DMA_CLK_CTRL_WRITE(DMA_REGS, 1);
    
    //Soft Reset 
    DMA_RST_CTRL_WRITE(DMA_REGS, 1, 0, DMA_RST_CTRL_RST_KEY);
    DMA_RST_CTRL_WRITE(DMA_REGS, 0, 0, DMA_RST_CTRL_RST_KEY);

    // Memory Population
    printf("Memory Population\n");
    for(int i=0; i<20; i++) {
        sram_mem_s->mem[i] = i+1;
    }
   
    // Initialising PL230
    dma_init(PL230_REGS, 0x20000C00);

    // Configuring dma channel configuration
    printf("Configuring Primary Channel\n");
    dma_channel_cfg_t default_channel_cfg = CHANNEL_TRANSFER_CFG_DEFAULT;
    dma_channel_cfg_t *channel_cfg = &default_channel_cfg;
    channel_cfg->src_addr = (uint32_t)sram_mem_s; 
    channel_cfg->dst_addr = (uint32_t)sram_mem_d;
    channel_cfg->src_size = 2;
    channel_cfg->dst_size = 2;
    channel_cfg->total_transaction = N-1;
    dma_channel_cfg(DMA_REGS, PL230_REGS, channel_cfg, DMA_CHANNEL_1);

    dma_channel_en_set(PL230_REGS, DMA_CHANNEL_1);
    dma_channel_sw_trig(PL230_REGS, DMA_CHANNEL_1);

    // Polling for DMA to be idle
    while(!dma_is_idle(PL230_REGS));
   
    // Checker
    for(int i = 0; i < 10; i++){
        if(sram_mem_s->mem[i] == sram_mem_d->mem[i])
            puts("DATA Matching");
        else{
            puts("DATA NOT Matching");
            failed++;
        }
    }
    if(failed==0) {
        puts("** TEST PASSED **");
        UartPass();
    }
    else {
        puts("** TEST FAILED **");
        UartFail();
    }

    puts("** End of Simulation **");
    UartEndSimulation();
    return 0;
}
