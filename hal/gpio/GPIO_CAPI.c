#include "GPIO_CAPI.h"

void iomux_cfg(IOMUX_REGS_s * registers, IOMUX_PA_REG_s iomux_cfg,  uint32_t pin_num)/*{{{*/{
    IOMUX_PA_u temp;
    *(IOMUX_PA_REG_s *)&temp = iomux_cfg;
    registers->PA[pin_num].packed_w = temp.packed_w;   
}/*}}}*/

void gpio_dout_pinwise(GPIO_REGS_s * registers, uint32_t pin_num, uint32_t val)/*{{{*/{
    if(pin_num == 0){
        registers->DOUT_3_0.packed_byte[0] = val;
    }
    else if(pin_num == 1){
        registers->DOUT_3_0.packed_byte[1] = val;
    }
    else if(pin_num == 2){
        registers->DOUT_3_0.packed_byte[2] = val;
    }
    else if(pin_num == 3){
        registers->DOUT_3_0.packed_byte[3] = val;
    }
    else if(pin_num == 4){
        registers->DOUT_7_4.packed_byte[0] = val;
    }
    else if(pin_num == 5){
        registers->DOUT_7_4.packed_byte[1] = val;
    }
    else if(pin_num == 6){
        registers->DOUT_7_4.packed_byte[2] = val;
    }
    else if(pin_num == 7){
        registers->DOUT_7_4.packed_byte[3] = val;
    }
    else if(pin_num == 8){
        registers->DOUT_11_8.packed_byte[0] = val;
    }                                      
    else if(pin_num == 9){                 
        registers->DOUT_11_8.packed_byte[1] = val;
    }
    else if(pin_num == 10){
        registers->DOUT_11_8.packed_byte[2] = val;
    }                                      
    else if(pin_num == 11){                
        registers->DOUT_11_8.packed_byte[3] = val;
    }
    else if(pin_num == 12){
        registers->DOUT_15_12.packed_byte[0] = val;
    }                                       
    else if(pin_num == 13){                 
        registers->DOUT_15_12.packed_byte[1] = val;
    }                                       
    else if(pin_num == 14){                 
        registers->DOUT_15_12.packed_byte[2] = val;
    }                                       
    else if(pin_num == 15){                 
        registers->DOUT_15_12.packed_byte[3] = val;
    }
    else if(pin_num == 16){
        registers->DOUT_19_16.packed_byte[0] = val;
    }                                       
    else if(pin_num == 17){                 
        registers->DOUT_19_16.packed_byte[1] = val;
    }                                       
    else if(pin_num == 18){                 
        registers->DOUT_19_16.packed_byte[2] = val;
    }                                       
    else if(pin_num == 19){                 
        registers->DOUT_19_16.packed_byte[3] = val;
    }
    else if(pin_num == 20){
        registers->DOUT_23_20.packed_byte[0] = val;
    }                                       
    else if(pin_num == 21){                 
        registers->DOUT_23_20.packed_byte[1] = val;
    }                                       
    else if(pin_num == 22){                 
        registers->DOUT_23_20.packed_byte[2] = val;
    }                                       
    else if(pin_num == 23){                 
        registers->DOUT_23_20.packed_byte[3] = val;
    }
    else if(pin_num == 24){
        registers->DOUT_27_24.packed_byte[0] = val;
    }                                       
    else if(pin_num == 25){                 
        registers->DOUT_27_24.packed_byte[1] = val;
    }                                       
    else if(pin_num == 26){                 
        registers->DOUT_27_24.packed_byte[2] = val;
    }                                       
    else if(pin_num == 27){                 
        registers->DOUT_27_24.packed_byte[3] = val;
    }
    else if(pin_num == 28){
        registers->DOUT_31_28.packed_byte[0] = val;
    }                                       
    else if(pin_num == 29){                 
        registers->DOUT_31_28.packed_byte[1] = val;
    }                                       
    else if(pin_num == 30){                 
        registers->DOUT_31_28.packed_byte[2] = val;
    }                                       
    else if(pin_num == 31){                 
        registers->DOUT_31_28.packed_byte[3] = val;
    }
}/*}}}*/

