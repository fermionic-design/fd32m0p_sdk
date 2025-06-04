//////////////////////////////////////////////////////////////////////////////
////                        DAC FIFO TEST                                 ////
////    DESCRIPTION:                                                      ////      
////        This is DAC FIFO test. DAC codes of a sine wave are written.  ////
////        A sine wave can be observed on PA15.                          ////
////    Board Setup:                                                      ////
////        PA15 - DAC output                                             ////
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////

#include <stdint.h>

#include "uart_stdout_mcu.h"
#include "dac.h"
#include "../../hal/dma/dma.h"
#include "event_fabric.h"

const uint32_t sine_wave[] = { 4095, 4146, 4197, 4249, 4300, 4352, 4403, 4454, 4505, 4557, 4608, 4659, 4710, 4760, 4811, 4862, 4912, 4963, 5013, 5063, 5113, 5163, 5212, 5262, 5311, 5360, 5409, 5457, 5506, 5554, 5602, 5650, 5697, 5744, 5791, 5838, 5884, 5931, 5976, 6022, 6067, 6112, 6157, 6201, 6245, 6289, 6332, 6375, 6417, 6460, 6501, 6543, 6584, 6625, 6665, 6705, 6744, 6783, 6822, 6860, 6898, 6935, 6972, 7008, 7044, 7080, 7115, 7149, 7183, 7217, 7250, 7282, 7314, 7346, 7377, 7407, 7437, 7467, 7496, 7524, 7552, 7579, 7606, 7632, 7658, 7683, 7707, 7731, 7755, 7778, 7800, 7821, 7842, 7863, 7883, 7902, 7921, 7939, 7956, 7973, 7989, 8005, 8020, 8034, 8048, 8061, 8073, 8085, 8096, 8107, 8117, 8126, 8135, 8143, 8150, 8157, 8163, 8169, 8174, 8178, 8181, 8184, 8187, 8188, 8189, 8190, 8189, 8188, 8187, 8184, 8181, 8178, 8174, 8169, 8163, 8157, 8150, 8143, 8135, 8126, 8117, 8107, 8096, 8085, 8073, 8061, 8048, 8034, 8020, 8005, 7989, 7973, 7956, 7939, 7921, 7902, 7883, 7863, 7842, 7821, 7800, 7778, 7755, 7731, 7707, 7683, 7658, 7632, 7606, 7579, 7552, 7524, 7496, 7467, 7437, 7407, 7377, 7346, 7314, 7282, 7250, 7217, 7183, 7149, 7115, 7080, 7044, 7008, 6972, 6935, 6898, 6860, 6822, 6783, 6744, 6705, 6665, 6625, 6584, 6543, 6501, 6460, 6417, 6375, 6332, 6289, 6245, 6201, 6157, 6112, 6067, 6022, 5976, 5931, 5884, 5838, 5791, 5744, 5697, 5650, 5602, 5554, 5506, 5457, 5409, 5360, 5311, 5262, 5212, 5163, 5113, 5063, 5013, 4963, 4912, 4862, 4811, 4760, 4710, 4659, 4608, 4557, 4505, 4454, 4403, 4352, 4300, 4249, 4197, 4146, 4094, 4043, 3992, 3940, 3889, 3837, 3786, 3735, 3684, 3632, 3581, 3530, 3479, 3429, 3378, 3327, 3277, 3226, 3176, 3126, 3076, 3026, 2977, 2927, 2878, 2829, 2780, 2732, 2683, 2635, 2587, 2539, 2492, 2445, 2398, 2351, 2305, 2258, 2213, 2167, 2122, 2077, 2032, 1988, 1944, 1900, 1857, 1814, 1772, 1729, 1688, 1646, 1605, 1564, 1524, 1484, 1445, 1406, 1367, 1329, 1291, 1254, 1217, 1181, 1145, 1109, 1074, 1040, 1006, 972, 939, 907, 875, 843, 812, 782, 752, 722, 693, 665, 637, 610, 583, 557, 531, 506, 482, 458, 434, 411, 389, 368, 347, 326, 306, 287, 268, 250, 233, 216, 200, 184, 169, 155, 141, 128, 116, 104, 93, 82, 72, 63, 54, 46, 39, 32, 26, 20, 15, 11, 8, 5, 2, 1, 0, 0, 0, 1, 2, 5, 8, 11, 15, 20, 26, 32, 39, 46, 54, 63, 72, 82, 93, 104, 116, 128, 141, 155, 169, 184, 200, 216, 233, 250, 268, 287, 306, 326, 347, 368, 389, 411, 434, 458, 482, 506, 531, 557, 583, 610, 637, 665, 693, 722, 752, 782, 812, 843, 875, 907, 939, 972, 1006, 1040, 1074, 1109, 1145, 1181, 1217, 1254, 1291, 1329, 1367, 1406, 1445, 1484, 1524, 1564, 1605, 1646, 1688, 1729, 1772, 1814, 1857, 1900, 1944, 1988, 2032, 2077, 2122, 2167, 2213, 2258, 2305, 2351, 2398, 2445, 2492, 2539, 2587, 2635, 2683, 2732, 2780, 2829, 2878, 2927, 2977, 3026, 3076, 3126, 3176, 3226, 3277, 3327, 3378, 3429, 3479, 3530, 3581, 3632, 3684, 3735, 3786, 3837, 3889, 3940, 3992, 4043 };

