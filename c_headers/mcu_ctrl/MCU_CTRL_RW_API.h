#include "MCU_CTRL_REGS.h"

static inline void MCU_CTRL_DESC_WRITE(MCU_CTRL_REGS_s * registers, uint32_t module_type, uint32_t module_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<MCU_CTRL_DESC_module_type_OFS)&MCU_CTRL_DESC_module_type_MASK) + ((module_subtype<<MCU_CTRL_DESC_module_subtype_OFS)&MCU_CTRL_DESC_module_subtype_MASK) + ((major_rev<<MCU_CTRL_DESC_major_rev_OFS)&MCU_CTRL_DESC_major_rev_MASK) + ((minor_rev<<MCU_CTRL_DESC_minor_rev_OFS)&MCU_CTRL_DESC_minor_rev_MASK);
}

static inline void MCU_CTRL_RST_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<MCU_CTRL_RST_CTRL_rst_OFS)&MCU_CTRL_RST_CTRL_rst_MASK) + ((rst_sts_clr<<MCU_CTRL_RST_CTRL_rst_sts_clr_OFS)&MCU_CTRL_RST_CTRL_rst_sts_clr_MASK) + ((rst_key<<MCU_CTRL_RST_CTRL_rst_key_OFS)&MCU_CTRL_RST_CTRL_rst_key_MASK);
}

static inline void MCU_CTRL_RST_STS_WRITE(MCU_CTRL_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<MCU_CTRL_RST_STS_rst_sts_OFS)&MCU_CTRL_RST_STS_rst_sts_MASK);
}

static inline void MCU_CTRL_CLK_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w =  + ((clk_en<<MCU_CTRL_CLK_CTRL_clk_en_OFS)&MCU_CTRL_CLK_CTRL_clk_en_MASK);
}

static inline void MCU_CTRL_INTR_EVENT_WRITE(MCU_CTRL_REGS_s * registers, uint32_t bor, uint32_t clk_lf_mon_fault, uint32_t clk_32mhz_req) {
    registers->INTR_EVENT.packed_w =  + ((bor<<MCU_CTRL_INTR_EVENT_bor_OFS)&MCU_CTRL_INTR_EVENT_bor_MASK) + ((clk_lf_mon_fault<<MCU_CTRL_INTR_EVENT_clk_lf_mon_fault_OFS)&MCU_CTRL_INTR_EVENT_clk_lf_mon_fault_MASK) + ((clk_32mhz_req<<MCU_CTRL_INTR_EVENT_clk_32mhz_req_OFS)&MCU_CTRL_INTR_EVENT_clk_32mhz_req_MASK);
}

static inline void MCU_CTRL_INTR_EN_WRITE(MCU_CTRL_REGS_s * registers, uint32_t bor_en, uint32_t clk_lf_mon_fault_en, uint32_t clk_32mhz_req_en) {
    registers->INTR_EN.packed_w =  + ((bor_en<<MCU_CTRL_INTR_EN_bor_en_OFS)&MCU_CTRL_INTR_EN_bor_en_MASK) + ((clk_lf_mon_fault_en<<MCU_CTRL_INTR_EN_clk_lf_mon_fault_en_OFS)&MCU_CTRL_INTR_EN_clk_lf_mon_fault_en_MASK) + ((clk_32mhz_req_en<<MCU_CTRL_INTR_EN_clk_32mhz_req_en_OFS)&MCU_CTRL_INTR_EN_clk_32mhz_req_en_MASK);
}

