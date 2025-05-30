#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "../../hal/timer/timer.h"

#define TIMER_BASE_ADDRESS  0x3FFD4000 
#define TIMER_REGS ((TIMER_REGS_s *) TIMER_BASE_ADDRESS)  

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

    //====================================================
    //PWM Generation: Edge aligned PWM in up-counting mode
    //40% duty cycle on CC0
    //====================================================
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
    //clk_cfg
    timer_clk_cfg_t default_timer_clk_cfg = TIMER_CLK_CFG_DEFAULT;
    timer_clk_cfg_t *timer_clk_cfg        = &default_timer_clk_cfg;
    timer_clk_cfg->clk_div                = 8;  //4Mhz
 
    //pwm_cfg
    timer_pwm_cfg_t default_timer_pwm_cfg = TIMER_PWM_CFG_DEFAULT;  
    timer_pwm_cfg_t *timer_pwm_cfg        = &default_timer_pwm_cfg;  
    
    timer_set_pwm_cfg(TIMER_REGS, timer_clk_cfg, timer_pwm_cfg);
    
    timer_clk_enable(TIMER_REGS);
    timer_start(TIMER_REGS);
    
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
    timer_pwm_output_channel_action_cfg_t default_pwm_act_cfg = TIMER_PWM_OUTPUT_CHANNEL_ACTION_CFG_DEFAULT;
    timer_pwm_output_channel_action_cfg_t *pwm_act_cfg        = &default_pwm_act_cfg;
    for(int i=0; i<4; i++) {
        timer_set_pwm_output_channel_action_cfg(TIMER_REGS, pwm_act_cfg, i);
    }

    tima0_zero_intr_cnt = 0;
    //======================================================
    //PWM Generation: Edge aligned PWM in down-counting mode
    //33% duty cycle CC1  
    //======================================================
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
    //clk_cfg
    timer_clk_cfg           = &default_timer_clk_cfg;
    timer_clk_cfg->clk_sel  = TIMER_CLK_CONFIG_CLK_SEL_CLK_4MHZ;  //4Mhz
    timer_clk_cfg->clk_div  = 2;  
 
    //pwm_cfg
    timer_pwm_cfg           = &default_timer_pwm_cfg;

    //modifying pwm configuration: ctr_cfg
    //1. counter repeats in down counting mode
    //2. The resetting, loading and advancement of counter are controlled by channel 1 capture conditions
    timer_pwm_cfg->ctr_cfg.ctr_mode = TIMER_CTR_CTL_COUNT_MODE_DOWN;  
    timer_pwm_cfg->ctr_cfg.repeat   = 1;  
    timer_pwm_cfg->ctr_cfg.ctr_zero_cond   = TIMER_CTR_CTL_CTR_ZERO_CTRL_CHANNEL_1_ZERO_COND;  
    timer_pwm_cfg->ctr_cfg.ctr_load_cond   = TIMER_CTR_CTL_CTR_LOAD_CTRL_CHANNEL_1_LOAD_COND;  
    timer_pwm_cfg->ctr_cfg.ctr_adv_cond    = TIMER_CTR_CTL_CTR_ADV_CTRL_CHANNEL_1_ADV_COND  ;  
    
    //PWM frequency = Frequency of clk_sel / (clk_div * pwm_period)
    //In this case PWM freq = 4MHz/(2*200) = 0.01MHz = 10 kHz (time period = 0.1ms)
    //Duty cycle = 33% 
    timer_pwm_cfg->pwm_period       = 200;    //200 clks
    timer_pwm_cfg->pwm_high_period  = 66;     //66 clks

    //channel1
    timer_pwm_cfg->chan_num         = 1;    

    
    timer_set_pwm_cfg(TIMER_REGS, timer_clk_cfg, timer_pwm_cfg);
    
    timer_clk_enable(TIMER_REGS);
    timer_start(TIMER_REGS);
    
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

    pwm_act_cfg = &default_pwm_act_cfg;
    for(int i=0; i<4; i++) {
        timer_set_pwm_output_channel_action_cfg(TIMER_REGS, pwm_act_cfg, i);
    }
    tima0_zero_intr_cnt = 0;
    
    //======================================================
    //PWM Generation: Centre aligned PWM in up-down-counting mode
    //50% duty cycle CC0  
    //======================================================
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
    //clk_cfg
    timer_clk_cfg           = &default_timer_clk_cfg;
    timer_clk_cfg->clk_sel  = TIMER_CLK_CONFIG_CLK_SEL_CLK_BUS;  
    timer_clk_cfg->clk_div  = 2;  
 
    //pwm_cfg
    timer_pwm_cfg           = &default_timer_pwm_cfg;

    //modifying pwm configuration: ctr_cfg
    //1. counter repeats in up-down counting mode
    timer_pwm_cfg->ctr_cfg.ctr_mode = TIMER_CTR_CTL_COUNT_MODE_UP_DOWN;  
    
    //PWM freq = 32MHz/(2*320) = 0.05MHz = 50 kHz (time period = 20us)
    //Duty cycle = 50% 
    timer_pwm_cfg->pwm_period       = 320;    
    timer_pwm_cfg->pwm_high_period  = 160;     

    //channel1
    timer_pwm_cfg->chan_num         = 0;    

    
    timer_set_pwm_cfg(TIMER_REGS, timer_clk_cfg, timer_pwm_cfg);
    
    timer_clk_enable(TIMER_REGS);
    timer_start(TIMER_REGS);
    
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

    pwm_act_cfg = &default_pwm_act_cfg;
    for(int i=0; i<4; i++) {
        timer_set_pwm_output_channel_action_cfg(TIMER_REGS, pwm_act_cfg, i);
    }
    tima0_zero_intr_cnt = 0;

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
