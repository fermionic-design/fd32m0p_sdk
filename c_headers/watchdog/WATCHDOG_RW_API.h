#include "WATCHDOG_REGS.h"

static inline void WATCHDOG_DESC_WRITE(WATCHDOG_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<WATCHDOG_DESC_MODULE_TYPE_OFS)&WATCHDOG_DESC_MODULE_TYPE_MASK) + ((modue_subtype<<WATCHDOG_DESC_MODUE_SUBTYPE_OFS)&WATCHDOG_DESC_MODUE_SUBTYPE_MASK) + ((major_rev<<WATCHDOG_DESC_MAJOR_REV_OFS)&WATCHDOG_DESC_MAJOR_REV_MASK) + ((minor_rev<<WATCHDOG_DESC_MINOR_REV_OFS)&WATCHDOG_DESC_MINOR_REV_MASK);
}

static inline void WATCHDOG_PWR_EN_WRITE(WATCHDOG_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<WATCHDOG_PWR_EN_PWR_EN_OFS)&WATCHDOG_PWR_EN_PWR_EN_MASK) + ((pwr_en_key<<WATCHDOG_PWR_EN_PWR_EN_KEY_OFS)&WATCHDOG_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void WATCHDOG_RST_CTRL_WRITE(WATCHDOG_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<WATCHDOG_RST_CTRL_RST_OFS)&WATCHDOG_RST_CTRL_RST_MASK) + ((rst_sts_clr<<WATCHDOG_RST_CTRL_RST_STS_CLR_OFS)&WATCHDOG_RST_CTRL_RST_STS_CLR_MASK) + ((rst_key<<WATCHDOG_RST_CTRL_RST_KEY_OFS)&WATCHDOG_RST_CTRL_RST_KEY_MASK);
}

static inline void WATCHDOG_RST_STS_WRITE(WATCHDOG_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<WATCHDOG_RST_STS_RST_STS_OFS)&WATCHDOG_RST_STS_RST_STS_MASK);
}

static inline void WATCHDOG_INTR_STS_WRITE(WATCHDOG_REGS_s * registers, uint32_t intr_first) {
    registers->INTR_STS.packed_w =  + ((intr_first<<WATCHDOG_INTR_STS_INTR_FIRST_OFS)&WATCHDOG_INTR_STS_INTR_FIRST_MASK);
}

static inline void WATCHDOG_INTR_EVENT_WRITE(WATCHDOG_REGS_s * registers, uint32_t time_prd_exp, uint32_t restart_in_closed_window, uint32_t restart_reg_incorrect_data, uint32_t wr_to_ctl_regs_after_wwdt_en, uint32_t wrg_pwd_or_access_to_ctrl_regs) {
    registers->INTR_EVENT.packed_w =  + ((time_prd_exp<<WATCHDOG_INTR_EVENT_TIME_PRD_EXP_OFS)&WATCHDOG_INTR_EVENT_TIME_PRD_EXP_MASK) + ((restart_in_closed_window<<WATCHDOG_INTR_EVENT_RESTART_IN_CLOSED_WINDOW_OFS)&WATCHDOG_INTR_EVENT_RESTART_IN_CLOSED_WINDOW_MASK) + ((restart_reg_incorrect_data<<WATCHDOG_INTR_EVENT_RESTART_REG_INCORRECT_DATA_OFS)&WATCHDOG_INTR_EVENT_RESTART_REG_INCORRECT_DATA_MASK) + ((wr_to_ctl_regs_after_wwdt_en<<WATCHDOG_INTR_EVENT_WR_TO_CTL_REGS_AFTER_WWDT_EN_OFS)&WATCHDOG_INTR_EVENT_WR_TO_CTL_REGS_AFTER_WWDT_EN_MASK) + ((wrg_pwd_or_access_to_ctrl_regs<<WATCHDOG_INTR_EVENT_WRG_PWD_OR_ACCESS_TO_CTRL_REGS_OFS)&WATCHDOG_INTR_EVENT_WRG_PWD_OR_ACCESS_TO_CTRL_REGS_MASK);
}

