#include "uart.h"
#include <math.h>

//TODO:add comments before each function

void uart_cfg(UART_REGS_s *registers, const uart_cfg_s *cfg)
{
    registers->CLK_SEL.packed_w = (cfg->clk_sel | (UART_CLK_SEL_CLK_SEL_MASK<<16));
    registers->CLK_DIV.clk_div = (cfg->clk_div | (UART_CLK_DIV_CLK_DIV_MASK<<16));
    registers->CTRL.os = cfg->oversampling;
    registers->CFG.wrd_len = cfg->word_length;
    registers->CFG.par_en = cfg->parity_en;
    registers->CFG.evn_par = cfg->even_parity;
    registers->CFG.stck_par = cfg->stick_parity;
    registers->CFG.stop_bit = cfg->num_stop_bits;
    registers->CTRL.uart_msb = cfg->msb_first;
    registers->CTRL.loopback_en = cfg->loopback_en;
    registers->CTRL.tx_en = cfg->tx_en;
    registers->CTRL.rx_en = cfg->rx_en;
    registers->CTRL.tx_out_en = cfg->tx_out_en;
    registers->CTRL.tx_out_ctrl = cfg->tx_out_ctrl;
    registers->CTRL.cts_en = cfg->cts_en;
    registers->CTRL.rts_en = cfg->rts_en;
    registers->CTRL.rts_val = cfg->rts_val;
    registers->GFCTL.gf_width = cfg->glitch_filter_width;
    registers->FIFOLS.rx_to = cfg->rx_timeout_val;
    uart_baud_cfg(registers, cfg->baud_rate, cfg->clk_freq, cfg->oversampling);
}

//baud rate
void uart_baud_cfg(UART_REGS_s *registers, uint32_t baud_rate, uint32_t clk_freq, uint32_t oversampling)
{
    int den_pow;
    double num_value;
    double num_init_value;
    double current_value;
    double current_num_cal;
    double num_den_ref_val;
    float current_error = 0.003;

    num_den_ref_val = (float)(baud_rate * oversampling)/clk_freq;
    for(int deno=12; deno>=0;deno=deno-1) 
    {
        den_pow = pow(2, deno);
        num_init_value = ((den_pow * num_den_ref_val));
        num_value = ceil(num_init_value);
        current_num_cal = (num_value/den_pow);
        current_value = fabs(current_num_cal - num_den_ref_val);
        if(current_value <= current_error && num_value <= 255) 
        {
            registers->BRDNUM.num_m = (int)num_value;
            registers->BRDDEN.den_n = deno;
            break;
        }          
    }
}

//clk enable
void uart_clk_en(UART_REGS_s *registers)
{
    registers->CLK_CTRL.clk_en = 1;
}

//clk disable
void uart_clk_dis(UART_REGS_s *registers)
{
    registers->CLK_CTRL.clk_en = 0;
}

//uart enable
void uart_en(UART_REGS_s *registers)
{
    registers->CTRL.uart_en = 1;
}

//uart_disable
void uart_dis(UART_REGS_s *registers)
{
    registers->CTRL.uart_en = 0;
}

//fifo cfg
void uart_fifo_cfg(UART_REGS_s *registers, const uart_fifo_cfg_s *fifo_cfg)
{
    registers->FIFOLS.tx_fifo_ls = fifo_cfg->tx_fifo_lvl_sel;
    registers->FIFOLS.rx_fifo_ls = fifo_cfg->rx_fifo_lvl_sel;
    registers->CTRL.fifo_en = fifo_cfg->fifo_en;
}

//txfifo fill non blocking
uint32_t uart_txfifo_fill_nonblocking(UART_REGS_s *registers, const uint8_t *buffer, uint32_t num_bytes)
{
    uint32_t i;
    uint32_t num_bytes_written;
    for(i = 0; i<num_bytes; i++)
    {
        if((registers->FIFOSTS.tx_fifo_full_sts == 1))
        {
            break;
        }
        else
        {
            uart_putc(registers, buffer[i]);
            num_bytes_written = i++;
        }
    }
    return num_bytes_written;
}

//txfifo fill non blocking static
bool uart_txfifo_fill_static_nonblocking(UART_REGS_s *registers, const uint8_t *buffer, uint32_t num_bytes, uint32_t rst_int_ctr)
{
    static uint32_t i;
    uint32_t txn_done;
    if(rst_int_ctr == 1)
    {
        i = 0;
    }
    for(;i<num_bytes; i++)
    {
        if((registers->FIFOSTS.tx_fifo_full_sts == 1))
        {
            break;
        }
        else
        {
            uart_putc(registers, buffer[i]);
        }
    }
    if(i == num_bytes)
    {
        txn_done = 1;
    }
    return txn_done;
}

