#ifndef dac_h_include
#define dac_h_include

#include "IOMUX_REGS.h"
#include "IOMUX_RW_API.h"

#include "DAC_REGS.h"
#include "DAC_RW_API.h"

#include "GPIO_REGS.h"
#include "GPIO_RW_API.h"

#define DAC_REGS  ((DAC_REGS_s *) 0x3FFD1000)
#define GPIO_REGS  ((GPIO_REGS_s *) 0x40010000)
#define IOMUX_REGS  ((IOMUX_REGS_s *) 0x3FFC4000 )

typedef struct {
    DAC_CTRL0_DATA_FMT_E    data_fmt;
    uint32_t                enable;
    DAC_CTRL0_RES_E         res;
    uint32_t                amp_en;
    uint32_t                amp_hiz;
    uint32_t                out_en;
    DAC_CTRL1_VREFP_SEL_E   vrefp_sel;
    uint32_t                samp_tim_en;
    uint32_t                samp_tim_rate;
} dac_cfg_s;

typedef struct {
    uint32_t                    dma_trig_en;
    DAC_CTRL2_FIFO_TH_E         fifo_th;
    uint32_t                    fifo_en;
    DAC_CTRL2_FIFO_TRIG_SEL_E   fifo_trig_sel;
} dac_dma_cfg_s;

void dac_cfg(DAC_REGS_s *regs, dac_cfg_s dac_cfg_struct);
void dac_dma_cfg(DAC_REGS_s *regs, dac_dma_cfg_s dac_dma_cfg_struct);
void dac_wr_code(DAC_REGS_s *regs, uint32_t dac_code);
dac_cfg_s get_dac_cfg(DAC_REGS_s *regs);
dac_dma_cfg_s get_dac_dma_cfg(DAC_REGS_s *regs);
uint32_t get_dac_wr_code(DAC_REGS_s *regs);

#endif
