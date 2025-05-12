#include <stdio.h>
#include <stdlib.h>
#include "math.h"

#include "MCU_CTRL_REGS.h"
#include "MCU_CTRL_RW_API.h"
#include "FLASH_REGS.h"

#define MCU_CTRL_REGS ((MCU_CTRL_REGS_s *) 0x3FFC0000)
#define FLASH_REGS    ((FLASH_REGS_s    *) 0x3FFDC000)

void timing_update(uint32_t tcsctrls, uint32_t tras, uint32_t eeprom_tras, uint32_t trc, uint32_t eeprom_trc, uint32_t tadhr, uint32_t tads, uint32_t twpw, uint32_t tpwcsh, uint32_t twrc, uint32_t twes, uint32_t tbr) {

    FLASH_REGS->TIME_CTRL.tcsctrls    = tcsctrls;
    FLASH_REGS->TIME_CTRL.tras        = tras;
    FLASH_REGS->TIME_CTRL.eeprom_tras = eeprom_tras;
    FLASH_REGS->TIME_CTRL.trc         = trc;
    FLASH_REGS->TIME_CTRL.eeprom_trc  = eeprom_trc;
    FLASH_REGS->TIME_CTRL_1.tadhr   = tadhr;
    FLASH_REGS->TIME_CTRL_1.tads    = tads;
    FLASH_REGS->TIME_CTRL_1.twpw    = twpw;
    FLASH_REGS->TIME_CTRL_1.tpwcsh  = tpwcsh;
    FLASH_REGS->TIME_CTRL_2.twrc    = twrc;
    FLASH_REGS->TIME_CTRL_2.twes    = twes;
    FLASH_REGS->TIME_CTRL_2.tbr     = tbr;

    // Indicating that timing regs have been updated
    FLASH_REGS->TIME_UPTD.flash_config_done = 1; 
    
    //printf("Polling for Done\n");
    while(FLASH_REGS->TIME_UPTD.flash_config_done==1); 
}

void clk_4mz_ps_cfg(int div_fact)
{
    MCU_CTRL_REGS->HF_CLK_CTRL.hf_xo_or_ext_div = div_fact;
}

void hf_div1_div2_sweep(void)
{
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div1 = 8;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 0;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 1;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 2;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 3;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 4;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 5;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 6;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 7;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 8;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 9;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 10;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 11;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 12;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 13;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 14;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 15;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div1 = 2;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 0;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 1;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 2;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 3;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 4;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 5;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 6;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 7;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 8;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 9;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 10;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 11;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 12;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 13;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 14;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 15;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div1 = 0;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 0;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 1;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 2;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 3;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 4;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 5;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 6;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 7;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 8;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 9;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 10;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 11;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 12;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 13;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 14;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = 15;
}

void hf_div1_set(int div_fact)
{
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div1 = div_fact;
}

void hf_div2_set(int div_fact)
{
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_div2 = div_fact;
}

void run0__run2(void)
{
    //Select LF clock
    MCU_CTRL_REGS->AHB_HCLK_CTRL.use_lf_clk = 1;

    //Program Flash for lower clock speed
    //timing_update(30517.578);


    MCU_CTRL_REGS->AHB_HCLK_CTRL.all_hf_clk_off = 1;
   
    //Gate the hf osc
    MCU_CTRL_REGS->ANA_CLK_EN.hf_osc_clk_en_ovrd_en = 1;
    MCU_CTRL_REGS->ANA_CLK_EN.hf_osc_clk_en_ovrd_val = 0;

    //disable hf osc in analog as well
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_disable = 1;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_disable_in_stop = 1;
}

void stop2__run0()
{
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_disable = 0;
    MCU_CTRL_REGS->HF_OSC_CLK_CTRL.hf_osc_disable_in_stop = 0;

    //Ungate hf osc
    MCU_CTRL_REGS->ANA_CLK_EN.hf_osc_clk_en_ovrd_val = 1;
    
    //Switch to hf clock domain
    MCU_CTRL_REGS->AHB_HCLK_CTRL.all_hf_clk_off = 0;
    MCU_CTRL_REGS->AHB_HCLK_CTRL.use_lf_clk = 0;
}



void hf__clk_pll(void)/*{{{*/
{   
    //PLL ENable and PLL Power enable
    MCU_CTRL_REGS->CLK_PWR_EN.pll_pwr_en = 1;
    MCU_CTRL_REGS->PLL_EN.pll_en = 1;

    //Select LF clock
    MCU_CTRL_REGS->AHB_HCLK_CTRL.use_lf_clk = 1;
    timing_update(0,  1,  1,  0,  0,  0,  0,  4,  7,  0,  127,  0);
    MCU_CTRL_REGS->AHB_HCLK_CTRL.all_hf_clk_off = 1;
   
    //Gate the PLL and hf osc
    MCU_CTRL_REGS->ANA_CLK_EN.pll_clk_en_ovrd_en = 1;
    MCU_CTRL_REGS->ANA_CLK_EN.pll_clk_en_ovrd_val = 0;
    MCU_CTRL_REGS->ANA_CLK_EN.hf_osc_clk_en_ovrd_en = 1;
    MCU_CTRL_REGS->ANA_CLK_EN.hf_osc_clk_en_ovrd_val = 0;
   
    //Change the 3:1 mux cgf to select clk pll
    MCU_CTRL_REGS->HF_CLK_CTRL.use_clk_pll = 1;
    MCU_CTRL_REGS->HF_CLK_CTRL.use_hf_osc = 0;

    //Change the input clk to the LF synchronizer (hf_osc to hf_mux)
    MCU_CTRL_REGS->AHB_HCLK_CTRL.only_hf_osc_on = 0;
    
    //Ungate clk PLL and hf osc
    MCU_CTRL_REGS->ANA_CLK_EN.pll_clk_en_ovrd_val = 1;
    MCU_CTRL_REGS->ANA_CLK_EN.hf_osc_clk_en_ovrd_val = 1;
    
    //Swithc to hf clock domain
    MCU_CTRL_REGS->AHB_HCLK_CTRL.all_hf_clk_off = 0;
    timing_update(6,  16,  128,  15,  127,  1,  0,  15,  6,  6,  191999,  6);
    MCU_CTRL_REGS->AHB_HCLK_CTRL.use_lf_clk = 0;
}/*}}}*/

