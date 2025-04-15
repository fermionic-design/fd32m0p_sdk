#include "TIMER_REGS.h"

static inline void TIMER_DESC_WRITE(TIMER_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<TIMER_DESC_module_type_OFS)&TIMER_DESC_module_type_MASK) + ((modue_subtype<<TIMER_DESC_modue_subtype_OFS)&TIMER_DESC_modue_subtype_MASK) + ((major_rev<<TIMER_DESC_major_rev_OFS)&TIMER_DESC_major_rev_MASK) + ((minor_rev<<TIMER_DESC_minor_rev_OFS)&TIMER_DESC_minor_rev_MASK);
}

static inline void TIMER_PWR_EN_WRITE(TIMER_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<TIMER_PWR_EN_pwr_en_OFS)&TIMER_PWR_EN_pwr_en_MASK) + ((pwr_en_key<<TIMER_PWR_EN_pwr_en_key_OFS)&TIMER_PWR_EN_pwr_en_key_MASK);
}

static inline void TIMER_RST_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<TIMER_RST_CTRL_rst_OFS)&TIMER_RST_CTRL_rst_MASK) + ((rst_sts_clr<<TIMER_RST_CTRL_rst_sts_clr_OFS)&TIMER_RST_CTRL_rst_sts_clr_MASK) + ((rst_key<<TIMER_RST_CTRL_rst_key_OFS)&TIMER_RST_CTRL_rst_key_MASK);
}

static inline void TIMER_RST_STS_WRITE(TIMER_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<TIMER_RST_STS_rst_sts_OFS)&TIMER_RST_STS_rst_sts_MASK);
}

static inline void TIMER_CLK_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w =  + ((clk_en<<TIMER_CLK_CTRL_clk_en_OFS)&TIMER_CLK_CTRL_clk_en_MASK);
}

static inline void TIMER_INTR_STS_WRITE(TIMER_REGS_s * registers, uint32_t intr_first) {
    registers->INTR_STS.packed_w =  + ((intr_first<<TIMER_INTR_STS_intr_first_OFS)&TIMER_INTR_STS_intr_first_MASK);
}

static inline void TIMER_INTR_EVENT_WRITE(TIMER_REGS_s * registers, uint32_t ctr_zero, uint32_t ctr_load, uint32_t ccd_0, uint32_t ccu_0, uint32_t ccd_1, uint32_t ccu_1, uint32_t ccd_2, uint32_t ccu_2, uint32_t ccd_3, uint32_t ccu_3, uint32_t ccd_4, uint32_t ccu_4, uint32_t ccd_5, uint32_t ccu_5, uint32_t fault, uint32_t trig_ov, uint32_t rctr_zero, uint32_t qei_ctr_dc, uint32_t qei_err) {
    registers->INTR_EVENT.packed_w =  + ((ctr_zero<<TIMER_INTR_EVENT_ctr_zero_OFS)&TIMER_INTR_EVENT_ctr_zero_MASK) + ((ctr_load<<TIMER_INTR_EVENT_ctr_load_OFS)&TIMER_INTR_EVENT_ctr_load_MASK) + ((ccd_0<<TIMER_INTR_EVENT_ccd_0_OFS)&TIMER_INTR_EVENT_ccd_0_MASK) + ((ccu_0<<TIMER_INTR_EVENT_ccu_0_OFS)&TIMER_INTR_EVENT_ccu_0_MASK) + ((ccd_1<<TIMER_INTR_EVENT_ccd_1_OFS)&TIMER_INTR_EVENT_ccd_1_MASK) + ((ccu_1<<TIMER_INTR_EVENT_ccu_1_OFS)&TIMER_INTR_EVENT_ccu_1_MASK) + ((ccd_2<<TIMER_INTR_EVENT_ccd_2_OFS)&TIMER_INTR_EVENT_ccd_2_MASK) + ((ccu_2<<TIMER_INTR_EVENT_ccu_2_OFS)&TIMER_INTR_EVENT_ccu_2_MASK) + ((ccd_3<<TIMER_INTR_EVENT_ccd_3_OFS)&TIMER_INTR_EVENT_ccd_3_MASK) + ((ccu_3<<TIMER_INTR_EVENT_ccu_3_OFS)&TIMER_INTR_EVENT_ccu_3_MASK) + ((ccd_4<<TIMER_INTR_EVENT_ccd_4_OFS)&TIMER_INTR_EVENT_ccd_4_MASK) + ((ccu_4<<TIMER_INTR_EVENT_ccu_4_OFS)&TIMER_INTR_EVENT_ccu_4_MASK) + ((ccd_5<<TIMER_INTR_EVENT_ccd_5_OFS)&TIMER_INTR_EVENT_ccd_5_MASK) + ((ccu_5<<TIMER_INTR_EVENT_ccu_5_OFS)&TIMER_INTR_EVENT_ccu_5_MASK) + ((fault<<TIMER_INTR_EVENT_fault_OFS)&TIMER_INTR_EVENT_fault_MASK) + ((trig_ov<<TIMER_INTR_EVENT_trig_ov_OFS)&TIMER_INTR_EVENT_trig_ov_MASK) + ((rctr_zero<<TIMER_INTR_EVENT_rctr_zero_OFS)&TIMER_INTR_EVENT_rctr_zero_MASK) + ((qei_ctr_dc<<TIMER_INTR_EVENT_qei_ctr_dc_OFS)&TIMER_INTR_EVENT_qei_ctr_dc_MASK) + ((qei_err<<TIMER_INTR_EVENT_qei_err_OFS)&TIMER_INTR_EVENT_qei_err_MASK);
}

static inline void TIMER_INTR_EN_0_WRITE(TIMER_REGS_s * registers, uint32_t ctr_zero_en, uint32_t ctr_load_en, uint32_t ccd_0_en, uint32_t ccu_0_en, uint32_t ccd_1_en, uint32_t ccu_1_en, uint32_t ccd_2_en, uint32_t ccu_2_en, uint32_t ccd_3_en, uint32_t ccu_3_en, uint32_t ccd_4_en, uint32_t ccu_4_en, uint32_t ccd_5_en, uint32_t ccu_5_en, uint32_t fault_en, uint32_t trig_ov_en) {
    registers->INTR_EN_0.packed_w =  + ((ctr_zero_en<<TIMER_INTR_EN_0_ctr_zero_en_OFS)&TIMER_INTR_EN_0_ctr_zero_en_MASK) + ((ctr_load_en<<TIMER_INTR_EN_0_ctr_load_en_OFS)&TIMER_INTR_EN_0_ctr_load_en_MASK) + ((ccd_0_en<<TIMER_INTR_EN_0_ccd_0_en_OFS)&TIMER_INTR_EN_0_ccd_0_en_MASK) + ((ccu_0_en<<TIMER_INTR_EN_0_ccu_0_en_OFS)&TIMER_INTR_EN_0_ccu_0_en_MASK) + ((ccd_1_en<<TIMER_INTR_EN_0_ccd_1_en_OFS)&TIMER_INTR_EN_0_ccd_1_en_MASK) + ((ccu_1_en<<TIMER_INTR_EN_0_ccu_1_en_OFS)&TIMER_INTR_EN_0_ccu_1_en_MASK) + ((ccd_2_en<<TIMER_INTR_EN_0_ccd_2_en_OFS)&TIMER_INTR_EN_0_ccd_2_en_MASK) + ((ccu_2_en<<TIMER_INTR_EN_0_ccu_2_en_OFS)&TIMER_INTR_EN_0_ccu_2_en_MASK) + ((ccd_3_en<<TIMER_INTR_EN_0_ccd_3_en_OFS)&TIMER_INTR_EN_0_ccd_3_en_MASK) + ((ccu_3_en<<TIMER_INTR_EN_0_ccu_3_en_OFS)&TIMER_INTR_EN_0_ccu_3_en_MASK) + ((ccd_4_en<<TIMER_INTR_EN_0_ccd_4_en_OFS)&TIMER_INTR_EN_0_ccd_4_en_MASK) + ((ccu_4_en<<TIMER_INTR_EN_0_ccu_4_en_OFS)&TIMER_INTR_EN_0_ccu_4_en_MASK) + ((ccd_5_en<<TIMER_INTR_EN_0_ccd_5_en_OFS)&TIMER_INTR_EN_0_ccd_5_en_MASK) + ((ccu_5_en<<TIMER_INTR_EN_0_ccu_5_en_OFS)&TIMER_INTR_EN_0_ccu_5_en_MASK) + ((fault_en<<TIMER_INTR_EN_0_fault_en_OFS)&TIMER_INTR_EN_0_fault_en_MASK) + ((trig_ov_en<<TIMER_INTR_EN_0_trig_ov_en_OFS)&TIMER_INTR_EN_0_trig_ov_en_MASK);
}

static inline void TIMER_INTR_EN_1_WRITE(TIMER_REGS_s * registers, uint32_t rctr_zero_en, uint32_t qei_ctr_dc_en, uint32_t qei_err_en) {
    registers->INTR_EN_1.packed_w =  + ((rctr_zero_en<<TIMER_INTR_EN_1_rctr_zero_en_OFS)&TIMER_INTR_EN_1_rctr_zero_en_MASK) + ((qei_ctr_dc_en<<TIMER_INTR_EN_1_qei_ctr_dc_en_OFS)&TIMER_INTR_EN_1_qei_ctr_dc_en_MASK) + ((qei_err_en<<TIMER_INTR_EN_1_qei_err_en_OFS)&TIMER_INTR_EN_1_qei_err_en_MASK);
}