static inline void MCU_CTRL_CLK_PWR_EN_WRITE(MCU_CTRL_REGS_s * registers, uint32_t hf_osc_pwr_en, uint32_t hf_xo_pwr_en, uint32_t pll_pwr_en, uint32_t lf_osc_pwr_en, uint32_t lf_xo_pwr_en) {
    registers->CLK_PWR_EN.packed_w =  + ((hf_osc_pwr_en<<MCU_CTRL_CLK_PWR_EN_hf_osc_pwr_en_OFS)&MCU_CTRL_CLK_PWR_EN_hf_osc_pwr_en_MASK) + ((hf_xo_pwr_en<<MCU_CTRL_CLK_PWR_EN_hf_xo_pwr_en_OFS)&MCU_CTRL_CLK_PWR_EN_hf_xo_pwr_en_MASK) + ((pll_pwr_en<<MCU_CTRL_CLK_PWR_EN_pll_pwr_en_OFS)&MCU_CTRL_CLK_PWR_EN_pll_pwr_en_MASK) + ((lf_osc_pwr_en<<MCU_CTRL_CLK_PWR_EN_lf_osc_pwr_en_OFS)&MCU_CTRL_CLK_PWR_EN_lf_osc_pwr_en_MASK) + ((lf_xo_pwr_en<<MCU_CTRL_CLK_PWR_EN_lf_xo_pwr_en_OFS)&MCU_CTRL_CLK_PWR_EN_lf_xo_pwr_en_MASK);
}

static inline void MCU_CTRL_ANA_CLK_EN_WRITE(MCU_CTRL_REGS_s * registers, uint32_t hf_osc_clk_en_ovrd_val, uint32_t hf_osc_clk_en_ovrd_en, uint32_t pll_clk_en_ovrd_val, uint32_t pll_clk_en_ovrd_en, uint32_t hf_xo_or_ext_clk_ovrd_val, uint32_t hf_xo_or_ext_clk_ovrd_en) {
    registers->ANA_CLK_EN.packed_w =  + ((hf_osc_clk_en_ovrd_val<<MCU_CTRL_ANA_CLK_EN_hf_osc_clk_en_ovrd_val_OFS)&MCU_CTRL_ANA_CLK_EN_hf_osc_clk_en_ovrd_val_MASK) + ((hf_osc_clk_en_ovrd_en<<MCU_CTRL_ANA_CLK_EN_hf_osc_clk_en_ovrd_en_OFS)&MCU_CTRL_ANA_CLK_EN_hf_osc_clk_en_ovrd_en_MASK) + ((pll_clk_en_ovrd_val<<MCU_CTRL_ANA_CLK_EN_pll_clk_en_ovrd_val_OFS)&MCU_CTRL_ANA_CLK_EN_pll_clk_en_ovrd_val_MASK) + ((pll_clk_en_ovrd_en<<MCU_CTRL_ANA_CLK_EN_pll_clk_en_ovrd_en_OFS)&MCU_CTRL_ANA_CLK_EN_pll_clk_en_ovrd_en_MASK) + ((hf_xo_or_ext_clk_ovrd_val<<MCU_CTRL_ANA_CLK_EN_hf_xo_or_ext_clk_ovrd_val_OFS)&MCU_CTRL_ANA_CLK_EN_hf_xo_or_ext_clk_ovrd_val_MASK) + ((hf_xo_or_ext_clk_ovrd_en<<MCU_CTRL_ANA_CLK_EN_hf_xo_or_ext_clk_ovrd_en_OFS)&MCU_CTRL_ANA_CLK_EN_hf_xo_or_ext_clk_ovrd_en_MASK);
}

