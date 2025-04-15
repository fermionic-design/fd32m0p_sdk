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

class INTR_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+20
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
		self._addr = base_addr+24
		self.dac_rdy = 0
		self.fifo_full = 0
		self.fifo_almost_full = 0
		self.fifo_empty = 0
		self.fifo_almost_empty = 0
		self.fifo_overflow = 0
		self.fifo_underflow = 0
		self.dma_done = 0
	def write(self):
		val = 0
		val |= self.dac_rdy << 0
		val |= self.fifo_full << 1
		val |= self.fifo_almost_full << 2
		val |= self.fifo_empty << 3
		val |= self.fifo_almost_empty << 4
		val |= self.fifo_overflow << 5
		val |= self.fifo_underflow << 6
		val |= self.dma_done << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dac_rdy = (val & 0x01) >> 0
		self.fifo_full = (val & 0x02) >> 1
		self.fifo_almost_full = (val & 0x04) >> 2
		self.fifo_empty = (val & 0x08) >> 3
		self.fifo_almost_empty = (val & 0x10) >> 4
		self.fifo_overflow = (val & 0x20) >> 5
		self.fifo_underflow = (val & 0x40) >> 6
		self.dma_done = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+28
		self.dac_rdy_en = 0
		self.fifo_full_en = 0
		self.fifo_almost_full_en = 0
		self.fifo_empty_en = 0
		self.fifo_almost_empty_en = 0
		self.fifo_overflow_en = 0
		self.fifo_underflow_en = 0
		self.dma_done_en = 0
	def write(self):
		val = 0
		val |= self.dac_rdy_en << 0
		val |= self.fifo_full_en << 1
		val |= self.fifo_almost_full_en << 2
		val |= self.fifo_empty_en << 3
		val |= self.fifo_almost_empty_en << 4
		val |= self.fifo_overflow_en << 5
		val |= self.fifo_underflow_en << 6
		val |= self.dma_done_en << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dac_rdy_en = (val & 0x01) >> 0
		self.fifo_full_en = (val & 0x02) >> 1
		self.fifo_almost_full_en = (val & 0x04) >> 2
		self.fifo_empty_en = (val & 0x08) >> 3
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
		self._addr = base_addr+32
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
		self._addr = base_addr+36
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
		self._addr = base_addr+40
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

class EVENT_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+44
		self.chan_id0 = 0
	def write(self):
		val = 0
		val |= self.chan_id0 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.chan_id0 = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DAC_CTRL0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+48
		self.enable = 0
		self.res = 0
		self.data_fmt = 0
	def write(self):
		val = 0
		val |= self.enable << 0
		val |= self.res << 8
		val |= self.data_fmt << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.enable = (val & 0x01) >> 0
		self.res = (val & 0x100) >> 8
		self.data_fmt = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DAC_CTRL1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+52
		self.amp_en = 0
		self.amp_hiz = 0
		self.vrefp_sel = 0
		self.out_en = 0
	def write(self):
		val = 0
		val |= self.amp_en << 0
		val |= self.amp_hiz << 8
		val |= self.vrefp_sel << 16
		val |= self.out_en << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.amp_en = (val & 0x01) >> 0
		self.amp_hiz = (val & 0x100) >> 8
		self.vrefp_sel = (val & 0x10000) >> 16
		self.out_en = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DAC_CTRL2:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+56
		self.fifo_en = 0
		self.fifo_th = 0
		self.fifo_trig_sel = 0
		self.dma_trig_en = 0
	def write(self):
		val = 0
		val |= self.fifo_en << 0
		val |= self.fifo_th << 8
		val |= self.fifo_trig_sel << 16
		val |= self.dma_trig_en << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.fifo_en = (val & 0x01) >> 0
		self.fifo_th = (val & 0x300) >> 8
		self.fifo_trig_sel = (val & 0x30000) >> 16
		self.dma_trig_en = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DAC_CTRL3:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+60
		self.samp_tim_en = 0
		self.samp_tim_rate = 0
	def write(self):
		val = 0
		val |= self.samp_tim_en << 0
		val |= self.samp_tim_rate << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.samp_tim_en = (val & 0x01) >> 0
		self.samp_tim_rate = (val & 0xF00) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DAC_DATA:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+64
		self.dac_code = 0
	def write(self):
		val = 0
		val |= self.dac_code << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dac_code = (val & 0x1FFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CAL_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+68
		self.cal_en = 0
		self.cal_sel = 0
	def write(self):
		val = 0
		val |= self.cal_en << 0
		val |= self.cal_sel << 1
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.cal_en = (val & 0x01) >> 0
		self.cal_sel = (val & 0x02) >> 1
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CAL_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+72
		self.cal_done = 0
		self.cal_data = 0
	def write(self):
		val = 0
		val |= self.cal_done << 0
		val |= self.cal_data << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.cal_done = (val & 0x01) >> 0
		self.cal_data = (val & 0x7F00) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SPARE_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+76
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
		self._addr = base_addr+80
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

class dac:
	def __init__(self,dev,base_addr):
		self.DESC = DESC(dev,base_addr)
		self.PWR_EN = PWR_EN(dev,base_addr)
		self.RST_CTRL = RST_CTRL(dev,base_addr)
		self.RST_STS = RST_STS(dev,base_addr)
		self.CLK_CTRL = CLK_CTRL(dev,base_addr)
		self.INTR_STS = INTR_STS(dev,base_addr)
		self.INTR_EVENT = INTR_EVENT(dev,base_addr)
		self.INTR_EN = INTR_EN(dev,base_addr)
		self.INTR_NMI_EN = INTR_NMI_EN(dev,base_addr)
		self.EVENT_EN = EVENT_EN(dev,base_addr)
		self.INTR_SW_SET = INTR_SW_SET(dev,base_addr)
		self.EVENT_CTRL = EVENT_CTRL(dev,base_addr)
		self.DAC_CTRL0 = DAC_CTRL0(dev,base_addr)
		self.DAC_CTRL1 = DAC_CTRL1(dev,base_addr)
		self.DAC_CTRL2 = DAC_CTRL2(dev,base_addr)
		self.DAC_CTRL3 = DAC_CTRL3(dev,base_addr)
		self.DAC_DATA = DAC_DATA(dev,base_addr)
		self.CAL_CTRL = CAL_CTRL(dev,base_addr)
		self.CAL_STS = CAL_STS(dev,base_addr)
		self.SPARE_CTRL = SPARE_CTRL(dev,base_addr)
		self.SPARE_STS = SPARE_STS(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
