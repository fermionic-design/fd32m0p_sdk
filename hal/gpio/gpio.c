#include "gpio.h"

/*
 *  ======== iomux_cfg ========
 */
void iomux_cfg(IOMUX_REGS_s *regs, IOMUX_PA_REG_s iomux_cfg,  uint32_t pin_num)/*{{{*/{
    IOMUX_PA_u temp;
    *(IOMUX_PA_REG_s *)&temp = iomux_cfg;
    regs->PA[pin_num].packed_w = temp.packed_w;   
}/*}}}*/

/*
 *  ======== gpio_dout_pinwise ========
 */
void gpio_dout_pinwise(GPIO_REGS_s *regs, uint32_t pin_num, uint32_t dout_pin_val)/*{{{*/{
    switch(pin_num){
    case 0:
        regs->DOUT_3_0.packed_byte[0] = dout_pin_val;
    	break;
    case 1:
       regs->DOUT_3_0.packed_byte[1] = dout_pin_val;
       break;
    case 2:
       regs->DOUT_3_0.packed_byte[2] = dout_pin_val;
       break;
    case 3:
       regs->DOUT_3_0.packed_byte[3] = dout_pin_val;
       break;
    case 4:
       regs->DOUT_7_4.packed_byte[0] = dout_pin_val;
       break;
    case 5:
       regs->DOUT_7_4.packed_byte[1] = dout_pin_val;
       break;
    case 6:
       regs->DOUT_7_4.packed_byte[2] = dout_pin_val;
       break;
    case 7:
       regs->DOUT_7_4.packed_byte[3] = dout_pin_val;
       break;
    case 8:
       regs->DOUT_11_8.packed_byte[0] = dout_pin_val;
       break;                                      
    case 9:                 
       regs->DOUT_11_8.packed_byte[1] = dout_pin_val;
       break;
    case 10:
       regs->DOUT_11_8.packed_byte[2] = dout_pin_val;
       break;                                      
    case 11:                
       regs->DOUT_11_8.packed_byte[3] = dout_pin_val;
       break;
    case 12:
       regs->DOUT_15_12.packed_byte[0] = dout_pin_val;
       break;                                       
    case 13:                 
       regs->DOUT_15_12.packed_byte[1] = dout_pin_val;
       break;                                       
    case 14:                 
       regs->DOUT_15_12.packed_byte[2] = dout_pin_val;
       break;                                       
    case 15:                 
       regs->DOUT_15_12.packed_byte[3] = dout_pin_val;
       break;
    case 16:
       regs->DOUT_19_16.packed_byte[0] = dout_pin_val;
       break;                                       
    case 17:                 
       regs->DOUT_19_16.packed_byte[1] = dout_pin_val;
       break;                                       
    case 18:                 
       regs->DOUT_19_16.packed_byte[2] = dout_pin_val;
       break;                                       
    case 19:                 
       regs->DOUT_19_16.packed_byte[3] = dout_pin_val;
       break;
    case 20:
       regs->DOUT_23_20.packed_byte[0] = dout_pin_val;
       break;                                       
    case 21:                 
       regs->DOUT_23_20.packed_byte[1] = dout_pin_val;
       break;                                       
    case 22:                 
       regs->DOUT_23_20.packed_byte[2] = dout_pin_val;
       break;                                       
    case 23:                 
       regs->DOUT_23_20.packed_byte[3] = dout_pin_val;
       break;
    case 24:
       regs->DOUT_27_24.packed_byte[0] = dout_pin_val;
       break;                                       
    case 25:                 
       regs->DOUT_27_24.packed_byte[1] = dout_pin_val;
       break;                                       
    case 26:                 
       regs->DOUT_27_24.packed_byte[2] = dout_pin_val;
       break;                                       
    case 27:                 
       regs->DOUT_27_24.packed_byte[3] = dout_pin_val;
       break;
    case 28:
       regs->DOUT_31_28.packed_byte[0] = dout_pin_val;
       break;                                       
    case 29:                 
       regs->DOUT_31_28.packed_byte[1] = dout_pin_val;
       break;                                       
    case 30:                 
       regs->DOUT_31_28.packed_byte[2] = dout_pin_val;
       break;                                       
    case 31:                 
       regs->DOUT_31_28.packed_byte[3] = dout_pin_val;
       break;
    default:
       break;
    }
}/*}}}*/

