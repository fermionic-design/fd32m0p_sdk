#include "comp.h"
#include "uart_stdout_mcu.h"

/*
 *  ======== comp_cfg ========
 */
void comp_cfg(COMP_REGS_s *regs, comp_cfg_s comp_cfg){
    regs->CTRL0.enable         = comp_cfg.enable;
    regs->CTRL0.hyst           = comp_cfg.hyst;
    regs->CTRL0.speed          = 0;
    regs->CTRL0.intr_edge_sel  = comp_cfg.intr_edge_sel;
    regs->INPUT_CTRL0.in_p_en  = comp_cfg.in_p_en;
    regs->INPUT_CTRL0.in_p_sel = comp_cfg.in_p_sel;
    regs->INPUT_CTRL0.in_m_en  = comp_cfg.in_m_en;
    regs->INPUT_CTRL0.in_m_sel = comp_cfg.in_m_sel;
    regs->INPUT_CTRL1.in_short = comp_cfg.in_short;
    regs->INPUT_CTRL1.in_swap  = comp_cfg.in_swap;
}

/*
 *  ======== comp_win_comp_cfg ========
 */
void comp_win_comp_cfg(COMP_REGS_s *regs,comp_win_comp_cfg_s win_comp_cfg){
    regs->OUT_CTRL1.win_comp_en = win_comp_cfg.enable;
    regs->OUT_CTRL1.win_comp_sel = win_comp_cfg.win_comp_sel;
}

/*
 *  ======== comp_out_cfg ========
 */
void comp_out_cfg(COMP_REGS_s *regs, comp_out_cfg_s comp_out_cfg){
    regs->OUT_CTRL0.out_pol = comp_out_cfg.out_pol;
    regs->OUT_CTRL0.samp_en = comp_out_cfg.samp_en;
}

/*
 *  ======== get_comp_out_cfg ========
 */
comp_cfg_s get_comp_cfg(COMP_REGS_s *regs){
    comp_cfg_s comp_cfg;
    comp_cfg.enable = regs->CTRL0.enable;
    comp_cfg.hyst   = regs->CTRL0.hyst;
    comp_cfg.intr_edge_sel = regs->CTRL0.intr_edge_sel;
    comp_cfg.in_p_en = regs->INPUT_CTRL0.in_p_en;
    comp_cfg.in_p_sel = regs->INPUT_CTRL0.in_p_sel;
    comp_cfg.in_m_en = regs->INPUT_CTRL0.in_m_en;
    comp_cfg.in_m_sel = regs->INPUT_CTRL0.in_m_sel;
    comp_cfg.in_short = regs->INPUT_CTRL1.in_short;
    comp_cfg.in_swap = regs->INPUT_CTRL1.in_swap;
    return comp_cfg;
}

/*
 *  ======== get_comp_win_comp_cfg ========
 */
comp_win_comp_cfg_s get_comp_win_comp_cfg(COMP_REGS_s *regs){
    comp_win_comp_cfg_s win_comp_cfg;
    win_comp_cfg.enable       = regs->OUT_CTRL1.win_comp_en;
    win_comp_cfg.win_comp_sel = regs->OUT_CTRL1.win_comp_sel;
    return win_comp_cfg;
}

/*
 *  ======== get_comp_out_cfg ========
 */
comp_out_cfg_s get_comp_out_cfg(COMP_REGS_s *regs){
    comp_out_cfg_s comp_out_cfg;
    comp_out_cfg.out_pol = regs->OUT_CTRL0.out_pol;
    comp_out_cfg.samp_en = regs->OUT_CTRL0.samp_en;
    return comp_out_cfg;
}