//txfifo fill blocking
void uart_txfifo_fill_blocking(UART_REGS_s *registers, const uint8_t *buffer, uint32_t num_bytes)
{
    uint32_t i;
    for(i = 0; i<num_bytes; i++)
    {
        while((registers->FIFOSTS.tx_fifo_full_sts) == 1);
        uart_putc(registers, buffer[i]);
    }
}

//put string(blocking)
void uart_puts(UART_REGS_s *registers, const unsigned char * data_char_arr)
{
    unsigned char curr_char;
    while((registers->FIFOSTS.tx_fifo_full_sts) == 1);
    do
    {
        curr_char = *data_char_arr;
        if(curr_char != (char) 0x0) 
        {
            uart_putc(registers, curr_char);
        }
        *data_char_arr++;
    } while(curr_char != 0);
    return;
}

//put character
inline unsigned char uart_putc(UART_REGS_s *registers, const unsigned char data_char)
{
    registers->TXDATA->uart_data = data_char;
    return(data_char);
}

//rxfifo drain non blocking
uint32_t uart_rxfifo_drain_nonblocking(UART_REGS_s *registers, uint8_t *buffer, uint32_t num_bytes)
{
    uint32_t i;
    uint32_t num_bytes_read;
    for(i = 0; i<num_bytes; i++)
    {
        if(registers->FIFOSTS.rx_fifo_empty_sts == 1)
        {
            break;
        }
        else
        {
            buffer[i] = uart_getc(registers);
            num_bytes_read = i++;
        }
    }
    return num_bytes_read;
}

//rx fifo drain non blocking static
bool uart_rxfifo_drain_static_nonblocking(UART_REGS_s *registers, uint8_t *buffer, uint32_t num_bytes, uint32_t rst_int_ctr)
{
    static uint32_t i;
    uint32_t txn_done;
    if(rst_int_ctr == 1)
        i = 0;
    for(;i<num_bytes;i++)
    {
        if((registers->FIFOSTS.rx_fifo_empty_sts == 1))
        {
            break;
        }
        else
        {
            buffer[i] = uart_getc(registers);
        }
    }
    if(i == num_bytes)
    {
        txn_done = 1;
    }
    return txn_done;
}

//rx fifo drain(blocking)
void uart_rxfifo_drain_blocking(UART_REGS_s *registers, uint8_t *buffer, uint32_t num_bytes)
{
    uint32_t i;
    for(i = 0; i<num_bytes; i++)
    {
       while((registers->FIFOSTS.rx_fifo_empty_sts)==1);
       buffer[i] = uart_getc(registers);
    }
       
}
//get character
inline unsigned char uart_getc(UART_REGS_s *registers)
{
    return(registers->RXDATA->uart_result);
}

//read uart cfg
void uart_rd_cfg(UART_REGS_s *registers, uart_cfg_s *rd_cfg)
{
    rd_cfg->clk_sel = registers->CLK_SEL.clk_sel;
    rd_cfg->clk_div = registers->CLK_DIV.clk_div;
    rd_cfg->oversampling = registers->CTRL.os;
    rd_cfg->word_length = registers->CFG.wrd_len;
    rd_cfg->parity_en = registers->CFG.par_en;
    rd_cfg->even_parity = registers->CFG.evn_par;
    rd_cfg->stick_parity = registers->CFG.stck_par;
    rd_cfg->num_stop_bits = registers->CFG.stop_bit;
    rd_cfg->msb_first = registers->CTRL.uart_msb;
    rd_cfg->loopback_en = registers->CTRL.loopback_en;
    rd_cfg->tx_en = registers->CTRL.tx_en;
    rd_cfg->rx_en = registers->CTRL.rx_en;
    rd_cfg->tx_out_en = registers->CTRL.tx_out_en;
    rd_cfg->tx_out_ctrl = registers->CTRL.tx_out_ctrl;
    rd_cfg->cts_en = registers->CTRL.cts_en;
    rd_cfg->rts_en = registers->CTRL.rts_en;
    rd_cfg->rts_val = registers->CTRL.rts_val;
    rd_cfg->glitch_filter_width = registers->GFCTL.gf_width;
    rd_cfg->rx_timeout_val = registers->FIFOLS.rx_to;
}
    