static inline void TIMER_INTR_NMI_EN_0_WRITE(TIMER_REGS_s * registers, uint32_t ctr_zero_nmi_en, uint32_t ctr_load_nmi_en, uint32_t ccd_0_nmi_en, uint32_t ccu_0_nmi_en, uint32_t ccd_1_nmi_en, uint32_t ccu_1_nmi_en, uint32_t ccd_2_nmi_en, uint32_t ccu_2_nmi_en, uint32_t ccd_3_nmi_en, uint32_t ccu_3_nmi_en, uint32_t ccd_4_nmi_en, uint32_t ccu_4_nmi_en, uint32_t ccd_5_nmi_en, uint32_t ccu_5_nmi_en, uint32_t fault_nmi_en, uint32_t trig_ov_nmi_en) {
    registers->INTR_NMI_EN_0.packed_w =  + ((ctr_zero_nmi_en<<TIMER_INTR_NMI_EN_0_ctr_zero_nmi_en_OFS)&TIMER_INTR_NMI_EN_0_ctr_zero_nmi_en_MASK) + ((ctr_load_nmi_en<<TIMER_INTR_NMI_EN_0_ctr_load_nmi_en_OFS)&TIMER_INTR_NMI_EN_0_ctr_load_nmi_en_MASK) + ((ccd_0_nmi_en<<TIMER_INTR_NMI_EN_0_ccd_0_nmi_en_OFS)&TIMER_INTR_NMI_EN_0_ccd_0_nmi_en_MASK) + ((ccu_0_nmi_en<<TIMER_INTR_NMI_EN_0_ccu_0_nmi_en_OFS)&TIMER_INTR_NMI_EN_0_ccu_0_nmi_en_MASK) + ((ccd_1_nmi_en<<TIMER_INTR_NMI_EN_0_ccd_1_nmi_en_OFS)&TIMER_INTR_NMI_EN_0_ccd_1_nmi_en_MASK) + ((ccu_1_nmi_en<<TIMER_INTR_NMI_EN_0_ccu_1_nmi_en_OFS)&TIMER_INTR_NMI_EN_0_ccu_1_nmi_en_MASK) + ((ccd_2_nmi_en<<TIMER_INTR_NMI_EN_0_ccd_2_nmi_en_OFS)&TIMER_INTR_NMI_EN_0_ccd_2_nmi_en_MASK) + ((ccu_2_nmi_en<<TIMER_INTR_NMI_EN_0_ccu_2_nmi_en_OFS)&TIMER_INTR_NMI_EN_0_ccu_2_nmi_en_MASK) + ((ccd_3_nmi_en<<TIMER_INTR_NMI_EN_0_ccd_3_nmi_en_OFS)&TIMER_INTR_NMI_EN_0_ccd_3_nmi_en_MASK) + ((ccu_3_nmi_en<<TIMER_INTR_NMI_EN_0_ccu_3_nmi_en_OFS)&TIMER_INTR_NMI_EN_0_ccu_3_nmi_en_MASK) + ((ccd_4_nmi_en<<TIMER_INTR_NMI_EN_0_ccd_4_nmi_en_OFS)&TIMER_INTR_NMI_EN_0_ccd_4_nmi_en_MASK) + ((ccu_4_nmi_en<<TIMER_INTR_NMI_EN_0_ccu_4_nmi_en_OFS)&TIMER_INTR_NMI_EN_0_ccu_4_nmi_en_MASK) + ((ccd_5_nmi_en<<TIMER_INTR_NMI_EN_0_ccd_5_nmi_en_OFS)&TIMER_INTR_NMI_EN_0_ccd_5_nmi_en_MASK) + ((ccu_5_nmi_en<<TIMER_INTR_NMI_EN_0_ccu_5_nmi_en_OFS)&TIMER_INTR_NMI_EN_0_ccu_5_nmi_en_MASK) + ((fault_nmi_en<<TIMER_INTR_NMI_EN_0_fault_nmi_en_OFS)&TIMER_INTR_NMI_EN_0_fault_nmi_en_MASK) + ((trig_ov_nmi_en<<TIMER_INTR_NMI_EN_0_trig_ov_nmi_en_OFS)&TIMER_INTR_NMI_EN_0_trig_ov_nmi_en_MASK);
}

static inline void TIMER_INTR_NMI_EN_1_WRITE(TIMER_REGS_s * registers, uint32_t rctr_zero_nmi_en, uint32_t qei_ctr_dc_nmi_en, uint32_t qei_err_nmi_en) {
    registers->INTR_NMI_EN_1.packed_w =  + ((rctr_zero_nmi_en<<TIMER_INTR_NMI_EN_1_rctr_zero_nmi_en_OFS)&TIMER_INTR_NMI_EN_1_rctr_zero_nmi_en_MASK) + ((qei_ctr_dc_nmi_en<<TIMER_INTR_NMI_EN_1_qei_ctr_dc_nmi_en_OFS)&TIMER_INTR_NMI_EN_1_qei_ctr_dc_nmi_en_MASK) + ((qei_err_nmi_en<<TIMER_INTR_NMI_EN_1_qei_err_nmi_en_OFS)&TIMER_INTR_NMI_EN_1_qei_err_nmi_en_MASK);
}

static inline void TIMER_EVENT_EN_0_0_WRITE(TIMER_REGS_s * registers, uint32_t ctr_zero_event_en_0, uint32_t ctr_load_event_en_0, uint32_t ccd_0_event_en_0, uint32_t ccu_0_event_en_0, uint32_t ccd_1_event_en_0, uint32_t ccu_1_event_en_0, uint32_t ccd_2_event_en_0, uint32_t ccu_2_event_en_0, uint32_t ccd_3_event_en_0, uint32_t ccu_3_event_en_0, uint32_t ccd_4_event_en_0, uint32_t ccu_4_event_en_0, uint32_t ccd_5_event_en_0, uint32_t ccu_5_event_en_0, uint32_t fault_event_en_0, uint32_t trig_ov_event_en_0) {
    registers->EVENT_EN_0_0.packed_w =  + ((ctr_zero_event_en_0<<TIMER_EVENT_EN_0_0_ctr_zero_event_en_0_OFS)&TIMER_EVENT_EN_0_0_ctr_zero_event_en_0_MASK) + ((ctr_load_event_en_0<<TIMER_EVENT_EN_0_0_ctr_load_event_en_0_OFS)&TIMER_EVENT_EN_0_0_ctr_load_event_en_0_MASK) + ((ccd_0_event_en_0<<TIMER_EVENT_EN_0_0_ccd_0_event_en_0_OFS)&TIMER_EVENT_EN_0_0_ccd_0_event_en_0_MASK) + ((ccu_0_event_en_0<<TIMER_EVENT_EN_0_0_ccu_0_event_en_0_OFS)&TIMER_EVENT_EN_0_0_ccu_0_event_en_0_MASK) + ((ccd_1_event_en_0<<TIMER_EVENT_EN_0_0_ccd_1_event_en_0_OFS)&TIMER_EVENT_EN_0_0_ccd_1_event_en_0_MASK) + ((ccu_1_event_en_0<<TIMER_EVENT_EN_0_0_ccu_1_event_en_0_OFS)&TIMER_EVENT_EN_0_0_ccu_1_event_en_0_MASK) + ((ccd_2_event_en_0<<TIMER_EVENT_EN_0_0_ccd_2_event_en_0_OFS)&TIMER_EVENT_EN_0_0_ccd_2_event_en_0_MASK) + ((ccu_2_event_en_0<<TIMER_EVENT_EN_0_0_ccu_2_event_en_0_OFS)&TIMER_EVENT_EN_0_0_ccu_2_event_en_0_MASK) + ((ccd_3_event_en_0<<TIMER_EVENT_EN_0_0_ccd_3_event_en_0_OFS)&TIMER_EVENT_EN_0_0_ccd_3_event_en_0_MASK) + ((ccu_3_event_en_0<<TIMER_EVENT_EN_0_0_ccu_3_event_en_0_OFS)&TIMER_EVENT_EN_0_0_ccu_3_event_en_0_MASK) + ((ccd_4_event_en_0<<TIMER_EVENT_EN_0_0_ccd_4_event_en_0_OFS)&TIMER_EVENT_EN_0_0_ccd_4_event_en_0_MASK) + ((ccu_4_event_en_0<<TIMER_EVENT_EN_0_0_ccu_4_event_en_0_OFS)&TIMER_EVENT_EN_0_0_ccu_4_event_en_0_MASK) + ((ccd_5_event_en_0<<TIMER_EVENT_EN_0_0_ccd_5_event_en_0_OFS)&TIMER_EVENT_EN_0_0_ccd_5_event_en_0_MASK) + ((ccu_5_event_en_0<<TIMER_EVENT_EN_0_0_ccu_5_event_en_0_OFS)&TIMER_EVENT_EN_0_0_ccu_5_event_en_0_MASK) + ((fault_event_en_0<<TIMER_EVENT_EN_0_0_fault_event_en_0_OFS)&TIMER_EVENT_EN_0_0_fault_event_en_0_MASK) + ((trig_ov_event_en_0<<TIMER_EVENT_EN_0_0_trig_ov_event_en_0_OFS)&TIMER_EVENT_EN_0_0_trig_ov_event_en_0_MASK);
}