int main(void) {

    UartStdOutInit();
    UartPuts("DAC FIFO Test.\n");
    uint32_t source_addr, num_samples;
    num_samples = 500;

    dac_dma_cfg_s   dac_dma_cfg_struct;
    dac_cfg_s       dac_cfg_struct;
    
    DAC_PWR_EN_WRITE(DAC_REGS, 1, DAC_PWR_EN_PWR_EN_KEY);
    // Enabling clk for the dma
    //clk enable
    DMA_MCU_REGS->CLK_CTRL.packed_w = 0xBC000001;
    
    IOMUX_REGS->PA[15].output_en = 0;
    IOMUX_REGS->PA[15].pull_up = 0;
    IOMUX_REGS->PA[15].input_en = 0;

    //Soft Reset 
    DMA_MCU_REGS->RST_CTRL.packed_w = 0xBC000001;
    DMA_MCU_REGS->RST_CTRL.packed_w = 0xBC000000;

    dac_dma_cfg_struct.fifo_th = DAC_CTRL2_FIFO_TH_ALMOST_EMPTY;
    dac_dma_cfg_struct.fifo_en = 1;
    dac_dma_cfg_struct.fifo_trig_sel = DAC_CTRL2_FIFO_TRIG_SEL_FIFO_EMPTY;
    dac_dma_cfg_struct.dma_trig_en = 1;
    dac_dma_cfg(DAC_REGS, dac_dma_cfg_struct);
    dac_dma_cfg_struct = get_dac_dma_cfg(DAC_REGS);
    print_int_var("fifo_th ", dac_dma_cfg_struct.fifo_th, 0);
    print_int_var("fifo_en ", dac_dma_cfg_struct.fifo_en, 0);
    print_int_var("fifo_trig_sel ", dac_dma_cfg_struct.fifo_trig_sel, 0);
    
    dac_cfg_struct.data_fmt         = DAC_CTRL0_DATA_FMT_BINARY;
    dac_cfg_struct.enable           = 1;
    dac_cfg_struct.res              = DAC_CTRL0_RES_13BIT;
    dac_cfg_struct.amp_en           = 1;
    dac_cfg_struct.amp_hiz          = 1;
    dac_cfg_struct.out_en           = 1;
    dac_cfg_struct.vrefp_sel        = DAC_CTRL1_VREFP_SEL_EXT;
    dac_cfg_struct.samp_tim_en      = 1;
    dac_cfg(DAC_REGS, dac_cfg_struct);

    EVENT_FABRIC_DMA_PUB_N_WRITE(EVENT_FABRIC_REGS, 8, 1);
    // PRIMARY CHANNEL CONFIG
    source_addr = (uint32_t)(uintptr_t)&sine_wave[0];
    dma_init(DMA_PL230_REGS, 0x20000C00);

    // Configuring dma channel configuration
    UartPuts("Configuring Primary Channel\n");
    dma_channel_cfg_t default_channel_cfg = CHANNEL_TRANSFER_CFG_DEFAULT;
    dma_channel_cfg_t *primary_ch = &default_channel_cfg;

    primary_ch->src_addr = source_addr;            
    primary_ch->dst_addr = 0x3FFD1040;            
    primary_ch->total_transaction = num_samples-1;   
    primary_ch->repeated_transfer_en = (1<<8);
    primary_ch->src_size = 1;            
    primary_ch->src_incr = 2;            
    primary_ch->dst_size = 1;            
    primary_ch->dst_incr = 3;            
    primary_ch->r_power = 0;             
    primary_ch->next_useburst = 0;       
    primary_ch->src_prot_ctrl = 0;       
    primary_ch->dst_prot_ctrl = 0;         
    primary_ch->transfer_type = 1;
    dma_channel_cfg(DMA_MCU_REGS, DMA_PL230_REGS, primary_ch, DMA_CHANNEL_8);
    dma_channel_en_set(DMA_PL230_REGS, DMA_CHANNEL_8);
    return 0;
}