static inline void MCU_CTRL_HF_CLK_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t use_clk_pll, uint32_t use_hf_osc, uint32_t hf_xo_or_ext_div, uint32_t use_precision_clk, uint32_t hf_xo_en, uint32_t hf_xo_or_ext_chng_time, uint32_t hf_osc_code_chng_time) {
    registers->HF_CLK_CTRL.packed_w =  + ((use_clk_pll<<MCU_CTRL_HF_CLK_CTRL_use_clk_pll_OFS)&MCU_CTRL_HF_CLK_CTRL_use_clk_pll_MASK) + ((use_hf_osc<<MCU_CTRL_HF_CLK_CTRL_use_hf_osc_OFS)&MCU_CTRL_HF_CLK_CTRL_use_hf_osc_MASK) + ((hf_xo_or_ext_div<<MCU_CTRL_HF_CLK_CTRL_hf_xo_or_ext_div_OFS)&MCU_CTRL_HF_CLK_CTRL_hf_xo_or_ext_div_MASK) + ((use_precision_clk<<MCU_CTRL_HF_CLK_CTRL_use_precision_clk_OFS)&MCU_CTRL_HF_CLK_CTRL_use_precision_clk_MASK) + ((hf_xo_en<<MCU_CTRL_HF_CLK_CTRL_hf_xo_en_OFS)&MCU_CTRL_HF_CLK_CTRL_hf_xo_en_MASK) + ((hf_xo_or_ext_chng_time<<MCU_CTRL_HF_CLK_CTRL_hf_xo_or_ext_chng_time_OFS)&MCU_CTRL_HF_CLK_CTRL_hf_xo_or_ext_chng_time_MASK) + ((hf_osc_code_chng_time<<MCU_CTRL_HF_CLK_CTRL_hf_osc_code_chng_time_OFS)&MCU_CTRL_HF_CLK_CTRL_hf_osc_code_chng_time_MASK);
}

static inline void MCU_CTRL_HF_OSC_CLK_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t hf_osc_freq, uint32_t hf_osc_div1, uint32_t hf_osc_div2, uint32_t hf_osc_4mhz_in_stop, uint32_t hf_osc_disable_in_stop, uint32_t hf_osc_disable) {
    registers->HF_OSC_CLK_CTRL.packed_w =  + ((hf_osc_freq<<MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_freq_OFS)&MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_freq_MASK) + ((hf_osc_div1<<MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_div1_OFS)&MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_div1_MASK) + ((hf_osc_div2<<MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_div2_OFS)&MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_div2_MASK) + ((hf_osc_4mhz_in_stop<<MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_4mhz_in_stop_OFS)&MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_4mhz_in_stop_MASK) + ((hf_osc_disable_in_stop<<MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_disable_in_stop_OFS)&MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_disable_in_stop_MASK) + ((hf_osc_disable<<MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_disable_OFS)&MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_disable_MASK);
}

static inline void MCU_CTRL_LF_CLK_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t lf_xo_en, uint32_t lf_osc_en, uint32_t lf_clk_sel, uint32_t gate_clocks_in_stdby, uint32_t lfosc_cfg0) {
    registers->LF_CLK_CTRL.packed_w =  + ((lf_xo_en<<MCU_CTRL_LF_CLK_CTRL_lf_xo_en_OFS)&MCU_CTRL_LF_CLK_CTRL_lf_xo_en_MASK) + ((lf_osc_en<<MCU_CTRL_LF_CLK_CTRL_lf_osc_en_OFS)&MCU_CTRL_LF_CLK_CTRL_lf_osc_en_MASK) + ((lf_clk_sel<<MCU_CTRL_LF_CLK_CTRL_lf_clk_sel_OFS)&MCU_CTRL_LF_CLK_CTRL_lf_clk_sel_MASK) + ((gate_clocks_in_stdby<<MCU_CTRL_LF_CLK_CTRL_gate_clocks_in_stdby_OFS)&MCU_CTRL_LF_CLK_CTRL_gate_clocks_in_stdby_MASK) + ((lfosc_cfg0<<MCU_CTRL_LF_CLK_CTRL_lfosc_cfg0_OFS)&MCU_CTRL_LF_CLK_CTRL_lfosc_cfg0_MASK);
}

static inline void MCU_CTRL_XO_CFG_STS_WRITE(MCU_CTRL_REGS_s * registers, uint32_t hf_xo_cfg0, uint32_t lf_xo_cfg0, uint32_t hf_xo_sts0, uint32_t lf_xo_sts0) {
    registers->XO_CFG_STS.packed_w =  + ((hf_xo_cfg0<<MCU_CTRL_XO_CFG_STS_hf_xo_cfg0_OFS)&MCU_CTRL_XO_CFG_STS_hf_xo_cfg0_MASK) + ((lf_xo_cfg0<<MCU_CTRL_XO_CFG_STS_lf_xo_cfg0_OFS)&MCU_CTRL_XO_CFG_STS_lf_xo_cfg0_MASK) + ((hf_xo_sts0<<MCU_CTRL_XO_CFG_STS_hf_xo_sts0_OFS)&MCU_CTRL_XO_CFG_STS_hf_xo_sts0_MASK) + ((lf_xo_sts0<<MCU_CTRL_XO_CFG_STS_lf_xo_sts0_OFS)&MCU_CTRL_XO_CFG_STS_lf_xo_sts0_MASK);
}

