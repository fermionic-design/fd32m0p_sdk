#include "MCU_CTRL_REGS.h"

static inline void MCU_CTRL_DESC_WRITE(MCU_CTRL_REGS_s * registers, uint32_t module_type, uint32_t module_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<MCU_CTRL_DESC_MODULE_TYPE_OFS)&MCU_CTRL_DESC_MODULE_TYPE_MASK) + ((module_subtype<<MCU_CTRL_DESC_MODULE_SUBTYPE_OFS)&MCU_CTRL_DESC_MODULE_SUBTYPE_MASK) + ((major_rev<<MCU_CTRL_DESC_MAJOR_REV_OFS)&MCU_CTRL_DESC_MAJOR_REV_MASK) + ((minor_rev<<MCU_CTRL_DESC_MINOR_REV_OFS)&MCU_CTRL_DESC_MINOR_REV_MASK);
}

static inline void MCU_CTRL_RST_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<MCU_CTRL_RST_CTRL_RST_OFS)&MCU_CTRL_RST_CTRL_RST_MASK) + ((rst_sts_clr<<MCU_CTRL_RST_CTRL_RST_STS_CLR_OFS)&MCU_CTRL_RST_CTRL_RST_STS_CLR_MASK) + ((rst_key<<MCU_CTRL_RST_CTRL_RST_KEY_OFS)&MCU_CTRL_RST_CTRL_RST_KEY_MASK);
}

static inline void MCU_CTRL_RST_STS_WRITE(MCU_CTRL_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<MCU_CTRL_RST_STS_RST_STS_OFS)&MCU_CTRL_RST_STS_RST_STS_MASK);
}

static inline void MCU_CTRL_CLK_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w =  + ((clk_en<<MCU_CTRL_CLK_CTRL_CLK_EN_OFS)&MCU_CTRL_CLK_CTRL_CLK_EN_MASK);
}

static inline void MCU_CTRL_INTR_EVENT_WRITE(MCU_CTRL_REGS_s * registers, uint32_t bor, uint32_t clk_lf_mon_fault, uint32_t clk_32mhz_req) {
    registers->INTR_EVENT.packed_w =  + ((bor<<MCU_CTRL_INTR_EVENT_BOR_OFS)&MCU_CTRL_INTR_EVENT_BOR_MASK) + ((clk_lf_mon_fault<<MCU_CTRL_INTR_EVENT_CLK_LF_MON_FAULT_OFS)&MCU_CTRL_INTR_EVENT_CLK_LF_MON_FAULT_MASK) + ((clk_32mhz_req<<MCU_CTRL_INTR_EVENT_CLK_32MHZ_REQ_OFS)&MCU_CTRL_INTR_EVENT_CLK_32MHZ_REQ_MASK);
}

static inline void MCU_CTRL_INTR_EN_WRITE(MCU_CTRL_REGS_s * registers, uint32_t bor_en, uint32_t clk_lf_mon_fault_en, uint32_t clk_32mhz_req_en) {
    registers->INTR_EN.packed_w =  + ((bor_en<<MCU_CTRL_INTR_EN_BOR_EN_OFS)&MCU_CTRL_INTR_EN_BOR_EN_MASK) + ((clk_lf_mon_fault_en<<MCU_CTRL_INTR_EN_CLK_LF_MON_FAULT_EN_OFS)&MCU_CTRL_INTR_EN_CLK_LF_MON_FAULT_EN_MASK) + ((clk_32mhz_req_en<<MCU_CTRL_INTR_EN_CLK_32MHZ_REQ_EN_OFS)&MCU_CTRL_INTR_EN_CLK_32MHZ_REQ_EN_MASK);
}