static inline void TIMER_EVENT_EN_0_1_WRITE(TIMER_REGS_s * registers, uint32_t rctr_zero_event_en_0, uint32_t qei_ctr_dc_event_en_0, uint32_t qei_err_event_en_0) {
    registers->EVENT_EN_0_1.packed_w =  + ((rctr_zero_event_en_0<<TIMER_EVENT_EN_0_1_rctr_zero_event_en_0_OFS)&TIMER_EVENT_EN_0_1_rctr_zero_event_en_0_MASK) + ((qei_ctr_dc_event_en_0<<TIMER_EVENT_EN_0_1_qei_ctr_dc_event_en_0_OFS)&TIMER_EVENT_EN_0_1_qei_ctr_dc_event_en_0_MASK) + ((qei_err_event_en_0<<TIMER_EVENT_EN_0_1_qei_err_event_en_0_OFS)&TIMER_EVENT_EN_0_1_qei_err_event_en_0_MASK);
}

static inline void TIMER_EVENT_EN_1_0_WRITE(TIMER_REGS_s * registers, uint32_t ctr_zero_event_en_1, uint32_t ctr_load_event_en_1, uint32_t ccd_0_event_en_1, uint32_t ccu_0_event_en_1, uint32_t ccd_1_event_en_1, uint32_t ccu_1_event_en_1, uint32_t ccd_2_event_en_1, uint32_t ccu_2_event_en_1, uint32_t ccd_3_event_en_1, uint32_t ccu_3_event_en_1, uint32_t ccd_4_event_en_1, uint32_t ccu_4_event_en_1, uint32_t ccd_5_event_en_1, uint32_t ccu_5_event_en_1, uint32_t fault_event_en_1, uint32_t trig_ov_event_en_1) {
    registers->EVENT_EN_1_0.packed_w =  + ((ctr_zero_event_en_1<<TIMER_EVENT_EN_1_0_ctr_zero_event_en_1_OFS)&TIMER_EVENT_EN_1_0_ctr_zero_event_en_1_MASK) + ((ctr_load_event_en_1<<TIMER_EVENT_EN_1_0_ctr_load_event_en_1_OFS)&TIMER_EVENT_EN_1_0_ctr_load_event_en_1_MASK) + ((ccd_0_event_en_1<<TIMER_EVENT_EN_1_0_ccd_0_event_en_1_OFS)&TIMER_EVENT_EN_1_0_ccd_0_event_en_1_MASK) + ((ccu_0_event_en_1<<TIMER_EVENT_EN_1_0_ccu_0_event_en_1_OFS)&TIMER_EVENT_EN_1_0_ccu_0_event_en_1_MASK) + ((ccd_1_event_en_1<<TIMER_EVENT_EN_1_0_ccd_1_event_en_1_OFS)&TIMER_EVENT_EN_1_0_ccd_1_event_en_1_MASK) + ((ccu_1_event_en_1<<TIMER_EVENT_EN_1_0_ccu_1_event_en_1_OFS)&TIMER_EVENT_EN_1_0_ccu_1_event_en_1_MASK) + ((ccd_2_event_en_1<<TIMER_EVENT_EN_1_0_ccd_2_event_en_1_OFS)&TIMER_EVENT_EN_1_0_ccd_2_event_en_1_MASK) + ((ccu_2_event_en_1<<TIMER_EVENT_EN_1_0_ccu_2_event_en_1_OFS)&TIMER_EVENT_EN_1_0_ccu_2_event_en_1_MASK) + ((ccd_3_event_en_1<<TIMER_EVENT_EN_1_0_ccd_3_event_en_1_OFS)&TIMER_EVENT_EN_1_0_ccd_3_event_en_1_MASK) + ((ccu_3_event_en_1<<TIMER_EVENT_EN_1_0_ccu_3_event_en_1_OFS)&TIMER_EVENT_EN_1_0_ccu_3_event_en_1_MASK) + ((ccd_4_event_en_1<<TIMER_EVENT_EN_1_0_ccd_4_event_en_1_OFS)&TIMER_EVENT_EN_1_0_ccd_4_event_en_1_MASK) + ((ccu_4_event_en_1<<TIMER_EVENT_EN_1_0_ccu_4_event_en_1_OFS)&TIMER_EVENT_EN_1_0_ccu_4_event_en_1_MASK) + ((ccd_5_event_en_1<<TIMER_EVENT_EN_1_0_ccd_5_event_en_1_OFS)&TIMER_EVENT_EN_1_0_ccd_5_event_en_1_MASK) + ((ccu_5_event_en_1<<TIMER_EVENT_EN_1_0_ccu_5_event_en_1_OFS)&TIMER_EVENT_EN_1_0_ccu_5_event_en_1_MASK) + ((fault_event_en_1<<TIMER_EVENT_EN_1_0_fault_event_en_1_OFS)&TIMER_EVENT_EN_1_0_fault_event_en_1_MASK) + ((trig_ov_event_en_1<<TIMER_EVENT_EN_1_0_trig_ov_event_en_1_OFS)&TIMER_EVENT_EN_1_0_trig_ov_event_en_1_MASK);
}

static inline void TIMER_EVENT_EN_1_1_WRITE(TIMER_REGS_s * registers, uint32_t rctr_zero_event_en_1, uint32_t qei_ctr_dc_event_en_1, uint32_t qei_err_event_en_1) {
    registers->EVENT_EN_1_1.packed_w =  + ((rctr_zero_event_en_1<<TIMER_EVENT_EN_1_1_rctr_zero_event_en_1_OFS)&TIMER_EVENT_EN_1_1_rctr_zero_event_en_1_MASK) + ((qei_ctr_dc_event_en_1<<TIMER_EVENT_EN_1_1_qei_ctr_dc_event_en_1_OFS)&TIMER_EVENT_EN_1_1_qei_ctr_dc_event_en_1_MASK) + ((qei_err_event_en_1<<TIMER_EVENT_EN_1_1_qei_err_event_en_1_OFS)&TIMER_EVENT_EN_1_1_qei_err_event_en_1_MASK);
}

static inline void TIMER_INTR_SW_SET_WRITE(TIMER_REGS_s * registers, uint32_t ctr_zero_sw_set, uint32_t ctr_load_sw_set, uint32_t ccd_0_sw_set, uint32_t ccu_0_sw_set, uint32_t ccd_1_sw_set, uint32_t ccu_1_sw_set, uint32_t ccd_2_sw_set, uint32_t ccu_2_sw_set, uint32_t ccd_3_sw_set, uint32_t ccu_3_sw_set, uint32_t ccd_4_sw_set, uint32_t ccu_4_sw_set, uint32_t ccd_5_sw_set, uint32_t ccu_5_sw_set, uint32_t fault_sw_set, uint32_t trig_ov_sw_set, uint32_t rctr_zero_sw_set, uint32_t qei_ctr_dc_sw_set, uint32_t qei_err_sw_set) {
    registers->INTR_SW_SET.packed_w =  + ((ctr_zero_sw_set<<TIMER_INTR_SW_SET_ctr_zero_sw_set_OFS)&TIMER_INTR_SW_SET_ctr_zero_sw_set_MASK) + ((ctr_load_sw_set<<TIMER_INTR_SW_SET_ctr_load_sw_set_OFS)&TIMER_INTR_SW_SET_ctr_load_sw_set_MASK) + ((ccd_0_sw_set<<TIMER_INTR_SW_SET_ccd_0_sw_set_OFS)&TIMER_INTR_SW_SET_ccd_0_sw_set_MASK) + ((ccu_0_sw_set<<TIMER_INTR_SW_SET_ccu_0_sw_set_OFS)&TIMER_INTR_SW_SET_ccu_0_sw_set_MASK) + ((ccd_1_sw_set<<TIMER_INTR_SW_SET_ccd_1_sw_set_OFS)&TIMER_INTR_SW_SET_ccd_1_sw_set_MASK) + ((ccu_1_sw_set<<TIMER_INTR_SW_SET_ccu_1_sw_set_OFS)&TIMER_INTR_SW_SET_ccu_1_sw_set_MASK) + ((ccd_2_sw_set<<TIMER_INTR_SW_SET_ccd_2_sw_set_OFS)&TIMER_INTR_SW_SET_ccd_2_sw_set_MASK) + ((ccu_2_sw_set<<TIMER_INTR_SW_SET_ccu_2_sw_set_OFS)&TIMER_INTR_SW_SET_ccu_2_sw_set_MASK) + ((ccd_3_sw_set<<TIMER_INTR_SW_SET_ccd_3_sw_set_OFS)&TIMER_INTR_SW_SET_ccd_3_sw_set_MASK) + ((ccu_3_sw_set<<TIMER_INTR_SW_SET_ccu_3_sw_set_OFS)&TIMER_INTR_SW_SET_ccu_3_sw_set_MASK) + ((ccd_4_sw_set<<TIMER_INTR_SW_SET_ccd_4_sw_set_OFS)&TIMER_INTR_SW_SET_ccd_4_sw_set_MASK) + ((ccu_4_sw_set<<TIMER_INTR_SW_SET_ccu_4_sw_set_OFS)&TIMER_INTR_SW_SET_ccu_4_sw_set_MASK) + ((ccd_5_sw_set<<TIMER_INTR_SW_SET_ccd_5_sw_set_OFS)&TIMER_INTR_SW_SET_ccd_5_sw_set_MASK) + ((ccu_5_sw_set<<TIMER_INTR_SW_SET_ccu_5_sw_set_OFS)&TIMER_INTR_SW_SET_ccu_5_sw_set_MASK) + ((fault_sw_set<<TIMER_INTR_SW_SET_fault_sw_set_OFS)&TIMER_INTR_SW_SET_fault_sw_set_MASK) + ((trig_ov_sw_set<<TIMER_INTR_SW_SET_trig_ov_sw_set_OFS)&TIMER_INTR_SW_SET_trig_ov_sw_set_MASK) + ((rctr_zero_sw_set<<TIMER_INTR_SW_SET_rctr_zero_sw_set_OFS)&TIMER_INTR_SW_SET_rctr_zero_sw_set_MASK) + ((qei_ctr_dc_sw_set<<TIMER_INTR_SW_SET_qei_ctr_dc_sw_set_OFS)&TIMER_INTR_SW_SET_qei_ctr_dc_sw_set_MASK) + ((qei_err_sw_set<<TIMER_INTR_SW_SET_qei_err_sw_set_OFS)&TIMER_INTR_SW_SET_qei_err_sw_set_MASK);
}