/*
 *  ======== gpio_glitch_filter_cfg ========
 */
void gpio_glitch_filter_cfg(GPIO_REGS_s *regs, uint32_t pin_num, GPIO_FILT_EN_E filt_width_val)/*{{{*/{
    switch(pin_num){
    case 0:
       regs->FILT_EN_0.filt_en_0 = filt_width_val;
       break;
    case 1:
       regs->FILT_EN_0.filt_en_1 = filt_width_val;
       break;
    case 2:
       regs->FILT_EN_0.filt_en_2 = filt_width_val; 
       break;
    case 3:
       regs->FILT_EN_0.filt_en_3 = filt_width_val;   
       break;
    case 4:
       regs->FILT_EN_0.filt_en_4 = filt_width_val;   
       break;
    case 5:
       regs->FILT_EN_0.filt_en_5 = filt_width_val;   
       break;
    case 6:
       regs->FILT_EN_0.filt_en_6 = filt_width_val;   
       break;
    case 7:
       regs->FILT_EN_0.filt_en_7 = filt_width_val;   
       break;
    case 8:
       regs->FILT_EN_0.filt_en_8 = filt_width_val;   
       break;
    case 9:
       regs->FILT_EN_0.filt_en_9 = filt_width_val;   
       break;
    case 10:
       regs->FILT_EN_0.filt_en_10 = filt_width_val;   
       break;
    case 11:
       regs->FILT_EN_0.filt_en_11 = filt_width_val;   
       break;
    case 12:
       regs->FILT_EN_0.filt_en_12 = filt_width_val;   
       break;
    case 13:
       regs->FILT_EN_0.filt_en_13 = filt_width_val;   
       break;
    case 14:
       regs->FILT_EN_0.filt_en_14 = filt_width_val;   
       break;
    case 15:
       regs->FILT_EN_0.filt_en_15 = filt_width_val;   
       break;
    case 16:
       regs->FILT_EN_1.filt_en_16 = filt_width_val;
       break;
    case 17:
       regs->FILT_EN_1.filt_en_17 = filt_width_val;
       break;
    case 18:
       regs->FILT_EN_1.filt_en_18 = filt_width_val; 
       break;
    case 19:
       regs->FILT_EN_1.filt_en_19 = filt_width_val;   
       break;
    case 20:
       regs->FILT_EN_1.filt_en_20 = filt_width_val;   
       break;
    case 21:
       regs->FILT_EN_1.filt_en_21 = filt_width_val;   
       break;
    case 22:
       regs->FILT_EN_1.filt_en_22 = filt_width_val;   
       break;
    case 23:
       regs->FILT_EN_1.filt_en_23 = filt_width_val;   
       break;
    case 24:
       regs->FILT_EN_1.filt_en_24 = filt_width_val;   
       break;
    case 25:
       regs->FILT_EN_1.filt_en_25 = filt_width_val;   
       break;
    case 26:
       regs->FILT_EN_1.filt_en_26 = filt_width_val;   
       break;
    case 27:
       regs->FILT_EN_1.filt_en_27 = filt_width_val;   
       break;
    case 28:
       regs->FILT_EN_1.filt_en_28 = filt_width_val;   
       break;
    case 29:
       regs->FILT_EN_1.filt_en_29 = filt_width_val;   
       break;
    case 30:
       regs->FILT_EN_1.filt_en_30 = filt_width_val;   
       break;
    case 31:
       regs->FILT_EN_1.filt_en_31 = filt_width_val;
       break;
    default:
       break;
    }
}/*}}}*/

/*
 *  ======== gpio_intr_polarity_cfg ========
 */
