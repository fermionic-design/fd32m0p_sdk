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
		self.clk_en = 0
	def write(self):
		val = 0
		val |= self.clk_en << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.clk_en = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CLK_SEL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+20
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

class CLK_DIV:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+24
		self.clk_div = 0
	def write(self):
		val = 0
		val |= self.clk_div << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.clk_div = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DBG_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+28
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

class INTR_EVENT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+32
		self.rcv_timeout = 0
		self.frame_err = 0
		self.parity_err = 0
		self.underflow_err = 0
		self.overflow_err = 0
		self.maj_vote_err = 0
		self.tx_fifo_almost_full = 0
		self.tx_fifo_full = 0
		self.tx_fifo_almost_empty = 0
		self.tx_fifo_empty = 0
		self.rx_fifo_almost_full = 0
		self.rx_fifo_full = 0
		self.rx_fifo_almost_empty = 0
		self.rx_fifo_empty = 0
		self.rcv_negedge = 0
		self.rcv_posedge = 0
		self.rx_int = 0
		self.tx_int = 0
		self.cts_int = 0
		self.addr_match = 0
		self.baud_err = 0
		self.eot = 0
		self.dma_done_tx_intr = 0
		self.dma_done_rx_intr = 0
	def write(self):
		val = 0
		val |= self.rcv_timeout << 0
		val |= self.frame_err << 1
		val |= self.parity_err << 2
		val |= self.underflow_err << 3
		val |= self.overflow_err << 4
		val |= self.maj_vote_err << 5
		val |= self.tx_fifo_almost_full << 6
		val |= self.tx_fifo_full << 7
		val |= self.tx_fifo_almost_empty << 8
		val |= self.tx_fifo_empty << 9
		val |= self.rx_fifo_almost_full << 10
		val |= self.rx_fifo_full << 11
		val |= self.rx_fifo_almost_empty << 12
		val |= self.rx_fifo_empty << 13
		val |= self.rcv_negedge << 14
		val |= self.rcv_posedge << 15
		val |= self.rx_int << 16
		val |= self.tx_int << 17
		val |= self.cts_int << 18
		val |= self.addr_match << 19
		val |= self.baud_err << 20
		val |= self.eot << 21
		val |= self.dma_done_tx_intr << 22
		val |= self.dma_done_rx_intr << 23
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rcv_timeout = (val & 0x01) >> 0
		self.frame_err = (val & 0x02) >> 1
		self.parity_err = (val & 0x04) >> 2
		self.underflow_err = (val & 0x08) >> 3
		self.overflow_err = (val & 0x10) >> 4
		self.maj_vote_err = (val & 0x20) >> 5
		self.tx_fifo_almost_full = (val & 0x40) >> 6
		self.tx_fifo_full = (val & 0x80) >> 7
		self.tx_fifo_almost_empty = (val & 0x100) >> 8
		self.tx_fifo_empty = (val & 0x200) >> 9
		self.rx_fifo_almost_full = (val & 0x400) >> 10
		self.rx_fifo_full = (val & 0x800) >> 11
		self.rx_fifo_almost_empty = (val & 0x1000) >> 12
		self.rx_fifo_empty = (val & 0x2000) >> 13
		self.rcv_negedge = (val & 0x4000) >> 14
		self.rcv_posedge = (val & 0x8000) >> 15
		self.rx_int = (val & 0x10000) >> 16
		self.tx_int = (val & 0x20000) >> 17
		self.cts_int = (val & 0x40000) >> 18
		self.addr_match = (val & 0x80000) >> 19
		self.baud_err = (val & 0x100000) >> 20
		self.eot = (val & 0x200000) >> 21
		self.dma_done_tx_intr = (val & 0x400000) >> 22
		self.dma_done_rx_intr = (val & 0x800000) >> 23
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EN1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+36
		self.rcv_timeout_en = 0
		self.frame_err_en = 0
		self.parity_err_en = 0
		self.underflow_err_en = 0
		self.overflow_err_en = 0
		self.maj_vote_err_en = 0
		self.tx_fifo_almost_full_en = 0
		self.tx_fifo_full_en = 0
		self.tx_fifo_almost_empty_en = 0
		self.tx_fifo_empty_en = 0
		self.rx_fifo_almost_full_en = 0
		self.rx_fifo_full_en = 0
		self.rx_fifo_almost_empty_en = 0
		self.rx_fifo_empty_en = 0
		self.rcv_negedge_en = 0
		self.rcv_posedge_en = 0
	def write(self):
		val = 0
		val |= self.rcv_timeout_en << 0
		val |= self.frame_err_en << 1
		val |= self.parity_err_en << 2
		val |= self.underflow_err_en << 3
		val |= self.overflow_err_en << 4
		val |= self.maj_vote_err_en << 5
		val |= self.tx_fifo_almost_full_en << 6
		val |= self.tx_fifo_full_en << 7
		val |= self.tx_fifo_almost_empty_en << 8
		val |= self.tx_fifo_empty_en << 9
		val |= self.rx_fifo_almost_full_en << 10
		val |= self.rx_fifo_full_en << 11
		val |= self.rx_fifo_almost_empty_en << 12
		val |= self.rx_fifo_empty_en << 13
		val |= self.rcv_negedge_en << 14
		val |= self.rcv_posedge_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rcv_timeout_en = (val & 0x01) >> 0
		self.frame_err_en = (val & 0x02) >> 1
		self.parity_err_en = (val & 0x04) >> 2
		self.underflow_err_en = (val & 0x08) >> 3
		self.overflow_err_en = (val & 0x10) >> 4
		self.maj_vote_err_en = (val & 0x20) >> 5
		self.tx_fifo_almost_full_en = (val & 0x40) >> 6
		self.tx_fifo_full_en = (val & 0x80) >> 7
		self.tx_fifo_almost_empty_en = (val & 0x100) >> 8
		self.tx_fifo_empty_en = (val & 0x200) >> 9
		self.rx_fifo_almost_full_en = (val & 0x400) >> 10
		self.rx_fifo_full_en = (val & 0x800) >> 11
		self.rx_fifo_almost_empty_en = (val & 0x1000) >> 12
		self.rx_fifo_empty_en = (val & 0x2000) >> 13
		self.rcv_negedge_en = (val & 0x4000) >> 14
		self.rcv_posedge_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EN2:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+40
		self.rx_int_en = 0
		self.tx_int_en = 0
		self.cts_int_en = 0
		self.addr_match_en = 0
		self.baud_err_en = 0
		self.eot_en = 0
		self.dma_done_tx_intr_en = 0
		self.dma_done_rx_intr_en = 0
	def write(self):
		val = 0
		val |= self.rx_int_en << 0
		val |= self.tx_int_en << 1
		val |= self.cts_int_en << 2
		val |= self.addr_match_en << 3
		val |= self.baud_err_en << 4
		val |= self.eot_en << 5
		val |= self.dma_done_tx_intr_en << 6
		val |= self.dma_done_rx_intr_en << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rx_int_en = (val & 0x01) >> 0
		self.tx_int_en = (val & 0x02) >> 1
		self.cts_int_en = (val & 0x04) >> 2
		self.addr_match_en = (val & 0x08) >> 3
		self.baud_err_en = (val & 0x10) >> 4
		self.eot_en = (val & 0x20) >> 5
		self.dma_done_tx_intr_en = (val & 0x40) >> 6
		self.dma_done_rx_intr_en = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_NMI_EN1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+44
		self.rcv_timeout_nmi_en = 0
		self.frame_err_nmi_en = 0
		self.parity_err_nmi_en = 0
		self.underflow_err_nmi_en = 0
		self.overflow_err_nmi_en = 0
		self.maj_vote_err_nmi_en = 0
		self.tx_fifo_almost_full_nmi_en = 0
		self.tx_fifo_full_nmi_en = 0
		self.tx_fifo_almost_empty_nmi_en = 0
		self.tx_fifo_empty_nmi_en = 0
		self.rx_fifo_almost_full_nmi_en = 0
		self.rx_fifo_full_nmi_en = 0
		self.rx_fifo_almost_empty_nmi_en = 0
		self.rx_fifo_empty_nmi_en = 0
		self.rcv_negedge_nmi_en = 0
		self.rcv_posedge_nmi_en = 0
	def write(self):
		val = 0
		val |= self.rcv_timeout_nmi_en << 0
		val |= self.frame_err_nmi_en << 1
		val |= self.parity_err_nmi_en << 2
		val |= self.underflow_err_nmi_en << 3
		val |= self.overflow_err_nmi_en << 4
		val |= self.maj_vote_err_nmi_en << 5
		val |= self.tx_fifo_almost_full_nmi_en << 6
		val |= self.tx_fifo_full_nmi_en << 7
		val |= self.tx_fifo_almost_empty_nmi_en << 8
		val |= self.tx_fifo_empty_nmi_en << 9
		val |= self.rx_fifo_almost_full_nmi_en << 10
		val |= self.rx_fifo_full_nmi_en << 11
		val |= self.rx_fifo_almost_empty_nmi_en << 12
		val |= self.rx_fifo_empty_nmi_en << 13
		val |= self.rcv_negedge_nmi_en << 14
		val |= self.rcv_posedge_nmi_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rcv_timeout_nmi_en = (val & 0x01) >> 0
		self.frame_err_nmi_en = (val & 0x02) >> 1
		self.parity_err_nmi_en = (val & 0x04) >> 2
		self.underflow_err_nmi_en = (val & 0x08) >> 3
		self.overflow_err_nmi_en = (val & 0x10) >> 4
		self.maj_vote_err_nmi_en = (val & 0x20) >> 5
		self.tx_fifo_almost_full_nmi_en = (val & 0x40) >> 6
		self.tx_fifo_full_nmi_en = (val & 0x80) >> 7
		self.tx_fifo_almost_empty_nmi_en = (val & 0x100) >> 8
		self.tx_fifo_empty_nmi_en = (val & 0x200) >> 9
		self.rx_fifo_almost_full_nmi_en = (val & 0x400) >> 10
		self.rx_fifo_full_nmi_en = (val & 0x800) >> 11
		self.rx_fifo_almost_empty_nmi_en = (val & 0x1000) >> 12
		self.rx_fifo_empty_nmi_en = (val & 0x2000) >> 13
		self.rcv_negedge_nmi_en = (val & 0x4000) >> 14
		self.rcv_posedge_nmi_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_NMI_EN2:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+48
		self.rx_int_nmi_en = 0
		self.tx_int_nmi_en = 0
		self.cts_int_nmi_en = 0
		self.addr_match_nmi_en = 0
		self.baud_err_nmi_en = 0
		self.eot_nmi_en = 0
		self.dma_done_tx_intr_nmi_en = 0
		self.dma_done_rx_intr_nmi_en = 0
	def write(self):
		val = 0
		val |= self.rx_int_nmi_en << 0
		val |= self.tx_int_nmi_en << 1
		val |= self.cts_int_nmi_en << 2
		val |= self.addr_match_nmi_en << 3
		val |= self.baud_err_nmi_en << 4
		val |= self.eot_nmi_en << 5
		val |= self.dma_done_tx_intr_nmi_en << 6
		val |= self.dma_done_rx_intr_nmi_en << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rx_int_nmi_en = (val & 0x01) >> 0
		self.tx_int_nmi_en = (val & 0x02) >> 1
		self.cts_int_nmi_en = (val & 0x04) >> 2
		self.addr_match_nmi_en = (val & 0x08) >> 3
		self.baud_err_nmi_en = (val & 0x10) >> 4
		self.eot_nmi_en = (val & 0x20) >> 5
		self.dma_done_tx_intr_nmi_en = (val & 0x40) >> 6
		self.dma_done_rx_intr_nmi_en = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_SW_SET:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+52
		self.rcv_timeout_sw_set = 0
		self.frame_err_sw_set = 0
		self.parity_err_sw_set = 0
		self.underflow_err_sw_set = 0
		self.overflow_err_sw_set = 0
		self.maj_vote_err_sw_set = 0
		self.tx_fifo_almost_full_sw_set = 0
		self.tx_fifo_full_sw_set = 0
		self.tx_fifo_almost_empty_sw_set = 0
		self.tx_fifo_empty_sw_set = 0
		self.rx_fifo_almost_full_sw_set = 0
		self.rx_fifo_full_sw_set = 0
		self.rx_fifo_almost_empty_sw_set = 0
		self.rx_fifo_empty_sw_set = 0
		self.rcv_negedge_sw_set = 0
		self.rcv_posedge_sw_set = 0
		self.rx_int_sw_set = 0
		self.tx_int_sw_set = 0
		self.cts_int_sw_set = 0
		self.addr_match_sw_set = 0
		self.baud_err_sw_set = 0
		self.eot_sw_set = 0
		self.dma_done_tx_intr_sw_set = 0
		self.dma_done_rx_intr_sw_set = 0
	def write(self):
		val = 0
		val |= self.rcv_timeout_sw_set << 0
		val |= self.frame_err_sw_set << 1
		val |= self.parity_err_sw_set << 2
		val |= self.underflow_err_sw_set << 3
		val |= self.overflow_err_sw_set << 4
		val |= self.maj_vote_err_sw_set << 5
		val |= self.tx_fifo_almost_full_sw_set << 6
		val |= self.tx_fifo_full_sw_set << 7
		val |= self.tx_fifo_almost_empty_sw_set << 8
		val |= self.tx_fifo_empty_sw_set << 9
		val |= self.rx_fifo_almost_full_sw_set << 10
		val |= self.rx_fifo_full_sw_set << 11
		val |= self.rx_fifo_almost_empty_sw_set << 12
		val |= self.rx_fifo_empty_sw_set << 13
		val |= self.rcv_negedge_sw_set << 14
		val |= self.rcv_posedge_sw_set << 15
		val |= self.rx_int_sw_set << 16
		val |= self.tx_int_sw_set << 17
		val |= self.cts_int_sw_set << 18
		val |= self.addr_match_sw_set << 19
		val |= self.baud_err_sw_set << 20
		val |= self.eot_sw_set << 21
		val |= self.dma_done_tx_intr_sw_set << 22
		val |= self.dma_done_rx_intr_sw_set << 23
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rcv_timeout_sw_set = (val & 0x01) >> 0
		self.frame_err_sw_set = (val & 0x02) >> 1
		self.parity_err_sw_set = (val & 0x04) >> 2
		self.underflow_err_sw_set = (val & 0x08) >> 3
		self.overflow_err_sw_set = (val & 0x10) >> 4
		self.maj_vote_err_sw_set = (val & 0x20) >> 5
		self.tx_fifo_almost_full_sw_set = (val & 0x40) >> 6
		self.tx_fifo_full_sw_set = (val & 0x80) >> 7
		self.tx_fifo_almost_empty_sw_set = (val & 0x100) >> 8
		self.tx_fifo_empty_sw_set = (val & 0x200) >> 9
		self.rx_fifo_almost_full_sw_set = (val & 0x400) >> 10
		self.rx_fifo_full_sw_set = (val & 0x800) >> 11
		self.rx_fifo_almost_empty_sw_set = (val & 0x1000) >> 12
		self.rx_fifo_empty_sw_set = (val & 0x2000) >> 13
		self.rcv_negedge_sw_set = (val & 0x4000) >> 14
		self.rcv_posedge_sw_set = (val & 0x8000) >> 15
		self.rx_int_sw_set = (val & 0x10000) >> 16
		self.tx_int_sw_set = (val & 0x20000) >> 17
		self.cts_int_sw_set = (val & 0x40000) >> 18
		self.addr_match_sw_set = (val & 0x80000) >> 19
		self.baud_err_sw_set = (val & 0x100000) >> 20
		self.eot_sw_set = (val & 0x200000) >> 21
		self.dma_done_tx_intr_sw_set = (val & 0x400000) >> 22
		self.dma_done_rx_intr_sw_set = (val & 0x800000) >> 23
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_RX_INTR_EN1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+56
		self.dma_rx_rcv_timeout_en = 0
		self.dma_rx_frame_err_en = 0
		self.dma_rx_parity_err_en = 0
		self.dma_rx_underflow_err_en = 0
		self.dma_rx_overflow_err_en = 0
		self.dma_rx_maj_vote_err_en = 0
		self.dma_rx_tx_fifo_almost_full_en = 0
		self.dma_rx_tx_fifo_full_en = 0
		self.dma_rx_tx_fifo_almost_empty_en = 0
		self.dma_rx_tx_fifo_empty_en = 0
		self.dma_rx_rx_fifo_almost_full_en = 0
		self.dma_rx_rx_fifo_full_en = 0
		self.dma_rx_rx_fifo_almost_empty_en = 0
		self.dma_rx_rx_fifo_empty_en = 0
		self.dma_rx_rcv_negedge_en = 0
		self.dma_rx_rcv_posedge_en = 0
	def write(self):
		val = 0
		val |= self.dma_rx_rcv_timeout_en << 0
		val |= self.dma_rx_frame_err_en << 1
		val |= self.dma_rx_parity_err_en << 2
		val |= self.dma_rx_underflow_err_en << 3
		val |= self.dma_rx_overflow_err_en << 4
		val |= self.dma_rx_maj_vote_err_en << 5
		val |= self.dma_rx_tx_fifo_almost_full_en << 6
		val |= self.dma_rx_tx_fifo_full_en << 7
		val |= self.dma_rx_tx_fifo_almost_empty_en << 8
		val |= self.dma_rx_tx_fifo_empty_en << 9
		val |= self.dma_rx_rx_fifo_almost_full_en << 10
		val |= self.dma_rx_rx_fifo_full_en << 11
		val |= self.dma_rx_rx_fifo_almost_empty_en << 12
		val |= self.dma_rx_rx_fifo_empty_en << 13
		val |= self.dma_rx_rcv_negedge_en << 14
		val |= self.dma_rx_rcv_posedge_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_rx_rcv_timeout_en = (val & 0x01) >> 0
		self.dma_rx_frame_err_en = (val & 0x02) >> 1
		self.dma_rx_parity_err_en = (val & 0x04) >> 2
		self.dma_rx_underflow_err_en = (val & 0x08) >> 3
		self.dma_rx_overflow_err_en = (val & 0x10) >> 4
		self.dma_rx_maj_vote_err_en = (val & 0x20) >> 5
		self.dma_rx_tx_fifo_almost_full_en = (val & 0x40) >> 6
		self.dma_rx_tx_fifo_full_en = (val & 0x80) >> 7
		self.dma_rx_tx_fifo_almost_empty_en = (val & 0x100) >> 8
		self.dma_rx_tx_fifo_empty_en = (val & 0x200) >> 9
		self.dma_rx_rx_fifo_almost_full_en = (val & 0x400) >> 10
		self.dma_rx_rx_fifo_full_en = (val & 0x800) >> 11
		self.dma_rx_rx_fifo_almost_empty_en = (val & 0x1000) >> 12
		self.dma_rx_rx_fifo_empty_en = (val & 0x2000) >> 13
		self.dma_rx_rcv_negedge_en = (val & 0x4000) >> 14
		self.dma_rx_rcv_posedge_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_RX_INTR_EN2:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+60
		self.dma_rx_rx_int_en = 0
		self.dma_rx_tx_int_en = 0
		self.dma_rx_cts_int_en = 0
		self.dma_rx_addr_match_en = 0
		self.dma_rx_baud_err_en = 0
		self.dma_rx_eot_en = 0
		self.dma_rx_dma_done_tx_intr_en = 0
		self.dma_rx_dma_done_rx_intr_en = 0
	def write(self):
		val = 0
		val |= self.dma_rx_rx_int_en << 0
		val |= self.dma_rx_tx_int_en << 1
		val |= self.dma_rx_cts_int_en << 2
		val |= self.dma_rx_addr_match_en << 3
		val |= self.dma_rx_baud_err_en << 4
		val |= self.dma_rx_eot_en << 5
		val |= self.dma_rx_dma_done_tx_intr_en << 6
		val |= self.dma_rx_dma_done_rx_intr_en << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_rx_rx_int_en = (val & 0x01) >> 0
		self.dma_rx_tx_int_en = (val & 0x02) >> 1
		self.dma_rx_cts_int_en = (val & 0x04) >> 2
		self.dma_rx_addr_match_en = (val & 0x08) >> 3
		self.dma_rx_baud_err_en = (val & 0x10) >> 4
		self.dma_rx_eot_en = (val & 0x20) >> 5
		self.dma_rx_dma_done_tx_intr_en = (val & 0x40) >> 6
		self.dma_rx_dma_done_rx_intr_en = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_TX_INTR_EN1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+64
		self.dma_tx_rcv_timeout_en = 0
		self.dma_tx_frame_err_en = 0
		self.dma_tx_parity_err_en = 0
		self.dma_tx_underflow_err_en = 0
		self.dma_tx_overflow_err_en = 0
		self.dma_tx_maj_vote_err_en = 0
		self.dma_tx_tx_fifo_almost_full_en = 0
		self.dma_tx_tx_fifo_full_en = 0
		self.dma_tx_tx_fifo_almost_empty_en = 0
		self.dma_tx_tx_fifo_empty_en = 0
		self.dma_tx_rx_fifo_almost_full_en = 0
		self.dma_tx_rx_fifo_full_en = 0
		self.dma_tx_rx_fifo_almost_empty_en = 0
		self.dma_tx_rx_fifo_empty_en = 0
		self.dma_tx_rcv_negedge_en = 0
		self.dma_tx_rcv_posedge_en = 0
	def write(self):
		val = 0
		val |= self.dma_tx_rcv_timeout_en << 0
		val |= self.dma_tx_frame_err_en << 1
		val |= self.dma_tx_parity_err_en << 2
		val |= self.dma_tx_underflow_err_en << 3
		val |= self.dma_tx_overflow_err_en << 4
		val |= self.dma_tx_maj_vote_err_en << 5
		val |= self.dma_tx_tx_fifo_almost_full_en << 6
		val |= self.dma_tx_tx_fifo_full_en << 7
		val |= self.dma_tx_tx_fifo_almost_empty_en << 8
		val |= self.dma_tx_tx_fifo_empty_en << 9
		val |= self.dma_tx_rx_fifo_almost_full_en << 10
		val |= self.dma_tx_rx_fifo_full_en << 11
		val |= self.dma_tx_rx_fifo_almost_empty_en << 12
		val |= self.dma_tx_rx_fifo_empty_en << 13
		val |= self.dma_tx_rcv_negedge_en << 14
		val |= self.dma_tx_rcv_posedge_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_tx_rcv_timeout_en = (val & 0x01) >> 0
		self.dma_tx_frame_err_en = (val & 0x02) >> 1
		self.dma_tx_parity_err_en = (val & 0x04) >> 2
		self.dma_tx_underflow_err_en = (val & 0x08) >> 3
		self.dma_tx_overflow_err_en = (val & 0x10) >> 4
		self.dma_tx_maj_vote_err_en = (val & 0x20) >> 5
		self.dma_tx_tx_fifo_almost_full_en = (val & 0x40) >> 6
		self.dma_tx_tx_fifo_full_en = (val & 0x80) >> 7
		self.dma_tx_tx_fifo_almost_empty_en = (val & 0x100) >> 8
		self.dma_tx_tx_fifo_empty_en = (val & 0x200) >> 9
		self.dma_tx_rx_fifo_almost_full_en = (val & 0x400) >> 10
		self.dma_tx_rx_fifo_full_en = (val & 0x800) >> 11
		self.dma_tx_rx_fifo_almost_empty_en = (val & 0x1000) >> 12
		self.dma_tx_rx_fifo_empty_en = (val & 0x2000) >> 13
		self.dma_tx_rcv_negedge_en = (val & 0x4000) >> 14
		self.dma_tx_rcv_posedge_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_TX_INTR_EN2:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+68
		self.dma_tx_rx_int_en = 0
		self.dma_tx_tx_int_en = 0
		self.dma_tx_cts_int_en = 0
		self.dma_tx_addr_match_en = 0
		self.dma_tx_baud_err_en = 0
		self.dma_tx_eot_en = 0
		self.dma_tx_dma_done_tx_intr_en = 0
		self.dma_tx_dma_done_rx_intr_en = 0
	def write(self):
		val = 0
		val |= self.dma_tx_rx_int_en << 0
		val |= self.dma_tx_tx_int_en << 1
		val |= self.dma_tx_cts_int_en << 2
		val |= self.dma_tx_addr_match_en << 3
		val |= self.dma_tx_baud_err_en << 4
		val |= self.dma_tx_eot_en << 5
		val |= self.dma_tx_dma_done_tx_intr_en << 6
		val |= self.dma_tx_dma_done_rx_intr_en << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_tx_rx_int_en = (val & 0x01) >> 0
		self.dma_tx_tx_int_en = (val & 0x02) >> 1
		self.dma_tx_cts_int_en = (val & 0x04) >> 2
		self.dma_tx_addr_match_en = (val & 0x08) >> 3
		self.dma_tx_baud_err_en = (val & 0x10) >> 4
		self.dma_tx_eot_en = (val & 0x20) >> 5
		self.dma_tx_dma_done_tx_intr_en = (val & 0x40) >> 6
		self.dma_tx_dma_done_rx_intr_en = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+72
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