static inline void TIMER_EVENT_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t chan_id0, uint32_t chan_id1) {
    registers->EVENT_CTRL.packed_w =  + ((chan_id0<<TIMER_EVENT_CTRL_chan_id0_OFS)&TIMER_EVENT_CTRL_chan_id0_MASK) + ((chan_id1<<TIMER_EVENT_CTRL_chan_id1_OFS)&TIMER_EVENT_CTRL_chan_id1_MASK);
}

static inline void TIMER_CLK_CONFIG_WRITE(TIMER_REGS_s * registers, uint32_t clk_sel, uint32_t clk_div) {
    registers->CLK_CONFIG.packed_w =  + ((clk_sel<<TIMER_CLK_CONFIG_clk_sel_OFS)&TIMER_CLK_CONFIG_clk_sel_MASK) + ((clk_div<<TIMER_CLK_CONFIG_clk_div_OFS)&TIMER_CLK_CONFIG_clk_div_MASK);
}

static inline void TIMER_TRIG_IN_WRITE(TIMER_REGS_s * registers, uint32_t trig_en, uint32_t trig_sel) {
    registers->TRIG_IN.packed_w =  + ((trig_en<<TIMER_TRIG_IN_trig_en_OFS)&TIMER_TRIG_IN_trig_en_MASK) + ((trig_sel<<TIMER_TRIG_IN_trig_sel_OFS)&TIMER_TRIG_IN_trig_sel_MASK);
}

static inline void TIMER_TRIG_OUT_WRITE(TIMER_REGS_s * registers, uint32_t trig_out_en, uint32_t trig_sw_en, uint32_t trig_hw_en, uint32_t trig_hw_sel) {
    registers->TRIG_OUT.packed_w =  + ((trig_out_en<<TIMER_TRIG_OUT_trig_out_en_OFS)&TIMER_TRIG_OUT_trig_out_en_MASK) + ((trig_sw_en<<TIMER_TRIG_OUT_trig_sw_en_OFS)&TIMER_TRIG_OUT_trig_sw_en_MASK) + ((trig_hw_en<<TIMER_TRIG_OUT_trig_hw_en_OFS)&TIMER_TRIG_OUT_trig_hw_en_MASK) + ((trig_hw_sel<<TIMER_TRIG_OUT_trig_hw_sel_OFS)&TIMER_TRIG_OUT_trig_hw_sel_MASK);
}

static inline void TIMER_INPUT_FILTER_CC_0_WRITE(TIMER_REGS_s * registers, uint32_t filter_en_0, uint32_t is_consecutive_prd_0, uint32_t filter_period_0) {
    registers->INPUT_FILTER_CC_0.packed_w =  + ((filter_en_0<<TIMER_INPUT_FILTER_CC_0_filter_en_0_OFS)&TIMER_INPUT_FILTER_CC_0_filter_en_0_MASK) + ((is_consecutive_prd_0<<TIMER_INPUT_FILTER_CC_0_is_consecutive_prd_0_OFS)&TIMER_INPUT_FILTER_CC_0_is_consecutive_prd_0_MASK) + ((filter_period_0<<TIMER_INPUT_FILTER_CC_0_filter_period_0_OFS)&TIMER_INPUT_FILTER_CC_0_filter_period_0_MASK);
}

static inline void TIMER_INPUT_FILTER_CC_1_WRITE(TIMER_REGS_s * registers, uint32_t filter_en_1, uint32_t is_consecutive_prd_1, uint32_t filter_period_1) {
    registers->INPUT_FILTER_CC_1.packed_w =  + ((filter_en_1<<TIMER_INPUT_FILTER_CC_1_filter_en_1_OFS)&TIMER_INPUT_FILTER_CC_1_filter_en_1_MASK) + ((is_consecutive_prd_1<<TIMER_INPUT_FILTER_CC_1_is_consecutive_prd_1_OFS)&TIMER_INPUT_FILTER_CC_1_is_consecutive_prd_1_MASK) + ((filter_period_1<<TIMER_INPUT_FILTER_CC_1_filter_period_1_OFS)&TIMER_INPUT_FILTER_CC_1_filter_period_1_MASK);
}

static inline void TIMER_INPUT_FILTER_CC_2_WRITE(TIMER_REGS_s * registers, uint32_t filter_en_2, uint32_t is_consecutive_prd_2, uint32_t filter_period_2) {
    registers->INPUT_FILTER_CC_2.packed_w =  + ((filter_en_2<<TIMER_INPUT_FILTER_CC_2_filter_en_2_OFS)&TIMER_INPUT_FILTER_CC_2_filter_en_2_MASK) + ((is_consecutive_prd_2<<TIMER_INPUT_FILTER_CC_2_is_consecutive_prd_2_OFS)&TIMER_INPUT_FILTER_CC_2_is_consecutive_prd_2_MASK) + ((filter_period_2<<TIMER_INPUT_FILTER_CC_2_filter_period_2_OFS)&TIMER_INPUT_FILTER_CC_2_filter_period_2_MASK);
}

static inline void TIMER_INPUT_FILTER_CC_3_WRITE(TIMER_REGS_s * registers, uint32_t filter_en_3, uint32_t is_consecutive_prd_3, uint32_t filter_period_3) {
    registers->INPUT_FILTER_CC_3.packed_w =  + ((filter_en_3<<TIMER_INPUT_FILTER_CC_3_filter_en_3_OFS)&TIMER_INPUT_FILTER_CC_3_filter_en_3_MASK) + ((is_consecutive_prd_3<<TIMER_INPUT_FILTER_CC_3_is_consecutive_prd_3_OFS)&TIMER_INPUT_FILTER_CC_3_is_consecutive_prd_3_MASK) + ((filter_period_3<<TIMER_INPUT_FILTER_CC_3_filter_period_3_OFS)&TIMER_INPUT_FILTER_CC_3_filter_period_3_MASK);
}

static inline void TIMER_INPUT_CC_0_WRITE(TIMER_REGS_s * registers, uint32_t input_sel_0, uint32_t input_inv_0) {
    registers->INPUT_CC_0.packed_w =  + ((input_sel_0<<TIMER_INPUT_CC_0_input_sel_0_OFS)&TIMER_INPUT_CC_0_input_sel_0_MASK) + ((input_inv_0<<TIMER_INPUT_CC_0_input_inv_0_OFS)&TIMER_INPUT_CC_0_input_inv_0_MASK);
}

static inline void TIMER_INPUT_CC_1_WRITE(TIMER_REGS_s * registers, uint32_t input_sel_1, uint32_t input_inv_1) {
    registers->INPUT_CC_1.packed_w =  + ((input_sel_1<<TIMER_INPUT_CC_1_input_sel_1_OFS)&TIMER_INPUT_CC_1_input_sel_1_MASK) + ((input_inv_1<<TIMER_INPUT_CC_1_input_inv_1_OFS)&TIMER_INPUT_CC_1_input_inv_1_MASK);
}

static inline void TIMER_INPUT_CC_2_WRITE(TIMER_REGS_s * registers, uint32_t input_sel_2, uint32_t input_inv_2) {
    registers->INPUT_CC_2.packed_w =  + ((input_sel_2<<TIMER_INPUT_CC_2_input_sel_2_OFS)&TIMER_INPUT_CC_2_input_sel_2_MASK) + ((input_inv_2<<TIMER_INPUT_CC_2_input_inv_2_OFS)&TIMER_INPUT_CC_2_input_inv_2_MASK);
}

static inline void TIMER_INPUT_CC_3_WRITE(TIMER_REGS_s * registers, uint32_t input_sel_3, uint32_t input_inv_3) {
    registers->INPUT_CC_3.packed_w =  + ((input_sel_3<<TIMER_INPUT_CC_3_input_sel_3_OFS)&TIMER_INPUT_CC_3_input_sel_3_MASK) + ((input_inv_3<<TIMER_INPUT_CC_3_input_inv_3_OFS)&TIMER_INPUT_CC_3_input_inv_3_MASK);
}

static inline void TIMER_CC0_CMN_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t is_capture_0, uint32_t cc2d_sel_0, uint32_t cc2u_sel_0, uint32_t suppress_coc_event_gen_0) {
    registers->CC0_CMN_CTRL.packed_w =  + ((is_capture_0<<TIMER_CC0_CMN_CTRL_is_capture_0_OFS)&TIMER_CC0_CMN_CTRL_is_capture_0_MASK) + ((cc2d_sel_0<<TIMER_CC0_CMN_CTRL_cc2d_sel_0_OFS)&TIMER_CC0_CMN_CTRL_cc2d_sel_0_MASK) + ((cc2u_sel_0<<TIMER_CC0_CMN_CTRL_cc2u_sel_0_OFS)&TIMER_CC0_CMN_CTRL_cc2u_sel_0_MASK) + ((suppress_coc_event_gen_0<<TIMER_CC0_CMN_CTRL_suppress_coc_event_gen_0_OFS)&TIMER_CC0_CMN_CTRL_suppress_coc_event_gen_0_MASK);
}