void gpio_intr_polarity_cfg(GPIO_REGS_s *regs, uint32_t pin_num, GPIO_INTR_POL_E intr_pol_val)/*{{{*/{
    switch(pin_num){
    case 0:
       regs->INTR_POL_0.intr_pol_0 = intr_pol_val;
       break;
    case 1:
       regs->INTR_POL_0.intr_pol_1 = intr_pol_val;
       break;
    case 2:
       regs->INTR_POL_0.intr_pol_2 = intr_pol_val; 
       break;
    case 3:
       regs->INTR_POL_0.intr_pol_3 = intr_pol_val;   
       break;
    case 4:
       regs->INTR_POL_0.intr_pol_4 = intr_pol_val;   
       break;
    case 5:
       regs->INTR_POL_0.intr_pol_5 = intr_pol_val;   
       break;
    case 6:
       regs->INTR_POL_0.intr_pol_6 = intr_pol_val;   
       break;
    case 7:
       regs->INTR_POL_0.intr_pol_7 = intr_pol_val;   
       break;
    case 8:
       regs->INTR_POL_0.intr_pol_8 = intr_pol_val;   
       break;
    case 9:
       regs->INTR_POL_0.intr_pol_9 = intr_pol_val;   
       break;
    case 10:
       regs->INTR_POL_0.intr_pol_10 = intr_pol_val;   
       break;
    case 11:
       regs->INTR_POL_0.intr_pol_11 = intr_pol_val;   
       break;
    case 12:
       regs->INTR_POL_0.intr_pol_12 = intr_pol_val;   
       break;
    case 13:
       regs->INTR_POL_0.intr_pol_13 = intr_pol_val;   
       break;
    case 14:
       regs->INTR_POL_0.intr_pol_14 = intr_pol_val;   
       break;
    case 15:
       regs->INTR_POL_0.intr_pol_15 = intr_pol_val;   
       break;
    case 16:
       regs->INTR_POL_1.intr_pol_16 = intr_pol_val;
       break;
    case 17:
       regs->INTR_POL_1.intr_pol_17 = intr_pol_val;
       break;
    case 18:
       regs->INTR_POL_1.intr_pol_18 = intr_pol_val; 
       break;
    case 19:
       regs->INTR_POL_1.intr_pol_19 = intr_pol_val;   
       break;
    case 20:
       regs->INTR_POL_1.intr_pol_20 = intr_pol_val;   
       break;
    case 21:
       regs->INTR_POL_1.intr_pol_21 = intr_pol_val;   
       break;
    case 22:
       regs->INTR_POL_1.intr_pol_22 = intr_pol_val;   
       break;
    case 23:
       regs->INTR_POL_1.intr_pol_23 = intr_pol_val;   
       break;
    case 24:
       regs->INTR_POL_1.intr_pol_24 = intr_pol_val;   
       break;
    case 25:
       regs->INTR_POL_1.intr_pol_25 = intr_pol_val;   
       break;
    case 26:
       regs->INTR_POL_1.intr_pol_26 = intr_pol_val;   
       break;
    case 27:
       regs->INTR_POL_1.intr_pol_27 = intr_pol_val;   
       break;
    case 28:
       regs->INTR_POL_1.intr_pol_28 = intr_pol_val;   
       break;
    case 29:
       regs->INTR_POL_1.intr_pol_29 = intr_pol_val;   
       break;
    case 30:
       regs->INTR_POL_1.intr_pol_30 = intr_pol_val;   
       break;
    case 31:
        regs->INTR_POL_1.intr_pol_31 = intr_pol_val;
        break;
    default:
        break;
    }
}/*}}}*/

/*
 *  ======== gpio_dma_cfg ========
 */
void gpio_dma_cfg(GPIO_REGS_s *regs, uint32_t dma_wr_mask){
    regs->DMA_WR_MASK.packed_w = dma_wr_mask;
}

/*
 *  ======== gpio_din ========
 */
uint32_t gpio_din(GPIO_REGS_s *regs){
    uint32_t read_val;
    read_val = regs->DIN.packed_w;
    return read_val;
}

/*
 *  ======== gpio_dout ========
 */