static inline void MCU_CTRL_CLK_PWR_EN_WRITE(MCU_CTRL_REGS_s * registers, uint32_t hf_osc_pwr_en, uint32_t hf_xo_pwr_en, uint32_t pll_pwr_en, uint32_t lf_osc_pwr_en, uint32_t lf_xo_pwr_en) {
    registers->CLK_PWR_EN.packed_w =  + ((hf_osc_pwr_en<<MCU_CTRL_CLK_PWR_EN_HF_OSC_PWR_EN_OFS)&MCU_CTRL_CLK_PWR_EN_HF_OSC_PWR_EN_MASK) + ((hf_xo_pwr_en<<MCU_CTRL_CLK_PWR_EN_HF_XO_PWR_EN_OFS)&MCU_CTRL_CLK_PWR_EN_HF_XO_PWR_EN_MASK) + ((pll_pwr_en<<MCU_CTRL_CLK_PWR_EN_PLL_PWR_EN_OFS)&MCU_CTRL_CLK_PWR_EN_PLL_PWR_EN_MASK) + ((lf_osc_pwr_en<<MCU_CTRL_CLK_PWR_EN_LF_OSC_PWR_EN_OFS)&MCU_CTRL_CLK_PWR_EN_LF_OSC_PWR_EN_MASK) + ((lf_xo_pwr_en<<MCU_CTRL_CLK_PWR_EN_LF_XO_PWR_EN_OFS)&MCU_CTRL_CLK_PWR_EN_LF_XO_PWR_EN_MASK);
}

static inline void MCU_CTRL_ANA_CLK_EN_WRITE(MCU_CTRL_REGS_s * registers, uint32_t hf_osc_clk_en_ovrd_val, uint32_t hf_osc_clk_en_ovrd_en, uint32_t pll_clk_en_ovrd_val, uint32_t pll_clk_en_ovrd_en, uint32_t hf_xo_or_ext_clk_ovrd_val, uint32_t hf_xo_or_ext_clk_ovrd_en) {
    registers->ANA_CLK_EN.packed_w =  + ((hf_osc_clk_en_ovrd_val<<MCU_CTRL_ANA_CLK_EN_HF_OSC_CLK_EN_OVRD_VAL_OFS)&MCU_CTRL_ANA_CLK_EN_HF_OSC_CLK_EN_OVRD_VAL_MASK) + ((hf_osc_clk_en_ovrd_en<<MCU_CTRL_ANA_CLK_EN_HF_OSC_CLK_EN_OVRD_EN_OFS)&MCU_CTRL_ANA_CLK_EN_HF_OSC_CLK_EN_OVRD_EN_MASK) + ((pll_clk_en_ovrd_val<<MCU_CTRL_ANA_CLK_EN_PLL_CLK_EN_OVRD_VAL_OFS)&MCU_CTRL_ANA_CLK_EN_PLL_CLK_EN_OVRD_VAL_MASK) + ((pll_clk_en_ovrd_en<<MCU_CTRL_ANA_CLK_EN_PLL_CLK_EN_OVRD_EN_OFS)&MCU_CTRL_ANA_CLK_EN_PLL_CLK_EN_OVRD_EN_MASK) + ((hf_xo_or_ext_clk_ovrd_val<<MCU_CTRL_ANA_CLK_EN_HF_XO_OR_EXT_CLK_OVRD_VAL_OFS)&MCU_CTRL_ANA_CLK_EN_HF_XO_OR_EXT_CLK_OVRD_VAL_MASK) + ((hf_xo_or_ext_clk_ovrd_en<<MCU_CTRL_ANA_CLK_EN_HF_XO_OR_EXT_CLK_OVRD_EN_OFS)&MCU_CTRL_ANA_CLK_EN_HF_XO_OR_EXT_CLK_OVRD_EN_MASK);
}

