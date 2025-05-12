#include "VREF_REGS.h"
#include "VREF_RW_API.h"
#define VREF_REGS ((VREF_REGS_s *) 0x3FFD2000) //this should be VREF address space

void Vrefpoweren(void)
{
    VREF_PWR_EN_WRITE(VREF_REGS, 1, 0xAB);

    VREF_REGS->RST_CTRL.packed_w = 0xAB000001;
    if((VREF_REGS->RST_STS.packed_w & VREF_RST_STS_rst_sts_MASK) == 1){
      //printf("deasserting the reset\n");
      VREF_RST_CTRL_WRITE(VREF_REGS, 0, 1, 0xAB);
        }
        
    return;
}