void gpio_dout(GPIO_REGS_s *regs, uint32_t dout){
    regs->DOUT.packed_w = dout;
}

/*
 *  ======== gpio_dout_en ========
 */
void gpio_dout_en(GPIO_REGS_s *regs, uint32_t dout_en){
    regs->DOUT_EN.packed_w = dout_en;
}

/*
 *  ======== gpio_set_en ========
 */
void gpio_set_en(GPIO_REGS_s *regs, uint32_t dout_en_set){
    regs->DOUT_EN_SET.packed_w = dout_en_set;
}

/*
 *  ======== gpio_clr_en ========
 */
void gpio_clr_en(GPIO_REGS_s *regs, uint32_t dout_en_clr){
    regs->DOUT_EN_CLR.packed_w = dout_en_clr;
}

/*
 *  ======== gpio_sub_cfg ========
 */
void gpio_sub_cfg(GPIO_REGS_s *regs, uint32_t sub_sel, uint32_t sub_en, uint32_t pin_action, uint32_t pin_num){
        regs->SUB_CFG[sub_sel].sub_en = sub_en;
        regs->SUB_CFG[sub_sel].action = pin_action;
        regs->SUB_CFG[sub_sel].bit_num = pin_num;
}

/*
 *  ======== gpio_din_pinwise ========
 */
uint32_t gpio_din_pinwise(GPIO_REGS_s *regs, uint32_t pin_num)/*{{{*/{
    uint32_t val;
    switch(pin_num){
    case 0:
       val = regs->DIN_3_0.din_0;
       break;
    case 1:
       val = regs->DIN_3_0.din_1;
       break;
    case 2:
       val = regs->DIN_3_0.din_2;
       break;
    case 3:
       val = regs->DIN_3_0.din_3;
       break;
    case 4:
       val = regs->DIN_7_4.din_4;
       break;
    case 5:
       val = regs->DIN_7_4.din_5;
       break;
    case 6:
       val = regs->DIN_7_4.din_6;
       break;
    case 7:
       val = regs->DIN_7_4.din_7;
       break;
    case 8:
       val = regs->DIN_11_8.din_8;
       break;
    case 9:
       val = regs->DIN_11_8.din_9;
       break;
    case 10:
       val = regs->DIN_11_8.din_10;
       break;
    case 11:
       val = regs->DIN_11_8.din_11;
       break;
    case 12:
       val = regs->DIN_15_12.din_12;
       break;
    case 13:
       val = regs->DIN_15_12.din_13;
       break;
    case 14:
       val = regs->DIN_15_12.din_14;
       break;
    case 15:
       val = regs->DIN_15_12.din_15;
       break;
    case 16:
       val = regs->DIN_19_16.din_16;
       break;
    case 17:
       val = regs->DIN_19_16.din_17;
       break;
    case 18:
       val = regs->DIN_19_16.din_18;
       break;
    case 19:
       val = regs->DIN_19_16.din_19;
       break;
    case 20:
       val = regs->DIN_23_20.din_20;
       break;
    case 21:
       val = regs->DIN_23_20.din_21;
       break;
    case 22:
       val = regs->DIN_23_20.din_22;
       break;
    case 23:
       val = regs->DIN_23_20.din_23;
       break;
    case 24:
       val = regs->DIN_27_24.din_24;
       break;
    case 25:
       val = regs->DIN_27_24.din_25;
       break;
    case 26:
       val = regs->DIN_27_24.din_26;
       break;
    case 27:
       val = regs->DIN_27_24.din_27;
       break;
    case 28:
       val = regs->DIN_31_28.din_28;
       break;
    case 29:
       val = regs->DIN_31_28.din_29;
       break;
    case 30:
       val = regs->DIN_31_28.din_30;
       break;
    case 31:
       val = regs->DIN_31_28.din_31;
       break;
    default:
        break;
    }
    return val;
}/*}}}*/

/*
 *  ======== gpio_set ========
 */
void gpio_set(GPIO_REGS_s *regs, uint32_t dout_set){
    regs->DOUT_SET.packed_w = dout_set;
}