void gpio_glitch_filter_cfg(GPIO_REGS_s * registers, uint32_t pin_num, uint32_t val)/*{{{*/{
    if(pin_num == 0){
        registers->FILT_EN_0.filt_en_0 = val;
    }
    else if(pin_num == 1){
        registers->FILT_EN_0.filt_en_1 = val;
    }
    else if(pin_num == 2){
        registers->FILT_EN_0.filt_en_2 = val; 
    }
    else if(pin_num == 3){
        registers->FILT_EN_0.filt_en_3 = val;   
    }
    else if(pin_num == 4){
        registers->FILT_EN_0.filt_en_4 = val;   
    }
    else if(pin_num == 5){
        registers->FILT_EN_0.filt_en_5 = val;   
    }
    else if(pin_num == 6){
        registers->FILT_EN_0.filt_en_6 = val;   
    }
    else if(pin_num == 7){
        registers->FILT_EN_0.filt_en_7 = val;   
    }
    else if(pin_num == 8){
        registers->FILT_EN_0.filt_en_8 = val;   
    }
    else if(pin_num == 9){
        registers->FILT_EN_0.filt_en_9 = val;   
    }
    else if(pin_num == 10){
        registers->FILT_EN_0.filt_en_10 = val;   
    }
    else if(pin_num == 11){
        registers->FILT_EN_0.filt_en_11 = val;   
    }
    else if(pin_num == 12){
        registers->FILT_EN_0.filt_en_12 = val;   
    }
    else if(pin_num == 13){
        registers->FILT_EN_0.filt_en_13 = val;   
    }
    else if(pin_num == 14){
        registers->FILT_EN_0.filt_en_14 = val;   
    }
    else if(pin_num == 15){
        registers->FILT_EN_0.filt_en_15 = val;   
    }
    else if(pin_num == 16){
        registers->FILT_EN_1.filt_en_16 = val;
    }
    else if(pin_num == 17){
        registers->FILT_EN_1.filt_en_17 = val;
    }
    else if(pin_num == 18){
        registers->FILT_EN_1.filt_en_18 = val; 
    }
    else if(pin_num == 19){
        registers->FILT_EN_1.filt_en_19 = val;   
    }
    else if(pin_num == 20){
        registers->FILT_EN_1.filt_en_20 = val;   
    }
    else if(pin_num == 21){
        registers->FILT_EN_1.filt_en_21 = val;   
    }
    else if(pin_num == 22){
        registers->FILT_EN_1.filt_en_22 = val;   
    }
    else if(pin_num == 23){
        registers->FILT_EN_1.filt_en_23 = val;   
    }
    else if(pin_num == 24){
        registers->FILT_EN_1.filt_en_24 = val;   
    }
    else if(pin_num == 25){
        registers->FILT_EN_1.filt_en_25 = val;   
    }
    else if(pin_num == 26){
        registers->FILT_EN_1.filt_en_26 = val;   
    }
    else if(pin_num == 27){
        registers->FILT_EN_1.filt_en_27 = val;   
    }
    else if(pin_num == 28){
        registers->FILT_EN_1.filt_en_28 = val;   
    }
    else if(pin_num == 29){
        registers->FILT_EN_1.filt_en_29 = val;   
    }
    else if(pin_num == 30){
        registers->FILT_EN_1.filt_en_30 = val;   
    }
    else if(pin_num == 31){
        registers->FILT_EN_1.filt_en_31 = val;   
    }
    
}/*}}}*/

