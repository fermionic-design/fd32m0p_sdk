#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "../../hal/timer_generic/timer_generic.h"
#include "IOMUX_REGS.h"

#define TIMER_REGS TIMER_G0_REGS

int main(){

    //----------------------------------
    // UART (debug)
    //----------------------------------
    UartStdOutInit();
    UartPuts("PWM Output on PA5 (~7.8kHz)\n");

    //----------------------------------
    // IOMUX CONFIG
    //----------------------------------
    IOMUX_REGS->PA[5].output_en = 1;
    IOMUX_REGS->PA[5].input_en  = 0;
    IOMUX_REGS->PA[5].drive_strength = 2;
    IOMUX_REGS->PA[5].pull_up = 0;
    IOMUX_REGS->PA[5].pull_down = 0;

    // Timer channel output to PA5
    IOMUX_REGS->PA[5].sel = IOMUX_PIN_SEL_PA5_TIMG0_C0;

    //----------------------------------
    // TIMER POWER + RESET
    //----------------------------------
    TIMER_TIMG_NUM_INPUT2_PWR_EN_WRITE(TIMER_REGS, 1, TIMER_PWR_EN_PWR_EN_KEY);

    TIMER_TIMG_NUM_INPUT2_RST_CTRL_WRITE(TIMER_REGS, 1, 0, TIMER_RST_CTRL_RST_KEY);
    TIMER_TIMG_NUM_INPUT2_RST_CTRL_WRITE(TIMER_REGS, 0, 0, TIMER_RST_CTRL_RST_KEY);

    //----------------------------------
    // CLOCK CONFIG
    //----------------------------------
    timer_clk_cfg_t clk_cfg = TIMER_CLK_CFG_DEFAULT;

    // 4MHz / 2 = 2MHz timer clock
    clk_cfg.clk_div = 13;

    //----------------------------------
    // PWM CONFIG
    //----------------------------------
    timer_pwm_cfg_t pwm_cfg = TIMER_PWM_CFG_DEFAULT;

    pwm_cfg.ctr_cfg.ctr_mode = TIMER_CTR_CTL_COUNT_MODE_DOWN;
    pwm_cfg.ctr_cfg.repeat   = 1;

    pwm_cfg.ctr_cfg.ctr_zero_cond = TIMER_CTR_CTL_CTR_ZERO_CTRL_CHANNEL_0_ZERO_COND;
    pwm_cfg.ctr_cfg.ctr_load_cond = TIMER_CTR_CTL_CTR_LOAD_CTRL_CHANNEL_0_LOAD_COND;
    pwm_cfg.ctr_cfg.ctr_adv_cond  = TIMER_CTR_CTL_CTR_ADV_CTRL_CHANNEL_0_ADV_COND;

    //----------------------------------
    // IMPORTANT: PWM SETTINGS
    //----------------------------------
    // Even if you set this, hardware is 8-bit limited
    pwm_cfg.pwm_period      = 256;   // full scale
    pwm_cfg.pwm_high_period = 128;   // 50% duty

    pwm_cfg.chan_num = 0;

    //----------------------------------
    // APPLY CONFIG
    //----------------------------------
    timer_generic_set_pwm_cfg(TIMER_REGS, &clk_cfg, &pwm_cfg);

    timer_generic_clk_enable(TIMER_REGS);
    timer_generic_start(TIMER_REGS);

    //----------------------------------
    // LOOP
    //----------------------------------
    while(1){
        __asm("NOP");
    }
}