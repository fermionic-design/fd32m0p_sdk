#include "GPIO_REGS.h"
#include "GPIO_RW_API.h"

void MCUSDK_gpio_MaskedWrite(GPIO_REGS_s *GPIO_REGS, uint32_t value, uint32_t mask)
 {
       uint32_t value_masked = value & mask;
       //GPIO_REGS->DOUT.packed_w = value_masked;
       if((value_masked & 0x0000000F) > 0)
       GPIO_DOUT_3_0_WRITE(GPIO_REGS, value_masked, value_masked>>1, value_masked>>2,value_masked>>3);
       if((value_masked & 0x000000F0) > 0)
       GPIO_DOUT_7_4_WRITE(GPIO_REGS, value_masked>>(4+0), value_masked>>(4+1), value_masked>>(4+2),value_masked>>(4+3));
       if((value_masked & 0x00000F00) > 0)
       GPIO_DOUT_11_8_WRITE(GPIO_REGS, value_masked>>(8+0), value_masked>>(8+1), value_masked>>(8+2),value_masked>>(8+3));
       if((value_masked & 0x0000F000) > 0)
       GPIO_DOUT_15_12_WRITE(GPIO_REGS, value_masked>>(12+0), value_masked>>(12+1), value_masked>>(12+2),value_masked>>(12+3));
       if((value_masked & 0x000F0000) > 0)
       GPIO_DOUT_19_16_WRITE(GPIO_REGS, value_masked>>(16+0), value_masked>>(16+1), value_masked>>(16+2),value_masked>>(16+3));
       if((value_masked & 0x00F00000) > 0)
       GPIO_DOUT_23_20_WRITE(GPIO_REGS, value_masked>>(20+0), value_masked>>(20+1), value_masked>>(20+2),value_masked>>(20+3));
       if((value_masked & 0x0F000000) > 0)
       GPIO_DOUT_27_24_WRITE(GPIO_REGS, value_masked>>(24+0), value_masked>>(24+1), value_masked>>(24+2),value_masked>>(24+3));
       if((value_masked & 0xF0000000) > 0)
       GPIO_DOUT_31_28_WRITE(GPIO_REGS, value_masked>>(28+0), value_masked>>(28+1), value_masked>>(28+2),value_masked>>(28+3));
 }



