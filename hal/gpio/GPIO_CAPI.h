#include "GPIO_REGS.h"
#include "GPIO_RW_API.h"

#include "IOMUX_REGS.h"
#include "IOMUX_RW_API.h"

#define GPIO_REGS  ((GPIO_REGS_s *) 0x40010000)
#define IOMUX_REGS  ((IOMUX_REGS_s *) 0x3FFC4000 )
extern void iomux_cfg(IOMUX_REGS_s * registers, IOMUX_PA_REG_s iomux_cfg,  uint32_t pin_num);
extern void gpio_dout_pinwise(GPIO_REGS_s * registers, uint32_t pin_num, uint32_t val);
extern void gpio_glitch_filter_cfg(GPIO_REGS_s * registers, uint32_t pin_num, uint32_t val);
extern void gpio_intr_polarity_cfg(GPIO_REGS_s * registers, uint32_t pin_num, GPIO_INTR_POL_E val);
extern void gpio_dma_cfg(GPIO_REGS_s * registers, uint32_t val);
extern int gpio_din(GPIO_REGS_s * registers);
extern void gpio_dout(GPIO_REGS_s * registers, uint32_t val);
extern void gpio_dout_en(GPIO_REGS_s * registers, uint32_t val);
extern void gpio_set_en(GPIO_REGS_s * registers, uint32_t val);
extern void gpio_clr_en(GPIO_REGS_s * registers, uint32_t val) ;
extern void gpio_pub_cfg(GPIO_REGS_s * registers, uint32_t pin_num);
extern void gpio_sub_cfg(GPIO_REGS_s * registers, uint32_t sub_sel, uint32_t sub_en, uint32_t pin_action, uint32_t pin_num);
extern int gpio_din_pinwise(GPIO_REGS_s * registers, uint32_t pin_num);
extern void gpio_set(GPIO_REGS_s * registers, uint32_t val);
extern void gpio_clr(GPIO_REGS_s * registers, uint32_t val);
extern void gpio_tgl(GPIO_REGS_s * registers, uint32_t val);
extern int get_gpio_glitch_filter_cfg(GPIO_REGS_s * registers,uint32_t pin_num);
extern int get_gpio_intr_polarity_cfg(GPIO_REGS_s * registers, uint32_t pin_num);
extern IOMUX_PA_REG_s get_gpio_iomux_cfg(IOMUX_REGS_s * registers, uint32_t pin_num);
extern GPIO_SUB_CFG_REG_s get_gpio_sub_cfg(GPIO_REGS_s * registers, uint32_t sub_sel);
extern int get_gpio_dma_cfg(GPIO_REGS_s * registers);
extern int get_gpio_dout(GPIO_REGS_s * registers);
extern int get_gpio_dout_pinwise(GPIO_REGS_s * registers, uint32_t pin_num); 