class UART_CLKCFG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+76
		self.blck_async = 0
		self.async_req_en_key = 0
	def write(self):
		val = 0
		val |= self.blck_async << 0
		val |= self.async_req_en_key << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.blck_async = (val & 0x01) >> 0
		self.async_req_en_key = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class UART_FIFOLS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+80
		self.tx_fifo_ls = 0
		self.rx_to = 0
		self.rx_fifo_ls = 0
	def write(self):
		val = 0
		val |= self.tx_fifo_ls << 0
		val |= self.rx_to << 2
		val |= self.rx_fifo_ls << 6
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.tx_fifo_ls = (val & 0x03) >> 0
		self.rx_to = (val & 0x3C) >> 2
		self.rx_fifo_ls = (val & 0xC0) >> 6
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class UART_FIFOSTS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+84
		self.tx_fifo_full_sts = 0
		self.tx_fifo_almost_full_sts = 0
		self.tx_fifo_empty_sts = 0
		self.tx_fifo_almost_empty_sts = 0
		self.rx_fifo_full_sts = 0
		self.rx_fifo_almost_full_sts = 0
		self.rx_fifo_empty_sts = 0
		self.rx_fifo_almost_empty_sts = 0
	def write(self):
		val = 0
		val |= self.tx_fifo_full_sts << 0
		val |= self.tx_fifo_almost_full_sts << 1
		val |= self.tx_fifo_empty_sts << 2
		val |= self.tx_fifo_almost_empty_sts << 3
		val |= self.rx_fifo_full_sts << 4
		val |= self.rx_fifo_almost_full_sts << 5
		val |= self.rx_fifo_empty_sts << 6
		val |= self.rx_fifo_almost_empty_sts << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.tx_fifo_full_sts = (val & 0x01) >> 0
		self.tx_fifo_almost_full_sts = (val & 0x02) >> 1
		self.tx_fifo_empty_sts = (val & 0x04) >> 2
		self.tx_fifo_almost_empty_sts = (val & 0x08) >> 3
		self.rx_fifo_full_sts = (val & 0x10) >> 4
		self.rx_fifo_almost_full_sts = (val & 0x20) >> 5
		self.rx_fifo_empty_sts = (val & 0x40) >> 6
		self.rx_fifo_almost_empty_sts = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class UART_CFG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+88
		self.wrd_len = 0
		self.par_en = 0
		self.evn_par = 0
		self.stck_par = 0
		self.stop_bit = 0
		self.send_idle = 0
	def write(self):
		val = 0
		val |= self.wrd_len << 0
		val |= self.par_en << 2
		val |= self.evn_par << 3
		val |= self.stck_par << 4
		val |= self.stop_bit << 5
		val |= self.send_idle << 6
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.wrd_len = (val & 0x03) >> 0
		self.par_en = (val & 0x04) >> 2
		self.evn_par = (val & 0x08) >> 3
		self.stck_par = (val & 0x10) >> 4
		self.stop_bit = (val & 0x20) >> 5
		self.send_idle = (val & 0x40) >> 6
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class UART_GFCTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+92
		self.gf_width = 0
		self.uart_data = 0
		self.uart_result = 0
	def write(self):
		val = 0
		val |= self.gf_width << 0
		val |= self.uart_data << 0
		val |= self.uart_result << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gf_width = (val & 0x3F) >> 0
		self.uart_data = (val & 0xFF) >> 0
		self.uart_result = (val & 0xFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class UART_BRDNUM:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+112
		self.num_m = 0
	def write(self):
		val = 0
		val |= self.num_m << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.num_m = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class UART_BRDDEN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+116
		self.den_n = 0
	def write(self):
		val = 0
		val |= self.den_n << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.den_n = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class UART_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+120
		self.uart_en = 0
		self.uart_msb = 0
		self.majvote_en = 0
		self.fifo_en = 0
		self.os = 0
		self.loopback_en = 0
		self.mode = 0
		self.tx_en = 0
		self.rx_en = 0
		self.tx_out_en = 0
		self.tx_out_ctrl = 0
		self.cts_en = 0
		self.rts_en = 0
		self.rts_val = 0
	def write(self):
		val = 0
		val |= self.uart_en << 0
		val |= self.uart_msb << 1
		val |= self.majvote_en << 2
		val |= self.fifo_en << 3
		val |= self.os << 4
		val |= self.loopback_en << 9
		val |= self.mode << 10
		val |= self.tx_en << 12
		val |= self.rx_en << 13
		val |= self.tx_out_en << 14
		val |= self.tx_out_ctrl << 15
		val |= self.cts_en << 16
		val |= self.rts_en << 17
		val |= self.rts_val << 18
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.uart_en = (val & 0x01) >> 0
		self.uart_msb = (val & 0x02) >> 1
		self.majvote_en = (val & 0x04) >> 2
		self.fifo_en = (val & 0x08) >> 3
		self.os = (val & 0x1F0) >> 4
		self.loopback_en = (val & 0x200) >> 9
		self.mode = (val & 0xC00) >> 10
		self.tx_en = (val & 0x1000) >> 12
		self.rx_en = (val & 0x2000) >> 13
		self.tx_out_en = (val & 0x4000) >> 14
		self.tx_out_ctrl = (val & 0x8000) >> 15
		self.cts_en = (val & 0x10000) >> 16
		self.rts_en = (val & 0x20000) >> 17
		self.rts_val = (val & 0x40000) >> 18
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class UART_ADDR:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+124
		self.uart_addr = 0
	def write(self):
		val = 0
		val |= self.uart_addr << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.uart_addr = (val & 0xFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class UART_ADDRMASK:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+128
		self.addr_mask = 0
	def write(self):
		val = 0
		val |= self.addr_mask << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.addr_mask = (val & 0xFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+132
		self.cts_sts = 0
		self.busy = 0
		self.idle = 0
	def write(self):
		val = 0
		val |= self.cts_sts << 0
		val |= self.busy << 1
		val |= self.idle << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.cts_sts = (val & 0x01) >> 0
		self.busy = (val & 0x02) >> 1
		self.idle = (val & 0x04) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class FSM_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+136
		self.tx_state = 0
		self.rx_state = 0
	def write(self):
		val = 0
		val |= self.tx_state << 0
		val |= self.rx_state << 3
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.tx_state = (val & 0x07) >> 0
		self.rx_state = (val & 0x78) >> 3
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class uart:
	def __init__(self,dev,base_addr):
		self.DESC = DESC(dev,base_addr)
		self.PWR_EN = PWR_EN(dev,base_addr)
		self.RST_CTRL = RST_CTRL(dev,base_addr)
		self.RST_STS = RST_STS(dev,base_addr)
		self.CLK_CTRL = CLK_CTRL(dev,base_addr)
		self.CLK_SEL = CLK_SEL(dev,base_addr)
		self.CLK_DIV = CLK_DIV(dev,base_addr)
		self.DBG_CTRL = DBG_CTRL(dev,base_addr)
		self.INTR_EVENT = INTR_EVENT(dev,base_addr)
		self.INTR_EN1 = INTR_EN1(dev,base_addr)
		self.INTR_EN2 = INTR_EN2(dev,base_addr)
		self.INTR_NMI_EN1 = INTR_NMI_EN1(dev,base_addr)
		self.INTR_NMI_EN2 = INTR_NMI_EN2(dev,base_addr)
		self.INTR_SW_SET = INTR_SW_SET(dev,base_addr)
		self.DMA_RX_INTR_EN1 = DMA_RX_INTR_EN1(dev,base_addr)
		self.DMA_RX_INTR_EN2 = DMA_RX_INTR_EN2(dev,base_addr)
		self.DMA_TX_INTR_EN1 = DMA_TX_INTR_EN1(dev,base_addr)
		self.DMA_TX_INTR_EN2 = DMA_TX_INTR_EN2(dev,base_addr)
		self.INTR_STS = INTR_STS(dev,base_addr)
		self.UART_CLKCFG = UART_CLKCFG(dev,base_addr)
		self.UART_FIFOLS = UART_FIFOLS(dev,base_addr)
		self.UART_FIFOSTS = UART_FIFOSTS(dev,base_addr)
		self.UART_CFG = UART_CFG(dev,base_addr)
		self.UART_GFCTL = UART_GFCTL(dev,base_addr)
		self.UART_BRDNUM = UART_BRDNUM(dev,base_addr)
		self.UART_BRDDEN = UART_BRDDEN(dev,base_addr)
		self.UART_CTRL = UART_CTRL(dev,base_addr)
		self.UART_ADDR = UART_ADDR(dev,base_addr)
		self.UART_ADDRMASK = UART_ADDRMASK(dev,base_addr)
		self.STS = STS(dev,base_addr)
		self.FSM_STS = FSM_STS(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
