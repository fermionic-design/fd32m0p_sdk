#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "../../hal/timer/timer.h"

#define TIMER_BASE_ADDRESS  0x3FFD4000 
//#define IOMUX_BASE_ADDRESS  0x3FFC4000 
#define TIMER_REGS ((TIMER_REGS_s *) TIMER_BASE_ADDRESS)  
//#define IOMUX_REGS ((IOMUX_REGS_s *) IOMUX_BASE_ADDRESS) 

uint8_t  tima0_zero_intr_cnt = 0;
uint8_t  tima0_load_intr_cnt = 0;
uint8_t  tima0_ccu0_intr_cnt = 0;
//TIMA4 event handler
void TIMER_A0_IRQ_Handler(void){
    uint8_t  intr_first;
    intr_first = TIMER_REGS->INTR_STS.intr_first;

    switch(intr_first){
        case TIMER_INTR_EVENT_CTR_ZERO_IDX+1  : tima0_zero_intr_cnt ++; 
                                                TIMER_INTR_EVENT_CLEAR(TIMER_REGS, TIMER_INTR_EVENT_CTR_ZERO_IDX);
                                                break;
        case TIMER_INTR_EVENT_CTR_LOAD_IDX+1  : tima0_load_intr_cnt ++; 
                                                TIMER_INTR_EVENT_CLEAR(TIMER_REGS, TIMER_INTR_EVENT_CTR_LOAD_IDX);
                                                break;
        case TIMER_INTR_EVENT_CCU_0_IDX+1     : tima0_ccu0_intr_cnt ++; 
                                                TIMER_INTR_EVENT_CLEAR(TIMER_REGS, TIMER_INTR_EVENT_CCU_0_IDX);
                                                break;
        default                               : UartPuts("Error");
    }
}

/**
 * timer_a0_disable
 * When one functionality ends use this function to diable timer_a0
 * Once this is done timer is ready to be configured in some other mode
 * Note: If this function is not called it may result in timer manlfunctioning due to retention of previous interrupts   
 */