static inline void MCU_CTRL_HF_CLK_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t use_clk_pll, uint32_t use_hf_osc, uint32_t hf_xo_or_ext_div, uint32_t use_precision_clk, uint32_t hf_xo_en, uint32_t hf_xo_or_ext_chng_time, uint32_t hf_osc_code_chng_time) {
    registers->HF_CLK_CTRL.packed_w =  + ((use_clk_pll<<MCU_CTRL_HF_CLK_CTRL_USE_CLK_PLL_OFS)&MCU_CTRL_HF_CLK_CTRL_USE_CLK_PLL_MASK) + ((use_hf_osc<<MCU_CTRL_HF_CLK_CTRL_USE_HF_OSC_OFS)&MCU_CTRL_HF_CLK_CTRL_USE_HF_OSC_MASK) + ((hf_xo_or_ext_div<<MCU_CTRL_HF_CLK_CTRL_HF_XO_OR_EXT_DIV_OFS)&MCU_CTRL_HF_CLK_CTRL_HF_XO_OR_EXT_DIV_MASK) + ((use_precision_clk<<MCU_CTRL_HF_CLK_CTRL_USE_PRECISION_CLK_OFS)&MCU_CTRL_HF_CLK_CTRL_USE_PRECISION_CLK_MASK) + ((hf_xo_en<<MCU_CTRL_HF_CLK_CTRL_HF_XO_EN_OFS)&MCU_CTRL_HF_CLK_CTRL_HF_XO_EN_MASK) + ((hf_xo_or_ext_chng_time<<MCU_CTRL_HF_CLK_CTRL_HF_XO_OR_EXT_CHNG_TIME_OFS)&MCU_CTRL_HF_CLK_CTRL_HF_XO_OR_EXT_CHNG_TIME_MASK) + ((hf_osc_code_chng_time<<MCU_CTRL_HF_CLK_CTRL_HF_OSC_CODE_CHNG_TIME_OFS)&MCU_CTRL_HF_CLK_CTRL_HF_OSC_CODE_CHNG_TIME_MASK);
}

static inline void MCU_CTRL_HF_OSC_CLK_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t hf_osc_freq, uint32_t hf_osc_div1, uint32_t hf_osc_div2, uint32_t hf_osc_4mhz_in_stop, uint32_t hf_osc_disable_in_stop, uint32_t hf_osc_disable) {
    registers->HF_OSC_CLK_CTRL.packed_w =  + ((hf_osc_freq<<MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_FREQ_OFS)&MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_FREQ_MASK) + ((hf_osc_div1<<MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_DIV1_OFS)&MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_DIV1_MASK) + ((hf_osc_div2<<MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_DIV2_OFS)&MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_DIV2_MASK) + ((hf_osc_4mhz_in_stop<<MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_4MHZ_IN_STOP_OFS)&MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_4MHZ_IN_STOP_MASK) + ((hf_osc_disable_in_stop<<MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_DISABLE_IN_STOP_OFS)&MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_DISABLE_IN_STOP_MASK) + ((hf_osc_disable<<MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_DISABLE_OFS)&MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_DISABLE_MASK);
}

static inline void MCU_CTRL_LF_CLK_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t lf_xo_en, uint32_t lf_osc_en, uint32_t lf_clk_sel, uint32_t gate_clocks_in_stdby, uint32_t lfosc_cfg0) {
    registers->LF_CLK_CTRL.packed_w =  + ((lf_xo_en<<MCU_CTRL_LF_CLK_CTRL_LF_XO_EN_OFS)&MCU_CTRL_LF_CLK_CTRL_LF_XO_EN_MASK) + ((lf_osc_en<<MCU_CTRL_LF_CLK_CTRL_LF_OSC_EN_OFS)&MCU_CTRL_LF_CLK_CTRL_LF_OSC_EN_MASK) + ((lf_clk_sel<<MCU_CTRL_LF_CLK_CTRL_LF_CLK_SEL_OFS)&MCU_CTRL_LF_CLK_CTRL_LF_CLK_SEL_MASK) + ((gate_clocks_in_stdby<<MCU_CTRL_LF_CLK_CTRL_GATE_CLOCKS_IN_STDBY_OFS)&MCU_CTRL_LF_CLK_CTRL_GATE_CLOCKS_IN_STDBY_MASK) + ((lfosc_cfg0<<MCU_CTRL_LF_CLK_CTRL_LFOSC_CFG0_OFS)&MCU_CTRL_LF_CLK_CTRL_LFOSC_CFG0_MASK);
}

static inline void MCU_CTRL_XO_CFG_STS_WRITE(MCU_CTRL_REGS_s * registers, uint32_t hf_xo_cfg0, uint32_t lf_xo_cfg0, uint32_t hf_xo_sts0, uint32_t lf_xo_sts0) {
    registers->XO_CFG_STS.packed_w =  + ((hf_xo_cfg0<<MCU_CTRL_XO_CFG_STS_HF_XO_CFG0_OFS)&MCU_CTRL_XO_CFG_STS_HF_XO_CFG0_MASK) + ((lf_xo_cfg0<<MCU_CTRL_XO_CFG_STS_LF_XO_CFG0_OFS)&MCU_CTRL_XO_CFG_STS_LF_XO_CFG0_MASK) + ((hf_xo_sts0<<MCU_CTRL_XO_CFG_STS_HF_XO_STS0_OFS)&MCU_CTRL_XO_CFG_STS_HF_XO_STS0_MASK) + ((lf_xo_sts0<<MCU_CTRL_XO_CFG_STS_LF_XO_STS0_OFS)&MCU_CTRL_XO_CFG_STS_LF_XO_STS0_MASK);
}

