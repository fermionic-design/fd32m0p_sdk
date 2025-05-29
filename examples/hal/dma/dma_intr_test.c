#include"uart_stdout_mcu.h"
#include "FD32M0P.h"
#include "../../hal/dma/dma.h"


// SRAM Memory
typedef struct sram_memory {
    uint32_t mem[1024];
} sram_memory_t;

#define sram_mem_s    ((sram_memory_t *)   0x200000F0)
#define sram_mem_d    ((sram_memory_t *)   0x200004F0)

void main(){
    // initializing UART
    UartStdOutInit();
    UartPuts("DMA Basic Test\n");
    
    // clk enable
    DMA_CLK_CTRL_WRITE(DMA_MCU_REGS, 1);
    
    //soft Reset 
    DMA_RST_CTRL_WRITE(DMA_MCU_REGS, 1, 0, DMA_RST_CTRL_RST_KEY);
    DMA_RST_CTRL_WRITE(DMA_MCU_REGS, 0, 0, DMA_RST_CTRL_RST_KEY);

    // memory Population
    UartPuts("Memory Population\n");
    for(int i=0; i<20; i++) {
        sram_mem_s->mem[i] = i+1;
    }

    UartPuts("Configuring Primary Channel\n");  
    dma_channel_cfg_t default_channel_cfg = CHANNEL_TRANSFER_CFG_DEFAULT;
    dma_channel_cfg_t *channel_cfg = &default_channel_cfg;
    channel_cfg->src_addr = (uint32_t)sram_mem_s; 
    channel_cfg->dst_addr = (uint32_t)sram_mem_d;
    channel_cfg->src_size = 2;
    channel_cfg->dst_size = 2;
    channel_cfg->total_transaction = 10-1;

    // Initializing Pl230
    dma_init(DMA_PL230_REGS, 0x20000C00);

    // Uploading DMA configuration
    dma_channel_cfg(DMA_MCU_REGS, DMA_PL230_REGS, channel_cfg, DMA_CHANNEL_1);

    // Channel Enable
    dma_channel_en_set(DMA_PL230_REGS, DMA_CHANNEL_1);

    // DMA Interrupts are connected to 26th IRQ
    NVIC_ClearPendingIRQ(26);
    NVIC_EnableIRQ(26);
    
    DMA_INTR_EVENT_EN(DMA_MCU_REGS, DMA_INTR_EVENT_DMA_DONE_1_IDX);
    
    // Channel sw trigger
    dma_channel_sw_trig(DMA_PL230_REGS, DMA_CHANNEL_1);

    while(1);
}

void DMA_IRQ_Handler(void)
{
    uint32_t intr_sts;
    intr_sts = DMA_MCU_REGS->INTR_STS.packed_w;

    switch(intr_sts)
    {
        case DMA_INTR_EVENT_DMA_DONE_1_IDX+1 : UartPuts("DMA Done Recieved for Channel 1\n");
                                               break;
        default                              : UartPuts("Error :  DMA Done not recieved for Channel 1\n");            
    }

    // Data Checker
    uint8_t failed = 0;
    for(int i = 0; i < 10; i++){
        if(sram_mem_s->mem[i] == sram_mem_d->mem[i])
            UartPuts("DATA Matching\n");
        else{
            UartPuts("DATA NOT Matching\n");
            failed++;
        }
    }
    if(failed==0) {
        UartPuts("** TEST PASSED **\n");
        UartPass();
    }
    else {
        UartPuts("** TEST FAILED **\n");
        UartFail();
    }

    UartPuts("** End of Simulation **\n");
    UartEndSimulation();
}