void timer_a0_disable(void){
    //disable timer
    timer_stop(TIMER_REGS);
    timer_clk_disable(TIMER_REGS);
    
    //clear all interrupts
    for(int i=0; i<19; i++){
        TIMER_INTR_EVENT_CLEAR(TIMER_REGS, i);
    }

    //disable all interrupts
    for(int i=0; i<19; i++){
        TIMER_INTR_EVENT_DIS(TIMER_REGS, i); 
    }
    
    //pwr_disable
    TIMER_PWR_EN_WRITE(TIMER_REGS, 0, TIMER_PWR_EN_PWR_EN_KEY);
}
int main(){
    //==================
    // Initializing UART
    //==================
    UartStdOutInit();
    UartPuts("Timer Basic Test\n");
    
    uint32_t failed;
    
    //TIMA4
    NVIC_ClearPendingIRQ(17);
    NVIC_EnableIRQ(17);

    //======================================
    // periodic interrupt generation testing
    //======================================
    //------------------------------------
    //1. Timer Enable
    //    - Enable Power
    //    - Perform a soft reset
    //    - Enable the relevant interrupts
    //------------------------------------
    //pwr_en
    TIMER_PWR_EN_WRITE(TIMER_REGS, 1, TIMER_PWR_EN_PWR_EN_KEY);

    //soft reset
    TIMER_RST_CTRL_WRITE(TIMER_REGS, 1, 0, TIMER_RST_CTRL_RST_KEY);
    TIMER_RST_CTRL_WRITE(TIMER_REGS, 0, 0, TIMER_RST_CTRL_RST_KEY);
  
    //intr_en(ctr_zero)
    TIMER_INTR_EVENT_EN(TIMER_REGS, TIMER_INTR_EVENT_CTR_ZERO_IDX); 
   
    //----------------------------------------------------------
    //2. Timer Configuration and start
    //    - set the desired configuration
    //    - start off the timer by calling the relevant function
    //----------------------------------------------------------
    //default clk_cfg
    timer_clk_cfg_t default_timer_clk_cfg = TIMER_CLK_CFG_DEFAULT;
    timer_clk_cfg_t *timer_clk_cfg        = &default_timer_clk_cfg;
    
    //default ctr_cfg
    timer_ctr_cfg_t default_timer_ctr_cfg = TIMER_CTR_CFG_DEFAULT;
    timer_ctr_cfg_t *timer_ctr_cfg        = &default_timer_ctr_cfg;
   
    //timer_init generates periodic interrupts every 2048us 
    timer_set_init_cfg(TIMER_REGS, timer_clk_cfg, timer_ctr_cfg);   
   
    while(1){
        __asm("NOP");
        if(tima0_zero_intr_cnt == 5) break;
    }

    //------------------------------------
    //3. Timer Disable
    //    - diable the timer counter
    //    - diable the timer clock
    //    - clear all pending interrupts
    //    - disable all interrupts
    //------------------------------------
    timer_a0_disable();

    //====================
    // delay in us testing
    //====================
    //pwr_en
    TIMER_PWR_EN_WRITE(TIMER_REGS, 1, TIMER_PWR_EN_PWR_EN_KEY);
    
    //soft reset
    TIMER_RST_CTRL_WRITE(TIMER_REGS, 1, 0, TIMER_RST_CTRL_RST_KEY);
    TIMER_RST_CTRL_WRITE(TIMER_REGS, 0, 0, TIMER_RST_CTRL_RST_KEY);
    
    //intr_en(ctr_load)
    TIMER_INTR_EVENT_EN(TIMER_REGS, TIMER_INTR_EVENT_CTR_LOAD_IDX);

    //delay_in_us
    timer_delay_in_us(TIMER_REGS,10); //10us
    
    while(1){
        __asm("NOP");
        if(tima0_load_intr_cnt == 1) break;
    }
    tima0_load_intr_cnt = 0;
    
    timer_a0_disable();

    //====================
    // delay in ms testing
    //====================
    //pwr_en
    TIMER_PWR_EN_WRITE(TIMER_REGS, 1, TIMER_PWR_EN_PWR_EN_KEY);
    
    //soft reset
    TIMER_RST_CTRL_WRITE(TIMER_REGS, 1, 0, TIMER_RST_CTRL_RST_KEY);
    TIMER_RST_CTRL_WRITE(TIMER_REGS, 0, 0, TIMER_RST_CTRL_RST_KEY);
    
    //intr_en(ctr_ccu0)
    TIMER_INTR_EVENT_EN(TIMER_REGS, TIMER_INTR_EVENT_CCU_0_IDX);

    //delay_in_ms
    timer_delay_in_ms(TIMER_REGS,3);  //3ms
    //TIMER_RST_CTRL_WRITE(TIMER_REGS, 1, 0, TIMER_RST_CTRL_RST_KEY);
    //TIMER_RST_CTRL_WRITE(TIMER_REGS, 0, 0, TIMER_RST_CTRL_RST_KEY);
    //timer_start(TIMER_REGS);
   
    while(1){
        __asm("NOP");
        if(tima0_ccu0_intr_cnt == 1) break;
    }
    
    timer_a0_disable();

    //====================
    // delay in us testing
    //====================
    //pwr_en
    TIMER_PWR_EN_WRITE(TIMER_REGS, 1, TIMER_PWR_EN_PWR_EN_KEY);
    
    //soft reset
    TIMER_RST_CTRL_WRITE(TIMER_REGS, 1, 0, TIMER_RST_CTRL_RST_KEY);
    TIMER_RST_CTRL_WRITE(TIMER_REGS, 0, 0, TIMER_RST_CTRL_RST_KEY);
    
    //intr_en(ctr_load)
    TIMER_INTR_EVENT_EN(TIMER_REGS, TIMER_INTR_EVENT_CTR_LOAD_IDX);

    //delay_in_us
    timer_delay_in_us(TIMER_REGS,20); //10us
    
    while(1){
        __asm("NOP");
        if(tima0_load_intr_cnt == 1) break;
    }
    tima0_load_intr_cnt = 0;
    
    timer_a0_disable();
    if(failed==0) {
        UartPuts("** TEST PASSED **");
        UartPass();
    }
    else {
        UartPuts("** TEST FAILED **");
        UartFail();
    }

    UartPuts("** End of Simulation **");
    UartEndSimulation();
    return 0;
}