static inline void MCU_CTRL_AHB_HCLK_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t use_lf_clk, uint32_t all_hf_clk_off, uint32_t only_hf_osc_on) {
    registers->AHB_HCLK_CTRL.packed_w =  + ((use_lf_clk<<MCU_CTRL_AHB_HCLK_CTRL_USE_LF_CLK_OFS)&MCU_CTRL_AHB_HCLK_CTRL_USE_LF_CLK_MASK) + ((all_hf_clk_off<<MCU_CTRL_AHB_HCLK_CTRL_ALL_HF_CLK_OFF_OFS)&MCU_CTRL_AHB_HCLK_CTRL_ALL_HF_CLK_OFF_MASK) + ((only_hf_osc_on<<MCU_CTRL_AHB_HCLK_CTRL_ONLY_HF_OSC_ON_OFS)&MCU_CTRL_AHB_HCLK_CTRL_ONLY_HF_OSC_ON_MASK);
}

static inline void MCU_CTRL_APB_PCLK_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t pclk_div) {
    registers->APB_PCLK_CTRL.packed_w =  + ((pclk_div<<MCU_CTRL_APB_PCLK_CTRL_PCLK_DIV_OFS)&MCU_CTRL_APB_PCLK_CTRL_PCLK_DIV_MASK);
}

static inline void MCU_CTRL_CLK_4MHZ_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t clk_4mhz_en) {
    registers->CLK_4MHZ_CTRL.packed_w =  + ((clk_4mhz_en<<MCU_CTRL_CLK_4MHZ_CTRL_CLK_4MHZ_EN_OFS)&MCU_CTRL_CLK_4MHZ_CTRL_CLK_4MHZ_EN_MASK);
}