void gpio_intr_polarity_cfg(GPIO_REGS_s * registers, uint32_t pin_num, GPIO_INTR_POL_E val)/*{{{*/{
    if(pin_num == 0){
        registers->INTR_POL_0.intr_pol_0 = val;
    }
    else if(pin_num == 1){
        registers->INTR_POL_0.intr_pol_1 = val;
    }
    else if(pin_num == 2){
        registers->INTR_POL_0.intr_pol_2 = val; 
    }
    else if(pin_num == 3){
        registers->INTR_POL_0.intr_pol_3 = val;   
    }
    else if(pin_num == 4){
        registers->INTR_POL_0.intr_pol_4 = val;   
    }
    else if(pin_num == 5){
        registers->INTR_POL_0.intr_pol_5 = val;   
    }
    else if(pin_num == 6){
        registers->INTR_POL_0.intr_pol_6 = val;   
    }
    else if(pin_num == 7){
        registers->INTR_POL_0.intr_pol_7 = val;   
    }
    else if(pin_num == 8){
        registers->INTR_POL_0.intr_pol_8 = val;   
    }
    else if(pin_num == 9){
        registers->INTR_POL_0.intr_pol_9 = val;   
    }
    else if(pin_num == 10){
        registers->INTR_POL_0.intr_pol_10 = val;   
    }
    else if(pin_num == 11){
        registers->INTR_POL_0.intr_pol_11 = val;   
    }
    else if(pin_num == 12){
        registers->INTR_POL_0.intr_pol_12 = val;   
    }
    else if(pin_num == 13){
        registers->INTR_POL_0.intr_pol_13 = val;   
    }
    else if(pin_num == 14){
        registers->INTR_POL_0.intr_pol_14 = val;   
    }
    else if(pin_num == 15){
        registers->INTR_POL_0.intr_pol_15 = val;   
    }
    else if(pin_num == 16){
        registers->INTR_POL_1.intr_pol_16 = val;
    }
    else if(pin_num == 17){
        registers->INTR_POL_1.intr_pol_17 = val;
    }
    else if(pin_num == 18){
        registers->INTR_POL_1.intr_pol_18 = val; 
    }
    else if(pin_num == 19){
        registers->INTR_POL_1.intr_pol_19 = val;   
    }
    else if(pin_num == 20){
        registers->INTR_POL_1.intr_pol_20 = val;   
    }
    else if(pin_num == 21){
        registers->INTR_POL_1.intr_pol_21 = val;   
    }
    else if(pin_num == 22){
        registers->INTR_POL_1.intr_pol_22 = val;   
    }
    else if(pin_num == 23){
        registers->INTR_POL_1.intr_pol_23 = val;   
    }
    else if(pin_num == 24){
        registers->INTR_POL_1.intr_pol_24 = val;   
    }
    else if(pin_num == 25){
        registers->INTR_POL_1.intr_pol_25 = val;   
    }
    else if(pin_num == 26){
        registers->INTR_POL_1.intr_pol_26 = val;   
    }
    else if(pin_num == 27){
        registers->INTR_POL_1.intr_pol_27 = val;   
    }
    else if(pin_num == 28){
        registers->INTR_POL_1.intr_pol_28 = val;   
    }
    else if(pin_num == 29){
        registers->INTR_POL_1.intr_pol_29 = val;   
    }
    else if(pin_num == 30){
        registers->INTR_POL_1.intr_pol_30 = val;   
    }
    else if(pin_num == 31){
        registers->INTR_POL_1.intr_pol_31 = val;   
    }
}/*}}}*/

void gpio_dma_cfg(GPIO_REGS_s * registers, uint32_t val){
    registers->DMA_WR_MASK.packed_w = val;
}

int gpio_din(GPIO_REGS_s * registers){
    int read_val;
    read_val = registers->DIN.packed_w;
    return read_val;
}

void gpio_dout(GPIO_REGS_s * registers, uint32_t val){
    registers->DOUT.packed_w = val;
}

void gpio_dout_en(GPIO_REGS_s * registers, uint32_t val){
    registers->DOUT_EN.packed_w = val;
}

void gpio_set_en(GPIO_REGS_s * registers, uint32_t val){
    registers->DOUT_EN_SET.packed_w = val;
}

void gpio_clr_en(GPIO_REGS_s * registers, uint32_t val){
    registers->DOUT_EN_CLR.packed_w = val;
}

void gpio_pub_cfg(GPIO_REGS_s * registers, uint32_t pin_num){
    if(pin_num <= 15){
        registers->EVENT_EN0.packed_w = ((1<<pin_num) | (1<<pin_num + 16));
        registers->INTR_POL_0.packed_w = ((1<<pin_num*2) | (1<<(pin_num*2+1)));
    }
    else if(pin_num > 15){
        registers->EVENT_EN0.packed_w = ((1<<pin_num) | (1<<pin_num + 16));
        registers->INTR_POL_1.packed_w = ((1<<pin_num*2) | (1<<(pin_num*2+1)));
    }
}


