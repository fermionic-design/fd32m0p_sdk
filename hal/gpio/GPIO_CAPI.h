#ifndef gpio_h_include
#define gpio_h_include

#include "GPIO_REGS.h"
#include "GPIO_RW_API.h"

#include "IOMUX_REGS.h"
#include "IOMUX_RW_API.h"

#define GPIO_REGS  ((GPIO_REGS_s *) 0x40010000)
#define IOMUX_REGS  ((IOMUX_REGS_s *) 0x3FFC4000 )

void iomux_cfg(IOMUX_REGS_s *regs, IOMUX_PA_REG_s iomux_cfg,  uint32_t pin_num);
void gpio_dout_pinwise(GPIO_REGS_s *regs, uint32_t pin_num, uint32_t dout_pin_val);
void gpio_glitch_filter_cfg(GPIO_REGS_s *regs, uint32_t pin_num, GPIO_FILT_EN_E filt_width_val);
void gpio_intr_polarity_cfg(GPIO_REGS_s *regs, uint32_t pin_num, GPIO_INTR_POL_E intr_pol_val);
void gpio_dma_cfg(GPIO_REGS_s *regs, uint32_t dma_wr_mask);
uint32_t gpio_din(GPIO_REGS_s *regs);
void gpio_dout(GPIO_REGS_s *regs, uint32_t dout);
void gpio_dout_en(GPIO_REGS_s *regs, uint32_t dout_en);
void gpio_set_en(GPIO_REGS_s *regs, uint32_t dout_en_set);
void gpio_clr_en(GPIO_REGS_s *regs, uint32_t dout_en_clr) ;
void gpio_sub_cfg(GPIO_REGS_s *regs, uint32_t sub_sel, uint32_t sub_en, uint32_t pin_action, uint32_t pin_num);
uint32_t gpio_din_pinwise(GPIO_REGS_s *regs, uint32_t pin_num);
void gpio_set(GPIO_REGS_s *regs, uint32_t dout_set);
void gpio_clr(GPIO_REGS_s *regs, uint32_t dout_clr);
void gpio_tgl(GPIO_REGS_s *regs, uint32_t dout_tgl);
uint32_t get_gpio_glitch_filter_cfg(GPIO_REGS_s *regs,uint32_t pin_num);
uint32_t get_gpio_intr_polarity_cfg(GPIO_REGS_s *regs, uint32_t pin_num);
IOMUX_PA_REG_s get_gpio_iomux_cfg(IOMUX_REGS_s *regs, uint32_t pin_num);
GPIO_SUB_CFG_REG_s get_gpio_sub_cfg(GPIO_REGS_s *regs, uint32_t sub_sel);
uint32_t get_gpio_dma_cfg(GPIO_REGS_s *regs);
uint32_t get_gpio_dout(GPIO_REGS_s *regs);
uint32_t get_gpio_dout_pinwise(GPIO_REGS_s *regs, uint32_t pin_num); 
#endif
