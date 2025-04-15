class DESC:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+0
		self.module_type = 0
		self.module_subtype = 0
		self.major_rev = 0
		self.minor_rev = 0
	def write(self):
		val = 0
		val |= self.module_type << 0
		val |= self.module_subtype << 8
		val |= self.major_rev << 16
		val |= self.minor_rev << 20
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.module_type = (val & 0xFF) >> 0
		self.module_subtype = (val & 0xFF00) >> 8
		self.major_rev = (val & 0xF0000) >> 16
		self.minor_rev = (val & 0xF00000) >> 20
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PWR_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+4
		self.pwr_en = 0
		self.pwr_en_key = 0
	def write(self):
		val = 0
		val |= self.pwr_en << 0
		val |= self.pwr_en_key << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.pwr_en = (val & 0x01) >> 0
		self.pwr_en_key = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class RST_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+8
		self.rst = 0
		self.rst_sts_clr = 0
		self.rst_key = 0
	def write(self):
		val = 0
		val |= self.rst << 0
		val |= self.rst_sts_clr << 1
		val |= self.rst_key << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rst = (val & 0x01) >> 0
		self.rst_sts_clr = (val & 0x02) >> 1
		self.rst_key = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class RST_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+12
		self.rst_sts = 0
	def write(self):
		val = 0
		val |= self.rst_sts << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rst_sts = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CLK_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+16
		self.clk_scaler = 0
	def write(self):
		val = 0
		val |= self.clk_scaler << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.clk_scaler = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CLK_DIV:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+20
		self.div_ratio = 0
	def write(self):
		val = 0
		val |= self.div_ratio << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.div_ratio = (val & 0x1F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CLKSEL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+24
		self.clk_sel = 0
	def write(self):
		val = 0
		val |= self.clk_sel << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.clk_sel = (val & 0x03) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MOT_MOD_CNTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+28
		self.clock_polarity = 0
		self.clock_phase = 0
	def write(self):
		val = 0
		val |= self.clock_polarity << 0
		val |= self.clock_phase << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.clock_polarity = (val & 0x01) >> 0
		self.clock_phase = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PARITY_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+32
		self.parity_en = 0
		self.even_parity = 0
	def write(self):
		val = 0
		val |= self.parity_en << 0
		val |= self.even_parity << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.parity_en = (val & 0x01) >> 0
		self.even_parity = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CMD_DATA_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+36
		self.cmd_data_mode_en = 0
		self.cmd_data_mode_val = 0
	def write(self):
		val = 0
		val |= self.cmd_data_mode_en << 0
		val |= self.cmd_data_mode_val << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.cmd_data_mode_en = (val & 0x01) >> 0
		self.cmd_data_mode_val = (val & 0xF00) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class LOOPBACK_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+40
		self.loopback_mode = 0
	def write(self):
		val = 0
		val |= self.loopback_mode << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.loopback_mode = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DATAFRAME_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+44
		self.data_size_sel = 0
		self.msb_first = 0
		self.data_out_disable = 0
	def write(self):
		val = 0
		val |= self.data_size_sel << 0
		val |= self.msb_first << 8
		val |= self.data_out_disable << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.data_size_sel = (val & 0x1F) >> 0
		self.msb_first = (val & 0x100) >> 8
		self.data_out_disable = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MODE_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+48
		self.spi_en = 0
		self.peripheral_mode = 0
		self.frame_format = 0
	def write(self):
		val = 0
		val |= self.spi_en << 0
		val |= self.peripheral_mode << 8
		val |= self.frame_format << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.spi_en = (val & 0x01) >> 0
		self.peripheral_mode = (val & 0x100) >> 8
		self.frame_format = (val & 0x70000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CS_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+52
		self.cs_sel = 0
		self.soft_cs_en = 0
		self.soft_cs = 0
	def write(self):
		val = 0
		val |= self.cs_sel << 0
		val |= self.soft_cs_en << 8
		val |= self.soft_cs << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.cs_sel = (val & 0x1F) >> 0
		self.soft_cs_en = (val & 0x100) >> 8
		self.soft_cs = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CS_SETUP_HOLD_CNT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+56
		self.cs_setup_cnt = 0
		self.cs_hold_cnt = 0
	def write(self):
		val = 0
		val |= self.cs_setup_cnt << 0
		val |= self.cs_hold_cnt << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.cs_setup_cnt = (val & 0xFF) >> 0
		self.cs_hold_cnt = (val & 0xFF00) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SCLK_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+60
		self.sclk_removal = 0
	def write(self):
		val = 0
		val |= self.sclk_removal << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.sclk_removal = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class QSPI_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+64
		self.qspi_first = 0
		self.nrml_spi_frames_in_qspi = 0
		self.frames_in_qspi = 0
		self.frames_in_wmode_in_qspi = 0
	def write(self):
		val = 0
		val |= self.qspi_first << 0
		val |= self.nrml_spi_frames_in_qspi << 8
		val |= self.frames_in_qspi << 16
		val |= self.frames_in_wmode_in_qspi << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.qspi_first = (val & 0x01) >> 0
		self.nrml_spi_frames_in_qspi = (val & 0xFF00) >> 8
		self.frames_in_qspi = (val & 0xFF0000) >> 16
		self.frames_in_wmode_in_qspi = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DSPI_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+68
		self.dspi_first = 0
		self.nrml_spi_frames_in_dspi = 0
		self.frames_in_dspi = 0
		self.frames_in_wmode_in_dspi = 0
	def write(self):
		val = 0
		val |= self.dspi_first << 0
		val |= self.nrml_spi_frames_in_dspi << 8
		val |= self.frames_in_dspi << 16
		val |= self.frames_in_wmode_in_dspi << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dspi_first = (val & 0x01) >> 0
		self.nrml_spi_frames_in_dspi = (val & 0xFF00) >> 8
		self.frames_in_dspi = (val & 0xFF0000) >> 16
		self.frames_in_wmode_in_dspi = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class TX_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+72
		self.repeat_tx_data = 0
	def write(self):
		val = 0
		val |= self.repeat_tx_data << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.repeat_tx_data = (val & 0xFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class RX_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+76
		self.receive_timeout = 0
		self.ignore_rx_cnt = 0
		self.dly_sample_on_rx = 0
	def write(self):
		val = 0
		val |= self.receive_timeout << 0
		val |= self.ignore_rx_cnt << 8
		val |= self.dly_sample_on_rx << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.receive_timeout = (val & 0xFF) >> 0
		self.ignore_rx_cnt = (val & 0xFF00) >> 8
		self.dly_sample_on_rx = (val & 0xF0000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INT_FIFO_LVL_SEL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+80
		self.rx_fifo_lvl_int = 0
		self.tx_fifo_lvl_int = 0
	def write(self):
		val = 0
		val |= self.rx_fifo_lvl_int << 0
		val |= self.tx_fifo_lvl_int << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rx_fifo_lvl_int = (val & 0x0F) >> 0
		self.tx_fifo_lvl_int = (val & 0xF00) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+84
		self.spi_busy_sts = 0
		self.rx_fifo_full_sts = 0
		self.rx_fifo_empty_sts = 0
		self.tx_fifo_full_sts = 0
		self.tx_fifo_empty_sts = 0
		self.tx_fifo = 0
		self.rx_fifo = 0
	def write(self):
		val = 0
		val |= self.spi_busy_sts << 0
		val |= self.rx_fifo_full_sts << 1
		val |= self.rx_fifo_empty_sts << 2
		val |= self.tx_fifo_full_sts << 3
		val |= self.tx_fifo_empty_sts << 4
		val |= self.tx_fifo << 0
		val |= self.rx_fifo << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.spi_busy_sts = (val & 0x01) >> 0
		self.rx_fifo_full_sts = (val & 0x02) >> 1
		self.rx_fifo_empty_sts = (val & 0x04) >> 2
		self.tx_fifo_full_sts = (val & 0x08) >> 3
		self.tx_fifo_empty_sts = (val & 0x10) >> 4
		self.tx_fifo = (val & 0xFFFFFFFF) >> 0
		self.rx_fifo = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SPI_DBG_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+120
		self.stop_on_halt = 0
		self.soft_stop = 0
	def write(self):
		val = 0
		val |= self.stop_on_halt << 0
		val |= self.soft_stop << 1
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.stop_on_halt = (val & 0x01) >> 0
		self.soft_stop = (val & 0x02) >> 1
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+124
		self.intr_first = 0
	def write(self):
		val = 0
		val |= self.intr_first << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.intr_first = (val & 0x1F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EVENT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+128
		self.rx_fifo_overflow = 0
		self.parity_error = 0
		self.rx_timeout = 0
		self.rx_fifo_trg_lvl = 0
		self.tx_fifo_trg_lvl = 0
		self.tx_fifo_empty = 0
		self.idle = 0
		self.rx_dma_done = 0
		self.tx_dma_done = 0
		self.tx_fifo_underflow = 0
		self.rx_fifo_full = 0
	def write(self):
		val = 0
		val |= self.rx_fifo_overflow << 0
		val |= self.parity_error << 1
		val |= self.rx_timeout << 2
		val |= self.rx_fifo_trg_lvl << 3
		val |= self.tx_fifo_trg_lvl << 4
		val |= self.tx_fifo_empty << 5
		val |= self.idle << 6
		val |= self.rx_dma_done << 7
		val |= self.tx_dma_done << 8
		val |= self.tx_fifo_underflow << 9
		val |= self.rx_fifo_full << 10
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rx_fifo_overflow = (val & 0x01) >> 0
		self.parity_error = (val & 0x02) >> 1
		self.rx_timeout = (val & 0x04) >> 2
		self.rx_fifo_trg_lvl = (val & 0x08) >> 3
		self.tx_fifo_trg_lvl = (val & 0x10) >> 4
		self.tx_fifo_empty = (val & 0x20) >> 5
		self.idle = (val & 0x40) >> 6
		self.rx_dma_done = (val & 0x80) >> 7
		self.tx_dma_done = (val & 0x100) >> 8
		self.tx_fifo_underflow = (val & 0x200) >> 9
		self.rx_fifo_full = (val & 0x400) >> 10
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+132
		self.rx_fifo_overflow_en = 0
		self.parity_error_en = 0
		self.rx_timeout_en = 0
		self.rx_fifo_trg_lvl_en = 0
		self.tx_fifo_trg_lvl_en = 0
		self.tx_fifo_empty_en = 0
		self.idle_en = 0
		self.rx_dma_done_en = 0
		self.tx_dma_done_en = 0
		self.tx_fifo_underflow_en = 0
		self.rx_fifo_full_en = 0
	def write(self):
		val = 0
		val |= self.rx_fifo_overflow_en << 0
		val |= self.parity_error_en << 1
		val |= self.rx_timeout_en << 2
		val |= self.rx_fifo_trg_lvl_en << 3
		val |= self.tx_fifo_trg_lvl_en << 4
		val |= self.tx_fifo_empty_en << 5
		val |= self.idle_en << 6
		val |= self.rx_dma_done_en << 7
		val |= self.tx_dma_done_en << 8
		val |= self.tx_fifo_underflow_en << 9
		val |= self.rx_fifo_full_en << 10
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rx_fifo_overflow_en = (val & 0x01) >> 0
		self.parity_error_en = (val & 0x02) >> 1
		self.rx_timeout_en = (val & 0x04) >> 2
		self.rx_fifo_trg_lvl_en = (val & 0x08) >> 3
		self.tx_fifo_trg_lvl_en = (val & 0x10) >> 4
		self.tx_fifo_empty_en = (val & 0x20) >> 5
		self.idle_en = (val & 0x40) >> 6
		self.rx_dma_done_en = (val & 0x80) >> 7
		self.tx_dma_done_en = (val & 0x100) >> 8
		self.tx_fifo_underflow_en = (val & 0x200) >> 9
		self.rx_fifo_full_en = (val & 0x400) >> 10
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_TX_DMA_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+136
		self.rx_fifo_overflow_tx_dma_en = 0
		self.parity_error_tx_dma_en = 0
		self.rx_timeout_tx_dma_en = 0
		self.rx_fifo_trg_lvl_tx_dma_en = 0
		self.tx_fifo_trg_lvl_tx_dma_en = 0
		self.tx_fifo_empty_tx_dma_en = 0
		self.idle_tx_dma_en = 0
		self.rx_dma_done_tx_dma_en = 0
		self.tx_dma_done_tx_dma_en = 0
		self.tx_fifo_underflow_tx_dma_en = 0
		self.rx_fifo_full_tx_dma_en = 0
	def write(self):
		val = 0
		val |= self.rx_fifo_overflow_tx_dma_en << 0
		val |= self.parity_error_tx_dma_en << 1
		val |= self.rx_timeout_tx_dma_en << 2
		val |= self.rx_fifo_trg_lvl_tx_dma_en << 3
		val |= self.tx_fifo_trg_lvl_tx_dma_en << 4
		val |= self.tx_fifo_empty_tx_dma_en << 5
		val |= self.idle_tx_dma_en << 6
		val |= self.rx_dma_done_tx_dma_en << 7
		val |= self.tx_dma_done_tx_dma_en << 8
		val |= self.tx_fifo_underflow_tx_dma_en << 9
		val |= self.rx_fifo_full_tx_dma_en << 10
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rx_fifo_overflow_tx_dma_en = (val & 0x01) >> 0
		self.parity_error_tx_dma_en = (val & 0x02) >> 1
		self.rx_timeout_tx_dma_en = (val & 0x04) >> 2
		self.rx_fifo_trg_lvl_tx_dma_en = (val & 0x08) >> 3
		self.tx_fifo_trg_lvl_tx_dma_en = (val & 0x10) >> 4
		self.tx_fifo_empty_tx_dma_en = (val & 0x20) >> 5
		self.idle_tx_dma_en = (val & 0x40) >> 6
		self.rx_dma_done_tx_dma_en = (val & 0x80) >> 7
		self.tx_dma_done_tx_dma_en = (val & 0x100) >> 8
		self.tx_fifo_underflow_tx_dma_en = (val & 0x200) >> 9
		self.rx_fifo_full_tx_dma_en = (val & 0x400) >> 10
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_RX_DMA_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+140
		self.rx_fifo_overflow_rx_dma_en = 0
		self.parity_error_rx_dma_en = 0
		self.rx_timeout_rx_dma_en = 0
		self.rx_fifo_trg_lvl_rx_dma_en = 0
		self.tx_fifo_trg_lvl_rx_dma_en = 0
		self.tx_fifo_empty_rx_dma_en = 0
		self.idle_rx_dma_en = 0
		self.rx_dma_done_rx_dma_en = 0
		self.tx_dma_done_rx_dma_en = 0
		self.tx_fifo_underflow_rx_dma_en = 0
		self.rx_fifo_full_rx_dma_en = 0
	def write(self):
		val = 0
		val |= self.rx_fifo_overflow_rx_dma_en << 0
		val |= self.parity_error_rx_dma_en << 1
		val |= self.rx_timeout_rx_dma_en << 2
		val |= self.rx_fifo_trg_lvl_rx_dma_en << 3
		val |= self.tx_fifo_trg_lvl_rx_dma_en << 4
		val |= self.tx_fifo_empty_rx_dma_en << 5
		val |= self.idle_rx_dma_en << 6
		val |= self.rx_dma_done_rx_dma_en << 7
		val |= self.tx_dma_done_rx_dma_en << 8
		val |= self.tx_fifo_underflow_rx_dma_en << 9
		val |= self.rx_fifo_full_rx_dma_en << 10
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rx_fifo_overflow_rx_dma_en = (val & 0x01) >> 0
		self.parity_error_rx_dma_en = (val & 0x02) >> 1
		self.rx_timeout_rx_dma_en = (val & 0x04) >> 2
		self.rx_fifo_trg_lvl_rx_dma_en = (val & 0x08) >> 3
		self.tx_fifo_trg_lvl_rx_dma_en = (val & 0x10) >> 4
		self.tx_fifo_empty_rx_dma_en = (val & 0x20) >> 5
		self.idle_rx_dma_en = (val & 0x40) >> 6
		self.rx_dma_done_rx_dma_en = (val & 0x80) >> 7
		self.tx_dma_done_rx_dma_en = (val & 0x100) >> 8
		self.tx_fifo_underflow_rx_dma_en = (val & 0x200) >> 9
		self.rx_fifo_full_rx_dma_en = (val & 0x400) >> 10
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_NMI:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+144
		self.rx_fifo_overflow_nmi_en = 0
		self.parity_error_nmi_en = 0
		self.rx_timeout_nmi_en = 0
		self.rx_fifo_trg_lvl_nmi_en = 0
		self.tx_fifo_trg_lvl_nmi_en = 0
		self.tx_fifo_empty_nmi_en = 0
		self.idle_nmi_en = 0
		self.rx_dma_done_nmi_en = 0
		self.tx_dma_done_nmi_en = 0
		self.tx_fifo_underflow_nmi_en = 0
		self.rx_fifo_full_nmi_en = 0
	def write(self):
		val = 0
		val |= self.rx_fifo_overflow_nmi_en << 0
		val |= self.parity_error_nmi_en << 1
		val |= self.rx_timeout_nmi_en << 2
		val |= self.rx_fifo_trg_lvl_nmi_en << 3
		val |= self.tx_fifo_trg_lvl_nmi_en << 4
		val |= self.tx_fifo_empty_nmi_en << 5
		val |= self.idle_nmi_en << 6
		val |= self.rx_dma_done_nmi_en << 7
		val |= self.tx_dma_done_nmi_en << 8
		val |= self.tx_fifo_underflow_nmi_en << 9
		val |= self.rx_fifo_full_nmi_en << 10
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rx_fifo_overflow_nmi_en = (val & 0x01) >> 0
		self.parity_error_nmi_en = (val & 0x02) >> 1
		self.rx_timeout_nmi_en = (val & 0x04) >> 2
		self.rx_fifo_trg_lvl_nmi_en = (val & 0x08) >> 3
		self.tx_fifo_trg_lvl_nmi_en = (val & 0x10) >> 4
		self.tx_fifo_empty_nmi_en = (val & 0x20) >> 5
		self.idle_nmi_en = (val & 0x40) >> 6
		self.rx_dma_done_nmi_en = (val & 0x80) >> 7
		self.tx_dma_done_nmi_en = (val & 0x100) >> 8
		self.tx_fifo_underflow_nmi_en = (val & 0x200) >> 9
		self.rx_fifo_full_nmi_en = (val & 0x400) >> 10
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_SW_SET:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+148
		self.rx_fifo_overflow_sw_set = 0
		self.parity_error_sw_set = 0
		self.rx_timeout_sw_set = 0
		self.rx_fifo_trg_lvl_sw_set = 0
		self.tx_fifo_trg_lvl_sw_set = 0
		self.tx_fifo_empty_sw_set = 0
		self.idle_sw_set = 0
		self.rx_dma_done_sw_set = 0
		self.tx_dma_done_sw_set = 0
		self.tx_fifo_underflow_sw_set = 0
		self.rx_fifo_full_sw_set = 0
	def write(self):
		val = 0
		val |= self.rx_fifo_overflow_sw_set << 0
		val |= self.parity_error_sw_set << 1
		val |= self.rx_timeout_sw_set << 2
		val |= self.rx_fifo_trg_lvl_sw_set << 3
		val |= self.tx_fifo_trg_lvl_sw_set << 4
		val |= self.tx_fifo_empty_sw_set << 5
		val |= self.idle_sw_set << 6
		val |= self.rx_dma_done_sw_set << 7
		val |= self.tx_dma_done_sw_set << 8
		val |= self.tx_fifo_underflow_sw_set << 9
		val |= self.rx_fifo_full_sw_set << 10
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rx_fifo_overflow_sw_set = (val & 0x01) >> 0
		self.parity_error_sw_set = (val & 0x02) >> 1
		self.rx_timeout_sw_set = (val & 0x04) >> 2
		self.rx_fifo_trg_lvl_sw_set = (val & 0x08) >> 3
		self.tx_fifo_trg_lvl_sw_set = (val & 0x10) >> 4
		self.tx_fifo_empty_sw_set = (val & 0x20) >> 5
		self.idle_sw_set = (val & 0x40) >> 6
		self.rx_dma_done_sw_set = (val & 0x80) >> 7
		self.tx_dma_done_sw_set = (val & 0x100) >> 8
		self.tx_fifo_underflow_sw_set = (val & 0x200) >> 9
		self.rx_fifo_full_sw_set = (val & 0x400) >> 10
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SPARE_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+152
		self.cfg0 = 0
		self.cfg1 = 0
	def write(self):
		val = 0
		val |= self.cfg0 << 0
		val |= self.cfg1 << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.cfg0 = (val & 0xFF) >> 0
		self.cfg1 = (val & 0xFF00) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SPARE_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+156
		self.sts0 = 0
		self.sts1 = 0
	def write(self):
		val = 0
		val |= self.sts0 << 0
		val |= self.sts1 << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.sts0 = (val & 0xFF) >> 0
		self.sts1 = (val & 0xFF00) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class TX_FIFO:
	def __init__(self, dev, base_addr):
		self.dev = dev 
		self._addr = base_addr+88
		self.tx_fifo_0 = 0
	def write(self):
		val = 0
		val |= self.tx_fifo_0 <<0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.tx_fifo_0 = (val & 0xFF) >>0
		return val

class spi:
	def __init__(self,dev,base_addr):
		self.DESC = DESC(dev,base_addr)
		self.PWR_EN = PWR_EN(dev,base_addr)
		self.RST_CTRL = RST_CTRL(dev,base_addr)
		self.RST_STS = RST_STS(dev,base_addr)
		self.CLK_CTRL = CLK_CTRL(dev,base_addr)
		self.CLK_DIV = CLK_DIV(dev,base_addr)
		self.CLKSEL = CLKSEL(dev,base_addr)
		self.MOT_MOD_CNTRL = MOT_MOD_CNTRL(dev,base_addr)
		self.PARITY_CTRL = PARITY_CTRL(dev,base_addr)
		self.CMD_DATA_CTRL = CMD_DATA_CTRL(dev,base_addr)
		self.LOOPBACK_CTRL = LOOPBACK_CTRL(dev,base_addr)
		self.DATAFRAME_CTRL = DATAFRAME_CTRL(dev,base_addr)
		self.MODE_CTRL = MODE_CTRL(dev,base_addr)
		self.CS_CTRL = CS_CTRL(dev,base_addr)
		self.CS_SETUP_HOLD_CNT = CS_SETUP_HOLD_CNT(dev,base_addr)
		self.SCLK_CTRL = SCLK_CTRL(dev,base_addr)
		self.QSPI_CTRL = QSPI_CTRL(dev,base_addr)
		self.DSPI_CTRL = DSPI_CTRL(dev,base_addr)
		self.TX_CTRL = TX_CTRL(dev,base_addr)
		self.RX_CTRL = RX_CTRL(dev,base_addr)
		self.INT_FIFO_LVL_SEL = INT_FIFO_LVL_SEL(dev,base_addr)
		self.STS = STS(dev,base_addr)
		self.SPI_DBG_CTRL = SPI_DBG_CTRL(dev,base_addr)
		self.INTR_STS = INTR_STS(dev,base_addr)
		self.INTR_EVENT = INTR_EVENT(dev,base_addr)
		self.INTR_EN = INTR_EN(dev,base_addr)
		self.INTR_TX_DMA_EN = INTR_TX_DMA_EN(dev,base_addr)
		self.INTR_RX_DMA_EN = INTR_RX_DMA_EN(dev,base_addr)
		self.INTR_NMI = INTR_NMI(dev,base_addr)
		self.INTR_SW_SET = INTR_SW_SET(dev,base_addr)
		self.SPARE_CTRL = SPARE_CTRL(dev,base_addr)
		self.SPARE_STS = SPARE_STS(dev,base_addr)
		self.TX_FIFO = TX_FIFO(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