void gpio_sub_cfg(GPIO_REGS_s * registers, uint32_t sub_sel, uint32_t sub_en, uint32_t pin_action, uint32_t pin_num){
        registers->SUB_CFG[sub_sel].sub_en = sub_en;
        registers->SUB_CFG[sub_sel].action = pin_action;
        registers->SUB_CFG[sub_sel].bit_num = pin_num;
}

int gpio_din_pinwise(GPIO_REGS_s * registers, uint32_t pin_num)/*{{{*/{
    int val;
    if(pin_num == 0){
        val = registers->DIN_3_0.din_0;
    }
    else if(pin_num == 1){
        val = registers->DIN_3_0.din_1;
    }
    else if(pin_num == 2){
        val = registers->DIN_3_0.din_2;
    }
    else if(pin_num == 3){
        val = registers->DIN_3_0.din_3;
    }
    else if(pin_num == 4){
        val = registers->DIN_7_4.din_4;
    }
    else if(pin_num == 5){
        val = registers->DIN_7_4.din_5;
    }
    else if(pin_num == 6){
        val = registers->DIN_7_4.din_6;
    }
    else if(pin_num == 7){
        val = registers->DIN_7_4.din_7;
    }
    else if(pin_num == 8){
        val = registers->DIN_11_8.din_8;
    }
    else if(pin_num == 9){
        val = registers->DIN_11_8.din_9;
    }
    else if(pin_num == 10){
        val = registers->DIN_11_8.din_10;
    }
    else if(pin_num == 11){
        val = registers->DIN_11_8.din_11;
    }
    else if(pin_num == 12){
        val = registers->DIN_15_12.din_12;
    }
    else if(pin_num == 13){
        val = registers->DIN_15_12.din_13;
    }
    else if(pin_num == 14){
        val = registers->DIN_15_12.din_14;
    }
    else if(pin_num == 15){
        val = registers->DIN_15_12.din_15;
    }
    else if(pin_num == 16){
        val = registers->DIN_19_16.din_16;
    }
    else if(pin_num == 17){
        val = registers->DIN_19_16.din_17;
    }
    else if(pin_num == 18){
        val = registers->DIN_19_16.din_18;
    }
    else if(pin_num == 19){
        val = registers->DIN_19_16.din_19;
    }
    else if(pin_num == 20){
        val = registers->DIN_23_20.din_20;
    }
    else if(pin_num == 21){
        val = registers->DIN_23_20.din_21;
    }
    else if(pin_num == 22){
        val = registers->DIN_23_20.din_22;
    }
    else if(pin_num == 23){
        val = registers->DIN_23_20.din_23;
    }
    else if(pin_num == 24){
        val = registers->DIN_27_24.din_24;
    }
    else if(pin_num == 25){
        val = registers->DIN_27_24.din_25;
    }
    else if(pin_num == 26){
        val = registers->DIN_27_24.din_26;
    }
    else if(pin_num == 27){
        val = registers->DIN_27_24.din_27;
    }
    else if(pin_num == 28){
        val = registers->DIN_31_28.din_28;
    }
    else if(pin_num == 29){
        val = registers->DIN_31_28.din_29;
    }
    else if(pin_num == 30){
        val = registers->DIN_31_28.din_30;
    }
    else if(pin_num == 31){
        val = registers->DIN_31_28.din_31;
    }
    return val;
}/*}}}*/

void gpio_set(GPIO_REGS_s * registers, uint32_t val){
    registers->DOUT_SET.packed_w = val;
}

void gpio_clr(GPIO_REGS_s * registers, uint32_t val){
    registers->DOUT_CLR.packed_w = val;
}

void gpio_tgl(GPIO_REGS_s * registers, uint32_t val){
    registers->DOUT_TGL.packed_w = val;
}