void clk_pll__hf_xo(void)/*{{{*/
{
    //Select LF clock
    MCU_CTRL_REGS->AHB_HCLK_CTRL.use_lf_clk = 1;
    MCU_CTRL_REGS->AHB_HCLK_CTRL.all_hf_clk_off = 1;
   
    //Gate the PLL and hf xo
    MCU_CTRL_REGS->ANA_CLK_EN.pll_clk_en_ovrd_en = 1;
    MCU_CTRL_REGS->ANA_CLK_EN.pll_clk_en_ovrd_val = 0;
    MCU_CTRL_REGS->ANA_CLK_EN.hf_xo_or_ext_clk_ovrd_en = 1;
    MCU_CTRL_REGS->ANA_CLK_EN.hf_xo_or_ext_clk_ovrd_val = 0;
   
    //Change the 3:1 mux cgf to select hf xo
    MCU_CTRL_REGS->HF_CLK_CTRL.use_clk_pll = 0;
    MCU_CTRL_REGS->HF_CLK_CTRL.use_hf_osc = 0;
    
    ////Change the input clk to the LF synchronizer (hf_osc to hf_mux)
    //MCU_CTRL_REGS->AHB_HCLK_CTRL.only_hf_osc_on = 0;
    
    //Ungate clk PLL and hf x0
    MCU_CTRL_REGS->ANA_CLK_EN.pll_clk_en_ovrd_val = 1;
    MCU_CTRL_REGS->ANA_CLK_EN.hf_xo_or_ext_clk_ovrd_val = 1;
    
    //Swithc to hf clock domain
    MCU_CTRL_REGS->AHB_HCLK_CTRL.all_hf_clk_off = 0;
    MCU_CTRL_REGS->AHB_HCLK_CTRL.use_lf_clk = 0;
}/*}}}*/

void hf_xo__hf_osc(void)/*{{{*/
{
    //Select LF clock
    MCU_CTRL_REGS->AHB_HCLK_CTRL.use_lf_clk = 1;
    MCU_CTRL_REGS->AHB_HCLK_CTRL.all_hf_clk_off = 1;
   
    //Gate the hf osc and hf xo
    MCU_CTRL_REGS->ANA_CLK_EN.hf_osc_clk_en_ovrd_en = 1;
    MCU_CTRL_REGS->ANA_CLK_EN.hf_osc_clk_en_ovrd_val = 0;
    MCU_CTRL_REGS->ANA_CLK_EN.hf_xo_or_ext_clk_ovrd_en = 1;
    MCU_CTRL_REGS->ANA_CLK_EN.hf_xo_or_ext_clk_ovrd_val = 0;
   
    //Change the 3:1 mux cgf to select hf xo
    //MCU_CTRL_REGS->HF_CLK_CTRL.use_clk_pll = 0;
    MCU_CTRL_REGS->HF_CLK_CTRL.use_hf_osc = 1;
    
    ////Change the input clk to the LF synchronizer ( to hf_mux to hf_osc)
    MCU_CTRL_REGS->AHB_HCLK_CTRL.only_hf_osc_on = 0;
    
    //Ungate hf osc
    MCU_CTRL_REGS->ANA_CLK_EN.hf_osc_clk_en_ovrd_val = 1;
    MCU_CTRL_REGS->ANA_CLK_EN.hf_xo_or_ext_clk_ovrd_val = 1;
    
    //Switch to hf clock domain
    MCU_CTRL_REGS->AHB_HCLK_CTRL.all_hf_clk_off = 0;
    MCU_CTRL_REGS->AHB_HCLK_CTRL.use_lf_clk = 0;
}/*}}}*/

void hf_mux_use_hf_osc(void)/*{{{*/
{
    MCU_CTRL_REGS->HF_CLK_CTRL.use_clk_pll = 0;
    MCU_CTRL_REGS->HF_CLK_CTRL.use_hf_osc = 1;
}/*}}}*/

void tggl_ps_clk_sel(void)/*{{{*/
{
    MCU_CTRL_REGS->HF_CLK_CTRL.use_precision_clk = 1;
    MCU_CTRL_REGS->HF_CLK_CTRL.use_precision_clk = 0;
}/*}}}*/

void apb_div_cfg(int div_fact)/*{{{*/
{
    MCU_CTRL_REGS->APB_PCLK_CTRL.pclk_div = div_fact;
}/*}}}*/

void use_lf_clk_as_ahb_cfg(int val)/*{{{*/
{
    MCU_CTRL_REGS->AHB_HCLK_CTRL.use_lf_clk = val;
}/*}}}*/

