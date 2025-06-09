#include "comp.h"
#include "uart_stdout_mcu.h"

/*
 *  ======== comp_ctrl0_cfg ========
 */
void comp_ctrl0_cfg(COMP_REGS_s *regs, comp_ctrl0_cfg_s ctrl0_cfg){
    regs->CTRL0.enable         = ctrl0_cfg.enable;
    regs->CTRL0.hyst           = ctrl0_cfg.hyst;
    regs->CTRL0.speed          = ctrl0_cfg.speed;
    regs->CTRL0.intr_edge_sel  = ctrl0_cfg.intr_edge_sel;
}

/*
 *  ======== comp_input_ctrl0_cfg ========
 */
void comp_input_ctrl0_cfg(COMP_REGS_s *regs, comp_input_ctrl0_cfg_s input_ctrl0_cfg){
    regs->INPUT_CTRL0.in_p_en  = input_ctrl0_cfg.in_p_en;
    regs->INPUT_CTRL0.in_p_sel = input_ctrl0_cfg.in_p_sel;
    regs->INPUT_CTRL0.in_m_en  = input_ctrl0_cfg.in_m_en;
    regs->INPUT_CTRL0.in_m_sel = input_ctrl0_cfg.in_m_sel;
}

/*
 *  ======== comp_input_ctrl1_cfg ========
 */
void comp_input_ctrl1_cfg(COMP_REGS_s *regs, comp_input_ctrl1_cfg_s input_ctrl1_cfg){
    regs->INPUT_CTRL1.in_short = input_ctrl1_cfg.in_short;
    regs->INPUT_CTRL1.in_swap  = input_ctrl1_cfg.in_swap;
}

/*
 *  ======== get_comp_ctrl0_cfg ========
 */
comp_ctrl0_cfg_s get_comp_ctrl0_cfg(COMP_REGS_s *regs){
    comp_ctrl0_cfg_s          ctrl0_cfg;
    ctrl0_cfg.enable        = regs->CTRL0.enable;       
    ctrl0_cfg.hyst          = regs->CTRL0.hyst;         
    ctrl0_cfg.speed         = regs->CTRL0.speed;        
    ctrl0_cfg.intr_edge_sel = regs->CTRL0.intr_edge_sel;
    return ctrl0_cfg;
}

/*
 *  ======== get_comp_input_ctrl0_cfg ========
 */
comp_input_ctrl0_cfg_s get_comp_input_ctrl0_cfg(COMP_REGS_s *regs){
    comp_input_ctrl0_cfg_s input_ctrl0_cfg;
    input_ctrl0_cfg.in_p_en  = regs->INPUT_CTRL0.in_p_en;  
    input_ctrl0_cfg.in_p_sel = regs->INPUT_CTRL0.in_p_sel; 
    input_ctrl0_cfg.in_m_en  = regs->INPUT_CTRL0.in_m_en;  
    input_ctrl0_cfg.in_m_sel = regs->INPUT_CTRL0.in_m_sel;
    return input_ctrl0_cfg;
}

/*
 *  ======== get_comp_input_ctrl1_cfg ========
 */
comp_input_ctrl1_cfg_s get_comp_input_ctrl1_cfg(COMP_REGS_s *regs){
    comp_input_ctrl1_cfg_s input_ctrl1_cfg;
    input_ctrl1_cfg.in_short = regs->INPUT_CTRL1.in_short;
    input_ctrl1_cfg.in_swap  = regs->INPUT_CTRL1.in_swap;
    return input_ctrl1_cfg;
}