/*
 *  ======== gpio_clr ========
 */
void gpio_clr(GPIO_REGS_s *regs, uint32_t dout_clr){
    regs->DOUT_CLR.packed_w = dout_clr;
}

/*
 *  ======== gpio_tgl ========
 */
void gpio_tgl(GPIO_REGS_s *regs, uint32_t dout_tgl){
    regs->DOUT_TGL.packed_w = dout_tgl;
}

/*
 *  ======== get_gpio_glitch_filter_cfg ========
 */
uint32_t get_gpio_glitch_filter_cfg(GPIO_REGS_s *regs,uint32_t pin_num)/*{{{*/{
    uint32_t val;
    switch(pin_num){
    case 0:
       val = regs->FILT_EN_0.filt_en_0;
       break;
    case 1:
       val = regs->FILT_EN_0.filt_en_1;
       break;
    case 2:
       val = regs->FILT_EN_0.filt_en_2; 
       break;
    case 3:
       val = regs->FILT_EN_0.filt_en_3;   
       break;
    case 4:
       val = regs->FILT_EN_0.filt_en_4;   
       break;
    case 5:
       val = regs->FILT_EN_0.filt_en_5;   
       break;
    case 6:
       val = regs->FILT_EN_0.filt_en_6;   
       break;
    case 7:
       val = regs->FILT_EN_0.filt_en_7;   
       break;
    case 8:
       val = regs->FILT_EN_0.filt_en_8;   
       break;
    case 9:
       val = regs->FILT_EN_0.filt_en_9;   
       break;
    case 10:
       val = regs->FILT_EN_0.filt_en_10;   
       break;
    case 11:
       val = regs->FILT_EN_0.filt_en_11;   
       break;
    case 12:
       val = regs->FILT_EN_0.filt_en_12;   
       break;
    case 13:
       val = regs->FILT_EN_0.filt_en_13;   
       break;
    case 14:
       val = regs->FILT_EN_0.filt_en_14;   
       break;
    case 15:
       val = regs->FILT_EN_0.filt_en_15;   
       break;
    case 16:
       val = regs->FILT_EN_1.filt_en_16;
       break;
    case 17:
       val = regs->FILT_EN_1.filt_en_17;
       break;
    case 18:
       val = regs->FILT_EN_1.filt_en_18; 
       break;
    case 19:
       val = regs->FILT_EN_1.filt_en_19;   
       break;
    case 20:
       val = regs->FILT_EN_1.filt_en_20;   
       break;
    case 21:
       val = regs->FILT_EN_1.filt_en_21;   
       break;
    case 22:
       val = regs->FILT_EN_1.filt_en_22;   
       break;
    case 23:
       val = regs->FILT_EN_1.filt_en_23;   
       break;
    case 24:
       val = regs->FILT_EN_1.filt_en_24;   
       break;
    case 25:
       val = regs->FILT_EN_1.filt_en_25;   
       break;
    case 26:
       val = regs->FILT_EN_1.filt_en_26;   
       break;
    case 27:
       val = regs->FILT_EN_1.filt_en_27;   
       break;
    case 28:
       val = regs->FILT_EN_1.filt_en_28;   
       break;
    case 29:
       val = regs->FILT_EN_1.filt_en_29;   
       break;
    case 30:
       val = regs->FILT_EN_1.filt_en_30;   
       break;
    case 31:
       val = regs->FILT_EN_1.filt_en_31;
       break;
    default:
        break;
    }
    return val; 
}/*}}}*/

/*
 *  ======== get_gpio_intr_polarity_cfg ========
 */