static inline void TIMER_CC1_CMN_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t is_capture_1, uint32_t cc2d_sel_1, uint32_t cc2u_sel_1, uint32_t suppress_coc_event_gen_1) {
    registers->CC1_CMN_CTRL.packed_w =  + ((is_capture_1<<TIMER_CC1_CMN_CTRL_is_capture_1_OFS)&TIMER_CC1_CMN_CTRL_is_capture_1_MASK) + ((cc2d_sel_1<<TIMER_CC1_CMN_CTRL_cc2d_sel_1_OFS)&TIMER_CC1_CMN_CTRL_cc2d_sel_1_MASK) + ((cc2u_sel_1<<TIMER_CC1_CMN_CTRL_cc2u_sel_1_OFS)&TIMER_CC1_CMN_CTRL_cc2u_sel_1_MASK) + ((suppress_coc_event_gen_1<<TIMER_CC1_CMN_CTRL_suppress_coc_event_gen_1_OFS)&TIMER_CC1_CMN_CTRL_suppress_coc_event_gen_1_MASK);
}

static inline void TIMER_CC0_CAPTURE_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t cap_cond_0, uint32_t load_cond_0, uint32_t zero_cond_0, uint32_t adv_cond_0, uint32_t cap_val_0) {
    registers->CC0_CAPTURE_CTRL.packed_w =  + ((cap_cond_0<<TIMER_CC0_CAPTURE_CTRL_cap_cond_0_OFS)&TIMER_CC0_CAPTURE_CTRL_cap_cond_0_MASK) + ((load_cond_0<<TIMER_CC0_CAPTURE_CTRL_load_cond_0_OFS)&TIMER_CC0_CAPTURE_CTRL_load_cond_0_MASK) + ((zero_cond_0<<TIMER_CC0_CAPTURE_CTRL_zero_cond_0_OFS)&TIMER_CC0_CAPTURE_CTRL_zero_cond_0_MASK) + ((adv_cond_0<<TIMER_CC0_CAPTURE_CTRL_adv_cond_0_OFS)&TIMER_CC0_CAPTURE_CTRL_adv_cond_0_MASK) + ((cap_val_0<<TIMER_CC0_CAPTURE_CTRL_cap_val_0_OFS)&TIMER_CC0_CAPTURE_CTRL_cap_val_0_MASK);
}

static inline void TIMER_CC1_CAPTURE_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t cap_cond_1, uint32_t load_cond_1, uint32_t zero_cond_1, uint32_t adv_cond_1, uint32_t cap_val_1) {
    registers->CC1_CAPTURE_CTRL.packed_w =  + ((cap_cond_1<<TIMER_CC1_CAPTURE_CTRL_cap_cond_1_OFS)&TIMER_CC1_CAPTURE_CTRL_cap_cond_1_MASK) + ((load_cond_1<<TIMER_CC1_CAPTURE_CTRL_load_cond_1_OFS)&TIMER_CC1_CAPTURE_CTRL_load_cond_1_MASK) + ((zero_cond_1<<TIMER_CC1_CAPTURE_CTRL_zero_cond_1_OFS)&TIMER_CC1_CAPTURE_CTRL_zero_cond_1_MASK) + ((adv_cond_1<<TIMER_CC1_CAPTURE_CTRL_adv_cond_1_OFS)&TIMER_CC1_CAPTURE_CTRL_adv_cond_1_MASK) + ((cap_val_1<<TIMER_CC1_CAPTURE_CTRL_cap_val_1_OFS)&TIMER_CC1_CAPTURE_CTRL_cap_val_1_MASK);
}

static inline void TIMER_CC0_COMPARE_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t comp_val_0, uint32_t comp_val_update_method_0, uint32_t ccact_update_method_0) {
    registers->CC0_COMPARE_CTRL.packed_w =  + ((comp_val_0<<TIMER_CC0_COMPARE_CTRL_comp_val_0_OFS)&TIMER_CC0_COMPARE_CTRL_comp_val_0_MASK) + ((comp_val_update_method_0<<TIMER_CC0_COMPARE_CTRL_comp_val_update_method_0_OFS)&TIMER_CC0_COMPARE_CTRL_comp_val_update_method_0_MASK) + ((ccact_update_method_0<<TIMER_CC0_COMPARE_CTRL_ccact_update_method_0_OFS)&TIMER_CC0_COMPARE_CTRL_ccact_update_method_0_MASK);
}

static inline void TIMER_CC1_COMPARE_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t comp_val_1, uint32_t comp_val_update_method_1, uint32_t ccact_update_method_1) {
    registers->CC1_COMPARE_CTRL.packed_w =  + ((comp_val_1<<TIMER_CC1_COMPARE_CTRL_comp_val_1_OFS)&TIMER_CC1_COMPARE_CTRL_comp_val_1_MASK) + ((comp_val_update_method_1<<TIMER_CC1_COMPARE_CTRL_comp_val_update_method_1_OFS)&TIMER_CC1_COMPARE_CTRL_comp_val_update_method_1_MASK) + ((ccact_update_method_1<<TIMER_CC1_COMPARE_CTRL_ccact_update_method_1_OFS)&TIMER_CC1_COMPARE_CTRL_ccact_update_method_1_MASK);
}

static inline void TIMER_CC2_CMN_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t is_capture_2, uint32_t cc2d_sel_2, uint32_t cc2u_sel_2, uint32_t suppress_coc_event_gen_2) {
    registers->CC2_CMN_CTRL.packed_w =  + ((is_capture_2<<TIMER_CC2_CMN_CTRL_is_capture_2_OFS)&TIMER_CC2_CMN_CTRL_is_capture_2_MASK) + ((cc2d_sel_2<<TIMER_CC2_CMN_CTRL_cc2d_sel_2_OFS)&TIMER_CC2_CMN_CTRL_cc2d_sel_2_MASK) + ((cc2u_sel_2<<TIMER_CC2_CMN_CTRL_cc2u_sel_2_OFS)&TIMER_CC2_CMN_CTRL_cc2u_sel_2_MASK) + ((suppress_coc_event_gen_2<<TIMER_CC2_CMN_CTRL_suppress_coc_event_gen_2_OFS)&TIMER_CC2_CMN_CTRL_suppress_coc_event_gen_2_MASK);
}

static inline void TIMER_CC3_CMN_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t is_capture_3, uint32_t cc2d_sel_3, uint32_t cc2u_sel_3, uint32_t suppress_coc_event_gen_3) {
    registers->CC3_CMN_CTRL.packed_w =  + ((is_capture_3<<TIMER_CC3_CMN_CTRL_is_capture_3_OFS)&TIMER_CC3_CMN_CTRL_is_capture_3_MASK) + ((cc2d_sel_3<<TIMER_CC3_CMN_CTRL_cc2d_sel_3_OFS)&TIMER_CC3_CMN_CTRL_cc2d_sel_3_MASK) + ((cc2u_sel_3<<TIMER_CC3_CMN_CTRL_cc2u_sel_3_OFS)&TIMER_CC3_CMN_CTRL_cc2u_sel_3_MASK) + ((suppress_coc_event_gen_3<<TIMER_CC3_CMN_CTRL_suppress_coc_event_gen_3_OFS)&TIMER_CC3_CMN_CTRL_suppress_coc_event_gen_3_MASK);
}

static inline void TIMER_CC2_CAPTURE_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t cap_cond_2, uint32_t load_cond_2, uint32_t zero_cond_2, uint32_t adv_cond_2, uint32_t cap_val_2) {
    registers->CC2_CAPTURE_CTRL.packed_w =  + ((cap_cond_2<<TIMER_CC2_CAPTURE_CTRL_cap_cond_2_OFS)&TIMER_CC2_CAPTURE_CTRL_cap_cond_2_MASK) + ((load_cond_2<<TIMER_CC2_CAPTURE_CTRL_load_cond_2_OFS)&TIMER_CC2_CAPTURE_CTRL_load_cond_2_MASK) + ((zero_cond_2<<TIMER_CC2_CAPTURE_CTRL_zero_cond_2_OFS)&TIMER_CC2_CAPTURE_CTRL_zero_cond_2_MASK) + ((adv_cond_2<<TIMER_CC2_CAPTURE_CTRL_adv_cond_2_OFS)&TIMER_CC2_CAPTURE_CTRL_adv_cond_2_MASK) + ((cap_val_2<<TIMER_CC2_CAPTURE_CTRL_cap_val_2_OFS)&TIMER_CC2_CAPTURE_CTRL_cap_val_2_MASK);
}

static inline void TIMER_CC3_CAPTURE_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t cap_cond_3, uint32_t load_cond_3, uint32_t zero_cond_3, uint32_t adv_cond_3, uint32_t cap_val_3) {
    registers->CC3_CAPTURE_CTRL.packed_w =  + ((cap_cond_3<<TIMER_CC3_CAPTURE_CTRL_cap_cond_3_OFS)&TIMER_CC3_CAPTURE_CTRL_cap_cond_3_MASK) + ((load_cond_3<<TIMER_CC3_CAPTURE_CTRL_load_cond_3_OFS)&TIMER_CC3_CAPTURE_CTRL_load_cond_3_MASK) + ((zero_cond_3<<TIMER_CC3_CAPTURE_CTRL_zero_cond_3_OFS)&TIMER_CC3_CAPTURE_CTRL_zero_cond_3_MASK) + ((adv_cond_3<<TIMER_CC3_CAPTURE_CTRL_adv_cond_3_OFS)&TIMER_CC3_CAPTURE_CTRL_adv_cond_3_MASK) + ((cap_val_3<<TIMER_CC3_CAPTURE_CTRL_cap_val_3_OFS)&TIMER_CC3_CAPTURE_CTRL_cap_val_3_MASK);
}

