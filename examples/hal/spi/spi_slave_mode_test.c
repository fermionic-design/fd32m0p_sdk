/*
 * SPI Slave Configuration: MCU as SPI Slave, connected to a SPIDriver (SPI master)
 *
 * Connections:
 * -------------------------------------------------------------
 * MCU Pin   | SPI Function | Direction      | Connects To (SPIDriver Pin)
 * ----------|--------------|----------------|---------------------------------------
 * PA2       | SPI0_CS0     | Input          | SPIDriver CS  (Yellow)
 * PA6       | SPI0_SCK     | Input          | SPIDriver SCK (Orange)
 * PA5       | SPI0_MOSI    | Input          | SPIDriver MOSI (Blue)
 * PA4       | SPI0_MISO    | Output         | SPIDriver MISO (Green)
 * GND       | -            | -              | SPIDriver GND (Black)
 * VCC       | -            | -              | Optional: SPIDriver VCC (Red) for powering
 *
 * Notes:
 * - SPIDriver acts as the SPI master, sending data over MOSI and receiving on MISO.
 * - The MCU (slave) responds only when CS (PA2) is asserted low.
 * - Ensure MCU is ready and SPI slave is properly initialized before SPIDriver sends data.
 */

#include "FD32M0P.h"
#include"uart_stdout_mcu.h"
#include "spi.h"
#include "gpio.h"

int main() {
    UartStdOutInit();
    UartPuts("SPI Slave Mode 0 Test\n");

    // IO Mux Setting for SPI as a master 
    IOMUX_PA_REG_s iomux_cfg_struct;
    
    iomux_cfg_struct.output_en        = 0;
    iomux_cfg_struct.input_en         = 1;
    iomux_cfg_struct.drive_strength   = 0;
    iomux_cfg_struct.slew_rate        = 0;
    iomux_cfg_struct.pull_up          = 0;
    iomux_cfg_struct.pull_down        = 0;
    iomux_cfg_struct.hysteresis       = 0;
    iomux_cfg_struct.sel              = IOMUX_PIN_SEL_PA2_SPI0_CS0;
    iomux_cfg_struct.input_val        = 0;
    
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 2);
    
    iomux_cfg_struct.output_en        = 0;
    iomux_cfg_struct.input_en         = 1;
    iomux_cfg_struct.drive_strength   = 0;
    iomux_cfg_struct.slew_rate        = 0;
    iomux_cfg_struct.pull_up          = 0;
    iomux_cfg_struct.pull_down        = 0;
    iomux_cfg_struct.hysteresis       = 0;
    iomux_cfg_struct.sel              = IOMUX_PIN_SEL_PA6_SPI0_SCK;
    iomux_cfg_struct.input_val        = 0;
    
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 6);
    
    iomux_cfg_struct.output_en        = 0;
    iomux_cfg_struct.input_en         = 1;
    iomux_cfg_struct.drive_strength   = 0;
    iomux_cfg_struct.slew_rate        = 0;
    iomux_cfg_struct.pull_up          = 0;
    iomux_cfg_struct.pull_down        = 0;
    iomux_cfg_struct.hysteresis       = 0;
    iomux_cfg_struct.sel              = IOMUX_PIN_SEL_PA5_SPI0_MOSI;
    iomux_cfg_struct.input_val        = 0;
    
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 5);
    
    iomux_cfg_struct.output_en        = 1;
    iomux_cfg_struct.input_en         = 0;
    iomux_cfg_struct.drive_strength   = 0;
    iomux_cfg_struct.slew_rate        = 0;
    iomux_cfg_struct.pull_up          = 0;
    iomux_cfg_struct.pull_down        = 0;
    iomux_cfg_struct.hysteresis       = 0;
    iomux_cfg_struct.sel              = IOMUX_PIN_SEL_PA4_SPI0_MISO;
    iomux_cfg_struct.input_val        = 0;
    
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 4);

     // SPI Power Enable
    SPI_PWR_EN_WRITE(SPI_REGS, 1, SPI_PWR_EN_PWR_EN_KEY);

    // Clock Settings
    spi_set_clk_cfg(SPI_REGS, SPI_CLKSEL_CLK_SEL_CLK_SPI,8);  

    // SPI Configuration
    spi_cfg_t default_spi_cfg = SPI_CFG_DEFAULT;
    spi_cfg_t *spi_cfg = &default_spi_cfg;
    
    spi_cfg->frame_format  = SPI_MODE_CTRL_FRAME_FORMAT_MOTOROLA;
    spi_cfg->data_size_sel = 8;                                        
    spi_cfg->msb_first     = 1;                                        
    spi_cfg->clk_polarity  = SPI_MOT_MOD_CNTRL_CLOCK_POLARITY_LOW;
    spi_cfg->clk_phase     = SPI_MOT_MOD_CNTRL_CLOCK_PHASE_LEADING;    
    spi_cfg->parity_en     = 0;    
    spi_cfg->even_partiy   = 0;                                        
    spi_cfg->mode          = SPI_MODE_CTRL_PERIPHERAL_MODE_PERIPHERAL;

    spi_init(SPI_REGS, spi_cfg);
    
    // SPI RX Control Setting
    spi_set_rx_ctrl(SPI_REGS, 0xFF, 0, 0);
    
    // Interrupt setting
    SPI_INTR_EVENT_CLEAR(SPI_REGS, SPI_INTR_EVENT_IDLE_IDX);
    NVIC_ClearPendingIRQ(SPI_IRQn);
    NVIC_EnableIRQ(SPI_IRQn);

    // Setting Up the RX fifo lvl
    SPI_INT_FIFO_LVL_SEL_WRITE(SPI_REGS, 1, 0);

    SPI_INTR_EVENT_EN(SPI_REGS, SPI_INTR_EVENT_RX_FIFO_TRG_LVL_IDX);
    SPI_INTR_EVENT_CLEAR(SPI_REGS, SPI_INTR_EVENT_RX_FIFO_TRG_LVL_IDX);
    
    spi_start_transaction(SPI_REGS);

    while(1);

    return 0;
}

void SPI_IRQ_Handler(void) {
    uint32_t intr_sts;
    uint8_t rx_rdata;
    bool rx_rdata_status;
    intr_sts = SPI_REGS->INTR_STS.packed_w;
    if(intr_sts==(SPI_INTR_EVENT_RX_FIFO_TRG_LVL_IDX+1)) {
        UartPuts("Inteerrupt Recieved for RX Fifo lvl Triggered");
        rx_rdata_status = spi_receive_byte_non_blocking(SPI_REGS, &rx_rdata);
        print_int_var("RX Data :", rx_rdata, 1);
        SPI_INTR_EVENT_CLEAR(SPI_REGS, SPI_INTR_EVENT_RX_FIFO_TRG_LVL_IDX);
        UartEndSimulation();
    }
}