uint32_t get_gpio_intr_polarity_cfg(GPIO_REGS_s *regs, uint32_t pin_num)/*{{{*/{
    uint32_t val;
    switch(pin_num){
    case 0:
       val = regs->INTR_POL_0.intr_pol_0;
       break;
    case 1:
       val = regs->INTR_POL_0.intr_pol_1;
       break;
    case 2:
       val = regs->INTR_POL_0.intr_pol_2; 
       break;
    case 3:
       val = regs->INTR_POL_0.intr_pol_3;   
       break;
    case 4:
       val = regs->INTR_POL_0.intr_pol_4;   
       break;
    case 5:
       val = regs->INTR_POL_0.intr_pol_5;   
       break;
    case 6:
       val = regs->INTR_POL_0.intr_pol_6;   
       break;
    case 7:
       val = regs->INTR_POL_0.intr_pol_7;   
       break;
    case 8:
       val = regs->INTR_POL_0.intr_pol_8;   
       break;
    case 9:
       val = regs->INTR_POL_0.intr_pol_9;   
       break;
    case 10:
       val = regs->INTR_POL_0.intr_pol_10;   
       break;
    case 11:
       val = regs->INTR_POL_0.intr_pol_11;   
       break;
    case 12:
       val = regs->INTR_POL_0.intr_pol_12;   
       break;
    case 13:
       val = regs->INTR_POL_0.intr_pol_13;   
       break;
    case 14:
       val = regs->INTR_POL_0.intr_pol_14;   
       break;
    case 15:
       val = regs->INTR_POL_0.intr_pol_15;   
       break;
    case 16:
       val = regs->INTR_POL_1.intr_pol_16;
       break;
    case 17:
       val = regs->INTR_POL_1.intr_pol_17;
       break;
    case 18:
       val = regs->INTR_POL_1.intr_pol_18; 
       break;
    case 19:
       val = regs->INTR_POL_1.intr_pol_19;   
       break;
    case 20:
       val = regs->INTR_POL_1.intr_pol_20;   
       break;
    case 21:
       val = regs->INTR_POL_1.intr_pol_21;   
       break;
    case 22:
       val = regs->INTR_POL_1.intr_pol_22;   
       break;
    case 23:
       val = regs->INTR_POL_1.intr_pol_23;   
       break;
    case 24:
       val = regs->INTR_POL_1.intr_pol_24;   
       break;
    case 25:
       val = regs->INTR_POL_1.intr_pol_25;   
       break;
    case 26:
       val = regs->INTR_POL_1.intr_pol_26;   
       break;
    case 27:
       val = regs->INTR_POL_1.intr_pol_27;   
       break;
    case 28:
       val = regs->INTR_POL_1.intr_pol_28;   
       break;
    case 29:
       val = regs->INTR_POL_1.intr_pol_29;   
       break;
    case 30:
       val = regs->INTR_POL_1.intr_pol_30;   
       break;
    case 31:
       val = regs->INTR_POL_1.intr_pol_31;
       break;
    default:
        break;
    }
    return val;
}/*}}}*/

/*
 *  ======== get_gpio_iomux_cfg ========
 */
IOMUX_PA_REG_s get_gpio_iomux_cfg(IOMUX_REGS_s *regs, uint32_t pin_num)/*{{{*/{
    
    IOMUX_PA_REG_s iomux_cfg;

    iomux_cfg.output_en      = regs->PA[pin_num].output_en;
    iomux_cfg.input_en       = regs->PA[pin_num].input_en;
    iomux_cfg.drive_strength = regs->PA[pin_num].drive_strength;
    iomux_cfg.slew_rate      = regs->PA[pin_num].slew_rate;
    iomux_cfg.pull_up        = regs->PA[pin_num].pull_up;
    iomux_cfg.pull_down      = regs->PA[pin_num].pull_down;
    iomux_cfg.hysteresis     = regs->PA[pin_num].hysteresis;
    iomux_cfg.sel            = regs->PA[pin_num].sel;
    iomux_cfg.rsvd_0         = regs->PA[pin_num].rsvd_0;
    iomux_cfg.input_val      = regs->PA[pin_num].input_val;
    
    return iomux_cfg;
}/*}}}*/

/*
 *  ======== get_gpio_sub_cfg ========
 */
