#include "EVENT_FABRIC_RW_API.h"
#include "EVENT_FABRIC_REGS.h"
#include "EVENT_FABRIC_CAPI.h"

#define EVENT_FABRIC_REGS   ((EVENT_FABRIC_REGS_s *)      0x3FFC3000)     // EVENT_FABRIC_REGS Common APB Address Space
void EventFabricInit(){
    EVENT_FABRIC_REGS->PWR_EN.packed_w = 0x69000001;
    EVENT_FABRIC_REGS->RST_CTRL.packed_w = 0x69000001;
    EVENT_FABRIC_REGS->RST_CTRL.packed_w = 0x69000000;
    EVENT_FABRIC_REGS->CLK_CTRL.packed_w = 0x00000001;
}

//void CFG_GenricEventFabric(int gen_pub_id, int gen_pub_chan_id, int gen_sub_id, int gen_sub_chan_id ){
//    GEN_PUB(gen_pub_id)(EVENT_FABRIC_REGS, gen_pub_chan_id);
//    GEN_PUB(gen_sub_id)(EVENT_FABRIC_REGS, gen_sub_chan_id);
//}
