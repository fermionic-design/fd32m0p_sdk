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

class TX_DATA:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+20
		self.tx_data = 0
	def write(self):
		val = 0
		val |= self.tx_data << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.tx_data = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class TX_FLAGS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+24
		self.tx_empty = 0
		self.tx_flags = 0
	def write(self):
		val = 0
		val |= self.tx_empty << 0
		val |= self.tx_flags << 1
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.tx_empty = (val & 0x01) >> 0
		self.tx_flags = (val & 0xFFFFFFFE) >> 1
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class RX_DATA:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+28
		self.rx_data = 0
	def write(self):
		val = 0
		val |= self.rx_data << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rx_data = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class RX_FLAGS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+32
		self.rx_full = 0
		self.rx_flags = 0
	def write(self):
		val = 0
		val |= self.rx_full << 0
		val |= self.rx_flags << 1
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rx_full = (val & 0x01) >> 0
		self.rx_flags = (val & 0xFFFFFFFE) >> 1
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+36
		self.intr_first = 0
	def write(self):
		val = 0
		val |= self.intr_first << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.intr_first = (val & 0xFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EVENT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+40
		self.rx_full_intr = 0
		self.tx_empty_intr = 0
		self.debug_started_intr = 0
		self.debug_stopped_intr = 0
	def write(self):
		val = 0
		val |= self.rx_full_intr << 0
		val |= self.tx_empty_intr << 1
		val |= self.debug_started_intr << 2
		val |= self.debug_stopped_intr << 3
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rx_full_intr = (val & 0x01) >> 0
		self.tx_empty_intr = (val & 0x02) >> 1
		self.debug_started_intr = (val & 0x04) >> 2
		self.debug_stopped_intr = (val & 0x08) >> 3
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+44
		self.rx_full_en = 0
		self.tx_empty_en = 0
		self.debug_started_en = 0
		self.debug_stopped_en = 0
		self.fifo_almost_empty_en = 0
		self.fifo_overflow_en = 0
		self.fifo_underflow_en = 0
		self.dma_done_en = 0
	def write(self):
		val = 0
		val |= self.rx_full_en << 0
		val |= self.tx_empty_en << 1
		val |= self.debug_started_en << 2
		val |= self.debug_stopped_en << 3
		val |= self.fifo_almost_empty_en << 4
		val |= self.fifo_overflow_en << 5
		val |= self.fifo_underflow_en << 6
		val |= self.dma_done_en << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rx_full_en = (val & 0x01) >> 0
		self.tx_empty_en = (val & 0x02) >> 1
		self.debug_started_en = (val & 0x04) >> 2
		self.debug_stopped_en = (val & 0x08) >> 3
		self.fifo_almost_empty_en = (val & 0x10) >> 4
		self.fifo_overflow_en = (val & 0x20) >> 5
		self.fifo_underflow_en = (val & 0x40) >> 6
		self.dma_done_en = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_NMI_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+48
		self.dac_rdy_nmi_en = 0
		self.fifo_full_nmi_en = 0
		self.fifo_almost_full_nmi_en = 0
		self.fifo_empty_nmi_en = 0
		self.fifo_almost_empty_nmi_en = 0
		self.fifo_overflow_nmi_en = 0
		self.fifo_underflow_nmi_en = 0
		self.dma_done_nmi_en = 0
	def write(self):
		val = 0
		val |= self.dac_rdy_nmi_en << 0
		val |= self.fifo_full_nmi_en << 1
		val |= self.fifo_almost_full_nmi_en << 2
		val |= self.fifo_empty_nmi_en << 3
		val |= self.fifo_almost_empty_nmi_en << 4
		val |= self.fifo_overflow_nmi_en << 5
		val |= self.fifo_underflow_nmi_en << 6
		val |= self.dma_done_nmi_en << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dac_rdy_nmi_en = (val & 0x01) >> 0
		self.fifo_full_nmi_en = (val & 0x02) >> 1
		self.fifo_almost_full_nmi_en = (val & 0x04) >> 2
		self.fifo_empty_nmi_en = (val & 0x08) >> 3
		self.fifo_almost_empty_nmi_en = (val & 0x10) >> 4
		self.fifo_overflow_nmi_en = (val & 0x20) >> 5
		self.fifo_underflow_nmi_en = (val & 0x40) >> 6
		self.dma_done_nmi_en = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class EVENT_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+52
		self.dac_rdy_event_en = 0
		self.fifo_full_event_en = 0
		self.fifo_almost_full_event_en = 0
		self.fifo_empty_event_en = 0
		self.fifo_almost_empty_event_en = 0
		self.fifo_overflow_event_en = 0
		self.fifo_underflow_event_en = 0
		self.dma_done_event_en = 0
	def write(self):
		val = 0
		val |= self.dac_rdy_event_en << 0
		val |= self.fifo_full_event_en << 1
		val |= self.fifo_almost_full_event_en << 2
		val |= self.fifo_empty_event_en << 3
		val |= self.fifo_almost_empty_event_en << 4
		val |= self.fifo_overflow_event_en << 5
		val |= self.fifo_underflow_event_en << 6
		val |= self.dma_done_event_en << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dac_rdy_event_en = (val & 0x01) >> 0
		self.fifo_full_event_en = (val & 0x02) >> 1
		self.fifo_almost_full_event_en = (val & 0x04) >> 2
		self.fifo_empty_event_en = (val & 0x08) >> 3
		self.fifo_almost_empty_event_en = (val & 0x10) >> 4
		self.fifo_overflow_event_en = (val & 0x20) >> 5
		self.fifo_underflow_event_en = (val & 0x40) >> 6
		self.dma_done_event_en = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_SW_SET:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+56
		self.dac_rdy_sw_set = 0
		self.fifo_full_sw_set = 0
		self.fifo_almost_full_sw_set = 0
		self.fifo_empty_sw_set = 0
		self.fifo_almost_empty_sw_set = 0
		self.fifo_overflow_sw_set = 0
		self.fifo_underflow_sw_set = 0
		self.dma_done_sw_set = 0
	def write(self):
		val = 0
		val |= self.dac_rdy_sw_set << 0
		val |= self.fifo_full_sw_set << 1
		val |= self.fifo_almost_full_sw_set << 2
		val |= self.fifo_empty_sw_set << 3
		val |= self.fifo_almost_empty_sw_set << 4
		val |= self.fifo_overflow_sw_set << 5
		val |= self.fifo_underflow_sw_set << 6
		val |= self.dma_done_sw_set << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dac_rdy_sw_set = (val & 0x01) >> 0
		self.fifo_full_sw_set = (val & 0x02) >> 1
		self.fifo_almost_full_sw_set = (val & 0x04) >> 2
		self.fifo_empty_sw_set = (val & 0x08) >> 3
		self.fifo_almost_empty_sw_set = (val & 0x10) >> 4
		self.fifo_overflow_sw_set = (val & 0x20) >> 5
		self.fifo_underflow_sw_set = (val & 0x40) >> 6
		self.dma_done_sw_set = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class secure_ip_cpu:
	def __init__(self,dev,base_addr):
		self.DESC = DESC(dev,base_addr)
		self.PWR_EN = PWR_EN(dev,base_addr)
		self.RST_CTRL = RST_CTRL(dev,base_addr)
		self.RST_STS = RST_STS(dev,base_addr)
		self.CLK_CTRL = CLK_CTRL(dev,base_addr)
		self.TX_DATA = TX_DATA(dev,base_addr)
		self.TX_FLAGS = TX_FLAGS(dev,base_addr)
		self.RX_DATA = RX_DATA(dev,base_addr)
		self.RX_FLAGS = RX_FLAGS(dev,base_addr)
		self.INTR_STS = INTR_STS(dev,base_addr)
		self.INTR_EVENT = INTR_EVENT(dev,base_addr)
		self.INTR_EN = INTR_EN(dev,base_addr)
		self.INTR_NMI_EN = INTR_NMI_EN(dev,base_addr)
		self.EVENT_EN = EVENT_EN(dev,base_addr)
		self.INTR_SW_SET = INTR_SW_SET(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