GPIO_SUB_CFG_REG_s get_gpio_sub_cfg(GPIO_REGS_s *regs, uint32_t sub_sel){
    GPIO_SUB_CFG_REG_s sub_cfg;
    sub_cfg.sub_en      = regs->SUB_CFG[sub_sel].sub_en;
    sub_cfg.action      = regs->SUB_CFG[sub_sel].action;
    sub_cfg.bit_num     = regs->SUB_CFG[sub_sel].bit_num;
    return sub_cfg;
}

/*
 *  ======== get_gpio_dma_cfg ========
 */
uint32_t get_gpio_dma_cfg(GPIO_REGS_s *regs){
    uint32_t val;
    val = regs->DMA_WR_MASK.packed_w;
    return val;
}

/*
 *  ======== get_gpio_dout ========
 */
uint32_t get_gpio_dout(GPIO_REGS_s *regs){
    uint32_t val;
    val = regs->DOUT.packed_w;
    return val;
}

/*
 *  ======== get_gpio_dout_pinwise ========
 */
uint32_t get_gpio_dout_pinwise(GPIO_REGS_s *regs, uint32_t pin_num)/*{{{*/{
    uint32_t val;
    switch(pin_num){
    case 0:
       val = regs->DOUT_3_0.packed_byte[0];
       break;
    case 1:
       val = regs->DOUT_3_0.packed_byte[1];
       break;
    case 2:
       val = regs->DOUT_3_0.packed_byte[2];
       break;
    case 3:
       val = regs->DOUT_3_0.packed_byte[3];
       break;
    case 4:
       val = regs->DOUT_7_4.packed_byte[0];
       break;
    case 5:
       val = regs->DOUT_7_4.packed_byte[1];
       break;
    case 6:
       val = regs->DOUT_7_4.packed_byte[2];
       break;
    case 7:
       val = regs->DOUT_7_4.packed_byte[3];
       break;
    case 8:
       val = regs->DOUT_11_8.packed_byte[0];
       break;                                      
    case 9:                 
       val = regs->DOUT_11_8.packed_byte[1];
       break;
    case 10:
       val = regs->DOUT_11_8.packed_byte[2];
       break;                                      
    case 11:                
       val = regs->DOUT_11_8.packed_byte[3];
       break;
    case 12:
       val = regs->DOUT_15_12.packed_byte[0];
       break;                                       
    case 13:                 
       val = regs->DOUT_15_12.packed_byte[1];
       break;                                       
    case 14:                 
       val = regs->DOUT_15_12.packed_byte[2];
       break;                                       
    case 15:                 
       val = regs->DOUT_15_12.packed_byte[3];
       break;
    case 16:
       val = regs->DOUT_19_16.packed_byte[0];
       break;                                       
    case 17:                 
       val = regs->DOUT_19_16.packed_byte[1];
       break;                                       
    case 18:                 
       val = regs->DOUT_19_16.packed_byte[2];
       break;                                       
    case 19:                 
       val = regs->DOUT_19_16.packed_byte[3];
       break;
    case 20:
       val = regs->DOUT_23_20.packed_byte[0];
       break;                                       
    case 21:                 
       val = regs->DOUT_23_20.packed_byte[1];
       break;                                       
    case 22:                 
       val = regs->DOUT_23_20.packed_byte[2];
       break;                                       
    case 23:                 
       val = regs->DOUT_23_20.packed_byte[3];
       break;
    case 24:
       val = regs->DOUT_27_24.packed_byte[0];
       break;                                       
    case 25:                 
       val = regs->DOUT_27_24.packed_byte[1];
       break;                                       
    case 26:                 
       val = regs->DOUT_27_24.packed_byte[2];
       break;                                       
    case 27:                 
       val = regs->DOUT_27_24.packed_byte[3];
       break;
    case 28:
       val = regs->DOUT_31_28.packed_byte[0];
       break;                                       
    case 29:                 
       val = regs->DOUT_31_28.packed_byte[1];
       break;                                       
    case 30:                 
       val = regs->DOUT_31_28.packed_byte[2];
       break;                                       
    case 31:                 
       val = regs->DOUT_31_28.packed_byte[3];
       break;
    default:
        break;
    }
    return val;
}/*}}}*/

