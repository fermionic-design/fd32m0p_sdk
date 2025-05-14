#include "uart.h"

//TODO:add comments before each function

void uart_cfg(UART_REGS_s *regs, const uart_cfg_s *cfg)
{
    regs->CLK_SEL.packed_w = (cfg->clk_sel | (UART_CLK_SEL_CLK_SEL_MASK<<16));
    regs->CLK_DIV.clk_div = (cfg->clk_div | (UART_CLK_DIV_CLK_DIV_MASK<<16));
    regs->CTRL.os = cfg->oversampling;
    regs->CFG.wrd_len = cfg->word_length;
    regs->CFG.par_en = cfg->parity_en;
    regs->CFG.evn_par = cfg->even_parity;
    regs->CFG.stck_par = cfg->stick_parity;
    regs->CFG.stop_bit = cfg->num_stop_bits;
    regs->CTRL.uart_msb = cfg->msb_first;
    regs->CTRL.loopback_en = cfg->loopback_en;
    regs->CTRL.tx_en = cfg->tx_en;
    regs->CTRL.rx_en = cfg->rx_en;
    regs->CTRL.tx_out_en = cfg->tx_out_en;
    regs->CTRL.tx_out_ctrl = cfg->tx_out_ctrl;
    regs->CTRL.cts_en = cfg->cts_en;
    regs->CTRL.rts_en = cfg->rts_en;
    regs->CTRL.rts_val = cfg->rts_val;
    regs->GFCTL.gf_width = cfg->glitch_filter_width;
    regs->FIFOLS.rx_to = cfg->rx_timeout_val;
    uart_baud_cfg(regs, cfg->baud_rate, (cfg->clk_freq)*1000, cfg->oversampling);
}

//baud rate
void uart_baud_cfg(UART_REGS_s *regs, uint32_t baud_rate, uint32_t clk_freq, uint32_t oversampling)
{
    int     den_pow;
    float   num_value;
    float   num_init_value;
    float   num_init_value_int_part;
    float   current_value;
    float   current_value_abs;
    float   current_num_cal;
    float   num_den_ref_val;
    float   current_error = 0.003;

    num_den_ref_val = (float)(baud_rate * oversampling)/clk_freq;
    for(int deno=12; deno>=0;deno=deno-1) 
    {
        den_pow = (1<<deno);
        num_init_value = ((den_pow * num_den_ref_val));
        num_init_value_int_part = (int)num_init_value;
        if(num_init_value > num_init_value_int_part)
        {
            num_value = num_init_value_int_part + 1;
        }
        else
        {
            num_value = num_init_value_int_part;
        }
        current_num_cal = (num_value/den_pow);
        current_value = (current_num_cal - num_den_ref_val);
        if(current_value < 0)
        {
            current_value_abs = -current_value;
        }
        else
        {
            current_value_abs = current_value;
        }
        if(current_value_abs <= current_error && num_value <= 255) 
        {
            regs->BRDNUM.num_m = (int)num_value;
            regs->BRDDEN.den_n = deno;
            break;
        }          
    }
}

//clk enable
void uart_clk_en(UART_REGS_s *regs)
{
    regs->CLK_CTRL.clk_en = 1;
}

//clk disable
void uart_clk_dis(UART_REGS_s *regs)
{
    regs->CLK_CTRL.clk_en = 0;
}

//uart enable
void uart_en(UART_REGS_s *regs)
{
    regs->CTRL.uart_en = 1;
}

//uart_disable
void uart_dis(UART_REGS_s *regs)
{
    regs->CTRL.uart_en = 0;
}

//fifo cfg
void uart_fifo_cfg(UART_REGS_s *regs, const uart_fifo_cfg_s *fifo_cfg)
{
    regs->FIFOLS.tx_fifo_ls = fifo_cfg->tx_fifo_lvl_sel;
    regs->FIFOLS.rx_fifo_ls = fifo_cfg->rx_fifo_lvl_sel;
    regs->CTRL.fifo_en = fifo_cfg->fifo_en;
}

//txfifo fill non blocking
uint32_t uart_txfifo_fill_nonblocking(UART_REGS_s *regs, const uint8_t *buffer, uint32_t num_bytes)
{
    uint32_t i;
    uint32_t num_bytes_written;
    for(i = 0; i<num_bytes; i++)
    {
        if((regs->FIFOSTS.tx_fifo_full_sts == 1))
        {
            break;
        }
        else
        {
            uart_putc(regs, buffer[i]);
            num_bytes_written = i++;
        }
    }
    return num_bytes_written;
}