static inline void MCU_CTRL_PWR_SM_OVRD_CTL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t clk_ahb_ovrd_val, uint32_t clk_ahb_ovrd_en, uint32_t clk_apb_ovrd_val, uint32_t clk_apb_ovrd_en, uint32_t clk_4mhz_ovrd_val, uint32_t clk_4mhz_ovrd_en, uint32_t clk_lf_ovrd_val, uint32_t clk_lf_ovrd_en, uint32_t clk_cpu_ovrd_en, uint32_t clk_cpu_ovrd_val, uint32_t use_lf_clk_sm_ovrd_val, uint32_t use_lf_clk_sm_ovrd_en) {
    registers->PWR_SM_OVRD_CTL.packed_w =  + ((clk_ahb_ovrd_val<<MCU_CTRL_PWR_SM_OVRD_CTL_CLK_AHB_OVRD_VAL_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_CLK_AHB_OVRD_VAL_MASK) + ((clk_ahb_ovrd_en<<MCU_CTRL_PWR_SM_OVRD_CTL_CLK_AHB_OVRD_EN_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_CLK_AHB_OVRD_EN_MASK) + ((clk_apb_ovrd_val<<MCU_CTRL_PWR_SM_OVRD_CTL_CLK_APB_OVRD_VAL_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_CLK_APB_OVRD_VAL_MASK) + ((clk_apb_ovrd_en<<MCU_CTRL_PWR_SM_OVRD_CTL_CLK_APB_OVRD_EN_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_CLK_APB_OVRD_EN_MASK) + ((clk_4mhz_ovrd_val<<MCU_CTRL_PWR_SM_OVRD_CTL_CLK_4MHZ_OVRD_VAL_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_CLK_4MHZ_OVRD_VAL_MASK) + ((clk_4mhz_ovrd_en<<MCU_CTRL_PWR_SM_OVRD_CTL_CLK_4MHZ_OVRD_EN_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_CLK_4MHZ_OVRD_EN_MASK) + ((clk_lf_ovrd_val<<MCU_CTRL_PWR_SM_OVRD_CTL_CLK_LF_OVRD_VAL_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_CLK_LF_OVRD_VAL_MASK) + ((clk_lf_ovrd_en<<MCU_CTRL_PWR_SM_OVRD_CTL_CLK_LF_OVRD_EN_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_CLK_LF_OVRD_EN_MASK) + ((clk_cpu_ovrd_en<<MCU_CTRL_PWR_SM_OVRD_CTL_CLK_CPU_OVRD_EN_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_CLK_CPU_OVRD_EN_MASK) + ((clk_cpu_ovrd_val<<MCU_CTRL_PWR_SM_OVRD_CTL_CLK_CPU_OVRD_VAL_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_CLK_CPU_OVRD_VAL_MASK) + ((use_lf_clk_sm_ovrd_val<<MCU_CTRL_PWR_SM_OVRD_CTL_USE_LF_CLK_SM_OVRD_VAL_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_USE_LF_CLK_SM_OVRD_VAL_MASK) + ((use_lf_clk_sm_ovrd_en<<MCU_CTRL_PWR_SM_OVRD_CTL_USE_LF_CLK_SM_OVRD_EN_OFS)&MCU_CTRL_PWR_SM_OVRD_CTL_USE_LF_CLK_SM_OVRD_EN_MASK);
}

static inline void MCU_CTRL_PLL_EN_WRITE(MCU_CTRL_REGS_s * registers, uint32_t pll_en, uint32_t pll_mdiv_clk2x_en, uint32_t pll_mdiv_clk0_en, uint32_t pll_mdiv_clk1_en, uint32_t pll_sw_cg_en, uint32_t pll_cp_icfg) {
    registers->PLL_EN.packed_w =  + ((pll_en<<MCU_CTRL_PLL_EN_PLL_EN_OFS)&MCU_CTRL_PLL_EN_PLL_EN_MASK) + ((pll_mdiv_clk2x_en<<MCU_CTRL_PLL_EN_PLL_MDIV_CLK2X_EN_OFS)&MCU_CTRL_PLL_EN_PLL_MDIV_CLK2X_EN_MASK) + ((pll_mdiv_clk0_en<<MCU_CTRL_PLL_EN_PLL_MDIV_CLK0_EN_OFS)&MCU_CTRL_PLL_EN_PLL_MDIV_CLK0_EN_MASK) + ((pll_mdiv_clk1_en<<MCU_CTRL_PLL_EN_PLL_MDIV_CLK1_EN_OFS)&MCU_CTRL_PLL_EN_PLL_MDIV_CLK1_EN_MASK) + ((pll_sw_cg_en<<MCU_CTRL_PLL_EN_PLL_SW_CG_EN_OFS)&MCU_CTRL_PLL_EN_PLL_SW_CG_EN_MASK) + ((pll_cp_icfg<<MCU_CTRL_PLL_EN_PLL_CP_ICFG_OFS)&MCU_CTRL_PLL_EN_PLL_CP_ICFG_MASK);
}

static inline void MCU_CTRL_PLL_CTRL1_WRITE(MCU_CTRL_REGS_s * registers, uint32_t pll_ref_sel, uint32_t pll_vco_freq, uint32_t pll_pfd_width_cfg, uint32_t pll_bw, uint32_t pll_freq_chng_time) {
    registers->PLL_CTRL1.packed_w =  + ((pll_ref_sel<<MCU_CTRL_PLL_CTRL1_PLL_REF_SEL_OFS)&MCU_CTRL_PLL_CTRL1_PLL_REF_SEL_MASK) + ((pll_vco_freq<<MCU_CTRL_PLL_CTRL1_PLL_VCO_FREQ_OFS)&MCU_CTRL_PLL_CTRL1_PLL_VCO_FREQ_MASK) + ((pll_pfd_width_cfg<<MCU_CTRL_PLL_CTRL1_PLL_PFD_WIDTH_CFG_OFS)&MCU_CTRL_PLL_CTRL1_PLL_PFD_WIDTH_CFG_MASK) + ((pll_bw<<MCU_CTRL_PLL_CTRL1_PLL_BW_OFS)&MCU_CTRL_PLL_CTRL1_PLL_BW_MASK) + ((pll_freq_chng_time<<MCU_CTRL_PLL_CTRL1_PLL_FREQ_CHNG_TIME_OFS)&MCU_CTRL_PLL_CTRL1_PLL_FREQ_CHNG_TIME_MASK);
}

static inline void MCU_CTRL_PLL_CTRL2_WRITE(MCU_CTRL_REGS_s * registers, uint32_t pll_mdiv_clk2x, uint32_t pll_mdiv_clk0, uint32_t pll_mdiv_clk1, uint32_t pll_pdiv, uint32_t pll_qdiv) {
    registers->PLL_CTRL2.packed_w =  + ((pll_mdiv_clk2x<<MCU_CTRL_PLL_CTRL2_PLL_MDIV_CLK2X_OFS)&MCU_CTRL_PLL_CTRL2_PLL_MDIV_CLK2X_MASK) + ((pll_mdiv_clk0<<MCU_CTRL_PLL_CTRL2_PLL_MDIV_CLK0_OFS)&MCU_CTRL_PLL_CTRL2_PLL_MDIV_CLK0_MASK) + ((pll_mdiv_clk1<<MCU_CTRL_PLL_CTRL2_PLL_MDIV_CLK1_OFS)&MCU_CTRL_PLL_CTRL2_PLL_MDIV_CLK1_MASK) + ((pll_pdiv<<MCU_CTRL_PLL_CTRL2_PLL_PDIV_OFS)&MCU_CTRL_PLL_CTRL2_PLL_PDIV_MASK) + ((pll_qdiv<<MCU_CTRL_PLL_CTRL2_PLL_QDIV_OFS)&MCU_CTRL_PLL_CTRL2_PLL_QDIV_MASK);
}

static inline void MCU_CTRL_BLOCK_CLK_REQ_WRITE(MCU_CTRL_REGS_s * registers, uint32_t block_ip_clk_32mhz_req) {
    registers->BLOCK_CLK_REQ.packed_w =  + ((block_ip_clk_32mhz_req<<MCU_CTRL_BLOCK_CLK_REQ_BLOCK_IP_CLK_32MHZ_REQ_OFS)&MCU_CTRL_BLOCK_CLK_REQ_BLOCK_IP_CLK_32MHZ_REQ_MASK);
}

static inline void MCU_CTRL_PMODE_CFG_WRITE(MCU_CTRL_REGS_s * registers, uint32_t low_power_mode) {
    registers->PMODE_CFG.packed_w =  + ((low_power_mode<<MCU_CTRL_PMODE_CFG_LOW_POWER_MODE_OFS)&MCU_CTRL_PMODE_CFG_LOW_POWER_MODE_MASK);
}

static inline void MCU_CTRL_AON_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t aon_strb, uint32_t aon_addr, uint32_t aon_wdata, uint32_t aon_rdata) {
    registers->AON_CTRL.packed_w =  + ((aon_strb<<MCU_CTRL_AON_CTRL_AON_STRB_OFS)&MCU_CTRL_AON_CTRL_AON_STRB_MASK) + ((aon_addr<<MCU_CTRL_AON_CTRL_AON_ADDR_OFS)&MCU_CTRL_AON_CTRL_AON_ADDR_MASK) + ((aon_wdata<<MCU_CTRL_AON_CTRL_AON_WDATA_OFS)&MCU_CTRL_AON_CTRL_AON_WDATA_MASK) + ((aon_rdata<<MCU_CTRL_AON_CTRL_AON_RDATA_OFS)&MCU_CTRL_AON_CTRL_AON_RDATA_MASK);
}

static inline void MCU_CTRL_GPAMPCTL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t gpamp_pwr_en, uint32_t gpamp_en, uint32_t gpamp_out_en, uint32_t gpamp_nchnl_sel, uint32_t gpamp_pchnl_en, uint32_t gpamp_rri, uint32_t gpamp_chop_clk_freq, uint32_t gpamp_chop_clk_mode, uint32_t gpamp_cfg0, uint32_t gpamp_cfg1) {
    registers->GPAMPCTL.packed_w =  + ((gpamp_pwr_en<<MCU_CTRL_GPAMPCTL_GPAMP_PWR_EN_OFS)&MCU_CTRL_GPAMPCTL_GPAMP_PWR_EN_MASK) + ((gpamp_en<<MCU_CTRL_GPAMPCTL_GPAMP_EN_OFS)&MCU_CTRL_GPAMPCTL_GPAMP_EN_MASK) + ((gpamp_out_en<<MCU_CTRL_GPAMPCTL_GPAMP_OUT_EN_OFS)&MCU_CTRL_GPAMPCTL_GPAMP_OUT_EN_MASK) + ((gpamp_nchnl_sel<<MCU_CTRL_GPAMPCTL_GPAMP_NCHNL_SEL_OFS)&MCU_CTRL_GPAMPCTL_GPAMP_NCHNL_SEL_MASK) + ((gpamp_pchnl_en<<MCU_CTRL_GPAMPCTL_GPAMP_PCHNL_EN_OFS)&MCU_CTRL_GPAMPCTL_GPAMP_PCHNL_EN_MASK) + ((gpamp_rri<<MCU_CTRL_GPAMPCTL_GPAMP_RRI_OFS)&MCU_CTRL_GPAMPCTL_GPAMP_RRI_MASK) + ((gpamp_chop_clk_freq<<MCU_CTRL_GPAMPCTL_GPAMP_CHOP_CLK_FREQ_OFS)&MCU_CTRL_GPAMPCTL_GPAMP_CHOP_CLK_FREQ_MASK) + ((gpamp_chop_clk_mode<<MCU_CTRL_GPAMPCTL_GPAMP_CHOP_CLK_MODE_OFS)&MCU_CTRL_GPAMPCTL_GPAMP_CHOP_CLK_MODE_MASK) + ((gpamp_cfg0<<MCU_CTRL_GPAMPCTL_GPAMP_CFG0_OFS)&MCU_CTRL_GPAMPCTL_GPAMP_CFG0_MASK) + ((gpamp_cfg1<<MCU_CTRL_GPAMPCTL_GPAMP_CFG1_OFS)&MCU_CTRL_GPAMPCTL_GPAMP_CFG1_MASK);
}

static inline void MCU_CTRL_GPAMPSTS_WRITE(MCU_CTRL_REGS_s * registers, uint32_t gpamp_sts0, uint32_t gpamp_sts1) {
    registers->GPAMPSTS.packed_w =  + ((gpamp_sts0<<MCU_CTRL_GPAMPSTS_GPAMP_STS0_OFS)&MCU_CTRL_GPAMPSTS_GPAMP_STS0_MASK) + ((gpamp_sts1<<MCU_CTRL_GPAMPSTS_GPAMP_STS1_OFS)&MCU_CTRL_GPAMPSTS_GPAMP_STS1_MASK);
}

static inline void MCU_CTRL_PROCMONCTL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t proc_mon_pwr_en, uint32_t proc_mon_en) {
    registers->PROCMONCTL.packed_w =  + ((proc_mon_pwr_en<<MCU_CTRL_PROCMONCTL_PROC_MON_PWR_EN_OFS)&MCU_CTRL_PROCMONCTL_PROC_MON_PWR_EN_MASK) + ((proc_mon_en<<MCU_CTRL_PROCMONCTL_PROC_MON_EN_OFS)&MCU_CTRL_PROCMONCTL_PROC_MON_EN_MASK);
}

static inline void MCU_CTRL_MCU_SW_RST_WRITE(MCU_CTRL_REGS_s * registers, uint32_t sw_rst_lvl0, uint32_t sw_rst_lvl1, uint32_t sw_rst_lvl2, uint32_t sw_rst_lvl3, uint32_t sw_rst_lvl4) {
    registers->MCU_SW_RST.packed_w =  + ((sw_rst_lvl0<<MCU_CTRL_MCU_SW_RST_SW_RST_LVL0_OFS)&MCU_CTRL_MCU_SW_RST_SW_RST_LVL0_MASK) + ((sw_rst_lvl1<<MCU_CTRL_MCU_SW_RST_SW_RST_LVL1_OFS)&MCU_CTRL_MCU_SW_RST_SW_RST_LVL1_MASK) + ((sw_rst_lvl2<<MCU_CTRL_MCU_SW_RST_SW_RST_LVL2_OFS)&MCU_CTRL_MCU_SW_RST_SW_RST_LVL2_MASK) + ((sw_rst_lvl3<<MCU_CTRL_MCU_SW_RST_SW_RST_LVL3_OFS)&MCU_CTRL_MCU_SW_RST_SW_RST_LVL3_MASK) + ((sw_rst_lvl4<<MCU_CTRL_MCU_SW_RST_SW_RST_LVL4_OFS)&MCU_CTRL_MCU_SW_RST_SW_RST_LVL4_MASK);
}

static inline void MCU_CTRL_BOOT_CFG_WRITE(MCU_CTRL_REGS_s * registers, uint32_t boot_sel, uint32_t fw_trigger) {
    registers->BOOT_CFG.packed_w =  + ((boot_sel<<MCU_CTRL_BOOT_CFG_BOOT_SEL_OFS)&MCU_CTRL_BOOT_CFG_BOOT_SEL_MASK) + ((fw_trigger<<MCU_CTRL_BOOT_CFG_FW_TRIGGER_OFS)&MCU_CTRL_BOOT_CFG_FW_TRIGGER_MASK);
}

static inline void MCU_CTRL_BOR_MODE_SEL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t bor_mode, uint32_t bor_key) {
    registers->BOR_MODE_SEL.packed_w =  + ((bor_mode<<MCU_CTRL_BOR_MODE_SEL_BOR_MODE_OFS)&MCU_CTRL_BOR_MODE_SEL_BOR_MODE_MASK) + ((bor_key<<MCU_CTRL_BOR_MODE_SEL_BOR_KEY_OFS)&MCU_CTRL_BOR_MODE_SEL_BOR_KEY_MASK);
}

static inline void MCU_CTRL_SPARE_CTRL_WRITE(MCU_CTRL_REGS_s * registers, uint32_t cfg0, uint32_t cfg1) {
    registers->SPARE_CTRL.packed_w =  + ((cfg0<<MCU_CTRL_SPARE_CTRL_CFG0_OFS)&MCU_CTRL_SPARE_CTRL_CFG0_MASK) + ((cfg1<<MCU_CTRL_SPARE_CTRL_CFG1_OFS)&MCU_CTRL_SPARE_CTRL_CFG1_MASK);
}

static inline void MCU_CTRL_SPARE_STS_WRITE(MCU_CTRL_REGS_s * registers, uint32_t sts0, uint32_t sts1) {
    registers->SPARE_STS.packed_w =  + ((sts0<<MCU_CTRL_SPARE_STS_STS0_OFS)&MCU_CTRL_SPARE_STS_STS0_MASK) + ((sts1<<MCU_CTRL_SPARE_STS_STS1_OFS)&MCU_CTRL_SPARE_STS_STS1_MASK);
}

static inline void MCU_CTRL_ANA_SPARE_STS_WRITE(MCU_CTRL_REGS_s * registers, uint32_t spare_in) {
    registers->ANA_SPARE_STS.packed_w =  + ((spare_in<<MCU_CTRL_ANA_SPARE_STS_SPARE_IN_OFS)&MCU_CTRL_ANA_SPARE_STS_SPARE_IN_MASK);
}

static inline void MCU_CTRL_ANA_SPARE_OUT0_WRITE(MCU_CTRL_REGS_s * registers, uint32_t spare_out_0) {
    registers->ANA_SPARE_OUT0.packed_w =  + ((spare_out_0<<MCU_CTRL_ANA_SPARE_OUT0_SPARE_OUT_0_OFS)&MCU_CTRL_ANA_SPARE_OUT0_SPARE_OUT_0_MASK);
}

static inline void MCU_CTRL_ANA_SPARE_OUT1_WRITE(MCU_CTRL_REGS_s * registers, uint32_t spare_out_1) {
    registers->ANA_SPARE_OUT1.packed_w =  + ((spare_out_1<<MCU_CTRL_ANA_SPARE_OUT1_SPARE_OUT_1_OFS)&MCU_CTRL_ANA_SPARE_OUT1_SPARE_OUT_1_MASK);
}