static inline void WATCHDOG_INTR_EN_WRITE(WATCHDOG_REGS_s * registers, uint32_t time_prd_exp_en, uint32_t restart_in_closed_window_en, uint32_t restart_reg_incorrect_data_en, uint32_t wr_to_ctl_regs_after_wwdt_en_en, uint32_t wrg_pwd_or_access_to_ctrl_regs_en) {
    registers->INTR_EN.packed_w =  + ((time_prd_exp_en<<WATCHDOG_INTR_EN_TIME_PRD_EXP_EN_OFS)&WATCHDOG_INTR_EN_TIME_PRD_EXP_EN_MASK) + ((restart_in_closed_window_en<<WATCHDOG_INTR_EN_RESTART_IN_CLOSED_WINDOW_EN_OFS)&WATCHDOG_INTR_EN_RESTART_IN_CLOSED_WINDOW_EN_MASK) + ((restart_reg_incorrect_data_en<<WATCHDOG_INTR_EN_RESTART_REG_INCORRECT_DATA_EN_OFS)&WATCHDOG_INTR_EN_RESTART_REG_INCORRECT_DATA_EN_MASK) + ((wr_to_ctl_regs_after_wwdt_en_en<<WATCHDOG_INTR_EN_WR_TO_CTL_REGS_AFTER_WWDT_EN_EN_OFS)&WATCHDOG_INTR_EN_WR_TO_CTL_REGS_AFTER_WWDT_EN_EN_MASK) + ((wrg_pwd_or_access_to_ctrl_regs_en<<WATCHDOG_INTR_EN_WRG_PWD_OR_ACCESS_TO_CTRL_REGS_EN_OFS)&WATCHDOG_INTR_EN_WRG_PWD_OR_ACCESS_TO_CTRL_REGS_EN_MASK);
}

static inline void WATCHDOG_INTR_NMI_EN_WRITE(WATCHDOG_REGS_s * registers, uint32_t time_prd_exp_nmi_en, uint32_t restart_within_closed_window_nmi_en, uint32_t restart_reg_incorrect_data_nmi_en, uint32_t wr_to_ctl_regs_after_wwdt_en_nmi_en, uint32_t wrg_pwd_or_access_to_ctrl_regs_nmi_en) {
    registers->INTR_NMI_EN.packed_w =  + ((time_prd_exp_nmi_en<<WATCHDOG_INTR_NMI_EN_TIME_PRD_EXP_NMI_EN_OFS)&WATCHDOG_INTR_NMI_EN_TIME_PRD_EXP_NMI_EN_MASK) + ((restart_within_closed_window_nmi_en<<WATCHDOG_INTR_NMI_EN_RESTART_WITHIN_CLOSED_WINDOW_NMI_EN_OFS)&WATCHDOG_INTR_NMI_EN_RESTART_WITHIN_CLOSED_WINDOW_NMI_EN_MASK) + ((restart_reg_incorrect_data_nmi_en<<WATCHDOG_INTR_NMI_EN_RESTART_REG_INCORRECT_DATA_NMI_EN_OFS)&WATCHDOG_INTR_NMI_EN_RESTART_REG_INCORRECT_DATA_NMI_EN_MASK) + ((wr_to_ctl_regs_after_wwdt_en_nmi_en<<WATCHDOG_INTR_NMI_EN_WR_TO_CTL_REGS_AFTER_WWDT_EN_NMI_EN_OFS)&WATCHDOG_INTR_NMI_EN_WR_TO_CTL_REGS_AFTER_WWDT_EN_NMI_EN_MASK) + ((wrg_pwd_or_access_to_ctrl_regs_nmi_en<<WATCHDOG_INTR_NMI_EN_WRG_PWD_OR_ACCESS_TO_CTRL_REGS_NMI_EN_OFS)&WATCHDOG_INTR_NMI_EN_WRG_PWD_OR_ACCESS_TO_CTRL_REGS_NMI_EN_MASK);
}

