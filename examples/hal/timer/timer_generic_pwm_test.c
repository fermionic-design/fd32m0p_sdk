
#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "../../hal/timer_generic/timer_generic.h"
#include "IOMUX_REGS.h"

#define TIMER_REGS TIMER_G0_REGS

int main(){

    UartStdOutInit();
    UartPuts("PWM Output on PA5\n");

    //----------------------------------
    // 🔴 IOMUX CONFIG (CORRECT)
    //----------------------------------
    IOMUX_REGS->PA[5].output_en = 1;
    IOMUX_REGS->PA[5].input_en  = 0;
    IOMUX_REGS->PA[5].drive_strength = 2;
    IOMUX_REGS->PA[5].pull_up = 0;
    IOMUX_REGS->PA[5].pull_down = 0;


    IOMUX_REGS->PA[5].sel = IOMUX_PIN_SEL_PA5_TIMG0_C0;   // TIMG0_C0

    //----------------------------------
    // TIMER ENABLE
    //----------------------------------
    TIMER_TIMG_NUM_INPUT2_PWR_EN_WRITE(TIMER_REGS, 1, TIMER_PWR_EN_PWR_EN_KEY);

    TIMER_TIMG_NUM_INPUT2_RST_CTRL_WRITE(TIMER_REGS, 1, 0, TIMER_RST_CTRL_RST_KEY);
    TIMER_TIMG_NUM_INPUT2_RST_CTRL_WRITE(TIMER_REGS, 0, 0, TIMER_RST_CTRL_RST_KEY);

    //----------------------------------
    // CLOCK CONFIG
    //----------------------------------
    timer_clk_cfg_t default_timer_clk_cfg = TIMER_CLK_CFG_DEFAULT;
    timer_clk_cfg_t *timer_clk_cfg        = &default_timer_clk_cfg;
    timer_clk_cfg->clk_div                = 8;  //4Mhz

    //----------------------------------
    // PWM CONFIG
    //----------------------------------
    timer_pwm_cfg_t default_timer_pwm_cfg = TIMER_PWM_CFG_DEFAULT;  
    timer_pwm_cfg_t *timer_pwm_cfg        = &default_timer_pwm_cfg;  
    timer_pwm_cfg->ctr_cfg.ctr_mode = TIMER_CTR_CTL_COUNT_MODE_DOWN;  
    timer_pwm_cfg->ctr_cfg.repeat   = 1;  
    timer_pwm_cfg->ctr_cfg.ctr_zero_cond   = TIMER_CTR_CTL_CTR_ZERO_CTRL_CHANNEL_0_ZERO_COND;  
    timer_pwm_cfg->ctr_cfg.ctr_load_cond   = TIMER_CTR_CTL_CTR_LOAD_CTRL_CHANNEL_0_LOAD_COND;  
    timer_pwm_cfg->ctr_cfg.ctr_adv_cond    = TIMER_CTR_CTL_CTR_ADV_CTRL_CHANNEL_0_ADV_COND  ;  

    timer_generic_set_pwm_cfg(TIMER_REGS, timer_clk_cfg, timer_pwm_cfg);
    
    timer_generic_clk_enable(TIMER_REGS);
    timer_generic_start(TIMER_REGS);
 
    while(1){
        __asm("NOP");
    }
}
