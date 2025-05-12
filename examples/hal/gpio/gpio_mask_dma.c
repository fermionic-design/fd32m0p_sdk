#include <stdio.h>
#include <stdint.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "CMSDK_CM0plus.h"
#include "core_cm0plus.h"
#include "uart_stdout.h"

#include "GPIO_CAPI.h"

#include "DMA_REGS.h"
#include "DMA_RW_API.h"
#include "EVENT_FABRIC_REGS.h"
#include "EVENT_FABRIC_RW_API.h"
#include "EVENT_FABRIC_CAPI.h"

#define EVENT_FABRIC_REGS   ((EVENT_FABRIC_REGS_s *)      0x3FFC3000)     // EVENT_FABRIC_REGS Common APB Address Space
#define DMA_REGS   ((DMA_REGS_s *)      0x3FFC2000)     // DMA Common APB Address Space  
#define PL230_REGS ((CMSDK_PL230_TypeDef *)    0x3FFC1000)     // PL230 APB Address Space

#define DMA_PUB(n) EVENT_FABRIC_DMA_PUB_##n##_WRITE
#define GPIO_REGS  ((GPIO_REGS_s *) 0x40060000)
#define GPIO_REGS  ((GPIO_REGS_s *) 0x40010000)
#define IOMUX_REGS ((IOMUX_REGS_s *) 0x3FFC4000) //this should iomux address space

// DMA Memory Configuration/*{{{*/
typedef struct ctrl_cfg {
    uint32_t    cycle_ctrl     :3;
    uint32_t    next_useburst  :1;
    uint32_t    n_minus_1      :10;
    uint32_t    r_power        :4;
    uint32_t    src_prot_ctrl  :3;
    uint32_t    dst_prot_ctrl  :3;
    uint32_t    src_size       :2;
    uint32_t    src_inc        :2;  
    uint32_t    dst_size       :2;
    uint32_t    dst_inc        :2;
} ctrl_cfg_t;


typedef struct channel_cfg {
    uint32_t    rsp;
    uint32_t    rdp;
    ctrl_cfg_t  ctrl;
    uint32_t    rsvd;
} channel_cfg_t;

channel_cfg_t primary_ch, alternate_ch;

typedef struct DMA_CFG {
    channel_cfg_t primary_ch[16];
    channel_cfg_t alternate_ch[16];
} channel_mem_t;

#define SRAM        ((channel_mem_t *)   0x20000C00)
/*}}}*/

// SRAM Memory/*{{{*/
typedef struct sram_memory {
    uint32_t mem[1024];
} sram_memory_t;

//sram_memory_t sram_mem_s, sram_mem_d;

#define sram_mem_s    ((sram_memory_t *)   0x200000F0)
#define sram_mem_d    ((sram_memory_t *)   0x200004F0)

/*}}}*/

void dma_pl230_init(void) /*{{{*/
{
  unsigned int current_state;
  puts ("Initialize PL230");
  current_state = PL230_REGS->DMA_STATUS;
  
  current_state = (PL230_REGS->DMA_STATUS >> 4)  & 0xF;
  
  if (!((current_state==0) || (current_state==0x8) || (current_state==0x9))) {
    puts ("- wait for DMA IDLE/STALLED/DONE");
    current_state = (PL230_REGS->DMA_STATUS >> 4)  & 0xF;

    }
  while (!((current_state==0) || (current_state==0x8) || (current_state==0x9))){
    current_state = (PL230_REGS->DMA_STATUS >> 4)  & 0xF;
    }
  PL230_REGS->DMA_CFG = 0; /* Disable DMA controller for initialization */
  PL230_REGS->CTRL_BASE_PTR = 0x20000C00;
                           /* Set DMA data structure address */
  PL230_REGS->CHNL_ENABLE_CLR = 0xFFFFFFFF; /* Disable all channels */
  PL230_REGS->CHNL_ENABLE_SET = (1<<0); /* Enable channel 0 */
  PL230_REGS->DMA_CFG = 1;              /* Enable DMA controller */

  return;
} /*}}}*/

void dma_congig_pc(uint8_t ch_no, unsigned int src, unsigned int dest, unsigned int size/*0:byte 1:HW 2:word*/, unsigned int N) /*{{{*/
{
    unsigned long src_end_pointer =  src + ((1<<size)*(N-1));
    unsigned long dst_end_pointer = dest + ((1<<size)*(N-1));

    SRAM->primary_ch[ch_no].rsp = src_end_pointer;
    SRAM->primary_ch[ch_no].rdp = dst_end_pointer;

    SRAM->primary_ch[ch_no].ctrl.cycle_ctrl = 2; 
    SRAM->primary_ch[ch_no].ctrl.n_minus_1 = N-1;
    SRAM->primary_ch[ch_no].ctrl.r_power = 0;

    SRAM->primary_ch[ch_no].ctrl.src_size = size;
    SRAM->primary_ch[ch_no].ctrl.src_inc  = size;
    SRAM->primary_ch[ch_no].ctrl.dst_size = size;
    SRAM->primary_ch[ch_no].ctrl.dst_inc  = size;

    SRAM->primary_ch[ch_no].ctrl.next_useburst  = 0;
    SRAM->primary_ch[ch_no].ctrl.src_prot_ctrl  = 0;
    SRAM->primary_ch[ch_no].ctrl.dst_prot_ctrl  = 0;
} /*}}}*/