static inline void WATCHDOG_EVENT_EN_WRITE(WATCHDOG_REGS_s * registers, uint32_t time_prd_exp_event_en) {
    registers->EVENT_EN.packed_w =  + ((time_prd_exp_event_en<<WATCHDOG_EVENT_EN_TIME_PRD_EXP_EVENT_EN_OFS)&WATCHDOG_EVENT_EN_TIME_PRD_EXP_EVENT_EN_MASK);
}

static inline void WATCHDOG_INTR_SW_SET_WRITE(WATCHDOG_REGS_s * registers, uint32_t time_prd_exp_sw_set, uint32_t restart_within_closed_window_sw_set, uint32_t restart_reg_incorrect_data_sw_set, uint32_t wr_to_ctl_regs_after_wwdt_en_sw_set, uint32_t wrg_pwd_or_access_to_ctrl_regs_sw_set) {
    registers->INTR_SW_SET.packed_w =  + ((time_prd_exp_sw_set<<WATCHDOG_INTR_SW_SET_TIME_PRD_EXP_SW_SET_OFS)&WATCHDOG_INTR_SW_SET_TIME_PRD_EXP_SW_SET_MASK) + ((restart_within_closed_window_sw_set<<WATCHDOG_INTR_SW_SET_RESTART_WITHIN_CLOSED_WINDOW_SW_SET_OFS)&WATCHDOG_INTR_SW_SET_RESTART_WITHIN_CLOSED_WINDOW_SW_SET_MASK) + ((restart_reg_incorrect_data_sw_set<<WATCHDOG_INTR_SW_SET_RESTART_REG_INCORRECT_DATA_SW_SET_OFS)&WATCHDOG_INTR_SW_SET_RESTART_REG_INCORRECT_DATA_SW_SET_MASK) + ((wr_to_ctl_regs_after_wwdt_en_sw_set<<WATCHDOG_INTR_SW_SET_WR_TO_CTL_REGS_AFTER_WWDT_EN_SW_SET_OFS)&WATCHDOG_INTR_SW_SET_WR_TO_CTL_REGS_AFTER_WWDT_EN_SW_SET_MASK) + ((wrg_pwd_or_access_to_ctrl_regs_sw_set<<WATCHDOG_INTR_SW_SET_WRG_PWD_OR_ACCESS_TO_CTRL_REGS_SW_SET_OFS)&WATCHDOG_INTR_SW_SET_WRG_PWD_OR_ACCESS_TO_CTRL_REGS_SW_SET_MASK);
}

static inline void WATCHDOG_HALT_MODE_WRITE(WATCHDOG_REGS_s * registers, uint32_t run_in_halt_mode) {
    registers->HALT_MODE.packed_w =  + ((run_in_halt_mode<<WATCHDOG_HALT_MODE_RUN_IN_HALT_MODE_OFS)&WATCHDOG_HALT_MODE_RUN_IN_HALT_MODE_MASK);
}

static inline void WATCHDOG_WWDT_EN_WRITE(WATCHDOG_REGS_s * registers, uint32_t wwdt_en, uint32_t wwdt_en_key) {
    registers->WWDT_EN.packed_w =  + ((wwdt_en<<WATCHDOG_WWDT_EN_WWDT_EN_OFS)&WATCHDOG_WWDT_EN_WWDT_EN_MASK) + ((wwdt_en_key<<WATCHDOG_WWDT_EN_WWDT_EN_KEY_OFS)&WATCHDOG_WWDT_EN_WWDT_EN_KEY_MASK);
}

