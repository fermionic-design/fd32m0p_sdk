#include "WATCHDOG_REGS.h"

static inline void WATCHDOG_DESC_WRITE(WATCHDOG_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<WATCHDOG_DESC_module_type_OFS)&WATCHDOG_DESC_module_type_MASK) + ((modue_subtype<<WATCHDOG_DESC_modue_subtype_OFS)&WATCHDOG_DESC_modue_subtype_MASK) + ((major_rev<<WATCHDOG_DESC_major_rev_OFS)&WATCHDOG_DESC_major_rev_MASK) + ((minor_rev<<WATCHDOG_DESC_minor_rev_OFS)&WATCHDOG_DESC_minor_rev_MASK);
}

static inline void WATCHDOG_PWR_EN_WRITE(WATCHDOG_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<WATCHDOG_PWR_EN_pwr_en_OFS)&WATCHDOG_PWR_EN_pwr_en_MASK) + ((pwr_en_key<<WATCHDOG_PWR_EN_pwr_en_key_OFS)&WATCHDOG_PWR_EN_pwr_en_key_MASK);
}

static inline void WATCHDOG_RST_CTRL_WRITE(WATCHDOG_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<WATCHDOG_RST_CTRL_rst_OFS)&WATCHDOG_RST_CTRL_rst_MASK) + ((rst_sts_clr<<WATCHDOG_RST_CTRL_rst_sts_clr_OFS)&WATCHDOG_RST_CTRL_rst_sts_clr_MASK) + ((rst_key<<WATCHDOG_RST_CTRL_rst_key_OFS)&WATCHDOG_RST_CTRL_rst_key_MASK);
}

static inline void WATCHDOG_RST_STS_WRITE(WATCHDOG_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<WATCHDOG_RST_STS_rst_sts_OFS)&WATCHDOG_RST_STS_rst_sts_MASK);
}

static inline void WATCHDOG_INTR_STS_WRITE(WATCHDOG_REGS_s * registers, uint32_t intr_first) {
    registers->INTR_STS.packed_w =  + ((intr_first<<WATCHDOG_INTR_STS_intr_first_OFS)&WATCHDOG_INTR_STS_intr_first_MASK);
}

static inline void WATCHDOG_INTR_EVENT_WRITE(WATCHDOG_REGS_s * registers, uint32_t time_prd_exp, uint32_t restart_in_closed_window, uint32_t restart_reg_incorrect_data, uint32_t wr_to_ctl_regs_after_wwdt_en, uint32_t wrg_pwd_or_access_to_ctrl_regs) {
    registers->INTR_EVENT.packed_w =  + ((time_prd_exp<<WATCHDOG_INTR_EVENT_time_prd_exp_OFS)&WATCHDOG_INTR_EVENT_time_prd_exp_MASK) + ((restart_in_closed_window<<WATCHDOG_INTR_EVENT_restart_in_closed_window_OFS)&WATCHDOG_INTR_EVENT_restart_in_closed_window_MASK) + ((restart_reg_incorrect_data<<WATCHDOG_INTR_EVENT_restart_reg_incorrect_data_OFS)&WATCHDOG_INTR_EVENT_restart_reg_incorrect_data_MASK) + ((wr_to_ctl_regs_after_wwdt_en<<WATCHDOG_INTR_EVENT_wr_to_ctl_regs_after_wwdt_en_OFS)&WATCHDOG_INTR_EVENT_wr_to_ctl_regs_after_wwdt_en_MASK) + ((wrg_pwd_or_access_to_ctrl_regs<<WATCHDOG_INTR_EVENT_wrg_pwd_or_access_to_ctrl_regs_OFS)&WATCHDOG_INTR_EVENT_wrg_pwd_or_access_to_ctrl_regs_MASK);
}

static inline void WATCHDOG_INTR_EN_WRITE(WATCHDOG_REGS_s * registers, uint32_t time_prd_exp_en, uint32_t restart_in_closed_window_en, uint32_t restart_reg_incorrect_data_en, uint32_t wr_to_ctl_regs_after_wwdt_en_en, uint32_t wrg_pwd_or_access_to_ctrl_regs_en) {
    registers->INTR_EN.packed_w =  + ((time_prd_exp_en<<WATCHDOG_INTR_EN_time_prd_exp_en_OFS)&WATCHDOG_INTR_EN_time_prd_exp_en_MASK) + ((restart_in_closed_window_en<<WATCHDOG_INTR_EN_restart_in_closed_window_en_OFS)&WATCHDOG_INTR_EN_restart_in_closed_window_en_MASK) + ((restart_reg_incorrect_data_en<<WATCHDOG_INTR_EN_restart_reg_incorrect_data_en_OFS)&WATCHDOG_INTR_EN_restart_reg_incorrect_data_en_MASK) + ((wr_to_ctl_regs_after_wwdt_en_en<<WATCHDOG_INTR_EN_wr_to_ctl_regs_after_wwdt_en_en_OFS)&WATCHDOG_INTR_EN_wr_to_ctl_regs_after_wwdt_en_en_MASK) + ((wrg_pwd_or_access_to_ctrl_regs_en<<WATCHDOG_INTR_EN_wrg_pwd_or_access_to_ctrl_regs_en_OFS)&WATCHDOG_INTR_EN_wrg_pwd_or_access_to_ctrl_regs_en_MASK);
}