void dma_congig_ac(uint8_t ch_no, unsigned int src, unsigned int dest, unsigned int size/*0:byte 1:HW 2:word*/, unsigned int N) /*{{{*/
{
    unsigned long src_end_pointer =  src + ((1<<size)*(N-1));
    unsigned long dst_end_pointer = dest + ((1<<size)*(N-1));

    SRAM->alternate_ch[ch_no].rsp = src_end_pointer;
    SRAM->alternate_ch[ch_no].rdp = dst_end_pointer;

    SRAM->alternate_ch[ch_no].ctrl.cycle_ctrl = 2; //TODO: Update as input
    SRAM->alternate_ch[ch_no].ctrl.n_minus_1 = N-1;
    SRAM->alternate_ch[ch_no].ctrl.r_power = 0; //TODO: update as input

    SRAM->alternate_ch[ch_no].ctrl.src_size = size;
    SRAM->alternate_ch[ch_no].ctrl.src_inc  = size;
    SRAM->alternate_ch[ch_no].ctrl.dst_size = size;
    SRAM->alternate_ch[ch_no].ctrl.dst_inc  = size;

    SRAM->alternate_ch[ch_no].ctrl.next_useburst  = 0;
    SRAM->alternate_ch[ch_no].ctrl.src_prot_ctrl  = 0;
    SRAM->alternate_ch[ch_no].ctrl.dst_prot_ctrl  = 0;
} /*}}}*/


int main(void) {
    unsigned int current_state;
    unsigned int N;  //Number of transfers
    int failed = 0;
    uint32_t gpio_mask=0;
    uint32_t gpio_dout=0;
    uint32_t gpio_data_out=0;
    uint32_t gpio_data=0;
    int i;

    UartStdOutInit();
    printf("DMA Basic Test\n");
    
    //IOMUX for GPIO
    for (i=0;i<29;i=i+1)
    {
        IOMUX_PA_N_WRITE(IOMUX_REGS, i, 1, 0, 0, 0, 0, 0, 0, 1, 0);
    }
    //clk enable
    DMA_REGS->CLK_CTRL.packed_w = 0xBC000001;
    
    //Soft Reset 
    DMA_REGS->RST_CTRL.packed_w = 0xBC000001;
    DMA_REGS->RST_CTRL.packed_w = 0xBC000000;
    
    //GPIO dma mask enable/disable
    gpio_data_out = 0x0FFFFFFF;
    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
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
    printf("Memory Population\n");
    for(int i=0; i<20; i++) 
    {
        sram_mem_s->mem[i] = rand();
    }

    sram_memory_t   *ptr_s, *ptr_d;

    ptr_s = sram_mem_s;
    ptr_d = sram_mem_d;

    printf("Configuring Primary Channel\n");
    dma_congig_pc(/*ch_no:*/ 0, /*src:*/ (unsigned int)(sram_mem_s), /*dest:*/ (unsigned int)(0x40060058), /*size:*/ 2, /*N:*/N); 
    
    //initialize DMA
    dma_pl230_init();

    //Channel Configuration
    PL230_REGS->CHNL_ENABLE_SET = (1<<0);   /* Enable channel 0 */
    PL230_REGS->CHNL_SW_REQUEST = (1<<0);   /* request channel 0 DMA */

    do 
    { /* Wait until PL230 DMA controller return to idle state */
        current_state = (PL230_REGS->DMA_STATUS >> 4)  & 0xF;
    } while (current_state!=0);

    gpio_dout = get_gpio_dout(GPIO_REGS);
    print_int_var("gpio_dout: ", gpio_dout, 1); 
    if((((gpio_dout & gpio_mask) == (sram_mem_s[0].mem[0] & gpio_data_out & gpio_mask))))
    {
        puts("DATA Matching");
    }else
    {
        puts("DATA NOT Matching");
        failed++;
    }
    if(failed == 0)
    {
        printf("** TEST PASSED **\n");
        UartPass();
    }
    else
    { 
        printf("** TEST FAILED**\n");
        UartFail();
    }

    PL230_REGS->CHNL_ENABLE_CLR = (1<<0);   /* disable channel 0 */

    printf("End of Simulation\n");
    UartEndSimulation();
    return 0;
}