int get_gpio_glitch_filter_cfg(GPIO_REGS_s * registers,uint32_t pin_num)/*{{{*/{
    int val;
    if(pin_num == 0){
        val = registers->FILT_EN_0.filt_en_0;
    }
    else if(pin_num == 1){
        val = registers->FILT_EN_0.filt_en_1;
    }
    else if(pin_num == 2){
        val = registers->FILT_EN_0.filt_en_2; 
    }
    else if(pin_num == 3){
        val = registers->FILT_EN_0.filt_en_3;   
    }
    else if(pin_num == 4){
        val = registers->FILT_EN_0.filt_en_4;   
    }
    else if(pin_num == 5){
        val = registers->FILT_EN_0.filt_en_5;   
    }
    else if(pin_num == 6){
        val = registers->FILT_EN_0.filt_en_6;   
    }
    else if(pin_num == 7){
        val = registers->FILT_EN_0.filt_en_7;   
    }
    else if(pin_num == 8){
        val = registers->FILT_EN_0.filt_en_8;   
    }
    else if(pin_num == 9){
        val = registers->FILT_EN_0.filt_en_9;   
    }
    else if(pin_num == 10){
        val = registers->FILT_EN_0.filt_en_10;   
    }
    else if(pin_num == 11){
        val = registers->FILT_EN_0.filt_en_11;   
    }
    else if(pin_num == 12){
        val = registers->FILT_EN_0.filt_en_12;   
    }
    else if(pin_num == 13){
        val = registers->FILT_EN_0.filt_en_13;   
    }
    else if(pin_num == 14){
        val = registers->FILT_EN_0.filt_en_14;   
    }
    else if(pin_num == 15){
        val = registers->FILT_EN_0.filt_en_15;   
    }
    else if(pin_num == 16){
        val = registers->FILT_EN_1.filt_en_16;
    }
    else if(pin_num == 17){
        val = registers->FILT_EN_1.filt_en_17;
    }
    else if(pin_num == 18){
        val = registers->FILT_EN_1.filt_en_18; 
    }
    else if(pin_num == 19){
        val = registers->FILT_EN_1.filt_en_19;   
    }
    else if(pin_num == 20){
        val = registers->FILT_EN_1.filt_en_20;   
    }
    else if(pin_num == 21){
        val = registers->FILT_EN_1.filt_en_21;   
    }
    else if(pin_num == 22){
        val = registers->FILT_EN_1.filt_en_22;   
    }
    else if(pin_num == 23){
        val = registers->FILT_EN_1.filt_en_23;   
    }
    else if(pin_num == 24){
        val = registers->FILT_EN_1.filt_en_24;   
    }
    else if(pin_num == 25){
        val = registers->FILT_EN_1.filt_en_25;   
    }
    else if(pin_num == 26){
        val = registers->FILT_EN_1.filt_en_26;   
    }
    else if(pin_num == 27){
        val = registers->FILT_EN_1.filt_en_27;   
    }
    else if(pin_num == 28){
        val = registers->FILT_EN_1.filt_en_28;   
    }
    else if(pin_num == 29){
        val = registers->FILT_EN_1.filt_en_29;   
    }
    else if(pin_num == 30){
        val = registers->FILT_EN_1.filt_en_30;   
    }
    else if(pin_num == 31){
        val = registers->FILT_EN_1.filt_en_31;   
    }
    return val; 
}/*}}}*/

