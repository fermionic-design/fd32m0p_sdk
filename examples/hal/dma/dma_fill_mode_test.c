#include"uart_stdout_mcu.h"
#include "FD32M0P.h"
#include "../../hal/dma/dma.h"

// SRAM Memory
typedef struct sram_memory {
    uint32_t mem[1024];
} sram_memory_t;

#define sram_mem_s    ((sram_memory_t *)   0x200000F0)
#define sram_mem_d    ((sram_memory_t *)   0x200004F0)

int main(void) {
    
    unsigned int N;
    int failed = 0;
    unsigned int init_val = 0x01;
    unsigned int incr_val = 0x02;

    UartStdOutInit();
    UartPuts("DMA Fill mode Test\n");

    //clk enable
    DMA_CLK_CTRL_WRITE(DMA_MCU_REGS, 1);
    
    //Soft Reset 
    DMA_RST_CTRL_WRITE(DMA_MCU_REGS, 1, 0, DMA_RST_CTRL_RST_KEY);
    DMA_RST_CTRL_WRITE(DMA_MCU_REGS, 0, 0, DMA_RST_CTRL_RST_KEY);

    // Total Transaction
    N = 10; 

    // Memory Population
    UartPuts("Memory Population\n");
    for(int i=0; i<20; i++) {
        sram_mem_s->mem[i] = i+1;
    }

    // Initialising PL230
    dma_init(DMA_PL230_REGS, 0x20000C00);

    // Configuring dma channel configuration
    UartPuts("Configuring Primary Channel\n");
    dma_channel_cfg_t default_channel_cfg = CHANNEL_TRANSFER_CFG_DEFAULT;
    dma_channel_cfg_t *channel_cfg = &default_channel_cfg;
    channel_cfg->src_addr = (uint32_t)0x20000000; 
    channel_cfg->dst_addr = (uint32_t)sram_mem_d;
    channel_cfg->src_size = 2;
    channel_cfg->src_incr = 3;
    channel_cfg->dst_size = 2;
    channel_cfg->total_transaction = N-1; 
    channel_cfg->fill_en = 1;
    channel_cfg->fill_incr_value = incr_val;
    channel_cfg->fill_init_value = init_val;
    dma_channel_cfg(DMA_MCU_REGS, DMA_PL230_REGS, channel_cfg, DMA_CHANNEL_0);
    
    dma_channel_en_set(DMA_PL230_REGS, DMA_CHANNEL_0);
    dma_channel_sw_trig(DMA_PL230_REGS, DMA_CHANNEL_0);
    
    // Polling for DMA to be idle
    while(!dma_is_idle(DMA_PL230_REGS));

    // Checker
    for(int i = 0; i < N; i++){
        if(sram_mem_d->mem[i] == init_val+(i*incr_val))
            UartPuts("DATA Matching\n");
        else{
            UartPuts("DATA NOT Matching\n");
            failed++;
        }
    }

    if(failed == 0){
        UartPuts("** TEST PASSED **\n");
        UartPass();
    }
    else{ 
        UartPuts("** TEST FAILED**\n");
        UartFail();
    }
    
    UartPuts("End of Simulation\n");
    UartEndSimulation();
    return 0;
}
