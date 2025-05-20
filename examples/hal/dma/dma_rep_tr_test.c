#include <stdio.h>
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

void dma_req_gen(int N, int R) {
    uint8_t req_num;
    
    req_num = N - (1<<R);
    while(req_num>0){
        dma_channel_sw_trig(PL230_REGS, DMA_CHANNEL_0);
        while(!(dma_is_idle(PL230_REGS)));
        req_num = req_num - (1<<R);
    }
}

void main() {
    // Initializing UART
    UartStdOutInit();
    
    printf("DMA Repeated Transaction Test\n");
    uint32_t failed;
    uint32_t R;
    uint32_t N;
    
    // Clk Enable
    DMA_CLK_CTRL_WRITE(DMA_REGS, 1);
    
    //Soft Reset 
    DMA_RST_CTRL_WRITE(DMA_REGS, 1, 0, DMA_RST_CTRL_RST_KEY);
    DMA_RST_CTRL_WRITE(DMA_REGS, 0, 0, DMA_RST_CTRL_RST_KEY);

    // Total Transaction and Arbitration rate
    R = 1;
    N = 10 + (1<<R);
    
    // Memory Population
    printf("Memory Population\n");
    for(int i=0; i<10; i++) {
        sram_mem_s->mem[i] = i+1;
    }

    // Pl230 Initialisation
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
    channel_cfg->transfer_type = DMA_TRANS_TYPE_BASIC;
    channel_cfg->r_power = R;
    channel_cfg->repeated_transfer_en = 1;
    dma_channel_cfg(DMA_REGS, PL230_REGS, channel_cfg, DMA_CHANNEL_0);

    // Enabling the channel
    dma_channel_en_set(PL230_REGS, DMA_CHANNEL_0);

    // Generating 
    dma_req_gen(N,R);
    while(!(dma_is_idle(PL230_REGS))); 

    for(int i = 0; i < (N - (1<<R)); i++){
        if(sram_mem_s->mem[i] == sram_mem_d->mem[i])
            puts("DATA Matching");
        else{
            puts("DATA NOT Matching");
            failed++;
        }
    }
    
    // Memory Population
    printf("Memory Re-Population\n");
    for(int i=0; i<10; i++) {
        sram_mem_s->mem[i] = i+2;
    }
    
    dma_req_gen(N,R);
    while(!(dma_is_idle(PL230_REGS))); 

    for(int i = 0; i < (N-(1<<R)); i++){
        if(sram_mem_s->mem[i] == sram_mem_d->mem[i])
            puts("DATA Matching");
        else{
            puts("DATA NOT Matching");
            failed++;
        }
    }

    if(failed)
        printf("** TEST FAILED **\n");
    else 
        printf("** TEST PASSED **\n");
    
    printf("End of Simulation\n");
    UartEndSimulation();
}
