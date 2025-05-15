#ifndef GPIO_RW_API_H
#define GPIO_RW_API_H

#include "GPIO_REGS.h"

static inline void GPIO_PWR_EN_WRITE(GPIO_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w = ((pwr_en<<GPIO_PWR_EN_PWR_EN_OFS) & GPIO_PWR_EN_PWR_EN_MASK)
                                +((pwr_en_key<<GPIO_PWR_EN_PWR_EN_KEY_OFS) & GPIO_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void GPIO_RST_CTRL_WRITE(GPIO_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w = ((rst<<GPIO_RST_CTRL_RST_OFS) & GPIO_RST_CTRL_RST_MASK)
                                  +((rst_sts_clr<<GPIO_RST_CTRL_RST_STS_CLR_OFS) & GPIO_RST_CTRL_RST_STS_CLR_MASK)
                                  +((rst_key<<GPIO_RST_CTRL_RST_KEY_OFS) & GPIO_RST_CTRL_RST_KEY_MASK);
}

static inline void GPIO_CLK_CTRL_WRITE(GPIO_REGS_s * registers, uint32_t en_async_clk_req) {
    registers->CLK_CTRL.packed_w = ((en_async_clk_req<<GPIO_CLK_CTRL_EN_ASYNC_CLK_REQ_OFS) & GPIO_CLK_CTRL_EN_ASYNC_CLK_REQ_MASK);
}

static inline void GPIO_INTR_EVENT_CLEAR(GPIO_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_EVENT.packed_w = 1<<intr_idx;
}

static inline void GPIO_INTR_EVENT_EN(GPIO_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_EN0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_EN1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void GPIO_INTR_EVENT_DIS(GPIO_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_EN0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_EN1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void GPIO_INTR_EVENT_NMI_EN(GPIO_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_NMI_EN0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_NMI_EN1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void GPIO_INTR_EVENT_NMI_DIS(GPIO_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_NMI_EN0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_NMI_EN1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void GPIO_GENERIC_EVENT_EN(GPIO_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->EVENT_EN0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->EVENT_EN1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void GPIO_GENERIC_EVENT_DIS(GPIO_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->EVENT_EN0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->EVENT_EN1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void GPIO_INTR_SW_SET(GPIO_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_SW_SET.packed_w = 1<<intr_idx;
}

static inline void GPIO_DOUT_3_0_WRITE(GPIO_REGS_s * registers, uint32_t dout_0, uint32_t dout_1, uint32_t dout_2, uint32_t dout_3) {
    registers->DOUT_3_0.packed_w = ((dout_0<<GPIO_DOUT_3_0_DOUT_0_OFS) & GPIO_DOUT_3_0_DOUT_0_MASK)
                                  +((dout_1<<GPIO_DOUT_3_0_DOUT_1_OFS) & GPIO_DOUT_3_0_DOUT_1_MASK)
                                  +((dout_2<<GPIO_DOUT_3_0_DOUT_2_OFS) & GPIO_DOUT_3_0_DOUT_2_MASK)
                                  +((dout_3<<GPIO_DOUT_3_0_DOUT_3_OFS) & GPIO_DOUT_3_0_DOUT_3_MASK);
}

static inline void GPIO_DOUT_7_4_WRITE(GPIO_REGS_s * registers, uint32_t dout_4, uint32_t dout_5, uint32_t dout_6, uint32_t dout_7) {
    registers->DOUT_7_4.packed_w = ((dout_4<<GPIO_DOUT_7_4_DOUT_4_OFS) & GPIO_DOUT_7_4_DOUT_4_MASK)
                                  +((dout_5<<GPIO_DOUT_7_4_DOUT_5_OFS) & GPIO_DOUT_7_4_DOUT_5_MASK)
                                  +((dout_6<<GPIO_DOUT_7_4_DOUT_6_OFS) & GPIO_DOUT_7_4_DOUT_6_MASK)
                                  +((dout_7<<GPIO_DOUT_7_4_DOUT_7_OFS) & GPIO_DOUT_7_4_DOUT_7_MASK);
}

static inline void GPIO_DOUT_11_8_WRITE(GPIO_REGS_s * registers, uint32_t dout_8, uint32_t dout_9, uint32_t dout_10, uint32_t dout_11) {
    registers->DOUT_11_8.packed_w = ((dout_8<<GPIO_DOUT_11_8_DOUT_8_OFS) & GPIO_DOUT_11_8_DOUT_8_MASK)
                                   +((dout_9<<GPIO_DOUT_11_8_DOUT_9_OFS) & GPIO_DOUT_11_8_DOUT_9_MASK)
                                   +((dout_10<<GPIO_DOUT_11_8_DOUT_10_OFS) & GPIO_DOUT_11_8_DOUT_10_MASK)
                                   +((dout_11<<GPIO_DOUT_11_8_DOUT_11_OFS) & GPIO_DOUT_11_8_DOUT_11_MASK);
}

static inline void GPIO_DOUT_15_12_WRITE(GPIO_REGS_s * registers, uint32_t dout_12, uint32_t dout_13, uint32_t dout_14, uint32_t dout_15) {
    registers->DOUT_15_12.packed_w = ((dout_12<<GPIO_DOUT_15_12_DOUT_12_OFS) & GPIO_DOUT_15_12_DOUT_12_MASK)
                                    +((dout_13<<GPIO_DOUT_15_12_DOUT_13_OFS) & GPIO_DOUT_15_12_DOUT_13_MASK)
                                    +((dout_14<<GPIO_DOUT_15_12_DOUT_14_OFS) & GPIO_DOUT_15_12_DOUT_14_MASK)
                                    +((dout_15<<GPIO_DOUT_15_12_DOUT_15_OFS) & GPIO_DOUT_15_12_DOUT_15_MASK);
}

static inline void GPIO_DOUT_19_16_WRITE(GPIO_REGS_s * registers, uint32_t dout_16, uint32_t dout_17, uint32_t dout_18, uint32_t dout_19) {
    registers->DOUT_19_16.packed_w = ((dout_16<<GPIO_DOUT_19_16_DOUT_16_OFS) & GPIO_DOUT_19_16_DOUT_16_MASK)
                                    +((dout_17<<GPIO_DOUT_19_16_DOUT_17_OFS) & GPIO_DOUT_19_16_DOUT_17_MASK)
                                    +((dout_18<<GPIO_DOUT_19_16_DOUT_18_OFS) & GPIO_DOUT_19_16_DOUT_18_MASK)
                                    +((dout_19<<GPIO_DOUT_19_16_DOUT_19_OFS) & GPIO_DOUT_19_16_DOUT_19_MASK);
}

static inline void GPIO_DOUT_23_20_WRITE(GPIO_REGS_s * registers, uint32_t dout_20, uint32_t dout_21, uint32_t dout_22, uint32_t dout_23) {
    registers->DOUT_23_20.packed_w = ((dout_20<<GPIO_DOUT_23_20_DOUT_20_OFS) & GPIO_DOUT_23_20_DOUT_20_MASK)
                                    +((dout_21<<GPIO_DOUT_23_20_DOUT_21_OFS) & GPIO_DOUT_23_20_DOUT_21_MASK)
                                    +((dout_22<<GPIO_DOUT_23_20_DOUT_22_OFS) & GPIO_DOUT_23_20_DOUT_22_MASK)
                                    +((dout_23<<GPIO_DOUT_23_20_DOUT_23_OFS) & GPIO_DOUT_23_20_DOUT_23_MASK);
}

static inline void GPIO_DOUT_27_24_WRITE(GPIO_REGS_s * registers, uint32_t dout_24, uint32_t dout_25, uint32_t dout_26, uint32_t dout_27) {
    registers->DOUT_27_24.packed_w = ((dout_24<<GPIO_DOUT_27_24_DOUT_24_OFS) & GPIO_DOUT_27_24_DOUT_24_MASK)
                                    +((dout_25<<GPIO_DOUT_27_24_DOUT_25_OFS) & GPIO_DOUT_27_24_DOUT_25_MASK)
                                    +((dout_26<<GPIO_DOUT_27_24_DOUT_26_OFS) & GPIO_DOUT_27_24_DOUT_26_MASK)
                                    +((dout_27<<GPIO_DOUT_27_24_DOUT_27_OFS) & GPIO_DOUT_27_24_DOUT_27_MASK);
}

static inline void GPIO_DOUT_31_28_WRITE(GPIO_REGS_s * registers, uint32_t dout_28, uint32_t dout_29, uint32_t dout_30, uint32_t dout_31) {
    registers->DOUT_31_28.packed_w = ((dout_28<<GPIO_DOUT_31_28_DOUT_28_OFS) & GPIO_DOUT_31_28_DOUT_28_MASK)
                                    +((dout_29<<GPIO_DOUT_31_28_DOUT_29_OFS) & GPIO_DOUT_31_28_DOUT_29_MASK)
                                    +((dout_30<<GPIO_DOUT_31_28_DOUT_30_OFS) & GPIO_DOUT_31_28_DOUT_30_MASK)
                                    +((dout_31<<GPIO_DOUT_31_28_DOUT_31_OFS) & GPIO_DOUT_31_28_DOUT_31_MASK);
}

static inline void GPIO_DOUT_WRITE(GPIO_REGS_s * registers, uint32_t dout) {
    registers->DOUT.packed_w = ((dout<<GPIO_DOUT_DOUT_OFS) & GPIO_DOUT_DOUT_MASK);
}

static inline void GPIO_DOUT_SET_WRITE(GPIO_REGS_s * registers, uint32_t dout_set) {
    registers->DOUT_SET.packed_w = ((dout_set<<GPIO_DOUT_SET_DOUT_SET_OFS) & GPIO_DOUT_SET_DOUT_SET_MASK);
}

static inline void GPIO_DOUT_CLR_WRITE(GPIO_REGS_s * registers, uint32_t dout_clr) {
    registers->DOUT_CLR.packed_w = ((dout_clr<<GPIO_DOUT_CLR_DOUT_CLR_OFS) & GPIO_DOUT_CLR_DOUT_CLR_MASK);
}

static inline void GPIO_DOUT_TGL_WRITE(GPIO_REGS_s * registers, uint32_t dout_tgl) {
    registers->DOUT_TGL.packed_w = ((dout_tgl<<GPIO_DOUT_TGL_DOUT_TGL_OFS) & GPIO_DOUT_TGL_DOUT_TGL_MASK);
}

static inline void GPIO_DOUT_EN_WRITE(GPIO_REGS_s * registers, uint32_t dout_en) {
    registers->DOUT_EN.packed_w = ((dout_en<<GPIO_DOUT_EN_DOUT_EN_OFS) & GPIO_DOUT_EN_DOUT_EN_MASK);
}

static inline void GPIO_DOUT_EN_SET_WRITE(GPIO_REGS_s * registers, uint32_t dout_en_set) {
    registers->DOUT_EN_SET.packed_w = ((dout_en_set<<GPIO_DOUT_EN_SET_DOUT_EN_SET_OFS) & GPIO_DOUT_EN_SET_DOUT_EN_SET_MASK);
}

static inline void GPIO_DOUT_EN_CLR_WRITE(GPIO_REGS_s * registers, uint32_t dout_en_clr) {
    registers->DOUT_EN_CLR.packed_w = ((dout_en_clr<<GPIO_DOUT_EN_CLR_DOUT_EN_CLR_OFS) & GPIO_DOUT_EN_CLR_DOUT_EN_CLR_MASK);
}

static inline void GPIO_FILT_EN_0_WRITE(GPIO_REGS_s * registers, uint32_t filt_en_0, uint32_t filt_en_1, uint32_t filt_en_2, uint32_t filt_en_3, uint32_t filt_en_4, uint32_t filt_en_5, uint32_t filt_en_6, uint32_t filt_en_7, uint32_t filt_en_8, uint32_t filt_en_9, uint32_t filt_en_10, uint32_t filt_en_11, uint32_t filt_en_12, uint32_t filt_en_13, uint32_t filt_en_14, uint32_t filt_en_15) {
    registers->FILT_EN_0.packed_w = ((filt_en_0<<GPIO_FILT_EN_0_FILT_EN_0_OFS) & GPIO_FILT_EN_0_FILT_EN_0_MASK)
                                   +((filt_en_1<<GPIO_FILT_EN_0_FILT_EN_1_OFS) & GPIO_FILT_EN_0_FILT_EN_1_MASK)
                                   +((filt_en_2<<GPIO_FILT_EN_0_FILT_EN_2_OFS) & GPIO_FILT_EN_0_FILT_EN_2_MASK)
                                   +((filt_en_3<<GPIO_FILT_EN_0_FILT_EN_3_OFS) & GPIO_FILT_EN_0_FILT_EN_3_MASK)
                                   +((filt_en_4<<GPIO_FILT_EN_0_FILT_EN_4_OFS) & GPIO_FILT_EN_0_FILT_EN_4_MASK)
                                   +((filt_en_5<<GPIO_FILT_EN_0_FILT_EN_5_OFS) & GPIO_FILT_EN_0_FILT_EN_5_MASK)
                                   +((filt_en_6<<GPIO_FILT_EN_0_FILT_EN_6_OFS) & GPIO_FILT_EN_0_FILT_EN_6_MASK)
                                   +((filt_en_7<<GPIO_FILT_EN_0_FILT_EN_7_OFS) & GPIO_FILT_EN_0_FILT_EN_7_MASK)
                                   +((filt_en_8<<GPIO_FILT_EN_0_FILT_EN_8_OFS) & GPIO_FILT_EN_0_FILT_EN_8_MASK)
                                   +((filt_en_9<<GPIO_FILT_EN_0_FILT_EN_9_OFS) & GPIO_FILT_EN_0_FILT_EN_9_MASK)
                                   +((filt_en_10<<GPIO_FILT_EN_0_FILT_EN_10_OFS) & GPIO_FILT_EN_0_FILT_EN_10_MASK)
                                   +((filt_en_11<<GPIO_FILT_EN_0_FILT_EN_11_OFS) & GPIO_FILT_EN_0_FILT_EN_11_MASK)
                                   +((filt_en_12<<GPIO_FILT_EN_0_FILT_EN_12_OFS) & GPIO_FILT_EN_0_FILT_EN_12_MASK)
                                   +((filt_en_13<<GPIO_FILT_EN_0_FILT_EN_13_OFS) & GPIO_FILT_EN_0_FILT_EN_13_MASK)
                                   +((filt_en_14<<GPIO_FILT_EN_0_FILT_EN_14_OFS) & GPIO_FILT_EN_0_FILT_EN_14_MASK)
                                   +((filt_en_15<<GPIO_FILT_EN_0_FILT_EN_15_OFS) & GPIO_FILT_EN_0_FILT_EN_15_MASK);
}

static inline void GPIO_FILT_EN_1_WRITE(GPIO_REGS_s * registers, uint32_t filt_en_16, uint32_t filt_en_17, uint32_t filt_en_18, uint32_t filt_en_19, uint32_t filt_en_20, uint32_t filt_en_21, uint32_t filt_en_22, uint32_t filt_en_23, uint32_t filt_en_24, uint32_t filt_en_25, uint32_t filt_en_26, uint32_t filt_en_27, uint32_t filt_en_28, uint32_t filt_en_29, uint32_t filt_en_30, uint32_t filt_en_31) {
    registers->FILT_EN_1.packed_w = ((filt_en_16<<GPIO_FILT_EN_1_FILT_EN_16_OFS) & GPIO_FILT_EN_1_FILT_EN_16_MASK)
                                   +((filt_en_17<<GPIO_FILT_EN_1_FILT_EN_17_OFS) & GPIO_FILT_EN_1_FILT_EN_17_MASK)
                                   +((filt_en_18<<GPIO_FILT_EN_1_FILT_EN_18_OFS) & GPIO_FILT_EN_1_FILT_EN_18_MASK)
                                   +((filt_en_19<<GPIO_FILT_EN_1_FILT_EN_19_OFS) & GPIO_FILT_EN_1_FILT_EN_19_MASK)
                                   +((filt_en_20<<GPIO_FILT_EN_1_FILT_EN_20_OFS) & GPIO_FILT_EN_1_FILT_EN_20_MASK)
                                   +((filt_en_21<<GPIO_FILT_EN_1_FILT_EN_21_OFS) & GPIO_FILT_EN_1_FILT_EN_21_MASK)
                                   +((filt_en_22<<GPIO_FILT_EN_1_FILT_EN_22_OFS) & GPIO_FILT_EN_1_FILT_EN_22_MASK)
                                   +((filt_en_23<<GPIO_FILT_EN_1_FILT_EN_23_OFS) & GPIO_FILT_EN_1_FILT_EN_23_MASK)
                                   +((filt_en_24<<GPIO_FILT_EN_1_FILT_EN_24_OFS) & GPIO_FILT_EN_1_FILT_EN_24_MASK)
                                   +((filt_en_25<<GPIO_FILT_EN_1_FILT_EN_25_OFS) & GPIO_FILT_EN_1_FILT_EN_25_MASK)
                                   +((filt_en_26<<GPIO_FILT_EN_1_FILT_EN_26_OFS) & GPIO_FILT_EN_1_FILT_EN_26_MASK)
                                   +((filt_en_27<<GPIO_FILT_EN_1_FILT_EN_27_OFS) & GPIO_FILT_EN_1_FILT_EN_27_MASK)
                                   +((filt_en_28<<GPIO_FILT_EN_1_FILT_EN_28_OFS) & GPIO_FILT_EN_1_FILT_EN_28_MASK)
                                   +((filt_en_29<<GPIO_FILT_EN_1_FILT_EN_29_OFS) & GPIO_FILT_EN_1_FILT_EN_29_MASK)
                                   +((filt_en_30<<GPIO_FILT_EN_1_FILT_EN_30_OFS) & GPIO_FILT_EN_1_FILT_EN_30_MASK)
                                   +((filt_en_31<<GPIO_FILT_EN_1_FILT_EN_31_OFS) & GPIO_FILT_EN_1_FILT_EN_31_MASK);
}

static inline void GPIO_INTR_POL_0_WRITE(GPIO_REGS_s * registers, uint32_t intr_pol_0, uint32_t intr_pol_1, uint32_t intr_pol_2, uint32_t intr_pol_3, uint32_t intr_pol_4, uint32_t intr_pol_5, uint32_t intr_pol_6, uint32_t intr_pol_7, uint32_t intr_pol_8, uint32_t intr_pol_9, uint32_t intr_pol_10, uint32_t intr_pol_11, uint32_t intr_pol_12, uint32_t intr_pol_13, uint32_t intr_pol_14, uint32_t intr_pol_15) {
    registers->INTR_POL_0.packed_w = ((intr_pol_0<<GPIO_INTR_POL_0_INTR_POL_0_OFS) & GPIO_INTR_POL_0_INTR_POL_0_MASK)
                                    +((intr_pol_1<<GPIO_INTR_POL_0_INTR_POL_1_OFS) & GPIO_INTR_POL_0_INTR_POL_1_MASK)
                                    +((intr_pol_2<<GPIO_INTR_POL_0_INTR_POL_2_OFS) & GPIO_INTR_POL_0_INTR_POL_2_MASK)
                                    +((intr_pol_3<<GPIO_INTR_POL_0_INTR_POL_3_OFS) & GPIO_INTR_POL_0_INTR_POL_3_MASK)
                                    +((intr_pol_4<<GPIO_INTR_POL_0_INTR_POL_4_OFS) & GPIO_INTR_POL_0_INTR_POL_4_MASK)
                                    +((intr_pol_5<<GPIO_INTR_POL_0_INTR_POL_5_OFS) & GPIO_INTR_POL_0_INTR_POL_5_MASK)
                                    +((intr_pol_6<<GPIO_INTR_POL_0_INTR_POL_6_OFS) & GPIO_INTR_POL_0_INTR_POL_6_MASK)
                                    +((intr_pol_7<<GPIO_INTR_POL_0_INTR_POL_7_OFS) & GPIO_INTR_POL_0_INTR_POL_7_MASK)
                                    +((intr_pol_8<<GPIO_INTR_POL_0_INTR_POL_8_OFS) & GPIO_INTR_POL_0_INTR_POL_8_MASK)
                                    +((intr_pol_9<<GPIO_INTR_POL_0_INTR_POL_9_OFS) & GPIO_INTR_POL_0_INTR_POL_9_MASK)
                                    +((intr_pol_10<<GPIO_INTR_POL_0_INTR_POL_10_OFS) & GPIO_INTR_POL_0_INTR_POL_10_MASK)
                                    +((intr_pol_11<<GPIO_INTR_POL_0_INTR_POL_11_OFS) & GPIO_INTR_POL_0_INTR_POL_11_MASK)
                                    +((intr_pol_12<<GPIO_INTR_POL_0_INTR_POL_12_OFS) & GPIO_INTR_POL_0_INTR_POL_12_MASK)
                                    +((intr_pol_13<<GPIO_INTR_POL_0_INTR_POL_13_OFS) & GPIO_INTR_POL_0_INTR_POL_13_MASK)
                                    +((intr_pol_14<<GPIO_INTR_POL_0_INTR_POL_14_OFS) & GPIO_INTR_POL_0_INTR_POL_14_MASK)
                                    +((intr_pol_15<<GPIO_INTR_POL_0_INTR_POL_15_OFS) & GPIO_INTR_POL_0_INTR_POL_15_MASK);
}

static inline void GPIO_INTR_POL_1_WRITE(GPIO_REGS_s * registers, uint32_t intr_pol_16, uint32_t intr_pol_17, uint32_t intr_pol_18, uint32_t intr_pol_19, uint32_t intr_pol_20, uint32_t intr_pol_21, uint32_t intr_pol_22, uint32_t intr_pol_23, uint32_t intr_pol_24, uint32_t intr_pol_25, uint32_t intr_pol_26, uint32_t intr_pol_27, uint32_t intr_pol_28, uint32_t intr_pol_29, uint32_t intr_pol_30, uint32_t intr_pol_31) {
    registers->INTR_POL_1.packed_w = ((intr_pol_16<<GPIO_INTR_POL_1_INTR_POL_16_OFS) & GPIO_INTR_POL_1_INTR_POL_16_MASK)
                                    +((intr_pol_17<<GPIO_INTR_POL_1_INTR_POL_17_OFS) & GPIO_INTR_POL_1_INTR_POL_17_MASK)
                                    +((intr_pol_18<<GPIO_INTR_POL_1_INTR_POL_18_OFS) & GPIO_INTR_POL_1_INTR_POL_18_MASK)
                                    +((intr_pol_19<<GPIO_INTR_POL_1_INTR_POL_19_OFS) & GPIO_INTR_POL_1_INTR_POL_19_MASK)
                                    +((intr_pol_20<<GPIO_INTR_POL_1_INTR_POL_20_OFS) & GPIO_INTR_POL_1_INTR_POL_20_MASK)
                                    +((intr_pol_21<<GPIO_INTR_POL_1_INTR_POL_21_OFS) & GPIO_INTR_POL_1_INTR_POL_21_MASK)
                                    +((intr_pol_22<<GPIO_INTR_POL_1_INTR_POL_22_OFS) & GPIO_INTR_POL_1_INTR_POL_22_MASK)
                                    +((intr_pol_23<<GPIO_INTR_POL_1_INTR_POL_23_OFS) & GPIO_INTR_POL_1_INTR_POL_23_MASK)
                                    +((intr_pol_24<<GPIO_INTR_POL_1_INTR_POL_24_OFS) & GPIO_INTR_POL_1_INTR_POL_24_MASK)
                                    +((intr_pol_25<<GPIO_INTR_POL_1_INTR_POL_25_OFS) & GPIO_INTR_POL_1_INTR_POL_25_MASK)
                                    +((intr_pol_26<<GPIO_INTR_POL_1_INTR_POL_26_OFS) & GPIO_INTR_POL_1_INTR_POL_26_MASK)
                                    +((intr_pol_27<<GPIO_INTR_POL_1_INTR_POL_27_OFS) & GPIO_INTR_POL_1_INTR_POL_27_MASK)
                                    +((intr_pol_28<<GPIO_INTR_POL_1_INTR_POL_28_OFS) & GPIO_INTR_POL_1_INTR_POL_28_MASK)
                                    +((intr_pol_29<<GPIO_INTR_POL_1_INTR_POL_29_OFS) & GPIO_INTR_POL_1_INTR_POL_29_MASK)
                                    +((intr_pol_30<<GPIO_INTR_POL_1_INTR_POL_30_OFS) & GPIO_INTR_POL_1_INTR_POL_30_MASK)
                                    +((intr_pol_31<<GPIO_INTR_POL_1_INTR_POL_31_OFS) & GPIO_INTR_POL_1_INTR_POL_31_MASK);
}

static inline void GPIO_SUB_CFG_N_WRITE(GPIO_REGS_s * registers, uint32_t index, uint32_t sub_en, uint32_t action, uint32_t bit_num) {
    registers->SUB_CFG[index].packed_w = ((sub_en<<GPIO_SUB_CFG_SUB_EN_OFS) & GPIO_SUB_CFG_SUB_EN_MASK)
                                        +((action<<GPIO_SUB_CFG_ACTION_OFS) & GPIO_SUB_CFG_ACTION_MASK)
                                        +((bit_num<<GPIO_SUB_CFG_BIT_NUM_OFS) & GPIO_SUB_CFG_BIT_NUM_MASK);
}

static inline void GPIO_DMA_WR_MASK_WRITE(GPIO_REGS_s * registers, uint32_t dma_wr_mask) {
    registers->DMA_WR_MASK.packed_w = ((dma_wr_mask<<GPIO_DMA_WR_MASK_DMA_WR_MASK_OFS) & GPIO_DMA_WR_MASK_DMA_WR_MASK_MASK);
}


#endif