static inline void WATCHDOG_WWDT_CTL0_WRITE(WATCHDOG_REGS_s * registers, uint32_t clk_div, uint32_t total_time_period, uint32_t closed_window, uint32_t is_timer_mode, uint32_t timer_repeat, uint32_t stop_in_sleep_mode, uint32_t sleep_policy_rst, uint32_t violation_gen, uint32_t wwdt_ctl0_key) {
    registers->WWDT_CTL0.packed_w =  + ((clk_div<<WATCHDOG_WWDT_CTL0_CLK_DIV_OFS)&WATCHDOG_WWDT_CTL0_CLK_DIV_MASK) + ((total_time_period<<WATCHDOG_WWDT_CTL0_TOTAL_TIME_PERIOD_OFS)&WATCHDOG_WWDT_CTL0_TOTAL_TIME_PERIOD_MASK) + ((closed_window<<WATCHDOG_WWDT_CTL0_CLOSED_WINDOW_OFS)&WATCHDOG_WWDT_CTL0_CLOSED_WINDOW_MASK) + ((is_timer_mode<<WATCHDOG_WWDT_CTL0_IS_TIMER_MODE_OFS)&WATCHDOG_WWDT_CTL0_IS_TIMER_MODE_MASK) + ((timer_repeat<<WATCHDOG_WWDT_CTL0_TIMER_REPEAT_OFS)&WATCHDOG_WWDT_CTL0_TIMER_REPEAT_MASK) + ((stop_in_sleep_mode<<WATCHDOG_WWDT_CTL0_STOP_IN_SLEEP_MODE_OFS)&WATCHDOG_WWDT_CTL0_STOP_IN_SLEEP_MODE_MASK) + ((sleep_policy_rst<<WATCHDOG_WWDT_CTL0_SLEEP_POLICY_RST_OFS)&WATCHDOG_WWDT_CTL0_SLEEP_POLICY_RST_MASK) + ((violation_gen<<WATCHDOG_WWDT_CTL0_VIOLATION_GEN_OFS)&WATCHDOG_WWDT_CTL0_VIOLATION_GEN_MASK) + ((wwdt_ctl0_key<<WATCHDOG_WWDT_CTL0_WWDT_CTL0_KEY_OFS)&WATCHDOG_WWDT_CTL0_WWDT_CTL0_KEY_MASK);
}

static inline void WATCHDOG_WWDT_CTL1_WRITE(WATCHDOG_REGS_s * registers, uint32_t total_wait_time_after_violation, uint32_t wwdt_enabled_after_violation, uint32_t wwdt_ctl1_key) {
    registers->WWDT_CTL1.packed_w =  + ((total_wait_time_after_violation<<WATCHDOG_WWDT_CTL1_TOTAL_WAIT_TIME_AFTER_VIOLATION_OFS)&WATCHDOG_WWDT_CTL1_TOTAL_WAIT_TIME_AFTER_VIOLATION_MASK) + ((wwdt_enabled_after_violation<<WATCHDOG_WWDT_CTL1_WWDT_ENABLED_AFTER_VIOLATION_OFS)&WATCHDOG_WWDT_CTL1_WWDT_ENABLED_AFTER_VIOLATION_MASK) + ((wwdt_ctl1_key<<WATCHDOG_WWDT_CTL1_WWDT_CTL1_KEY_OFS)&WATCHDOG_WWDT_CTL1_WWDT_CTL1_KEY_MASK);
}

static inline void WATCHDOG_WWDT_RESTART_WRITE(WATCHDOG_REGS_s * registers, uint32_t restart) {
    registers->WWDT_RESTART.packed_w =  + ((restart<<WATCHDOG_WWDT_RESTART_RESTART_OFS)&WATCHDOG_WWDT_RESTART_RESTART_MASK);
}

static inline void WATCHDOG_WWDT_STS_WRITE(WATCHDOG_REGS_s * registers, uint32_t run) {
    registers->WWDT_STS.packed_w =  + ((run<<WATCHDOG_WWDT_STS_RUN_OFS)&WATCHDOG_WWDT_STS_RUN_MASK);
}

