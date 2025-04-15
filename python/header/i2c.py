class DESC:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+0
		self.module_type = 0
		self.modue_subtype = 0
		self.major_rev = 0
		self.minor_rev = 0
	def write(self):
		val = 0
		val |= self.module_type << 0
		val |= self.modue_subtype << 8
		val |= self.major_rev << 16
		val |= self.minor_rev << 20
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.module_type = (val & 0xFF) >> 0
		self.modue_subtype = (val & 0xFF00) >> 8
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
		self.en_async_clk_req = 0
		self.clksel = 0
		self.clkdiv = 0
		self.hold_cnt = 0
		self.setup_cnt = 0
	def write(self):
		val = 0
		val |= self.en_async_clk_req << 0
		val |= self.clksel << 1
		val |= self.clkdiv << 2
		val |= self.hold_cnt << 5
		val |= self.setup_cnt << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.en_async_clk_req = (val & 0x01) >> 0
		self.clksel = (val & 0x02) >> 1
		self.clkdiv = (val & 0x1C) >> 2
		self.hold_cnt = (val & 0xE0) >> 5
		self.setup_cnt = (val & 0x700) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DBG_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+20
		self.run_on_halt = 0
		self.soft_stop = 0
	def write(self):
		val = 0
		val |= self.run_on_halt << 0
		val |= self.soft_stop << 1
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.run_on_halt = (val & 0x01) >> 0
		self.soft_stop = (val & 0x02) >> 1
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MASTER_SCL_GEN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+24
		self.mst_scl_cnt_high_val = 0
		self.mst_scl_cnt_low_val = 0
	def write(self):
		val = 0
		val |= self.mst_scl_cnt_high_val << 0
		val |= self.mst_scl_cnt_low_val << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.mst_scl_cnt_high_val = (val & 0xFF) >> 0
		self.mst_scl_cnt_low_val = (val & 0xFF00) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MASTER_TIMING_CONSTRAINT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+28
		self.mst_scl_start_cnt = 0
		self.mst_sda_stop_cnt = 0
		self.mst_stop_start_buffer_cnt = 0
		self.mst_restart_setup_cnt = 0
	def write(self):
		val = 0
		val |= self.mst_scl_start_cnt << 0
		val |= self.mst_sda_stop_cnt << 8
		val |= self.mst_stop_start_buffer_cnt << 16
		val |= self.mst_restart_setup_cnt << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.mst_scl_start_cnt = (val & 0xFF) >> 0
		self.mst_sda_stop_cnt = (val & 0xFF00) >> 8
		self.mst_stop_start_buffer_cnt = (val & 0xFF0000) >> 16
		self.mst_restart_setup_cnt = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MASTER_CLKSTRETCH_CNT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+32
		self.mst_max_clkstretch_cnt = 0
	def write(self):
		val = 0
		val |= self.mst_max_clkstretch_cnt << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.mst_max_clkstretch_cnt = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SLAVE_CLKSTRETCH_CNT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+36
		self.slv_max_clkstretch_cnt = 0
	def write(self):
		val = 0
		val |= self.slv_max_clkstretch_cnt << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.slv_max_clkstretch_cnt = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SMBUS_TIMEOUT_CNT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+40
		self.smbus_timeout_cnt = 0
	def write(self):
		val = 0
		val |= self.smbus_timeout_cnt << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.smbus_timeout_cnt = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+44
		self.intr_first = 0
	def write(self):
		val = 0
		val |= self.intr_first << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.intr_first = (val & 0x3F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EVENT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+48
		self.arb_lost = 0
		self.slv_gencall_intr = 0
		self.slv_start = 0
		self.slv_stop = 0
		self.tx_done = 0
		self.rx_done = 0
		self.smbus_timeout = 0
		self.clkstretch_timeout = 0
		self.pec_err = 0
		self.txfifo_empty = 0
		self.rxfifo_full = 0
		self.txfifo_half_full = 0
		self.rxfifo_half_full = 0
		self.mst_stop_intr = 0
		self.mst_start_intr = 0
		self.mst_nack = 0
		self.dma_done_rx = 0
		self.dma_done_tx = 0
		self.txfifo_almost_empty_intr = 0
		self.rxfifo_almost_full_intr = 0
	def write(self):
		val = 0
		val |= self.arb_lost << 0
		val |= self.slv_gencall_intr << 1
		val |= self.slv_start << 2
		val |= self.slv_stop << 3
		val |= self.tx_done << 4
		val |= self.rx_done << 5
		val |= self.smbus_timeout << 6
		val |= self.clkstretch_timeout << 7
		val |= self.pec_err << 8
		val |= self.txfifo_empty << 9
		val |= self.rxfifo_full << 10
		val |= self.txfifo_half_full << 11
		val |= self.rxfifo_half_full << 12
		val |= self.mst_stop_intr << 13
		val |= self.mst_start_intr << 14
		val |= self.mst_nack << 15
		val |= self.dma_done_rx << 16
		val |= self.dma_done_tx << 17
		val |= self.txfifo_almost_empty_intr << 18
		val |= self.rxfifo_almost_full_intr << 19
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.arb_lost = (val & 0x01) >> 0
		self.slv_gencall_intr = (val & 0x02) >> 1
		self.slv_start = (val & 0x04) >> 2
		self.slv_stop = (val & 0x08) >> 3
		self.tx_done = (val & 0x10) >> 4
		self.rx_done = (val & 0x20) >> 5
		self.smbus_timeout = (val & 0x40) >> 6
		self.clkstretch_timeout = (val & 0x80) >> 7
		self.pec_err = (val & 0x100) >> 8
		self.txfifo_empty = (val & 0x200) >> 9
		self.rxfifo_full = (val & 0x400) >> 10
		self.txfifo_half_full = (val & 0x800) >> 11
		self.rxfifo_half_full = (val & 0x1000) >> 12
		self.mst_stop_intr = (val & 0x2000) >> 13
		self.mst_start_intr = (val & 0x4000) >> 14
		self.mst_nack = (val & 0x8000) >> 15
		self.dma_done_rx = (val & 0x10000) >> 16
		self.dma_done_tx = (val & 0x20000) >> 17
		self.txfifo_almost_empty_intr = (val & 0x40000) >> 18
		self.rxfifo_almost_full_intr = (val & 0x80000) >> 19
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EN_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+52
		self.arb_lost_en = 0
		self.slv_gencall_intr_en = 0
		self.slv_start_en = 0
		self.slv_stop_en = 0
		self.tx_done_en = 0
		self.rx_done_en = 0
		self.smbus_timeout_en = 0
		self.clkstretch_timeout_en = 0
		self.pec_err_en = 0
		self.txfifo_empty_en = 0
		self.rxfifo_full_en = 0
		self.txfifo_half_full_en = 0
		self.rxfifo_half_full_en = 0
		self.mst_stop_intr_en = 0
		self.mst_start_intr_en = 0
		self.mst_nack_en = 0
	def write(self):
		val = 0
		val |= self.arb_lost_en << 0
		val |= self.slv_gencall_intr_en << 1
		val |= self.slv_start_en << 2
		val |= self.slv_stop_en << 3
		val |= self.tx_done_en << 4
		val |= self.rx_done_en << 5
		val |= self.smbus_timeout_en << 6
		val |= self.clkstretch_timeout_en << 7
		val |= self.pec_err_en << 8
		val |= self.txfifo_empty_en << 9
		val |= self.rxfifo_full_en << 10
		val |= self.txfifo_half_full_en << 11
		val |= self.rxfifo_half_full_en << 12
		val |= self.mst_stop_intr_en << 13
		val |= self.mst_start_intr_en << 14
		val |= self.mst_nack_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.arb_lost_en = (val & 0x01) >> 0
		self.slv_gencall_intr_en = (val & 0x02) >> 1
		self.slv_start_en = (val & 0x04) >> 2
		self.slv_stop_en = (val & 0x08) >> 3
		self.tx_done_en = (val & 0x10) >> 4
		self.rx_done_en = (val & 0x20) >> 5
		self.smbus_timeout_en = (val & 0x40) >> 6
		self.clkstretch_timeout_en = (val & 0x80) >> 7
		self.pec_err_en = (val & 0x100) >> 8
		self.txfifo_empty_en = (val & 0x200) >> 9
		self.rxfifo_full_en = (val & 0x400) >> 10
		self.txfifo_half_full_en = (val & 0x800) >> 11
		self.rxfifo_half_full_en = (val & 0x1000) >> 12
		self.mst_stop_intr_en = (val & 0x2000) >> 13
		self.mst_start_intr_en = (val & 0x4000) >> 14
		self.mst_nack_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EN_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+56
		self.dma_done_rx_en = 0
		self.dma_done_tx_en = 0
		self.txfifo_almost_empty_intr_en = 0
		self.rxfifo_almost_full_intr_en = 0
	def write(self):
		val = 0
		val |= self.dma_done_rx_en << 0
		val |= self.dma_done_tx_en << 1
		val |= self.txfifo_almost_empty_intr_en << 2
		val |= self.rxfifo_almost_full_intr_en << 3
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_done_rx_en = (val & 0x01) >> 0
		self.dma_done_tx_en = (val & 0x02) >> 1
		self.txfifo_almost_empty_intr_en = (val & 0x04) >> 2
		self.rxfifo_almost_full_intr_en = (val & 0x08) >> 3
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_NMI_EN_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+60
		self.arb_lost_nmi_en = 0
		self.slv_gencall_intr_nmi_en = 0
		self.slv_start_nmi_en = 0
		self.slv_stop_nmi_en = 0
		self.tx_done_nmi_en = 0
		self.rx_done_nmi_en = 0
		self.smbus_timeout_nmi_en = 0
		self.clkstretch_timeout_nmi_en = 0
		self.pec_err_nmi_en = 0
		self.txfifo_empty_nmi_en = 0
		self.rxfifo_full_nmi_en = 0
		self.txfifo_half_full_nmi_en = 0
		self.rxfifo_half_full_nmi_en = 0
		self.mst_stop_intr_nmi_en = 0
		self.mst_start_intr_nmi_en = 0
		self.mst_nack_nmi_en = 0
	def write(self):
		val = 0
		val |= self.arb_lost_nmi_en << 0
		val |= self.slv_gencall_intr_nmi_en << 1
		val |= self.slv_start_nmi_en << 2
		val |= self.slv_stop_nmi_en << 3
		val |= self.tx_done_nmi_en << 4
		val |= self.rx_done_nmi_en << 5
		val |= self.smbus_timeout_nmi_en << 6
		val |= self.clkstretch_timeout_nmi_en << 7
		val |= self.pec_err_nmi_en << 8
		val |= self.txfifo_empty_nmi_en << 9
		val |= self.rxfifo_full_nmi_en << 10
		val |= self.txfifo_half_full_nmi_en << 11
		val |= self.rxfifo_half_full_nmi_en << 12
		val |= self.mst_stop_intr_nmi_en << 13
		val |= self.mst_start_intr_nmi_en << 14
		val |= self.mst_nack_nmi_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.arb_lost_nmi_en = (val & 0x01) >> 0
		self.slv_gencall_intr_nmi_en = (val & 0x02) >> 1
		self.slv_start_nmi_en = (val & 0x04) >> 2
		self.slv_stop_nmi_en = (val & 0x08) >> 3
		self.tx_done_nmi_en = (val & 0x10) >> 4
		self.rx_done_nmi_en = (val & 0x20) >> 5
		self.smbus_timeout_nmi_en = (val & 0x40) >> 6
		self.clkstretch_timeout_nmi_en = (val & 0x80) >> 7
		self.pec_err_nmi_en = (val & 0x100) >> 8
		self.txfifo_empty_nmi_en = (val & 0x200) >> 9
		self.rxfifo_full_nmi_en = (val & 0x400) >> 10
		self.txfifo_half_full_nmi_en = (val & 0x800) >> 11
		self.rxfifo_half_full_nmi_en = (val & 0x1000) >> 12
		self.mst_stop_intr_nmi_en = (val & 0x2000) >> 13
		self.mst_start_intr_nmi_en = (val & 0x4000) >> 14
		self.mst_nack_nmi_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_NMI_EN_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+64
		self.dma_done_rx_nmi_en = 0
		self.dma_done_tx_nmi_en = 0
		self.txfifo_almost_empty_intr_nmi_en = 0
		self.rxfifo_almost_full_intr_nmi_en = 0
	def write(self):
		val = 0
		val |= self.dma_done_rx_nmi_en << 0
		val |= self.dma_done_tx_nmi_en << 1
		val |= self.txfifo_almost_empty_intr_nmi_en << 2
		val |= self.rxfifo_almost_full_intr_nmi_en << 3
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_done_rx_nmi_en = (val & 0x01) >> 0
		self.dma_done_tx_nmi_en = (val & 0x02) >> 1
		self.txfifo_almost_empty_intr_nmi_en = (val & 0x04) >> 2
		self.rxfifo_almost_full_intr_nmi_en = (val & 0x08) >> 3
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class RX_DMA_EVENT_EN_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+68
		self.rx_dma_arb_lost_en = 0
		self.rx_dma_slv_gencall_intr_en = 0
		self.rx_dma_slv_start_en = 0
		self.rx_dma_slv_stop_en = 0
		self.rx_dma_tx_done_en = 0
		self.rx_dma_rx_done_en = 0
		self.rx_dma_smbus_timeout_en = 0
		self.rx_dma_clkstretch_timeout_en = 0
		self.rx_dma_pec_err_en = 0
		self.rx_dma_txfifo_empty_en = 0
		self.rx_dma_rxfifo_full_en = 0
		self.rx_dma_txfifo_half_full_en = 0
		self.rx_dma_rxfifo_half_full_en = 0
		self.rx_dma_mst_stop_intr_en = 0
		self.rx_dma_mst_start_intr_en = 0
		self.rx_dma_mst_nack_en = 0
	def write(self):
		val = 0
		val |= self.rx_dma_arb_lost_en << 0
		val |= self.rx_dma_slv_gencall_intr_en << 1
		val |= self.rx_dma_slv_start_en << 2
		val |= self.rx_dma_slv_stop_en << 3
		val |= self.rx_dma_tx_done_en << 4
		val |= self.rx_dma_rx_done_en << 5
		val |= self.rx_dma_smbus_timeout_en << 6
		val |= self.rx_dma_clkstretch_timeout_en << 7
		val |= self.rx_dma_pec_err_en << 8
		val |= self.rx_dma_txfifo_empty_en << 9
		val |= self.rx_dma_rxfifo_full_en << 10
		val |= self.rx_dma_txfifo_half_full_en << 11
		val |= self.rx_dma_rxfifo_half_full_en << 12
		val |= self.rx_dma_mst_stop_intr_en << 13
		val |= self.rx_dma_mst_start_intr_en << 14
		val |= self.rx_dma_mst_nack_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rx_dma_arb_lost_en = (val & 0x01) >> 0
		self.rx_dma_slv_gencall_intr_en = (val & 0x02) >> 1
		self.rx_dma_slv_start_en = (val & 0x04) >> 2
		self.rx_dma_slv_stop_en = (val & 0x08) >> 3
		self.rx_dma_tx_done_en = (val & 0x10) >> 4
		self.rx_dma_rx_done_en = (val & 0x20) >> 5
		self.rx_dma_smbus_timeout_en = (val & 0x40) >> 6
		self.rx_dma_clkstretch_timeout_en = (val & 0x80) >> 7
		self.rx_dma_pec_err_en = (val & 0x100) >> 8
		self.rx_dma_txfifo_empty_en = (val & 0x200) >> 9
		self.rx_dma_rxfifo_full_en = (val & 0x400) >> 10
		self.rx_dma_txfifo_half_full_en = (val & 0x800) >> 11
		self.rx_dma_rxfifo_half_full_en = (val & 0x1000) >> 12
		self.rx_dma_mst_stop_intr_en = (val & 0x2000) >> 13
		self.rx_dma_mst_start_intr_en = (val & 0x4000) >> 14
		self.rx_dma_mst_nack_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class RX_DMA_EVENT_EN_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+72
		self.rx_dma_dma_done_rx_en = 0
		self.rx_dma_dma_done_tx_en = 0
		self.rx_dma_txfifo_almost_empty_intr_en = 0
		self.rx_dma_rxfifo_almost_full_intr_en = 0
	def write(self):
		val = 0
		val |= self.rx_dma_dma_done_rx_en << 0
		val |= self.rx_dma_dma_done_tx_en << 1
		val |= self.rx_dma_txfifo_almost_empty_intr_en << 2
		val |= self.rx_dma_rxfifo_almost_full_intr_en << 3
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rx_dma_dma_done_rx_en = (val & 0x01) >> 0
		self.rx_dma_dma_done_tx_en = (val & 0x02) >> 1
		self.rx_dma_txfifo_almost_empty_intr_en = (val & 0x04) >> 2
		self.rx_dma_rxfifo_almost_full_intr_en = (val & 0x08) >> 3
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class TX_DMA_EVENT_EN_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+76
		self.tx_dma_arb_lost_en = 0
		self.tx_dma_slv_gencall_intr_en = 0
		self.tx_dma_slv_start_en = 0
		self.tx_dma_slv_stop_en = 0
		self.tx_dma_tx_done_en = 0
		self.tx_dma_rx_done_en = 0
		self.tx_dma_smbus_timeout_en = 0
		self.tx_dma_clkstretch_timeout_en = 0
		self.tx_dma_pec_err_en = 0
		self.tx_dma_txfifo_empty_en = 0
		self.tx_dma_rxfifo_full_en = 0
		self.tx_dma_txfifo_half_full_en = 0
		self.tx_dma_rxfifo_half_full_en = 0
		self.tx_dma_mst_stop_intr_en = 0
		self.tx_dma_mst_start_intr_en = 0
		self.tx_dma_mst_nack_en = 0
	def write(self):
		val = 0
		val |= self.tx_dma_arb_lost_en << 0
		val |= self.tx_dma_slv_gencall_intr_en << 1
		val |= self.tx_dma_slv_start_en << 2
		val |= self.tx_dma_slv_stop_en << 3
		val |= self.tx_dma_tx_done_en << 4
		val |= self.tx_dma_rx_done_en << 5
		val |= self.tx_dma_smbus_timeout_en << 6
		val |= self.tx_dma_clkstretch_timeout_en << 7
		val |= self.tx_dma_pec_err_en << 8
		val |= self.tx_dma_txfifo_empty_en << 9
		val |= self.tx_dma_rxfifo_full_en << 10
		val |= self.tx_dma_txfifo_half_full_en << 11
		val |= self.tx_dma_rxfifo_half_full_en << 12
		val |= self.tx_dma_mst_stop_intr_en << 13
		val |= self.tx_dma_mst_start_intr_en << 14
		val |= self.tx_dma_mst_nack_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.tx_dma_arb_lost_en = (val & 0x01) >> 0
		self.tx_dma_slv_gencall_intr_en = (val & 0x02) >> 1
		self.tx_dma_slv_start_en = (val & 0x04) >> 2
		self.tx_dma_slv_stop_en = (val & 0x08) >> 3
		self.tx_dma_tx_done_en = (val & 0x10) >> 4
		self.tx_dma_rx_done_en = (val & 0x20) >> 5
		self.tx_dma_smbus_timeout_en = (val & 0x40) >> 6
		self.tx_dma_clkstretch_timeout_en = (val & 0x80) >> 7
		self.tx_dma_pec_err_en = (val & 0x100) >> 8
		self.tx_dma_txfifo_empty_en = (val & 0x200) >> 9
		self.tx_dma_rxfifo_full_en = (val & 0x400) >> 10
		self.tx_dma_txfifo_half_full_en = (val & 0x800) >> 11
		self.tx_dma_rxfifo_half_full_en = (val & 0x1000) >> 12
		self.tx_dma_mst_stop_intr_en = (val & 0x2000) >> 13
		self.tx_dma_mst_start_intr_en = (val & 0x4000) >> 14
		self.tx_dma_mst_nack_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class TX_DMA_EVENT_EN_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+80
		self.tx_dma_dma_done_rx_en = 0
		self.tx_dma_dma_done_tx_en = 0
		self.tx_dma_txfifo_almost_empty_intr_en = 0
		self.tx_dma_rxfifo_almost_full_intr_en = 0
	def write(self):
		val = 0
		val |= self.tx_dma_dma_done_rx_en << 0
		val |= self.tx_dma_dma_done_tx_en << 1
		val |= self.tx_dma_txfifo_almost_empty_intr_en << 2
		val |= self.tx_dma_rxfifo_almost_full_intr_en << 3
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.tx_dma_dma_done_rx_en = (val & 0x01) >> 0
		self.tx_dma_dma_done_tx_en = (val & 0x02) >> 1
		self.tx_dma_txfifo_almost_empty_intr_en = (val & 0x04) >> 2
		self.tx_dma_rxfifo_almost_full_intr_en = (val & 0x08) >> 3
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_SW_SET_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+84
		self.arb_lost_sw_set = 0
		self.slv_gencall_intr_sw_set = 0
		self.slv_start_sw_set = 0
		self.slv_stop_sw_set = 0
		self.tx_done_sw_set = 0
		self.rx_done_sw_set = 0
		self.smbus_timeout_sw_set = 0
		self.clkstretch_timeout_sw_set = 0
		self.pec_err_sw_set = 0
		self.txfifo_empty_sw_set = 0
		self.rxfifo_full_sw_set = 0
		self.txfifo_half_full_sw_set = 0
		self.rxfifo_half_full_sw_set = 0
		self.mst_stop_intr_sw_set = 0
		self.mst_start_intr_sw_set = 0
		self.mst_nack_sw_set = 0
	def write(self):
		val = 0
		val |= self.arb_lost_sw_set << 0
		val |= self.slv_gencall_intr_sw_set << 1
		val |= self.slv_start_sw_set << 2
		val |= self.slv_stop_sw_set << 3
		val |= self.tx_done_sw_set << 4
		val |= self.rx_done_sw_set << 5
		val |= self.smbus_timeout_sw_set << 6
		val |= self.clkstretch_timeout_sw_set << 7
		val |= self.pec_err_sw_set << 8
		val |= self.txfifo_empty_sw_set << 9
		val |= self.rxfifo_full_sw_set << 10
		val |= self.txfifo_half_full_sw_set << 11
		val |= self.rxfifo_half_full_sw_set << 12
		val |= self.mst_stop_intr_sw_set << 13
		val |= self.mst_start_intr_sw_set << 14
		val |= self.mst_nack_sw_set << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.arb_lost_sw_set = (val & 0x01) >> 0
		self.slv_gencall_intr_sw_set = (val & 0x02) >> 1
		self.slv_start_sw_set = (val & 0x04) >> 2
		self.slv_stop_sw_set = (val & 0x08) >> 3
		self.tx_done_sw_set = (val & 0x10) >> 4
		self.rx_done_sw_set = (val & 0x20) >> 5
		self.smbus_timeout_sw_set = (val & 0x40) >> 6
		self.clkstretch_timeout_sw_set = (val & 0x80) >> 7
		self.pec_err_sw_set = (val & 0x100) >> 8
		self.txfifo_empty_sw_set = (val & 0x200) >> 9
		self.rxfifo_full_sw_set = (val & 0x400) >> 10
		self.txfifo_half_full_sw_set = (val & 0x800) >> 11
		self.rxfifo_half_full_sw_set = (val & 0x1000) >> 12
		self.mst_stop_intr_sw_set = (val & 0x2000) >> 13
		self.mst_start_intr_sw_set = (val & 0x4000) >> 14
		self.mst_nack_sw_set = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_SW_SET_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+88
		self.dma_done_rx_sw_set = 0
		self.dma_done_tx_sw_set = 0
		self.txfifo_almost_empty_intr_sw_set = 0
		self.rxfifo_almost_full_intr_sw_set = 0
	def write(self):
		val = 0
		val |= self.dma_done_rx_sw_set << 0
		val |= self.dma_done_tx_sw_set << 1
		val |= self.txfifo_almost_empty_intr_sw_set << 2
		val |= self.rxfifo_almost_full_intr_sw_set << 3
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_done_rx_sw_set = (val & 0x01) >> 0
		self.dma_done_tx_sw_set = (val & 0x02) >> 1
		self.txfifo_almost_empty_intr_sw_set = (val & 0x04) >> 2
		self.rxfifo_almost_full_intr_sw_set = (val & 0x08) >> 3
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SPARE_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+92
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
		self._addr = base_addr+96
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

class GLITCH_FILTER_CFG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+100
		self.gf_width = 0
	def write(self):
		val = 0
		val |= self.gf_width << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gf_width = (val & 0x07) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SLAVE_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+104
		self.slv_addr_mode = 0
		self.slv_low_pwr_wakeup_en = 0
		self.slv_def_dev_addr_en = 0
		self.slv_alres_addr_en = 0
		self.slv_def_host_addr_en = 0
		self.slv_txtrig_at_txmode = 0
		self.slv_clkstretch_en = 0
		self.slv_gencall_en = 0
		self.slv_enable = 0
		self.slv_addr2_en = 0
		self.slv_addr2_mask = 0
		self.slv_txwait_stale_fifo = 0
		self.slv_txempty_intr_on_tx_req = 0
	def write(self):
		val = 0
		val |= self.slv_addr_mode << 0
		val |= self.slv_low_pwr_wakeup_en << 1
		val |= self.slv_def_dev_addr_en << 2
		val |= self.slv_alres_addr_en << 3
		val |= self.slv_def_host_addr_en << 4
		val |= self.slv_txtrig_at_txmode << 5
		val |= self.slv_clkstretch_en << 6
		val |= self.slv_gencall_en << 7
		val |= self.slv_enable << 8
		val |= self.slv_addr2_en << 9
		val |= self.slv_addr2_mask << 10
		val |= self.slv_txwait_stale_fifo << 17
		val |= self.slv_txempty_intr_on_tx_req << 18
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.slv_addr_mode = (val & 0x01) >> 0
		self.slv_low_pwr_wakeup_en = (val & 0x02) >> 1
		self.slv_def_dev_addr_en = (val & 0x04) >> 2
		self.slv_alres_addr_en = (val & 0x08) >> 3
		self.slv_def_host_addr_en = (val & 0x10) >> 4
		self.slv_txtrig_at_txmode = (val & 0x20) >> 5
		self.slv_clkstretch_en = (val & 0x40) >> 6
		self.slv_gencall_en = (val & 0x80) >> 7
		self.slv_enable = (val & 0x100) >> 8
		self.slv_addr2_en = (val & 0x200) >> 9
		self.slv_addr2_mask = (val & 0x1FC00) >> 10
		self.slv_txwait_stale_fifo = (val & 0x20000) >> 17
		self.slv_txempty_intr_on_tx_req = (val & 0x40000) >> 18
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SLAVE_ADDR:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+108
		self.slv_addr1 = 0
		self.slv_addr2 = 0
	def write(self):
		val = 0
		val |= self.slv_addr1 << 0
		val |= self.slv_addr2 << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.slv_addr1 = (val & 0x3FF) >> 0
		self.slv_addr2 = (val & 0x3FF0000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SLAVE_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+112
		self.slv_rx_req = 0
		self.slv_tx_req = 0
		self.slv_addr2_sel = 0
		self.quick_cmd_sts = 0
		self.quick_cmd_rw = 0
		self.slv_addr_match = 0
		self.slv_stale_txfifo = 0
		self.slv_txmode = 0
		self.slv_rxmode = 0
		self.slv_busbsy = 0
	def write(self):
		val = 0
		val |= self.slv_rx_req << 0
		val |= self.slv_tx_req << 1
		val |= self.slv_addr2_sel << 2
		val |= self.quick_cmd_sts << 3
		val |= self.quick_cmd_rw << 4
		val |= self.slv_addr_match << 5
		val |= self.slv_stale_txfifo << 6
		val |= self.slv_txmode << 7
		val |= self.slv_rxmode << 8
		val |= self.slv_busbsy << 9
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.slv_rx_req = (val & 0x01) >> 0
		self.slv_tx_req = (val & 0x02) >> 1
		self.slv_addr2_sel = (val & 0x04) >> 2
		self.quick_cmd_sts = (val & 0x08) >> 3
		self.quick_cmd_rw = (val & 0x10) >> 4
		self.slv_addr_match = (val & 0x20) >> 5
		self.slv_stale_txfifo = (val & 0x40) >> 6
		self.slv_txmode = (val & 0x80) >> 7
		self.slv_rxmode = (val & 0x100) >> 8
		self.slv_busbsy = (val & 0x200) >> 9
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SLAVE_ACK_CFG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+116
		self.slv_auto_ack_en = 0
		self.slv_addr_auto_ack_en = 0
	def write(self):
		val = 0
		val |= self.slv_auto_ack_en << 0
		val |= self.slv_addr_auto_ack_en << 1
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.slv_auto_ack_en = (val & 0x01) >> 0
		self.slv_addr_auto_ack_en = (val & 0x02) >> 1
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SLAVE_BYTE_ACK:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+120
		self.slv_ackval = 0
	def write(self):
		val = 0
		val |= self.slv_ackval << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.slv_ackval = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class FIFO_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+124
		self.rxfifo_en = 0
		self.txfifo_en = 0
		self.rxfifo_flush = 0
		self.txfifo_flush = 0
		self.rxdata = 0
		self.txdata = 0
	def write(self):
		val = 0
		val |= self.rxfifo_en << 0
		val |= self.txfifo_en << 1
		val |= self.rxfifo_flush << 8
		val |= self.txfifo_flush << 16
		val |= self.rxdata << 0
		val |= self.txdata << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rxfifo_en = (val & 0x01) >> 0
		self.txfifo_en = (val & 0x02) >> 1
		self.rxfifo_flush = (val & 0x100) >> 8
		self.txfifo_flush = (val & 0x10000) >> 16
		self.rxdata = (val & 0x3FF) >> 0
		self.txdata = (val & 0xFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class FIFO_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+144
		self.txfifo_flush_sts = 0
		self.rxfifo_flush_sts = 0
		self.txfifo_empty_sts = 0
		self.txfifo_almost_empty = 0
		self.txfifo_full = 0
		self.rxfifo_empty = 0
		self.rxfifo_almost_full = 0
		self.rxfifo_full_sts = 0
	def write(self):
		val = 0
		val |= self.txfifo_flush_sts << 0
		val |= self.rxfifo_flush_sts << 1
		val |= self.txfifo_empty_sts << 2
		val |= self.txfifo_almost_empty << 3
		val |= self.txfifo_full << 4
		val |= self.rxfifo_empty << 5
		val |= self.rxfifo_almost_full << 6
		val |= self.rxfifo_full_sts << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.txfifo_flush_sts = (val & 0x01) >> 0
		self.rxfifo_flush_sts = (val & 0x02) >> 1
		self.txfifo_empty_sts = (val & 0x04) >> 2
		self.txfifo_almost_empty = (val & 0x08) >> 3
		self.txfifo_full = (val & 0x10) >> 4
		self.rxfifo_empty = (val & 0x20) >> 5
		self.rxfifo_almost_full = (val & 0x40) >> 6
		self.rxfifo_full_sts = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PEC_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+148
		self.pec_en = 0
	def write(self):
		val = 0
		val |= self.pec_en << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.pec_en = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PEC_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+152
		self.pec_error = 0
	def write(self):
		val = 0
		val |= self.pec_error << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.pec_error = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CRC_OUT_BYTE:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+156
		self.slv_crc_out_byte = 0
		self.mst_crc_out_byte = 0
	def write(self):
		val = 0
		val |= self.slv_crc_out_byte << 0
		val |= self.mst_crc_out_byte << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.slv_crc_out_byte = (val & 0xFF) >> 0
		self.mst_crc_out_byte = (val & 0xFF00) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MASTER_CFG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+160
		self.mst_enable = 0
		self.mst_clkstretch_en = 0
		self.lpbk_mode = 0
		self.mst_auto_ack_en = 0
		self.mst_addr_mode = 0
		self.mst_slv_addr_cfg = 0
	def write(self):
		val = 0
		val |= self.mst_enable << 0
		val |= self.mst_clkstretch_en << 1
		val |= self.lpbk_mode << 2
		val |= self.mst_auto_ack_en << 3
		val |= self.mst_addr_mode << 4
		val |= self.mst_slv_addr_cfg << 5
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.mst_enable = (val & 0x01) >> 0
		self.mst_clkstretch_en = (val & 0x02) >> 1
		self.lpbk_mode = (val & 0x04) >> 2
		self.mst_auto_ack_en = (val & 0x08) >> 3
		self.mst_addr_mode = (val & 0x10) >> 4
		self.mst_slv_addr_cfg = (val & 0x7FE0) >> 5
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MASTER_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+164
		self.mst_cmd_vld = 0
		self.mst_burst_len = 0
		self.mst_start = 0
		self.mst_dir = 0
		self.mst_stop = 0
		self.mst_rd_on_txempty = 0
	def write(self):
		val = 0
		val |= self.mst_cmd_vld << 0
		val |= self.mst_burst_len << 8
		val |= self.mst_start << 24
		val |= self.mst_dir << 25
		val |= self.mst_stop << 26
		val |= self.mst_rd_on_txempty << 27
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.mst_cmd_vld = (val & 0x01) >> 0
		self.mst_burst_len = (val & 0xFFF00) >> 8
		self.mst_start = (val & 0x1000000) >> 24
		self.mst_dir = (val & 0x2000000) >> 25
		self.mst_stop = (val & 0x4000000) >> 26
		self.mst_rd_on_txempty = (val & 0x8000000) >> 27
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MASTER_ACK_VAL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+168
		self.mst_ackval = 0
	def write(self):
		val = 0
		val |= self.mst_ackval << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.mst_ackval = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MASTER_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+172
		self.mst_busbsy = 0
		self.mst_idle = 0
		self.mst_arblost = 0
		self.mst_tx_data_ack = 0
		self.mst_tx_addr_ack = 0
		self.mst_tx_nack = 0
		self.mst_fsm_busy = 0
		self.mst_word_cnt = 0
	def write(self):
		val = 0
		val |= self.mst_busbsy << 0
		val |= self.mst_idle << 1
		val |= self.mst_arblost << 2
		val |= self.mst_tx_data_ack << 3
		val |= self.mst_tx_addr_ack << 4
		val |= self.mst_tx_nack << 5
		val |= self.mst_fsm_busy << 6
		val |= self.mst_word_cnt << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.mst_busbsy = (val & 0x01) >> 0
		self.mst_idle = (val & 0x02) >> 1
		self.mst_arblost = (val & 0x04) >> 2
		self.mst_tx_data_ack = (val & 0x08) >> 3
		self.mst_tx_addr_ack = (val & 0x10) >> 4
		self.mst_tx_nack = (val & 0x20) >> 5
		self.mst_fsm_busy = (val & 0x40) >> 6
		self.mst_word_cnt = (val & 0x7FF80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MASTER_MON:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+176
		self.mst_sda_state = 0
		self.mst_scl_state = 0
	def write(self):
		val = 0
		val |= self.mst_sda_state << 0
		val |= self.mst_scl_state << 1
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.mst_sda_state = (val & 0x01) >> 0
		self.mst_scl_state = (val & 0x02) >> 1
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class FSM_STATUS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+180
		self.mst_state = 0
		self.slv_state = 0
		self.slv_quick_cmd_state = 0
	def write(self):
		val = 0
		val |= self.mst_state << 0
		val |= self.slv_state << 4
		val |= self.slv_quick_cmd_state << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.mst_state = (val & 0x0F) >> 0
		self.slv_state = (val & 0xF0) >> 4
		self.slv_quick_cmd_state = (val & 0x700) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class i2c:
	def __init__(self,dev,base_addr):
		self.DESC = DESC(dev,base_addr)
		self.PWR_EN = PWR_EN(dev,base_addr)
		self.RST_CTRL = RST_CTRL(dev,base_addr)
		self.RST_STS = RST_STS(dev,base_addr)
		self.CLK_CTRL = CLK_CTRL(dev,base_addr)
		self.DBG_CTRL = DBG_CTRL(dev,base_addr)
		self.MASTER_SCL_GEN = MASTER_SCL_GEN(dev,base_addr)
		self.MASTER_TIMING_CONSTRAINT = MASTER_TIMING_CONSTRAINT(dev,base_addr)
		self.MASTER_CLKSTRETCH_CNT = MASTER_CLKSTRETCH_CNT(dev,base_addr)
		self.SLAVE_CLKSTRETCH_CNT = SLAVE_CLKSTRETCH_CNT(dev,base_addr)
		self.SMBUS_TIMEOUT_CNT = SMBUS_TIMEOUT_CNT(dev,base_addr)
		self.INTR_STS = INTR_STS(dev,base_addr)
		self.INTR_EVENT = INTR_EVENT(dev,base_addr)
		self.INTR_EN_0 = INTR_EN_0(dev,base_addr)
		self.INTR_EN_1 = INTR_EN_1(dev,base_addr)
		self.INTR_NMI_EN_0 = INTR_NMI_EN_0(dev,base_addr)
		self.INTR_NMI_EN_1 = INTR_NMI_EN_1(dev,base_addr)
		self.RX_DMA_EVENT_EN_0 = RX_DMA_EVENT_EN_0(dev,base_addr)
		self.RX_DMA_EVENT_EN_1 = RX_DMA_EVENT_EN_1(dev,base_addr)
		self.TX_DMA_EVENT_EN_0 = TX_DMA_EVENT_EN_0(dev,base_addr)
		self.TX_DMA_EVENT_EN_1 = TX_DMA_EVENT_EN_1(dev,base_addr)
		self.INTR_SW_SET_0 = INTR_SW_SET_0(dev,base_addr)
		self.INTR_SW_SET_1 = INTR_SW_SET_1(dev,base_addr)
		self.SPARE_CTRL = SPARE_CTRL(dev,base_addr)
		self.SPARE_STS = SPARE_STS(dev,base_addr)
		self.GLITCH_FILTER_CFG = GLITCH_FILTER_CFG(dev,base_addr)
		self.SLAVE_CTRL = SLAVE_CTRL(dev,base_addr)
		self.SLAVE_ADDR = SLAVE_ADDR(dev,base_addr)
		self.SLAVE_STS = SLAVE_STS(dev,base_addr)
		self.SLAVE_ACK_CFG = SLAVE_ACK_CFG(dev,base_addr)
		self.SLAVE_BYTE_ACK = SLAVE_BYTE_ACK(dev,base_addr)
		self.FIFO_CTRL = FIFO_CTRL(dev,base_addr)
		self.FIFO_STS = FIFO_STS(dev,base_addr)
		self.PEC_CTRL = PEC_CTRL(dev,base_addr)
		self.PEC_STS = PEC_STS(dev,base_addr)
		self.CRC_OUT_BYTE = CRC_OUT_BYTE(dev,base_addr)
		self.MASTER_CFG = MASTER_CFG(dev,base_addr)
		self.MASTER_CTRL = MASTER_CTRL(dev,base_addr)
		self.MASTER_ACK_VAL = MASTER_ACK_VAL(dev,base_addr)
		self.MASTER_STS = MASTER_STS(dev,base_addr)
		self.MASTER_MON = MASTER_MON(dev,base_addr)
		self.FSM_STATUS = FSM_STATUS(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