static inline void TIMER_CC2_COMPARE_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t comp_val_2, uint32_t comp_val_update_method_2, uint32_t ccact_update_method_2) {
    registers->CC2_COMPARE_CTRL.packed_w =  + ((comp_val_2<<TIMER_CC2_COMPARE_CTRL_comp_val_2_OFS)&TIMER_CC2_COMPARE_CTRL_comp_val_2_MASK) + ((comp_val_update_method_2<<TIMER_CC2_COMPARE_CTRL_comp_val_update_method_2_OFS)&TIMER_CC2_COMPARE_CTRL_comp_val_update_method_2_MASK) + ((ccact_update_method_2<<TIMER_CC2_COMPARE_CTRL_ccact_update_method_2_OFS)&TIMER_CC2_COMPARE_CTRL_ccact_update_method_2_MASK);
}

static inline void TIMER_CC3_COMPARE_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t comp_val_3, uint32_t comp_val_update_method_3, uint32_t ccact_update_method_3) {
    registers->CC3_COMPARE_CTRL.packed_w =  + ((comp_val_3<<TIMER_CC3_COMPARE_CTRL_comp_val_3_OFS)&TIMER_CC3_COMPARE_CTRL_comp_val_3_MASK) + ((comp_val_update_method_3<<TIMER_CC3_COMPARE_CTRL_comp_val_update_method_3_OFS)&TIMER_CC3_COMPARE_CTRL_comp_val_update_method_3_MASK) + ((ccact_update_method_3<<TIMER_CC3_COMPARE_CTRL_ccact_update_method_3_OFS)&TIMER_CC3_COMPARE_CTRL_ccact_update_method_3_MASK);
}

static inline void TIMER_CC4_CMN_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t suppress_coc_event_gen_4) {
    registers->CC4_CMN_CTRL.packed_w =  + ((suppress_coc_event_gen_4<<TIMER_CC4_CMN_CTRL_suppress_coc_event_gen_4_OFS)&TIMER_CC4_CMN_CTRL_suppress_coc_event_gen_4_MASK);
}

static inline void TIMER_CC5_CMN_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t suppress_coc_event_gen_5) {
    registers->CC5_CMN_CTRL.packed_w =  + ((suppress_coc_event_gen_5<<TIMER_CC5_CMN_CTRL_suppress_coc_event_gen_5_OFS)&TIMER_CC5_CMN_CTRL_suppress_coc_event_gen_5_MASK);
}

static inline void TIMER_CC4_COMPARE_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t comp_val_4, uint32_t comp_val_update_method_4) {
    registers->CC4_COMPARE_CTRL.packed_w =  + ((comp_val_4<<TIMER_CC4_COMPARE_CTRL_comp_val_4_OFS)&TIMER_CC4_COMPARE_CTRL_comp_val_4_MASK) + ((comp_val_update_method_4<<TIMER_CC4_COMPARE_CTRL_comp_val_update_method_4_OFS)&TIMER_CC4_COMPARE_CTRL_comp_val_update_method_4_MASK);
}

static inline void TIMER_CC5_COMPARE_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t comp_val_5, uint32_t comp_val_update_method_5) {
    registers->CC5_COMPARE_CTRL.packed_w =  + ((comp_val_5<<TIMER_CC5_COMPARE_CTRL_comp_val_5_OFS)&TIMER_CC5_COMPARE_CTRL_comp_val_5_MASK) + ((comp_val_update_method_5<<TIMER_CC5_COMPARE_CTRL_comp_val_update_method_5_OFS)&TIMER_CC5_COMPARE_CTRL_comp_val_update_method_5_MASK);
}

static inline void TIMER_CC0_CC_PWM_CFG_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_cc2d_0, uint32_t cc_out_cc2u_0, uint32_t cc_out_ccd_0, uint32_t cc_out_ccu_0, uint32_t cc_out_load_0, uint32_t cc_out_zero_0, uint32_t cc_out_fault_entry_0, uint32_t cc_out_fault_exit_0) {
    registers->CC0_CC_PWM_CFG.packed_w =  + ((cc_out_cc2d_0<<TIMER_CC0_CC_PWM_CFG_cc_out_cc2d_0_OFS)&TIMER_CC0_CC_PWM_CFG_cc_out_cc2d_0_MASK) + ((cc_out_cc2u_0<<TIMER_CC0_CC_PWM_CFG_cc_out_cc2u_0_OFS)&TIMER_CC0_CC_PWM_CFG_cc_out_cc2u_0_MASK) + ((cc_out_ccd_0<<TIMER_CC0_CC_PWM_CFG_cc_out_ccd_0_OFS)&TIMER_CC0_CC_PWM_CFG_cc_out_ccd_0_MASK) + ((cc_out_ccu_0<<TIMER_CC0_CC_PWM_CFG_cc_out_ccu_0_OFS)&TIMER_CC0_CC_PWM_CFG_cc_out_ccu_0_MASK) + ((cc_out_load_0<<TIMER_CC0_CC_PWM_CFG_cc_out_load_0_OFS)&TIMER_CC0_CC_PWM_CFG_cc_out_load_0_MASK) + ((cc_out_zero_0<<TIMER_CC0_CC_PWM_CFG_cc_out_zero_0_OFS)&TIMER_CC0_CC_PWM_CFG_cc_out_zero_0_MASK) + ((cc_out_fault_entry_0<<TIMER_CC0_CC_PWM_CFG_cc_out_fault_entry_0_OFS)&TIMER_CC0_CC_PWM_CFG_cc_out_fault_entry_0_MASK) + ((cc_out_fault_exit_0<<TIMER_CC0_CC_PWM_CFG_cc_out_fault_exit_0_OFS)&TIMER_CC0_CC_PWM_CFG_cc_out_fault_exit_0_MASK);
}

static inline void TIMER_CC1_CC_PWM_CFG_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_cc2d_1, uint32_t cc_out_cc2u_1, uint32_t cc_out_ccd_1, uint32_t cc_out_ccu_1, uint32_t cc_out_load_1, uint32_t cc_out_zero_1, uint32_t cc_out_fault_entry_1, uint32_t cc_out_fault_exit_1) {
    registers->CC1_CC_PWM_CFG.packed_w =  + ((cc_out_cc2d_1<<TIMER_CC1_CC_PWM_CFG_cc_out_cc2d_1_OFS)&TIMER_CC1_CC_PWM_CFG_cc_out_cc2d_1_MASK) + ((cc_out_cc2u_1<<TIMER_CC1_CC_PWM_CFG_cc_out_cc2u_1_OFS)&TIMER_CC1_CC_PWM_CFG_cc_out_cc2u_1_MASK) + ((cc_out_ccd_1<<TIMER_CC1_CC_PWM_CFG_cc_out_ccd_1_OFS)&TIMER_CC1_CC_PWM_CFG_cc_out_ccd_1_MASK) + ((cc_out_ccu_1<<TIMER_CC1_CC_PWM_CFG_cc_out_ccu_1_OFS)&TIMER_CC1_CC_PWM_CFG_cc_out_ccu_1_MASK) + ((cc_out_load_1<<TIMER_CC1_CC_PWM_CFG_cc_out_load_1_OFS)&TIMER_CC1_CC_PWM_CFG_cc_out_load_1_MASK) + ((cc_out_zero_1<<TIMER_CC1_CC_PWM_CFG_cc_out_zero_1_OFS)&TIMER_CC1_CC_PWM_CFG_cc_out_zero_1_MASK) + ((cc_out_fault_entry_1<<TIMER_CC1_CC_PWM_CFG_cc_out_fault_entry_1_OFS)&TIMER_CC1_CC_PWM_CFG_cc_out_fault_entry_1_MASK) + ((cc_out_fault_exit_1<<TIMER_CC1_CC_PWM_CFG_cc_out_fault_exit_1_OFS)&TIMER_CC1_CC_PWM_CFG_cc_out_fault_exit_1_MASK);
}

static inline void TIMER_CC2_CC_PWM_CFG_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_cc2d_2, uint32_t cc_out_cc2u_2, uint32_t cc_out_ccd_2, uint32_t cc_out_ccu_2, uint32_t cc_out_load_2, uint32_t cc_out_zero_2, uint32_t cc_out_fault_entry_2, uint32_t cc_out_fault_exit_2) {
    registers->CC2_CC_PWM_CFG.packed_w =  + ((cc_out_cc2d_2<<TIMER_CC2_CC_PWM_CFG_cc_out_cc2d_2_OFS)&TIMER_CC2_CC_PWM_CFG_cc_out_cc2d_2_MASK) + ((cc_out_cc2u_2<<TIMER_CC2_CC_PWM_CFG_cc_out_cc2u_2_OFS)&TIMER_CC2_CC_PWM_CFG_cc_out_cc2u_2_MASK) + ((cc_out_ccd_2<<TIMER_CC2_CC_PWM_CFG_cc_out_ccd_2_OFS)&TIMER_CC2_CC_PWM_CFG_cc_out_ccd_2_MASK) + ((cc_out_ccu_2<<TIMER_CC2_CC_PWM_CFG_cc_out_ccu_2_OFS)&TIMER_CC2_CC_PWM_CFG_cc_out_ccu_2_MASK) + ((cc_out_load_2<<TIMER_CC2_CC_PWM_CFG_cc_out_load_2_OFS)&TIMER_CC2_CC_PWM_CFG_cc_out_load_2_MASK) + ((cc_out_zero_2<<TIMER_CC2_CC_PWM_CFG_cc_out_zero_2_OFS)&TIMER_CC2_CC_PWM_CFG_cc_out_zero_2_MASK) + ((cc_out_fault_entry_2<<TIMER_CC2_CC_PWM_CFG_cc_out_fault_entry_2_OFS)&TIMER_CC2_CC_PWM_CFG_cc_out_fault_entry_2_MASK) + ((cc_out_fault_exit_2<<TIMER_CC2_CC_PWM_CFG_cc_out_fault_exit_2_OFS)&TIMER_CC2_CC_PWM_CFG_cc_out_fault_exit_2_MASK);
}

