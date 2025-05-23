#include "dac.h"

void dac_cfg(DAC_REGS_s *regs, dac_cfg_s dac_cfg_struct){
    regs->CTRL0.data_fmt        = dac_cfg_struct.data_fmt;
    regs->CTRL0.enable          = dac_cfg_struct.enable;
    regs->CTRL0.res             = dac_cfg_struct.res;
    regs->CTRL1.amp_en          = dac_cfg_struct.amp_en;
    regs->CTRL1.amp_hiz         = dac_cfg_struct.amp_hiz;
    regs->CTRL1.vrefp_sel       = dac_cfg_struct.vrefp_sel;
    regs->CTRL1.out_en          = dac_cfg_struct.out_en;
    regs->CTRL3.samp_tim_en     = dac_cfg_struct.samp_tim_en;
    if(dac_cfg_struct.samp_tim_en == 1)
    {
        regs->CTRL3.samp_tim_rate   = 12;   //Only this value is supported.
    }
}

void dac_dma_cfg(DAC_REGS_s *regs, dac_dma_cfg_s dac_dma_cfg_struct){
    regs->CTRL2.fifo_th         = dac_dma_cfg_struct.fifo_th;
    regs->CTRL2.fifo_en         = dac_dma_cfg_struct.fifo_en;
    regs->CTRL2.fifo_trig_sel   = dac_dma_cfg_struct.fifo_trig_sel;
    regs->CTRL2.dma_trig_en     = dac_dma_cfg_struct.dma_trig_en;
}

void dac_wr_code(DAC_REGS_s *regs, uint32_t dac_code){
    regs->DATA.dac_code = dac_code;
}

dac_cfg_s get_dac_cfg(DAC_REGS_s *regs){
    dac_cfg_s dac_cfg_struct;  
    dac_cfg_struct.data_fmt      = regs->CTRL0.data_fmt;
    dac_cfg_struct.enable        = regs->CTRL0.enable;
    dac_cfg_struct.res           = regs->CTRL0.res;        
    dac_cfg_struct.amp_en        = regs->CTRL1.amp_en;     
    dac_cfg_struct.amp_hiz       = regs->CTRL1.amp_hiz;    
    dac_cfg_struct.vrefp_sel     = regs->CTRL1.vrefp_sel;  
    dac_cfg_struct.out_en        = regs->CTRL1.out_en;     
    dac_cfg_struct.samp_tim_en   = regs->CTRL3.samp_tim_en;
    dac_cfg_struct.samp_tim_rate = regs->CTRL3.samp_tim_rate;
    return dac_cfg_struct;
}

dac_dma_cfg_s get_dac_dma_cfg(DAC_REGS_s *regs){
    dac_dma_cfg_s dac_dma_cfg_struct;
    dac_dma_cfg_struct.fifo_th          = regs->CTRL2.fifo_th;      
    dac_dma_cfg_struct.fifo_en          = regs->CTRL2.fifo_en;   
    dac_dma_cfg_struct.fifo_trig_sel    = regs->CTRL2.fifo_trig_sel;
    dac_dma_cfg_struct.dma_trig_en      = regs->CTRL2.dma_trig_en;
    return dac_dma_cfg_struct;
}

uint32_t get_dac_wr_code(DAC_REGS_s *regs){
    uint32_t dac_code;
    dac_code = regs->DATA.dac_code;
    return dac_code;
}