int get_gpio_intr_polarity_cfg(GPIO_REGS_s * registers, uint32_t pin_num)/*{{{*/{
    int val;
    if(pin_num == 0){
        val = registers->INTR_POL_0.intr_pol_0;
    }
    else if(pin_num == 1){
        val = registers->INTR_POL_0.intr_pol_1;
    }
    else if(pin_num == 2){
        val = registers->INTR_POL_0.intr_pol_2; 
    }
    else if(pin_num == 3){
        val = registers->INTR_POL_0.intr_pol_3;   
    }
    else if(pin_num == 4){
        val = registers->INTR_POL_0.intr_pol_4;   
    }
    else if(pin_num == 5){
        val = registers->INTR_POL_0.intr_pol_5;   
    }
    else if(pin_num == 6){
        val = registers->INTR_POL_0.intr_pol_6;   
    }
    else if(pin_num == 7){
        val = registers->INTR_POL_0.intr_pol_7;   
    }
    else if(pin_num == 8){
        val = registers->INTR_POL_0.intr_pol_8;   
    }
    else if(pin_num == 9){
        val = registers->INTR_POL_0.intr_pol_9;   
    }
    else if(pin_num == 10){
        val = registers->INTR_POL_0.intr_pol_10;   
    }
    else if(pin_num == 11){
        val = registers->INTR_POL_0.intr_pol_11;   
    }
    else if(pin_num == 12){
        val = registers->INTR_POL_0.intr_pol_12;   
    }
    else if(pin_num == 13){
        val = registers->INTR_POL_0.intr_pol_13;   
    }
    else if(pin_num == 14){
        val = registers->INTR_POL_0.intr_pol_14;   
    }
    else if(pin_num == 15){
        val = registers->INTR_POL_0.intr_pol_15;   
    }
    else if(pin_num == 16){
        val = registers->INTR_POL_1.intr_pol_16;
    }
    else if(pin_num == 17){
        val = registers->INTR_POL_1.intr_pol_17;
    }
    else if(pin_num == 18){
        val = registers->INTR_POL_1.intr_pol_18; 
    }
    else if(pin_num == 19){
        val = registers->INTR_POL_1.intr_pol_19;   
    }
    else if(pin_num == 20){
        val = registers->INTR_POL_1.intr_pol_20;   
    }
    else if(pin_num == 21){
        val = registers->INTR_POL_1.intr_pol_21;   
    }
    else if(pin_num == 22){
        val = registers->INTR_POL_1.intr_pol_22;   
    }
    else if(pin_num == 23){
        val = registers->INTR_POL_1.intr_pol_23;   
    }
    else if(pin_num == 24){
        val = registers->INTR_POL_1.intr_pol_24;   
    }
    else if(pin_num == 25){
        val = registers->INTR_POL_1.intr_pol_25;   
    }
    else if(pin_num == 26){
        val = registers->INTR_POL_1.intr_pol_26;   
    }
    else if(pin_num == 27){
        val = registers->INTR_POL_1.intr_pol_27;   
    }
    else if(pin_num == 28){
        val = registers->INTR_POL_1.intr_pol_28;   
    }
    else if(pin_num == 29){
        val = registers->INTR_POL_1.intr_pol_29;   
    }
    else if(pin_num == 30){
        val = registers->INTR_POL_1.intr_pol_30;   
    }
    else if(pin_num == 31){
        val = registers->INTR_POL_1.intr_pol_31;   
    }
    return val;
}/*}}}*/

IOMUX_PA_REG_s get_gpio_iomux_cfg(IOMUX_REGS_s * registers, uint32_t pin_num)/*{{{*/{
    
    IOMUX_PA_REG_s iomux_cfg;

    iomux_cfg.output_en      = registers->PA[pin_num].output_en;
    iomux_cfg.input_en       = registers->PA[pin_num].input_en;
    iomux_cfg.drive_strength = registers->PA[pin_num].drive_strength;
    iomux_cfg.slew_rate      = registers->PA[pin_num].slew_rate;
    iomux_cfg.pull_up        = registers->PA[pin_num].pull_up;
    iomux_cfg.pull_down      = registers->PA[pin_num].pull_down;
    iomux_cfg.hysteresis     = registers->PA[pin_num].hysteresis;
    iomux_cfg.sel            = registers->PA[pin_num].sel;
    iomux_cfg.rsvd_0         = registers->PA[pin_num].rsvd_0;
    iomux_cfg.input_val      = registers->PA[pin_num].input_val;
    
    return iomux_cfg;
}/*}}}*/

GPIO_SUB_CFG_REG_s get_gpio_sub_cfg(GPIO_REGS_s * registers, uint32_t sub_sel){
    GPIO_SUB_CFG_REG_s sub_cfg;
    sub_cfg.sub_en     = registers->SUB_CFG[sub_sel].sub_en;
    sub_cfg.action = registers->SUB_CFG[sub_sel].action;
    sub_cfg.bit_num    = registers->SUB_CFG[sub_sel].bit_num;
    return sub_cfg;
}