static inline void WATCHDOG_INTR_NMI_EN_WRITE(WATCHDOG_REGS_s * registers, uint32_t time_prd_exp_nmi_en, uint32_t restart_within_closed_window_nmi_en, uint32_t restart_reg_incorrect_data_nmi_en, uint32_t wr_to_ctl_regs_after_wwdt_en_nmi_en, uint32_t wrg_pwd_or_access_to_ctrl_regs_nmi_en) {
    registers->INTR_NMI_EN.packed_w =  + ((time_prd_exp_nmi_en<<WATCHDOG_INTR_NMI_EN_time_prd_exp_nmi_en_OFS)&WATCHDOG_INTR_NMI_EN_time_prd_exp_nmi_en_MASK) + ((restart_within_closed_window_nmi_en<<WATCHDOG_INTR_NMI_EN_restart_within_closed_window_nmi_en_OFS)&WATCHDOG_INTR_NMI_EN_restart_within_closed_window_nmi_en_MASK) + ((restart_reg_incorrect_data_nmi_en<<WATCHDOG_INTR_NMI_EN_restart_reg_incorrect_data_nmi_en_OFS)&WATCHDOG_INTR_NMI_EN_restart_reg_incorrect_data_nmi_en_MASK) + ((wr_to_ctl_regs_after_wwdt_en_nmi_en<<WATCHDOG_INTR_NMI_EN_wr_to_ctl_regs_after_wwdt_en_nmi_en_OFS)&WATCHDOG_INTR_NMI_EN_wr_to_ctl_regs_after_wwdt_en_nmi_en_MASK) + ((wrg_pwd_or_access_to_ctrl_regs_nmi_en<<WATCHDOG_INTR_NMI_EN_wrg_pwd_or_access_to_ctrl_regs_nmi_en_OFS)&WATCHDOG_INTR_NMI_EN_wrg_pwd_or_access_to_ctrl_regs_nmi_en_MASK);
}

static inline void WATCHDOG_EVENT_EN_WRITE(WATCHDOG_REGS_s * registers, uint32_t time_prd_exp_event_en) {
    registers->EVENT_EN.packed_w =  + ((time_prd_exp_event_en<<WATCHDOG_EVENT_EN_time_prd_exp_event_en_OFS)&WATCHDOG_EVENT_EN_time_prd_exp_event_en_MASK);
}

static inline void WATCHDOG_INTR_SW_SET_WRITE(WATCHDOG_REGS_s * registers, uint32_t time_prd_exp_sw_set, uint32_t restart_within_closed_window_sw_set, uint32_t restart_reg_incorrect_data_sw_set, uint32_t wr_to_ctl_regs_after_wwdt_en_sw_set, uint32_t wrg_pwd_or_access_to_ctrl_regs_sw_set) {
    registers->INTR_SW_SET.packed_w =  + ((time_prd_exp_sw_set<<WATCHDOG_INTR_SW_SET_time_prd_exp_sw_set_OFS)&WATCHDOG_INTR_SW_SET_time_prd_exp_sw_set_MASK) + ((restart_within_closed_window_sw_set<<WATCHDOG_INTR_SW_SET_restart_within_closed_window_sw_set_OFS)&WATCHDOG_INTR_SW_SET_restart_within_closed_window_sw_set_MASK) + ((restart_reg_incorrect_data_sw_set<<WATCHDOG_INTR_SW_SET_restart_reg_incorrect_data_sw_set_OFS)&WATCHDOG_INTR_SW_SET_restart_reg_incorrect_data_sw_set_MASK) + ((wr_to_ctl_regs_after_wwdt_en_sw_set<<WATCHDOG_INTR_SW_SET_wr_to_ctl_regs_after_wwdt_en_sw_set_OFS)&WATCHDOG_INTR_SW_SET_wr_to_ctl_regs_after_wwdt_en_sw_set_MASK) + ((wrg_pwd_or_access_to_ctrl_regs_sw_set<<WATCHDOG_INTR_SW_SET_wrg_pwd_or_access_to_ctrl_regs_sw_set_OFS)&WATCHDOG_INTR_SW_SET_wrg_pwd_or_access_to_ctrl_regs_sw_set_MASK);
}