//txfifo fill non blocking static
bool uart_txfifo_fill_static_nonblocking(UART_REGS_s *regs, const uint8_t *buffer, uint32_t num_bytes, uint32_t rst_int_ctr)
{
    static uint32_t i;
    uint32_t txn_done;
    if(rst_int_ctr == 1)
    {
        i = 0;
    }
    for(;i<num_bytes; i++)
    {
        if((regs->FIFOSTS.tx_fifo_full_sts == 1))
        {
            break;
        }
        else
        {
            uart_putc(regs, buffer[i]);
        }
    }
    if(i == num_bytes)
    {
        txn_done = 1;
    }
    return txn_done;
}

//txfifo fill blocking
void uart_txfifo_fill_blocking(UART_REGS_s *regs, const uint8_t *buffer, uint32_t num_bytes)
{
    uint32_t i;
    for(i = 0; i<num_bytes; i++)
    {
        while((regs->FIFOSTS.tx_fifo_full_sts) == 1);
        uart_putc(regs, buffer[i]);
    }
}

//put string(blocking)
void uart_puts(UART_REGS_s *regs, const unsigned char * data_char_arr)
{
    unsigned char curr_char;
    while((regs->FIFOSTS.tx_fifo_full_sts) == 1);
    do
    {
        curr_char = *data_char_arr;
        if(curr_char != (char) 0x0) 
        {
            uart_putc(regs, curr_char);
        }
        *data_char_arr++;
    } while(curr_char != 0);
    return;
}

//put character
inline uint8_t uart_putc(UART_REGS_s *regs, const unsigned char data_char)
{
    regs->TXDATA->uart_data = data_char;
    return(data_char);
}

//rxfifo drain non blocking
uint32_t uart_rxfifo_drain_nonblocking(UART_REGS_s *regs, uint8_t *buffer, uint32_t num_bytes)
{
    uint32_t i;
    uint32_t num_bytes_read;
    for(i = 0; i<num_bytes; i++)
    {
        if(regs->FIFOSTS.rx_fifo_empty_sts == 1)
        {
            break;
        }
        else
        {
            buffer[i] = uart_getc(regs);
            num_bytes_read = i++;
        }
    }
    return num_bytes_read;
}

//rx fifo drain non blocking static
bool uart_rxfifo_drain_static_nonblocking(UART_REGS_s *regs, uint8_t *buffer, uint32_t num_bytes, uint32_t rst_int_ctr)
{
    static uint32_t i;
    uint32_t txn_done;
    if(rst_int_ctr == 1)
        i = 0;
    for(;i<num_bytes;i++)
    {
        if((regs->FIFOSTS.rx_fifo_empty_sts == 1))
        {
            break;
        }
        else
        {
            buffer[i] = uart_getc(regs);
        }
    }
    if(i == num_bytes)
    {
        txn_done = 1;
    }
    return txn_done;
}

//rx fifo drain(blocking)
void uart_rxfifo_drain_blocking(UART_REGS_s *regs, uint8_t *buffer, uint32_t num_bytes)
{
    uint32_t i;
    for(i = 0; i<num_bytes; i++)
    {
       while((regs->FIFOSTS.rx_fifo_empty_sts)==1);
       buffer[i] = uart_getc(regs);
    }
       
}
//get character
inline uint8_t uart_getc(UART_REGS_s *regs)
{
    return(regs->RXDATA->uart_result);
}

//read uart cfg
void uart_rd_cfg(UART_REGS_s *regs, uart_cfg_s *rd_cfg)
{
    rd_cfg->clk_sel = regs->CLK_SEL.clk_sel;
    rd_cfg->clk_div = regs->CLK_DIV.clk_div;
    rd_cfg->oversampling = regs->CTRL.os;
    rd_cfg->word_length = regs->CFG.wrd_len;
    rd_cfg->parity_en = regs->CFG.par_en;
    rd_cfg->even_parity = regs->CFG.evn_par;
    rd_cfg->stick_parity = regs->CFG.stck_par;
    rd_cfg->num_stop_bits = regs->CFG.stop_bit;
    rd_cfg->msb_first = regs->CTRL.uart_msb;
    rd_cfg->loopback_en = regs->CTRL.loopback_en;
    rd_cfg->tx_en = regs->CTRL.tx_en;
    rd_cfg->rx_en = regs->CTRL.rx_en;
    rd_cfg->tx_out_en = regs->CTRL.tx_out_en;
    rd_cfg->tx_out_ctrl = regs->CTRL.tx_out_ctrl;
    rd_cfg->cts_en = regs->CTRL.cts_en;
    rd_cfg->rts_en = regs->CTRL.rts_en;
    rd_cfg->rts_val = regs->CTRL.rts_val;
    rd_cfg->glitch_filter_width = regs->GFCTL.gf_width;
    rd_cfg->rx_timeout_val = regs->FIFOLS.rx_to;
}
    