int get_gpio_dma_cfg(GPIO_REGS_s * registers){
    int val;
    val = registers->DMA_WR_MASK.packed_w;
    return val;
}

int get_gpio_dout(GPIO_REGS_s * registers){
    int val;
    val = registers->DOUT.packed_w;
    return val;
}

int get_gpio_dout_pinwise(GPIO_REGS_s * registers, uint32_t pin_num)/*{{{*/{
    int val;
    if(pin_num == 0){
        val = registers->DOUT_3_0.packed_byte[0];
    }
    else if(pin_num == 1){
        val = registers->DOUT_3_0.packed_byte[1];
    }
    else if(pin_num == 2){
        val = registers->DOUT_3_0.packed_byte[2];
    }
    else if(pin_num == 3){
        val = registers->DOUT_3_0.packed_byte[3];
    }
    else if(pin_num == 4){
        val = registers->DOUT_7_4.packed_byte[0];
    }
    else if(pin_num == 5){
        val = registers->DOUT_7_4.packed_byte[1];
    }
    else if(pin_num == 6){
        val = registers->DOUT_7_4.packed_byte[2];
    }
    else if(pin_num == 7){
        val = registers->DOUT_7_4.packed_byte[3];
    }
    else if(pin_num == 8){
        val = registers->DOUT_11_8.packed_byte[0];
    }                                      
    else if(pin_num == 9){                 
        val = registers->DOUT_11_8.packed_byte[1];
    }
    else if(pin_num == 10){
        val = registers->DOUT_11_8.packed_byte[2];
    }                                      
    else if(pin_num == 11){                
        val = registers->DOUT_11_8.packed_byte[3];
    }
    else if(pin_num == 12){
        val = registers->DOUT_15_12.packed_byte[0];
    }                                       
    else if(pin_num == 13){                 
        val = registers->DOUT_15_12.packed_byte[1];
    }                                       
    else if(pin_num == 14){                 
        val = registers->DOUT_15_12.packed_byte[2];
    }                                       
    else if(pin_num == 15){                 
        val = registers->DOUT_15_12.packed_byte[3];
    }
    else if(pin_num == 16){
        val = registers->DOUT_19_16.packed_byte[0];
    }                                       
    else if(pin_num == 17){                 
        val = registers->DOUT_19_16.packed_byte[1];
    }                                       
    else if(pin_num == 18){                 
        val = registers->DOUT_19_16.packed_byte[2];
    }                                       
    else if(pin_num == 19){                 
        val = registers->DOUT_19_16.packed_byte[3];
    }
    else if(pin_num == 20){
        val = registers->DOUT_23_20.packed_byte[0];
    }                                       
    else if(pin_num == 21){                 
        val = registers->DOUT_23_20.packed_byte[1];
    }                                       
    else if(pin_num == 22){                 
        val = registers->DOUT_23_20.packed_byte[2];
    }                                       
    else if(pin_num == 23){                 
        val = registers->DOUT_23_20.packed_byte[3];
    }
    else if(pin_num == 24){
        val = registers->DOUT_27_24.packed_byte[0];
    }                                       
    else if(pin_num == 25){                 
        val = registers->DOUT_27_24.packed_byte[1];
    }                                       
    else if(pin_num == 26){                 
        val = registers->DOUT_27_24.packed_byte[2];
    }                                       
    else if(pin_num == 27){                 
        val = registers->DOUT_27_24.packed_byte[3];
    }
    else if(pin_num == 28){
        val = registers->DOUT_31_28.packed_byte[0];
    }                                       
    else if(pin_num == 29){                 
        val = registers->DOUT_31_28.packed_byte[1];
    }                                       
    else if(pin_num == 30){                 
        val = registers->DOUT_31_28.packed_byte[2];
    }                                       
    else if(pin_num == 31){                 
        val = registers->DOUT_31_28.packed_byte[3];
    }
    return val;
}/*}}}*/