static inline void WATCHDOG_HALT_MODE_WRITE(WATCHDOG_REGS_s * registers, uint32_t run_in_halt_mode) {
    registers->HALT_MODE.packed_w =  + ((run_in_halt_mode<<WATCHDOG_HALT_MODE_run_in_halt_mode_OFS)&WATCHDOG_HALT_MODE_run_in_halt_mode_MASK);
}

static inline void WATCHDOG_WWDT_EN_WRITE(WATCHDOG_REGS_s * registers, uint32_t wwdt_en, uint32_t wwdt_en_key) {
    registers->WWDT_EN.packed_w =  + ((wwdt_en<<WATCHDOG_WWDT_EN_wwdt_en_OFS)&WATCHDOG_WWDT_EN_wwdt_en_MASK) + ((wwdt_en_key<<WATCHDOG_WWDT_EN_wwdt_en_key_OFS)&WATCHDOG_WWDT_EN_wwdt_en_key_MASK);
}

static inline void WATCHDOG_WWDT_CTL0_WRITE(WATCHDOG_REGS_s * registers, uint32_t clk_div, uint32_t total_time_period, uint32_t closed_window, uint32_t is_timer_mode, uint32_t timer_repeat, uint32_t stop_in_sleep_mode, uint32_t sleep_policy_rst, uint32_t violation_gen, uint32_t wwdt_ctl0_key) {
    registers->WWDT_CTL0.packed_w =  + ((clk_div<<WATCHDOG_WWDT_CTL0_clk_div_OFS)&WATCHDOG_WWDT_CTL0_clk_div_MASK) + ((total_time_period<<WATCHDOG_WWDT_CTL0_total_time_period_OFS)&WATCHDOG_WWDT_CTL0_total_time_period_MASK) + ((closed_window<<WATCHDOG_WWDT_CTL0_closed_window_OFS)&WATCHDOG_WWDT_CTL0_closed_window_MASK) + ((is_timer_mode<<WATCHDOG_WWDT_CTL0_is_timer_mode_OFS)&WATCHDOG_WWDT_CTL0_is_timer_mode_MASK) + ((timer_repeat<<WATCHDOG_WWDT_CTL0_timer_repeat_OFS)&WATCHDOG_WWDT_CTL0_timer_repeat_MASK) + ((stop_in_sleep_mode<<WATCHDOG_WWDT_CTL0_stop_in_sleep_mode_OFS)&WATCHDOG_WWDT_CTL0_stop_in_sleep_mode_MASK) + ((sleep_policy_rst<<WATCHDOG_WWDT_CTL0_sleep_policy_rst_OFS)&WATCHDOG_WWDT_CTL0_sleep_policy_rst_MASK) + ((violation_gen<<WATCHDOG_WWDT_CTL0_violation_gen_OFS)&WATCHDOG_WWDT_CTL0_violation_gen_MASK) + ((wwdt_ctl0_key<<WATCHDOG_WWDT_CTL0_wwdt_ctl0_key_OFS)&WATCHDOG_WWDT_CTL0_wwdt_ctl0_key_MASK);
}

static inline void WATCHDOG_WWDT_CTL1_WRITE(WATCHDOG_REGS_s * registers, uint32_t total_wait_time_after_violation, uint32_t wwdt_enabled_after_violation, uint32_t wwdt_ctl1_key) {
    registers->WWDT_CTL1.packed_w =  + ((total_wait_time_after_violation<<WATCHDOG_WWDT_CTL1_total_wait_time_after_violation_OFS)&WATCHDOG_WWDT_CTL1_total_wait_time_after_violation_MASK) + ((wwdt_enabled_after_violation<<WATCHDOG_WWDT_CTL1_wwdt_enabled_after_violation_OFS)&WATCHDOG_WWDT_CTL1_wwdt_enabled_after_violation_MASK) + ((wwdt_ctl1_key<<WATCHDOG_WWDT_CTL1_wwdt_ctl1_key_OFS)&WATCHDOG_WWDT_CTL1_wwdt_ctl1_key_MASK);
}

static inline void WATCHDOG_WWDT_RESTART_WRITE(WATCHDOG_REGS_s * registers, uint32_t restart) {
    registers->WWDT_RESTART.packed_w =  + ((restart<<WATCHDOG_WWDT_RESTART_restart_OFS)&WATCHDOG_WWDT_RESTART_restart_MASK);
}

static inline void WATCHDOG_WWDT_STS_WRITE(WATCHDOG_REGS_s * registers, uint32_t run) {
    registers->WWDT_STS.packed_w =  + ((run<<WATCHDOG_WWDT_STS_run_OFS)&WATCHDOG_WWDT_STS_run_MASK);
}