static inline void MCU_CTRL_AHB_HCLK_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t use_lf_clk, uint32_t all_hf_clk_off, uint32_t only_hf_osc_on) {
    registers->AHB_HCLK_CTRL.packed_w =  + ((use_lf_clk<<MCU_CTRL_AHB_HCLK_CTRL_use_lf_clk_OFS)&MCU_CTRL_AHB_HCLK_CTRL_use_lf_clk_MASK) + ((all_hf_clk_off<<MCU_CTRL_AHB_HCLK_CTRL_all_hf_clk_off_OFS)&MCU_CTRL_AHB_HCLK_CTRL_all_hf_clk_off_MASK) + ((only_hf_osc_on<<MCU_CTRL_AHB_HCLK_CTRL_only_hf_osc_on_OFS)&MCU_CTRL_AHB_HCLK_CTRL_only_hf_osc_on_MASK);
}

static inline void MCU_CTRL_APB_PCLK_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t pclk_div) {
    registers->APB_PCLK_CTRL.packed_w =  + ((pclk_div<<MCU_CTRL_APB_PCLK_CTRL_pclk_div_OFS)&MCU_CTRL_APB_PCLK_CTRL_pclk_div_MASK);
}

static inline void MCU_CTRL_CLK_4MHZ_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t clk_4mhz_en) {
    registers->CLK_4MHZ_CTRL.packed_w =  + ((clk_4mhz_en<<MCU_CTRL_CLK_4MHZ_CTRL_clk_4mhz_en_OFS)&MCU_CTRL_CLK_4MHZ_CTRL_clk_4mhz_en_MASK);
}