static inline void TIMER_CC3_CC_PWM_CFG_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_cc2d_3, uint32_t cc_out_cc2u_3, uint32_t cc_out_ccd_3, uint32_t cc_out_ccu_3, uint32_t cc_out_load_3, uint32_t cc_out_zero_3, uint32_t cc_out_fault_entry_3, uint32_t cc_out_fault_exit_3) {
    registers->CC3_CC_PWM_CFG.packed_w =  + ((cc_out_cc2d_3<<TIMER_CC3_CC_PWM_CFG_cc_out_cc2d_3_OFS)&TIMER_CC3_CC_PWM_CFG_cc_out_cc2d_3_MASK) + ((cc_out_cc2u_3<<TIMER_CC3_CC_PWM_CFG_cc_out_cc2u_3_OFS)&TIMER_CC3_CC_PWM_CFG_cc_out_cc2u_3_MASK) + ((cc_out_ccd_3<<TIMER_CC3_CC_PWM_CFG_cc_out_ccd_3_OFS)&TIMER_CC3_CC_PWM_CFG_cc_out_ccd_3_MASK) + ((cc_out_ccu_3<<TIMER_CC3_CC_PWM_CFG_cc_out_ccu_3_OFS)&TIMER_CC3_CC_PWM_CFG_cc_out_ccu_3_MASK) + ((cc_out_load_3<<TIMER_CC3_CC_PWM_CFG_cc_out_load_3_OFS)&TIMER_CC3_CC_PWM_CFG_cc_out_load_3_MASK) + ((cc_out_zero_3<<TIMER_CC3_CC_PWM_CFG_cc_out_zero_3_OFS)&TIMER_CC3_CC_PWM_CFG_cc_out_zero_3_MASK) + ((cc_out_fault_entry_3<<TIMER_CC3_CC_PWM_CFG_cc_out_fault_entry_3_OFS)&TIMER_CC3_CC_PWM_CFG_cc_out_fault_entry_3_MASK) + ((cc_out_fault_exit_3<<TIMER_CC3_CC_PWM_CFG_cc_out_fault_exit_3_OFS)&TIMER_CC3_CC_PWM_CFG_cc_out_fault_exit_3_MASK);
}

static inline void TIMER_DEADBAND_CFG_WRITE(TIMER_REGS_s * registers, uint32_t db_mode, uint32_t db_rise_delay, uint32_t db_fall_delay) {
    registers->DEADBAND_CFG.packed_w =  + ((db_mode<<TIMER_DEADBAND_CFG_db_mode_OFS)&TIMER_DEADBAND_CFG_db_mode_MASK) + ((db_rise_delay<<TIMER_DEADBAND_CFG_db_rise_delay_OFS)&TIMER_DEADBAND_CFG_db_rise_delay_MASK) + ((db_fall_delay<<TIMER_DEADBAND_CFG_db_fall_delay_OFS)&TIMER_DEADBAND_CFG_db_fall_delay_MASK);
}

static inline void TIMER_CC0_OUTPUT_CTL_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_sel_0, uint32_t cc_out_inv_0, uint32_t cc_out_val_init_0) {
    registers->CC0_OUTPUT_CTL.packed_w =  + ((cc_out_sel_0<<TIMER_CC0_OUTPUT_CTL_cc_out_sel_0_OFS)&TIMER_CC0_OUTPUT_CTL_cc_out_sel_0_MASK) + ((cc_out_inv_0<<TIMER_CC0_OUTPUT_CTL_cc_out_inv_0_OFS)&TIMER_CC0_OUTPUT_CTL_cc_out_inv_0_MASK) + ((cc_out_val_init_0<<TIMER_CC0_OUTPUT_CTL_cc_out_val_init_0_OFS)&TIMER_CC0_OUTPUT_CTL_cc_out_val_init_0_MASK);
}

static inline void TIMER_CC1_OUTPUT_CTL_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_sel_1, uint32_t cc_out_inv_1, uint32_t cc_out_val_init_1) {
    registers->CC1_OUTPUT_CTL.packed_w =  + ((cc_out_sel_1<<TIMER_CC1_OUTPUT_CTL_cc_out_sel_1_OFS)&TIMER_CC1_OUTPUT_CTL_cc_out_sel_1_MASK) + ((cc_out_inv_1<<TIMER_CC1_OUTPUT_CTL_cc_out_inv_1_OFS)&TIMER_CC1_OUTPUT_CTL_cc_out_inv_1_MASK) + ((cc_out_val_init_1<<TIMER_CC1_OUTPUT_CTL_cc_out_val_init_1_OFS)&TIMER_CC1_OUTPUT_CTL_cc_out_val_init_1_MASK);
}

static inline void TIMER_CC0_SW_FORCE_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_sw_force_0, uint32_t cc_cmpl_out_sw_force_0) {
    registers->CC0_SW_FORCE.packed_w =  + ((cc_out_sw_force_0<<TIMER_CC0_SW_FORCE_cc_out_sw_force_0_OFS)&TIMER_CC0_SW_FORCE_cc_out_sw_force_0_MASK) + ((cc_cmpl_out_sw_force_0<<TIMER_CC0_SW_FORCE_cc_cmpl_out_sw_force_0_OFS)&TIMER_CC0_SW_FORCE_cc_cmpl_out_sw_force_0_MASK);
}

static inline void TIMER_CC1_SW_FORCE_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_sw_force_1, uint32_t cc_cmpl_out_sw_force_1) {
    registers->CC1_SW_FORCE.packed_w =  + ((cc_out_sw_force_1<<TIMER_CC1_SW_FORCE_cc_out_sw_force_1_OFS)&TIMER_CC1_SW_FORCE_cc_out_sw_force_1_MASK) + ((cc_cmpl_out_sw_force_1<<TIMER_CC1_SW_FORCE_cc_cmpl_out_sw_force_1_OFS)&TIMER_CC1_SW_FORCE_cc_cmpl_out_sw_force_1_MASK);
}

static inline void TIMER_CC2_OUTPUT_CTL_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_sel_2, uint32_t cc_out_inv_2, uint32_t cc_out_val_init_2) {
    registers->CC2_OUTPUT_CTL.packed_w =  + ((cc_out_sel_2<<TIMER_CC2_OUTPUT_CTL_cc_out_sel_2_OFS)&TIMER_CC2_OUTPUT_CTL_cc_out_sel_2_MASK) + ((cc_out_inv_2<<TIMER_CC2_OUTPUT_CTL_cc_out_inv_2_OFS)&TIMER_CC2_OUTPUT_CTL_cc_out_inv_2_MASK) + ((cc_out_val_init_2<<TIMER_CC2_OUTPUT_CTL_cc_out_val_init_2_OFS)&TIMER_CC2_OUTPUT_CTL_cc_out_val_init_2_MASK);
}

static inline void TIMER_CC3_OUTPUT_CTL_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_sel_3, uint32_t cc_out_inv_3, uint32_t cc_out_val_init_3) {
    registers->CC3_OUTPUT_CTL.packed_w =  + ((cc_out_sel_3<<TIMER_CC3_OUTPUT_CTL_cc_out_sel_3_OFS)&TIMER_CC3_OUTPUT_CTL_cc_out_sel_3_MASK) + ((cc_out_inv_3<<TIMER_CC3_OUTPUT_CTL_cc_out_inv_3_OFS)&TIMER_CC3_OUTPUT_CTL_cc_out_inv_3_MASK) + ((cc_out_val_init_3<<TIMER_CC3_OUTPUT_CTL_cc_out_val_init_3_OFS)&TIMER_CC3_OUTPUT_CTL_cc_out_val_init_3_MASK);
}

static inline void TIMER_CC2_SW_FORCE_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_sw_force_2, uint32_t cc_cmpl_out_sw_force_2) {
    registers->CC2_SW_FORCE.packed_w =  + ((cc_out_sw_force_2<<TIMER_CC2_SW_FORCE_cc_out_sw_force_2_OFS)&TIMER_CC2_SW_FORCE_cc_out_sw_force_2_MASK) + ((cc_cmpl_out_sw_force_2<<TIMER_CC2_SW_FORCE_cc_cmpl_out_sw_force_2_OFS)&TIMER_CC2_SW_FORCE_cc_cmpl_out_sw_force_2_MASK);
}

static inline void TIMER_CC3_SW_FORCE_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_sw_force_3, uint32_t cc_cmpl_out_sw_force_3) {
    registers->CC3_SW_FORCE.packed_w =  + ((cc_out_sw_force_3<<TIMER_CC3_SW_FORCE_cc_out_sw_force_3_OFS)&TIMER_CC3_SW_FORCE_cc_out_sw_force_3_MASK) + ((cc_cmpl_out_sw_force_3<<TIMER_CC3_SW_FORCE_cc_cmpl_out_sw_force_3_OFS)&TIMER_CC3_SW_FORCE_cc_cmpl_out_sw_force_3_MASK);
}

static inline void TIMER_FAULT_IN_CTL_WRITE(TIMER_REGS_s * registers, uint32_t fault_filter_en, uint32_t fault_is_consecutive_period, uint32_t fault_filter_period) {
    registers->FAULT_IN_CTL.packed_w =  + ((fault_filter_en<<TIMER_FAULT_IN_CTL_fault_filter_en_OFS)&TIMER_FAULT_IN_CTL_fault_filter_en_MASK) + ((fault_is_consecutive_period<<TIMER_FAULT_IN_CTL_fault_is_consecutive_period_OFS)&TIMER_FAULT_IN_CTL_fault_is_consecutive_period_MASK) + ((fault_filter_period<<TIMER_FAULT_IN_CTL_fault_filter_period_OFS)&TIMER_FAULT_IN_CTL_fault_filter_period_MASK);
}

static inline void TIMER_FAULT_SRC_CTL_WRITE(TIMER_REGS_s * registers, uint32_t fault_ext2_en, uint32_t fault_ext1_en, uint32_t fault_ext0_en, uint32_t fault_comp2_en, uint32_t fault_comp1_en, uint32_t fault_comp0_en, uint32_t fault_sys_clk_en, uint32_t fault_ext2_act_val, uint32_t fault_ext1_act_val, uint32_t fault_ext0_act_val, uint32_t fault_comp2_act_val, uint32_t fault_comp1_act_val, uint32_t fault_comp0_act_val, uint32_t trig_is_fault, uint32_t fault_in_en, uint32_t fault_dependent_on_input, uint32_t fault_latch_sel) {
    registers->FAULT_SRC_CTL.packed_w =  + ((fault_ext2_en<<TIMER_FAULT_SRC_CTL_fault_ext2_en_OFS)&TIMER_FAULT_SRC_CTL_fault_ext2_en_MASK) + ((fault_ext1_en<<TIMER_FAULT_SRC_CTL_fault_ext1_en_OFS)&TIMER_FAULT_SRC_CTL_fault_ext1_en_MASK) + ((fault_ext0_en<<TIMER_FAULT_SRC_CTL_fault_ext0_en_OFS)&TIMER_FAULT_SRC_CTL_fault_ext0_en_MASK) + ((fault_comp2_en<<TIMER_FAULT_SRC_CTL_fault_comp2_en_OFS)&TIMER_FAULT_SRC_CTL_fault_comp2_en_MASK) + ((fault_comp1_en<<TIMER_FAULT_SRC_CTL_fault_comp1_en_OFS)&TIMER_FAULT_SRC_CTL_fault_comp1_en_MASK) + ((fault_comp0_en<<TIMER_FAULT_SRC_CTL_fault_comp0_en_OFS)&TIMER_FAULT_SRC_CTL_fault_comp0_en_MASK) + ((fault_sys_clk_en<<TIMER_FAULT_SRC_CTL_fault_sys_clk_en_OFS)&TIMER_FAULT_SRC_CTL_fault_sys_clk_en_MASK) + ((fault_ext2_act_val<<TIMER_FAULT_SRC_CTL_fault_ext2_act_val_OFS)&TIMER_FAULT_SRC_CTL_fault_ext2_act_val_MASK) + ((fault_ext1_act_val<<TIMER_FAULT_SRC_CTL_fault_ext1_act_val_OFS)&TIMER_FAULT_SRC_CTL_fault_ext1_act_val_MASK) + ((fault_ext0_act_val<<TIMER_FAULT_SRC_CTL_fault_ext0_act_val_OFS)&TIMER_FAULT_SRC_CTL_fault_ext0_act_val_MASK) + ((fault_comp2_act_val<<TIMER_FAULT_SRC_CTL_fault_comp2_act_val_OFS)&TIMER_FAULT_SRC_CTL_fault_comp2_act_val_MASK) + ((fault_comp1_act_val<<TIMER_FAULT_SRC_CTL_fault_comp1_act_val_OFS)&TIMER_FAULT_SRC_CTL_fault_comp1_act_val_MASK) + ((fault_comp0_act_val<<TIMER_FAULT_SRC_CTL_fault_comp0_act_val_OFS)&TIMER_FAULT_SRC_CTL_fault_comp0_act_val_MASK) + ((trig_is_fault<<TIMER_FAULT_SRC_CTL_trig_is_fault_OFS)&TIMER_FAULT_SRC_CTL_trig_is_fault_MASK) + ((fault_in_en<<TIMER_FAULT_SRC_CTL_fault_in_en_OFS)&TIMER_FAULT_SRC_CTL_fault_in_en_MASK) + ((fault_dependent_on_input<<TIMER_FAULT_SRC_CTL_fault_dependent_on_input_OFS)&TIMER_FAULT_SRC_CTL_fault_dependent_on_input_MASK) + ((fault_latch_sel<<TIMER_FAULT_SRC_CTL_fault_latch_sel_OFS)&TIMER_FAULT_SRC_CTL_fault_latch_sel_MASK);
}

static inline void TIMER_CTR_CTL_WRITE(TIMER_REGS_s * registers, uint32_t ctr_en, uint32_t repeat_mode, uint32_t count_mode, uint32_t ctr_zero_ctrl, uint32_t ctr_load_ctrl, uint32_t ctr_adv_ctrl, uint32_t suppress_ctr_event_gen, uint32_t pl_en, uint32_t ctr_during_fault, uint32_t ctr_exit_fault, uint32_t ctr_after_debug) {
    registers->CTR_CTL.packed_w =  + ((ctr_en<<TIMER_CTR_CTL_ctr_en_OFS)&TIMER_CTR_CTL_ctr_en_MASK) + ((repeat_mode<<TIMER_CTR_CTL_repeat_mode_OFS)&TIMER_CTR_CTL_repeat_mode_MASK) + ((count_mode<<TIMER_CTR_CTL_count_mode_OFS)&TIMER_CTR_CTL_count_mode_MASK) + ((ctr_zero_ctrl<<TIMER_CTR_CTL_ctr_zero_ctrl_OFS)&TIMER_CTR_CTL_ctr_zero_ctrl_MASK) + ((ctr_load_ctrl<<TIMER_CTR_CTL_ctr_load_ctrl_OFS)&TIMER_CTR_CTL_ctr_load_ctrl_MASK) + ((ctr_adv_ctrl<<TIMER_CTR_CTL_ctr_adv_ctrl_OFS)&TIMER_CTR_CTL_ctr_adv_ctrl_MASK) + ((suppress_ctr_event_gen<<TIMER_CTR_CTL_suppress_ctr_event_gen_OFS)&TIMER_CTR_CTL_suppress_ctr_event_gen_MASK) + ((pl_en<<TIMER_CTR_CTL_pl_en_OFS)&TIMER_CTR_CTL_pl_en_MASK) + ((ctr_during_fault<<TIMER_CTR_CTL_ctr_during_fault_OFS)&TIMER_CTR_CTL_ctr_during_fault_MASK) + ((ctr_exit_fault<<TIMER_CTR_CTL_ctr_exit_fault_OFS)&TIMER_CTR_CTL_ctr_exit_fault_MASK) + ((ctr_after_debug<<TIMER_CTR_CTL_ctr_after_debug_OFS)&TIMER_CTR_CTL_ctr_after_debug_MASK);
}

static inline void TIMER_CTR_VAL_WRITE(TIMER_REGS_s * registers, uint32_t ctr_val) {
    registers->CTR_VAL.packed_w =  + ((ctr_val<<TIMER_CTR_VAL_ctr_val_OFS)&TIMER_CTR_VAL_ctr_val_MASK);
}

static inline void TIMER_CTR_LOAD_VAL_WRITE(TIMER_REGS_s * registers, uint32_t ctr_load_val) {
    registers->CTR_LOAD_VAL.packed_w =  + ((ctr_load_val<<TIMER_CTR_LOAD_VAL_ctr_load_val_OFS)&TIMER_CTR_LOAD_VAL_ctr_load_val_MASK);
}

static inline void TIMER_CTR_PL_VAL_WRITE(TIMER_REGS_s * registers, uint32_t pl_val) {
    registers->CTR_PL_VAL.packed_w =  + ((pl_val<<TIMER_CTR_PL_VAL_pl_val_OFS)&TIMER_CTR_PL_VAL_pl_val_MASK);
}

static inline void TIMER_DEBUG_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t run_in_halt_mode) {
    registers->DEBUG_CTRL.packed_w =  + ((run_in_halt_mode<<TIMER_DEBUG_CTRL_run_in_halt_mode_OFS)&TIMER_DEBUG_CTRL_run_in_halt_mode_MASK);
}

static inline void TIMER_RCTR_VAL_WRITE(TIMER_REGS_s * registers, uint32_t rctr_val) {
    registers->RCTR_VAL.packed_w =  + ((rctr_val<<TIMER_RCTR_VAL_rctr_val_OFS)&TIMER_RCTR_VAL_rctr_val_MASK);
}

static inline void TIMER_RCTR_LOAD_VAL_WRITE(TIMER_REGS_s * registers, uint32_t rctr_load_val) {
    registers->RCTR_LOAD_VAL.packed_w =  + ((rctr_load_val<<TIMER_RCTR_LOAD_VAL_rctr_load_val_OFS)&TIMER_RCTR_LOAD_VAL_rctr_load_val_MASK);
}

static inline void TIMER_QEI_DIR_WRITE(TIMER_REGS_s * registers, uint32_t qei_dir) {
    registers->QEI_DIR.packed_w =  + ((qei_dir<<TIMER_QEI_DIR_qei_dir_OFS)&TIMER_QEI_DIR_qei_dir_MASK);
}