static inline void MCU_CTRL_PWR_SM_OVRD_CTL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t clk_ahb_ovrd_val, uint32_t clk_ahb_ovrd_en, uint32_t clk_apb_ovrd_val, uint32_t clk_apb_ovrd_en, uint32_t clk_4mhz_ovrd_val, uint32_t clk_4mhz_ovrd_en, uint32_t clk_lf_ovrd_val, uint32_t clk_lf_ovrd_en, uint32_t clk_cpu_ovrd_en, uint32_t clk_cpu_ovrd_val, uint32_t use_lf_clk_sm_ovrd_val, uint32_t use_lf_clk_sm_ovrd_en) {
    registers->PWR_SM_OVRD_CTL.packed_w =  + ((clk_ahb_ovrd_val<<MCU_CTRL_PWR_SM_OVRD_CTL_clk_ahb_ovrd_val_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_clk_ahb_ovrd_val_MASK) + ((clk_ahb_ovrd_en<<MCU_CTRL_PWR_SM_OVRD_CTL_clk_ahb_ovrd_en_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_clk_ahb_ovrd_en_MASK) + ((clk_apb_ovrd_val<<MCU_CTRL_PWR_SM_OVRD_CTL_clk_apb_ovrd_val_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_clk_apb_ovrd_val_MASK) + ((clk_apb_ovrd_en<<MCU_CTRL_PWR_SM_OVRD_CTL_clk_apb_ovrd_en_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_clk_apb_ovrd_en_MASK) + ((clk_4mhz_ovrd_val<<MCU_CTRL_PWR_SM_OVRD_CTL_clk_4mhz_ovrd_val_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_clk_4mhz_ovrd_val_MASK) + ((clk_4mhz_ovrd_en<<MCU_CTRL_PWR_SM_OVRD_CTL_clk_4mhz_ovrd_en_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_clk_4mhz_ovrd_en_MASK) + ((clk_lf_ovrd_val<<MCU_CTRL_PWR_SM_OVRD_CTL_clk_lf_ovrd_val_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_clk_lf_ovrd_val_MASK) + ((clk_lf_ovrd_en<<MCU_CTRL_PWR_SM_OVRD_CTL_clk_lf_ovrd_en_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_clk_lf_ovrd_en_MASK) + ((clk_cpu_ovrd_en<<MCU_CTRL_PWR_SM_OVRD_CTL_clk_cpu_ovrd_en_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_clk_cpu_ovrd_en_MASK) + ((clk_cpu_ovrd_val<<MCU_CTRL_PWR_SM_OVRD_CTL_clk_cpu_ovrd_val_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_clk_cpu_ovrd_val_MASK) + ((use_lf_clk_sm_ovrd_val<<MCU_CTRL_PWR_SM_OVRD_CTL_use_lf_clk_sm_ovrd_val_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_use_lf_clk_sm_ovrd_val_MASK) + ((use_lf_clk_sm_ovrd_en<<MCU_CTRL_PWR_SM_OVRD_CTL_use_lf_clk_sm_ovrd_en_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_use_lf_clk_sm_ovrd_en_MASK);
}

static inline void MCU_CTRL_PLL_EN_WRITE(MCU_CTRL_REGS_s * registers, uint32_t pll_en, uint32_t pll_mdiv_clk2x_en, uint32_t pll_mdiv_clk0_en, uint32_t pll_mdiv_clk1_en, uint32_t pll_sw_cg_en, uint32_t pll_cp_icfg) {
    registers->PLL_EN.packed_w =  + ((pll_en<<MCU_CTRL_PLL_EN_pll_en_OFS)&MCU_CTRL_PLL_EN_pll_en_MASK) + ((pll_mdiv_clk2x_en<<MCU_CTRL_PLL_EN_pll_mdiv_clk2x_en_OFS)&MCU_CTRL_PLL_EN_pll_mdiv_clk2x_en_MASK) + ((pll_mdiv_clk0_en<<MCU_CTRL_PLL_EN_pll_mdiv_clk0_en_OFS)&MCU_CTRL_PLL_EN_pll_mdiv_clk0_en_MASK) + ((pll_mdiv_clk1_en<<MCU_CTRL_PLL_EN_pll_mdiv_clk1_en_OFS)&MCU_CTRL_PLL_EN_pll_mdiv_clk1_en_MASK) + ((pll_sw_cg_en<<MCU_CTRL_PLL_EN_pll_sw_cg_en_OFS)&MCU_CTRL_PLL_EN_pll_sw_cg_en_MASK) + ((pll_cp_icfg<<MCU_CTRL_PLL_EN_pll_cp_icfg_OFS)&MCU_CTRL_PLL_EN_pll_cp_icfg_MASK);
}

static inline void MCU_CTRL_PLL_CTRL1_WRITE(MCU_CTRL_REGS_s * registers, uint32_t pll_ref_sel, uint32_t pll_vco_freq, uint32_t pll_pfd_width_cfg, uint32_t pll_bw, uint32_t pll_freq_chng_time) {
    registers->PLL_CTRL1.packed_w =  + ((pll_ref_sel<<MCU_CTRL_PLL_CTRL1_pll_ref_sel_OFS)&MCU_CTRL_PLL_CTRL1_pll_ref_sel_MASK) + ((pll_vco_freq<<MCU_CTRL_PLL_CTRL1_pll_vco_freq_OFS)&MCU_CTRL_PLL_CTRL1_pll_vco_freq_MASK) + ((pll_pfd_width_cfg<<MCU_CTRL_PLL_CTRL1_pll_pfd_width_cfg_OFS)&MCU_CTRL_PLL_CTRL1_pll_pfd_width_cfg_MASK) + ((pll_bw<<MCU_CTRL_PLL_CTRL1_pll_bw_OFS)&MCU_CTRL_PLL_CTRL1_pll_bw_MASK) + ((pll_freq_chng_time<<MCU_CTRL_PLL_CTRL1_pll_freq_chng_time_OFS)&MCU_CTRL_PLL_CTRL1_pll_freq_chng_time_MASK);
}

static inline void MCU_CTRL_PLL_CTRL2_WRITE(MCU_CTRL_REGS_s * registers, uint32_t pll_mdiv_clk2x, uint32_t pll_mdiv_clk0, uint32_t pll_mdiv_clk1, uint32_t pll_pdiv, uint32_t pll_qdiv) {
    registers->PLL_CTRL2.packed_w =  + ((pll_mdiv_clk2x<<MCU_CTRL_PLL_CTRL2_pll_mdiv_clk2x_OFS)&MCU_CTRL_PLL_CTRL2_pll_mdiv_clk2x_MASK) + ((pll_mdiv_clk0<<MCU_CTRL_PLL_CTRL2_pll_mdiv_clk0_OFS)&MCU_CTRL_PLL_CTRL2_pll_mdiv_clk0_MASK) + ((pll_mdiv_clk1<<MCU_CTRL_PLL_CTRL2_pll_mdiv_clk1_OFS)&MCU_CTRL_PLL_CTRL2_pll_mdiv_clk1_MASK) + ((pll_pdiv<<MCU_CTRL_PLL_CTRL2_pll_pdiv_OFS)&MCU_CTRL_PLL_CTRL2_pll_pdiv_MASK) + ((pll_qdiv<<MCU_CTRL_PLL_CTRL2_pll_qdiv_OFS)&MCU_CTRL_PLL_CTRL2_pll_qdiv_MASK);
}

static inline void MCU_CTRL_BLOCK_CLK_REQ_WRITE(MCU_CTRL_REGS_s * registers, uint32_t block_ip_clk_32mhz_req) {
    registers->BLOCK_CLK_REQ.packed_w =  + ((block_ip_clk_32mhz_req<<MCU_CTRL_BLOCK_CLK_REQ_block_ip_clk_32mhz_req_OFS)&MCU_CTRL_BLOCK_CLK_REQ_block_ip_clk_32mhz_req_MASK);
}

static inline void MCU_CTRL_PMODE_CFG_WRITE(MCU_CTRL_REGS_s * registers, uint32_t low_power_mode) {
    registers->PMODE_CFG.packed_w =  + ((low_power_mode<<MCU_CTRL_PMODE_CFG_low_power_mode_OFS)&MCU_CTRL_PMODE_CFG_low_power_mode_MASK);
}

static inline void MCU_CTRL_AON_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t aon_strb, uint32_t aon_addr, uint32_t aon_wdata, uint32_t aon_rdata) {
    registers->AON_CTRL.packed_w =  + ((aon_strb<<MCU_CTRL_AON_CTRL_aon_strb_OFS)&MCU_CTRL_AON_CTRL_aon_strb_MASK) + ((aon_addr<<MCU_CTRL_AON_CTRL_aon_addr_OFS)&MCU_CTRL_AON_CTRL_aon_addr_MASK) + ((aon_wdata<<MCU_CTRL_AON_CTRL_aon_wdata_OFS)&MCU_CTRL_AON_CTRL_aon_wdata_MASK) + ((aon_rdata<<MCU_CTRL_AON_CTRL_aon_rdata_OFS)&MCU_CTRL_AON_CTRL_aon_rdata_MASK);
}

static inline void MCU_CTRL_GPAMPCTL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t gpamp_pwr_en, uint32_t gpamp_en, uint32_t gpamp_out_en, uint32_t gpamp_nchnl_sel, uint32_t gpamp_pchnl_en, uint32_t gpamp_rri, uint32_t gpamp_chop_clk_freq, uint32_t gpamp_chop_clk_mode, uint32_t gpamp_cfg0, uint32_t gpamp_cfg1) {
    registers->GPAMPCTL.packed_w =  + ((gpamp_pwr_en<<MCU_CTRL_GPAMPCTL_gpamp_pwr_en_OFS)&MCU_CTRL_GPAMPCTL_gpamp_pwr_en_MASK) + ((gpamp_en<<MCU_CTRL_GPAMPCTL_gpamp_en_OFS)&MCU_CTRL_GPAMPCTL_gpamp_en_MASK) + ((gpamp_out_en<<MCU_CTRL_GPAMPCTL_gpamp_out_en_OFS)&MCU_CTRL_GPAMPCTL_gpamp_out_en_MASK) + ((gpamp_nchnl_sel<<MCU_CTRL_GPAMPCTL_gpamp_nchnl_sel_OFS)&MCU_CTRL_GPAMPCTL_gpamp_nchnl_sel_MASK) + ((gpamp_pchnl_en<<MCU_CTRL_GPAMPCTL_gpamp_pchnl_en_OFS)&MCU_CTRL_GPAMPCTL_gpamp_pchnl_en_MASK) + ((gpamp_rri<<MCU_CTRL_GPAMPCTL_gpamp_rri_OFS)&MCU_CTRL_GPAMPCTL_gpamp_rri_MASK) + ((gpamp_chop_clk_freq<<MCU_CTRL_GPAMPCTL_gpamp_chop_clk_freq_OFS)&MCU_CTRL_GPAMPCTL_gpamp_chop_clk_freq_MASK) + ((gpamp_chop_clk_mode<<MCU_CTRL_GPAMPCTL_gpamp_chop_clk_mode_OFS)&MCU_CTRL_GPAMPCTL_gpamp_chop_clk_mode_MASK) + ((gpamp_cfg0<<MCU_CTRL_GPAMPCTL_gpamp_cfg0_OFS)&MCU_CTRL_GPAMPCTL_gpamp_cfg0_MASK) + ((gpamp_cfg1<<MCU_CTRL_GPAMPCTL_gpamp_cfg1_OFS)&MCU_CTRL_GPAMPCTL_gpamp_cfg1_MASK);
}

static inline void MCU_CTRL_GPAMPSTS_WRITE(MCU_CTRL_REGS_s * registers, uint32_t gpamp_sts0, uint32_t gpamp_sts1) {
    registers->GPAMPSTS.packed_w =  + ((gpamp_sts0<<MCU_CTRL_GPAMPSTS_gpamp_sts0_OFS)&MCU_CTRL_GPAMPSTS_gpamp_sts0_MASK) + ((gpamp_sts1<<MCU_CTRL_GPAMPSTS_gpamp_sts1_OFS)&MCU_CTRL_GPAMPSTS_gpamp_sts1_MASK);
}

static inline void MCU_CTRL_PROCMONCTL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t proc_mon_pwr_en, uint32_t proc_mon_en) {
    registers->PROCMONCTL.packed_w =  + ((proc_mon_pwr_en<<MCU_CTRL_PROCMONCTL_proc_mon_pwr_en_OFS)&MCU_CTRL_PROCMONCTL_proc_mon_pwr_en_MASK) + ((proc_mon_en<<MCU_CTRL_PROCMONCTL_proc_mon_en_OFS)&MCU_CTRL_PROCMONCTL_proc_mon_en_MASK);
}

static inline void MCU_CTRL_MCU_SW_RST_WRITE(MCU_CTRL_REGS_s * registers, uint32_t sw_rst_lvl0, uint32_t sw_rst_lvl1, uint32_t sw_rst_lvl2, uint32_t sw_rst_lvl3, uint32_t sw_rst_lvl4) {
    registers->MCU_SW_RST.packed_w =  + ((sw_rst_lvl0<<MCU_CTRL_MCU_SW_RST_sw_rst_lvl0_OFS)&MCU_CTRL_MCU_SW_RST_sw_rst_lvl0_MASK) + ((sw_rst_lvl1<<MCU_CTRL_MCU_SW_RST_sw_rst_lvl1_OFS)&MCU_CTRL_MCU_SW_RST_sw_rst_lvl1_MASK) + ((sw_rst_lvl2<<MCU_CTRL_MCU_SW_RST_sw_rst_lvl2_OFS)&MCU_CTRL_MCU_SW_RST_sw_rst_lvl2_MASK) + ((sw_rst_lvl3<<MCU_CTRL_MCU_SW_RST_sw_rst_lvl3_OFS)&MCU_CTRL_MCU_SW_RST_sw_rst_lvl3_MASK) + ((sw_rst_lvl4<<MCU_CTRL_MCU_SW_RST_sw_rst_lvl4_OFS)&MCU_CTRL_MCU_SW_RST_sw_rst_lvl4_MASK);
}

static inline void MCU_CTRL_BOOT_CFG_WRITE(MCU_CTRL_REGS_s * registers, uint32_t boot_sel, uint32_t fw_trigger) {
    registers->BOOT_CFG.packed_w =  + ((boot_sel<<MCU_CTRL_BOOT_CFG_boot_sel_OFS)&MCU_CTRL_BOOT_CFG_boot_sel_MASK) + ((fw_trigger<<MCU_CTRL_BOOT_CFG_fw_trigger_OFS)&MCU_CTRL_BOOT_CFG_fw_trigger_MASK);
}

static inline void MCU_CTRL_BOR_MODE_SEL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t bor_mode, uint32_t bor_key) {
    registers->BOR_MODE_SEL.packed_w =  + ((bor_mode<<MCU_CTRL_BOR_MODE_SEL_bor_mode_OFS)&MCU_CTRL_BOR_MODE_SEL_bor_mode_MASK) + ((bor_key<<MCU_CTRL_BOR_MODE_SEL_bor_key_OFS)&MCU_CTRL_BOR_MODE_SEL_bor_key_MASK);
}

static inline void MCU_CTRL_SPARE_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t cfg0, uint32_t cfg1) {
    registers->SPARE_CTRL.packed_w =  + ((cfg0<<MCU_CTRL_SPARE_CTRL_cfg0_OFS)&MCU_CTRL_SPARE_CTRL_cfg0_MASK) + ((cfg1<<MCU_CTRL_SPARE_CTRL_cfg1_OFS)&MCU_CTRL_SPARE_CTRL_cfg1_MASK);
}

static inline void MCU_CTRL_SPARE_STS_WRITE(MCU_CTRL_REGS_s * registers, uint32_t sts0, uint32_t sts1) {
    registers->SPARE_STS.packed_w =  + ((sts0<<MCU_CTRL_SPARE_STS_sts0_OFS)&MCU_CTRL_SPARE_STS_sts0_MASK) + ((sts1<<MCU_CTRL_SPARE_STS_sts1_OFS)&MCU_CTRL_SPARE_STS_sts1_MASK);
}

static inline void MCU_CTRL_ANA_SPARE_STS_WRITE(MCU_CTRL_REGS_s * registers, uint32_t spare_in) {
    registers->ANA_SPARE_STS.packed_w =  + ((spare_in<<MCU_CTRL_ANA_SPARE_STS_spare_in_OFS)&MCU_CTRL_ANA_SPARE_STS_spare_in_MASK);
}

static inline void MCU_CTRL_ANA_SPARE_OUT0_WRITE(MCU_CTRL_REGS_s * registers, uint32_t spare_out_0) {
    registers->ANA_SPARE_OUT0.packed_w =  + ((spare_out_0<<MCU_CTRL_ANA_SPARE_OUT0_spare_out_0_OFS)&MCU_CTRL_ANA_SPARE_OUT0_spare_out_0_MASK);
}

static inline void MCU_CTRL_ANA_SPARE_OUT1_WRITE(MCU_CTRL_REGS_s * registers, uint32_t spare_out_1) {
    registers->ANA_SPARE_OUT1.packed_w =  + ((spare_out_1<<MCU_CTRL_ANA_SPARE_OUT1_spare_out_1_OFS)&MCU_CTRL_ANA_SPARE_OUT1_spare_out_1_MASK);
}

