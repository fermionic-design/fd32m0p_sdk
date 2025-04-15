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

class DBG_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+16
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

class CLK_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+20
		self.clk_en = 0
		self.clk_div = 0
	def write(self):
		val = 0
		val |= self.clk_en << 0
		val |= self.clk_div << 1
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.clk_en = (val & 0x01) >> 0
		self.clk_div = (val & 0x0E) >> 1
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CLK_SEL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+24
		self.clk_sel = 0
	def write(self):
		val = 0
		val |= self.clk_sel << 0
		val = 0x00010001
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

class INTR_EVENT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+28
		self.trig_to_dma_flag = 0
		self.ov_flag = 0
		self.seq_ov_flow = 0
		self.wc_in_flag = 0
		self.wc_high_flag = 0
		self.wc_low_flag = 0
		self.dma_done = 0
		self.uf_flag = 0
		self.result0_flag = 0
		self.result1_flag = 0
		self.result2_flag = 0
		self.result3_flag = 0
		self.result4_flag = 0
		self.result5_flag = 0
		self.result6_flag = 0
		self.result7_flag = 0
		self.result8_flag = 0
		self.result9_flag = 0
		self.result10_flag = 0
		self.result11_flag = 0
		self.result12_flag = 0
		self.result13_flag = 0
		self.result14_flag = 0
		self.result15_flag = 0
	def write(self):
		val = 0
		val |= self.trig_to_dma_flag << 0
		val |= self.ov_flag << 1
		val |= self.seq_ov_flow << 2
		val |= self.wc_in_flag << 3
		val |= self.wc_high_flag << 4
		val |= self.wc_low_flag << 5
		val |= self.dma_done << 6
		val |= self.uf_flag << 7
		val |= self.result0_flag << 8
		val |= self.result1_flag << 9
		val |= self.result2_flag << 10
		val |= self.result3_flag << 11
		val |= self.result4_flag << 12
		val |= self.result5_flag << 13
		val |= self.result6_flag << 14
		val |= self.result7_flag << 15
		val |= self.result8_flag << 16
		val |= self.result9_flag << 17
		val |= self.result10_flag << 18
		val |= self.result11_flag << 19
		val |= self.result12_flag << 20
		val |= self.result13_flag << 21
		val |= self.result14_flag << 22
		val |= self.result15_flag << 23
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.trig_to_dma_flag = (val & 0x01) >> 0
		self.ov_flag = (val & 0x02) >> 1
		self.seq_ov_flow = (val & 0x04) >> 2
		self.wc_in_flag = (val & 0x08) >> 3
		self.wc_high_flag = (val & 0x10) >> 4
		self.wc_low_flag = (val & 0x20) >> 5
		self.dma_done = (val & 0x40) >> 6
		self.uf_flag = (val & 0x80) >> 7
		self.result0_flag = (val & 0x100) >> 8
		self.result1_flag = (val & 0x200) >> 9
		self.result2_flag = (val & 0x400) >> 10
		self.result3_flag = (val & 0x800) >> 11
		self.result4_flag = (val & 0x1000) >> 12
		self.result5_flag = (val & 0x2000) >> 13
		self.result6_flag = (val & 0x4000) >> 14
		self.result7_flag = (val & 0x8000) >> 15
		self.result8_flag = (val & 0x10000) >> 16
		self.result9_flag = (val & 0x20000) >> 17
		self.result10_flag = (val & 0x40000) >> 18
		self.result11_flag = (val & 0x80000) >> 19
		self.result12_flag = (val & 0x100000) >> 20
		self.result13_flag = (val & 0x200000) >> 21
		self.result14_flag = (val & 0x400000) >> 22
		self.result15_flag = (val & 0x800000) >> 23
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EN_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+32
		self.trig_to_dma_flag_en = 0
		self.ov_flag_en = 0
		self.seq_ov_flow_en = 0
		self.wc_in_flag_en = 0
		self.wc_high_flag_en = 0
		self.wc_low_flag_en = 0
		self.dma_done_en = 0
		self.uf_flag_en = 0
		self.result0_flag_en = 0
		self.result1_flag_en = 0
		self.result2_flag_en = 0
		self.result3_flag_en = 0
		self.result4_flag_en = 0
		self.result5_flag_en = 0
		self.result6_flag_en = 0
		self.result7_flag_en = 0
	def write(self):
		val = 0
		val |= self.trig_to_dma_flag_en << 0
		val |= self.ov_flag_en << 1
		val |= self.seq_ov_flow_en << 2
		val |= self.wc_in_flag_en << 3
		val |= self.wc_high_flag_en << 4
		val |= self.wc_low_flag_en << 5
		val |= self.dma_done_en << 6
		val |= self.uf_flag_en << 7
		val |= self.result0_flag_en << 8
		val |= self.result1_flag_en << 9
		val |= self.result2_flag_en << 10
		val |= self.result3_flag_en << 11
		val |= self.result4_flag_en << 12
		val |= self.result5_flag_en << 13
		val |= self.result6_flag_en << 14
		val |= self.result7_flag_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.trig_to_dma_flag_en = (val & 0x01) >> 0
		self.ov_flag_en = (val & 0x02) >> 1
		self.seq_ov_flow_en = (val & 0x04) >> 2
		self.wc_in_flag_en = (val & 0x08) >> 3
		self.wc_high_flag_en = (val & 0x10) >> 4
		self.wc_low_flag_en = (val & 0x20) >> 5
		self.dma_done_en = (val & 0x40) >> 6
		self.uf_flag_en = (val & 0x80) >> 7
		self.result0_flag_en = (val & 0x100) >> 8
		self.result1_flag_en = (val & 0x200) >> 9
		self.result2_flag_en = (val & 0x400) >> 10
		self.result3_flag_en = (val & 0x800) >> 11
		self.result4_flag_en = (val & 0x1000) >> 12
		self.result5_flag_en = (val & 0x2000) >> 13
		self.result6_flag_en = (val & 0x4000) >> 14
		self.result7_flag_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EN_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+36
		self.result8_flag_en = 0
		self.result9_flag_en = 0
		self.result10_flag_en = 0
		self.result11_flag_en = 0
		self.result12_flag_en = 0
		self.result13_flag_en = 0
		self.result14_flag_en = 0
		self.result15_flag_en = 0
	def write(self):
		val = 0
		val |= self.result8_flag_en << 0
		val |= self.result9_flag_en << 1
		val |= self.result10_flag_en << 2
		val |= self.result11_flag_en << 3
		val |= self.result12_flag_en << 4
		val |= self.result13_flag_en << 5
		val |= self.result14_flag_en << 6
		val |= self.result15_flag_en << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.result8_flag_en = (val & 0x01) >> 0
		self.result9_flag_en = (val & 0x02) >> 1
		self.result10_flag_en = (val & 0x04) >> 2
		self.result11_flag_en = (val & 0x08) >> 3
		self.result12_flag_en = (val & 0x10) >> 4
		self.result13_flag_en = (val & 0x20) >> 5
		self.result14_flag_en = (val & 0x40) >> 6
		self.result15_flag_en = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EN_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+40
		self.trig_to_dma_en = 0
		self.ov_dma_en = 0
		self.seq_ov_dma_en = 0
		self.wc_in_dma_en = 0
		self.wc_high_dma_en = 0
		self.wc_low_dma_en = 0
		self.dma_done_dma_en = 0
		self.uf_dma_en = 0
		self.result0_dma_en = 0
		self.result1_dma_en = 0
		self.result2_dma_en = 0
		self.result3_dma_en = 0
		self.result4_dma_en = 0
		self.result5_dma_en = 0
		self.result6_dma_en = 0
		self.result7_dma_en = 0
	def write(self):
		val = 0
		val |= self.trig_to_dma_en << 0
		val |= self.ov_dma_en << 1
		val |= self.seq_ov_dma_en << 2
		val |= self.wc_in_dma_en << 3
		val |= self.wc_high_dma_en << 4
		val |= self.wc_low_dma_en << 5
		val |= self.dma_done_dma_en << 6
		val |= self.uf_dma_en << 7
		val |= self.result0_dma_en << 8
		val |= self.result1_dma_en << 9
		val |= self.result2_dma_en << 10
		val |= self.result3_dma_en << 11
		val |= self.result4_dma_en << 12
		val |= self.result5_dma_en << 13
		val |= self.result6_dma_en << 14
		val |= self.result7_dma_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.trig_to_dma_en = (val & 0x01) >> 0
		self.ov_dma_en = (val & 0x02) >> 1
		self.seq_ov_dma_en = (val & 0x04) >> 2
		self.wc_in_dma_en = (val & 0x08) >> 3
		self.wc_high_dma_en = (val & 0x10) >> 4
		self.wc_low_dma_en = (val & 0x20) >> 5
		self.dma_done_dma_en = (val & 0x40) >> 6
		self.uf_dma_en = (val & 0x80) >> 7
		self.result0_dma_en = (val & 0x100) >> 8
		self.result1_dma_en = (val & 0x200) >> 9
		self.result2_dma_en = (val & 0x400) >> 10
		self.result3_dma_en = (val & 0x800) >> 11
		self.result4_dma_en = (val & 0x1000) >> 12
		self.result5_dma_en = (val & 0x2000) >> 13
		self.result6_dma_en = (val & 0x4000) >> 14
		self.result7_dma_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EN_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+44
		self.result8_dma_en = 0
		self.result9_dma_en = 0
		self.result10_dma_en = 0
		self.result11_dma_en = 0
		self.result12_dma_en = 0
		self.result13_dma_en = 0
		self.result14_dma_en = 0
		self.result15_dma_en = 0
	def write(self):
		val = 0
		val |= self.result8_dma_en << 0
		val |= self.result9_dma_en << 1
		val |= self.result10_dma_en << 2
		val |= self.result11_dma_en << 3
		val |= self.result12_dma_en << 4
		val |= self.result13_dma_en << 5
		val |= self.result14_dma_en << 6
		val |= self.result15_dma_en << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.result8_dma_en = (val & 0x01) >> 0
		self.result9_dma_en = (val & 0x02) >> 1
		self.result10_dma_en = (val & 0x04) >> 2
		self.result11_dma_en = (val & 0x08) >> 3
		self.result12_dma_en = (val & 0x10) >> 4
		self.result13_dma_en = (val & 0x20) >> 5
		self.result14_dma_en = (val & 0x40) >> 6
		self.result15_dma_en = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class EVENT_EN_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+48
		self.trig_to_dma_event_en = 0
		self.ov_flag_event_en = 0
		self.seq_ov_flow_event_en = 0
		self.wc_in_event_en = 0
		self.wc_high_event_en = 0
		self.wc_low_event_en = 0
		self.dma_done_event_en = 0
		self.uf_flag_event_en = 0
		self.result0_event_en = 0
		self.result1_event_en = 0
		self.result2_event_en = 0
		self.result3_event_en = 0
		self.result4_event_en = 0
		self.result5_event_en = 0
		self.result6_event_en = 0
		self.result7_event_en = 0
	def write(self):
		val = 0
		val |= self.trig_to_dma_event_en << 0
		val |= self.ov_flag_event_en << 1
		val |= self.seq_ov_flow_event_en << 2
		val |= self.wc_in_event_en << 3
		val |= self.wc_high_event_en << 4
		val |= self.wc_low_event_en << 5
		val |= self.dma_done_event_en << 6
		val |= self.uf_flag_event_en << 7
		val |= self.result0_event_en << 8
		val |= self.result1_event_en << 9
		val |= self.result2_event_en << 10
		val |= self.result3_event_en << 11
		val |= self.result4_event_en << 12
		val |= self.result5_event_en << 13
		val |= self.result6_event_en << 14
		val |= self.result7_event_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.trig_to_dma_event_en = (val & 0x01) >> 0
		self.ov_flag_event_en = (val & 0x02) >> 1
		self.seq_ov_flow_event_en = (val & 0x04) >> 2
		self.wc_in_event_en = (val & 0x08) >> 3
		self.wc_high_event_en = (val & 0x10) >> 4
		self.wc_low_event_en = (val & 0x20) >> 5
		self.dma_done_event_en = (val & 0x40) >> 6
		self.uf_flag_event_en = (val & 0x80) >> 7
		self.result0_event_en = (val & 0x100) >> 8
		self.result1_event_en = (val & 0x200) >> 9
		self.result2_event_en = (val & 0x400) >> 10
		self.result3_event_en = (val & 0x800) >> 11
		self.result4_event_en = (val & 0x1000) >> 12
		self.result5_event_en = (val & 0x2000) >> 13
		self.result6_event_en = (val & 0x4000) >> 14
		self.result7_event_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class EVENT_EN_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+52
		self.result8_event_en = 0
		self.result9_event_en = 0
		self.result10_event_en = 0
		self.result11_event_en = 0
		self.result12_event_en = 0
		self.result13_event_en = 0
		self.result14_event_en = 0
		self.result15_event_en = 0
	def write(self):
		val = 0
		val |= self.result8_event_en << 0
		val |= self.result9_event_en << 1
		val |= self.result10_event_en << 2
		val |= self.result11_event_en << 3
		val |= self.result12_event_en << 4
		val |= self.result13_event_en << 5
		val |= self.result14_event_en << 6
		val |= self.result15_event_en << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.result8_event_en = (val & 0x01) >> 0
		self.result9_event_en = (val & 0x02) >> 1
		self.result10_event_en = (val & 0x04) >> 2
		self.result11_event_en = (val & 0x08) >> 3
		self.result12_event_en = (val & 0x10) >> 4
		self.result13_event_en = (val & 0x20) >> 5
		self.result14_event_en = (val & 0x40) >> 6
		self.result15_event_en = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_NMI_EN_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+56
		self.trig_to_dma_flag_nmi_en = 0
		self.ov_flag_nmi_en = 0
		self.seq_ov_flow_nmi_en = 0
		self.wc_in_flag_nmi_en = 0
		self.wc_high_flag_nmi_en = 0
		self.wc_low_flag_nmi_en = 0
		self.dma_done_nmi_en = 0
		self.uf_flag_nmi_en = 0
		self.result0_flag_nmi_en = 0
		self.result1_flag_nmi_en = 0
		self.result2_flag_nmi_en = 0
		self.result3_flag_nmi_en = 0
		self.result4_flag_nmi_en = 0
		self.result5_flag_nmi_en = 0
		self.result6_flag_nmi_en = 0
		self.result7_flag_nmi_en = 0
	def write(self):
		val = 0
		val |= self.trig_to_dma_flag_nmi_en << 0
		val |= self.ov_flag_nmi_en << 1
		val |= self.seq_ov_flow_nmi_en << 2
		val |= self.wc_in_flag_nmi_en << 3
		val |= self.wc_high_flag_nmi_en << 4
		val |= self.wc_low_flag_nmi_en << 5
		val |= self.dma_done_nmi_en << 6
		val |= self.uf_flag_nmi_en << 7
		val |= self.result0_flag_nmi_en << 8
		val |= self.result1_flag_nmi_en << 9
		val |= self.result2_flag_nmi_en << 10
		val |= self.result3_flag_nmi_en << 11
		val |= self.result4_flag_nmi_en << 12
		val |= self.result5_flag_nmi_en << 13
		val |= self.result6_flag_nmi_en << 14
		val |= self.result7_flag_nmi_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.trig_to_dma_flag_nmi_en = (val & 0x01) >> 0
		self.ov_flag_nmi_en = (val & 0x02) >> 1
		self.seq_ov_flow_nmi_en = (val & 0x04) >> 2
		self.wc_in_flag_nmi_en = (val & 0x08) >> 3
		self.wc_high_flag_nmi_en = (val & 0x10) >> 4
		self.wc_low_flag_nmi_en = (val & 0x20) >> 5
		self.dma_done_nmi_en = (val & 0x40) >> 6
		self.uf_flag_nmi_en = (val & 0x80) >> 7
		self.result0_flag_nmi_en = (val & 0x100) >> 8
		self.result1_flag_nmi_en = (val & 0x200) >> 9
		self.result2_flag_nmi_en = (val & 0x400) >> 10
		self.result3_flag_nmi_en = (val & 0x800) >> 11
		self.result4_flag_nmi_en = (val & 0x1000) >> 12
		self.result5_flag_nmi_en = (val & 0x2000) >> 13
		self.result6_flag_nmi_en = (val & 0x4000) >> 14
		self.result7_flag_nmi_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_NMI_EN_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+60
		self.result8_flag_nmi_en = 0
		self.result9_flag_nmi_en = 0
		self.result10_flag_nmi_en = 0
		self.result11_flag_nmi_en = 0
		self.result12_flag_nmi_en = 0
		self.result13_flag_nmi_en = 0
		self.result14_flag_nmi_en = 0
		self.result15_flag_nmi_en = 0
	def write(self):
		val = 0
		val |= self.result8_flag_nmi_en << 0
		val |= self.result9_flag_nmi_en << 1
		val |= self.result10_flag_nmi_en << 2
		val |= self.result11_flag_nmi_en << 3
		val |= self.result12_flag_nmi_en << 4
		val |= self.result13_flag_nmi_en << 5
		val |= self.result14_flag_nmi_en << 6
		val |= self.result15_flag_nmi_en << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.result8_flag_nmi_en = (val & 0x01) >> 0
		self.result9_flag_nmi_en = (val & 0x02) >> 1
		self.result10_flag_nmi_en = (val & 0x04) >> 2
		self.result11_flag_nmi_en = (val & 0x08) >> 3
		self.result12_flag_nmi_en = (val & 0x10) >> 4
		self.result13_flag_nmi_en = (val & 0x20) >> 5
		self.result14_flag_nmi_en = (val & 0x40) >> 6
		self.result15_flag_nmi_en = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+64
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

class INTR_SW:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+68
		self.trig_to_dma_flag_sw_set = 0
		self.ov_flag_sw_set = 0
		self.seq_ov_flow_sw_set = 0
		self.wc_in_flag_sw_set = 0
		self.wc_high_flag_sw_set = 0
		self.wc_low_flag_sw_set = 0
		self.dma_done_sw_set = 0
		self.uf_flag_sw_set = 0
		self.result0_flag_sw_set = 0
		self.result1_flag_sw_set = 0
		self.result2_flag_sw_set = 0
		self.result3_flag_sw_set = 0
		self.result4_flag_sw_set = 0
		self.result5_flag_sw_set = 0
		self.result6_flag_sw_set = 0
		self.result7_flag_sw_set = 0
		self.result8_flag_sw_set = 0
		self.result9_flag_sw_set = 0
		self.result10_flag_sw_set = 0
		self.result11_flag_sw_set = 0
		self.result12_flag_sw_set = 0
		self.result13_flag_sw_set = 0
		self.result14_flag_sw_set = 0
		self.result15_flag_sw_set = 0
	def write(self):
		val = 0
		val |= self.trig_to_dma_flag_sw_set << 0
		val |= self.ov_flag_sw_set << 1
		val |= self.seq_ov_flow_sw_set << 2
		val |= self.wc_in_flag_sw_set << 3
		val |= self.wc_high_flag_sw_set << 4
		val |= self.wc_low_flag_sw_set << 5
		val |= self.dma_done_sw_set << 6
		val |= self.uf_flag_sw_set << 7
		val |= self.result0_flag_sw_set << 8
		val |= self.result1_flag_sw_set << 9
		val |= self.result2_flag_sw_set << 10
		val |= self.result3_flag_sw_set << 11
		val |= self.result4_flag_sw_set << 12
		val |= self.result5_flag_sw_set << 13
		val |= self.result6_flag_sw_set << 14
		val |= self.result7_flag_sw_set << 15
		val |= self.result8_flag_sw_set << 16
		val |= self.result9_flag_sw_set << 17
		val |= self.result10_flag_sw_set << 18
		val |= self.result11_flag_sw_set << 19
		val |= self.result12_flag_sw_set << 20
		val |= self.result13_flag_sw_set << 21
		val |= self.result14_flag_sw_set << 22
		val |= self.result15_flag_sw_set << 23
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.trig_to_dma_flag_sw_set = (val & 0x01) >> 0
		self.ov_flag_sw_set = (val & 0x02) >> 1
		self.seq_ov_flow_sw_set = (val & 0x04) >> 2
		self.wc_in_flag_sw_set = (val & 0x08) >> 3
		self.wc_high_flag_sw_set = (val & 0x10) >> 4
		self.wc_low_flag_sw_set = (val & 0x20) >> 5
		self.dma_done_sw_set = (val & 0x40) >> 6
		self.uf_flag_sw_set = (val & 0x80) >> 7
		self.result0_flag_sw_set = (val & 0x100) >> 8
		self.result1_flag_sw_set = (val & 0x200) >> 9
		self.result2_flag_sw_set = (val & 0x400) >> 10
		self.result3_flag_sw_set = (val & 0x800) >> 11
		self.result4_flag_sw_set = (val & 0x1000) >> 12
		self.result5_flag_sw_set = (val & 0x2000) >> 13
		self.result6_flag_sw_set = (val & 0x4000) >> 14
		self.result7_flag_sw_set = (val & 0x8000) >> 15
		self.result8_flag_sw_set = (val & 0x10000) >> 16
		self.result9_flag_sw_set = (val & 0x20000) >> 17
		self.result10_flag_sw_set = (val & 0x40000) >> 18
		self.result11_flag_sw_set = (val & 0x80000) >> 19
		self.result12_flag_sw_set = (val & 0x100000) >> 20
		self.result13_flag_sw_set = (val & 0x200000) >> 21
		self.result14_flag_sw_set = (val & 0x400000) >> 22
		self.result15_flag_sw_set = (val & 0x800000) >> 23
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CONV_CFG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+72
		self.conv_mode = 0
		self.start_addr = 0
		self.end_addr = 0
		self.trigger_source = 0
		self.adc_res = 0
		self.en_conv = 0
	def write(self):
		val = 0
		val |= self.conv_mode << 0
		val |= self.start_addr << 2
		val |= self.end_addr << 6
		val |= self.trigger_source << 10
		val |= self.adc_res << 11
		val |= self.en_conv << 13
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.conv_mode = (val & 0x03) >> 0
		self.start_addr = (val & 0x3C) >> 2
		self.end_addr = (val & 0x3C0) >> 6
		self.trigger_source = (val & 0x400) >> 10
		self.adc_res = (val & 0x1800) >> 11
		self.en_conv = (val & 0x2000) >> 13
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CHNL_CFG_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+76
		self.channel_sel = 0
		self.vref_sel = 0
		self.hw_avg_en = 0
		self.window_comp_en = 0
		self.bcs_en = 0
	def write(self):
		val = 0
		val |= self.channel_sel << 0
		val |= self.vref_sel << 4
		val |= self.hw_avg_en << 6
		val |= self.window_comp_en << 7
		val |= self.bcs_en << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.channel_sel = (val & 0x0F) >> 0
		self.vref_sel = (val & 0x30) >> 4
		self.hw_avg_en = (val & 0x40) >> 6
		self.window_comp_en = (val & 0x80) >> 7
		self.bcs_en = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CHNL_CFG_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+80
		self.channel_sel = 0
		self.vref_sel = 0
		self.hw_avg_en = 0
		self.window_comp_en = 0
		self.bcs_en = 0
	def write(self):
		val = 0
		val |= self.channel_sel << 0
		val |= self.vref_sel << 4
		val |= self.hw_avg_en << 6
		val |= self.window_comp_en << 7
		val |= self.bcs_en << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.channel_sel = (val & 0x0F) >> 0
		self.vref_sel = (val & 0x30) >> 4
		self.hw_avg_en = (val & 0x40) >> 6
		self.window_comp_en = (val & 0x80) >> 7
		self.bcs_en = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CHNL_CFG_2:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+84
		self.channel_sel = 0
		self.vref_sel = 0
		self.hw_avg_en = 0
		self.window_comp_en = 0
		self.bcs_en = 0
	def write(self):
		val = 0
		val |= self.channel_sel << 0
		val |= self.vref_sel << 4
		val |= self.hw_avg_en << 6
		val |= self.window_comp_en << 7
		val |= self.bcs_en << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.channel_sel = (val & 0x0F) >> 0
		self.vref_sel = (val & 0x30) >> 4
		self.hw_avg_en = (val & 0x40) >> 6
		self.window_comp_en = (val & 0x80) >> 7
		self.bcs_en = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CHNL_CFG_3:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+88
		self.channel_sel = 0
		self.vref_sel = 0
		self.hw_avg_en = 0
		self.window_comp_en = 0
		self.bcs_en = 0
	def write(self):
		val = 0
		val |= self.channel_sel << 0
		val |= self.vref_sel << 4
		val |= self.hw_avg_en << 6
		val |= self.window_comp_en << 7
		val |= self.bcs_en << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.channel_sel = (val & 0x0F) >> 0
		self.vref_sel = (val & 0x30) >> 4
		self.hw_avg_en = (val & 0x40) >> 6
		self.window_comp_en = (val & 0x80) >> 7
		self.bcs_en = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CHNL_CFG_4:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+92
		self.channel_sel = 0
		self.vref_sel = 0
		self.hw_avg_en = 0
		self.window_comp_en = 0
		self.bcs_en = 0
	def write(self):
		val = 0
		val |= self.channel_sel << 0
		val |= self.vref_sel << 4
		val |= self.hw_avg_en << 6
		val |= self.window_comp_en << 7
		val |= self.bcs_en << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.channel_sel = (val & 0x0F) >> 0
		self.vref_sel = (val & 0x30) >> 4
		self.hw_avg_en = (val & 0x40) >> 6
		self.window_comp_en = (val & 0x80) >> 7
		self.bcs_en = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CHNL_CFG_5:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+96
		self.channel_sel = 0
		self.vref_sel = 0
		self.hw_avg_en = 0
		self.window_comp_en = 0
		self.bcs_en = 0
	def write(self):
		val = 0
		val |= self.channel_sel << 0
		val |= self.vref_sel << 4
		val |= self.hw_avg_en << 6
		val |= self.window_comp_en << 7
		val |= self.bcs_en << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.channel_sel = (val & 0x0F) >> 0
		self.vref_sel = (val & 0x30) >> 4
		self.hw_avg_en = (val & 0x40) >> 6
		self.window_comp_en = (val & 0x80) >> 7
		self.bcs_en = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CHNL_CFG_6:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+100
		self.channel_sel = 0
		self.vref_sel = 0
		self.hw_avg_en = 0
		self.window_comp_en = 0
		self.bcs_en = 0
	def write(self):
		val = 0
		val |= self.channel_sel << 0
		val |= self.vref_sel << 4
		val |= self.hw_avg_en << 6
		val |= self.window_comp_en << 7
		val |= self.bcs_en << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.channel_sel = (val & 0x0F) >> 0
		self.vref_sel = (val & 0x30) >> 4
		self.hw_avg_en = (val & 0x40) >> 6
		self.window_comp_en = (val & 0x80) >> 7
		self.bcs_en = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CHNL_CFG_7:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+104
		self.channel_sel = 0
		self.vref_sel = 0
		self.hw_avg_en = 0
		self.window_comp_en = 0
		self.bcs_en = 0
	def write(self):
		val = 0
		val |= self.channel_sel << 0
		val |= self.vref_sel << 4
		val |= self.hw_avg_en << 6
		val |= self.window_comp_en << 7
		val |= self.bcs_en << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.channel_sel = (val & 0x0F) >> 0
		self.vref_sel = (val & 0x30) >> 4
		self.hw_avg_en = (val & 0x40) >> 6
		self.window_comp_en = (val & 0x80) >> 7
		self.bcs_en = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CHNL_CFG_8:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+108
		self.channel_sel = 0
		self.vref_sel = 0
		self.hw_avg_en = 0
		self.window_comp_en = 0
		self.bcs_en = 0
	def write(self):
		val = 0
		val |= self.channel_sel << 0
		val |= self.vref_sel << 4
		val |= self.hw_avg_en << 6
		val |= self.window_comp_en << 7
		val |= self.bcs_en << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.channel_sel = (val & 0x0F) >> 0
		self.vref_sel = (val & 0x30) >> 4
		self.hw_avg_en = (val & 0x40) >> 6
		self.window_comp_en = (val & 0x80) >> 7
		self.bcs_en = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CHNL_CFG_9:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+112
		self.channel_sel = 0
		self.vref_sel = 0
		self.hw_avg_en = 0
		self.window_comp_en = 0
		self.bcs_en = 0
	def write(self):
		val = 0
		val |= self.channel_sel << 0
		val |= self.vref_sel << 4
		val |= self.hw_avg_en << 6
		val |= self.window_comp_en << 7
		val |= self.bcs_en << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.channel_sel = (val & 0x0F) >> 0
		self.vref_sel = (val & 0x30) >> 4
		self.hw_avg_en = (val & 0x40) >> 6
		self.window_comp_en = (val & 0x80) >> 7
		self.bcs_en = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CHNL_CFG_10:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+116
		self.channel_sel = 0
		self.vref_sel = 0
		self.hw_avg_en = 0
		self.window_comp_en = 0
		self.bcs_en = 0
	def write(self):
		val = 0
		val |= self.channel_sel << 0
		val |= self.vref_sel << 4
		val |= self.hw_avg_en << 6
		val |= self.window_comp_en << 7
		val |= self.bcs_en << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.channel_sel = (val & 0x0F) >> 0
		self.vref_sel = (val & 0x30) >> 4
		self.hw_avg_en = (val & 0x40) >> 6
		self.window_comp_en = (val & 0x80) >> 7
		self.bcs_en = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CHNL_CFG_11:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+120
		self.channel_sel = 0
		self.vref_sel = 0
		self.hw_avg_en = 0
		self.window_comp_en = 0
		self.bcs_en = 0
	def write(self):
		val = 0
		val |= self.channel_sel << 0
		val |= self.vref_sel << 4
		val |= self.hw_avg_en << 6
		val |= self.window_comp_en << 7
		val |= self.bcs_en << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.channel_sel = (val & 0x0F) >> 0
		self.vref_sel = (val & 0x30) >> 4
		self.hw_avg_en = (val & 0x40) >> 6
		self.window_comp_en = (val & 0x80) >> 7
		self.bcs_en = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CHNL_CFG_12:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+124
		self.channel_sel = 0
		self.vref_sel = 0
		self.hw_avg_en = 0
		self.window_comp_en = 0
		self.bcs_en = 0
	def write(self):
		val = 0
		val |= self.channel_sel << 0
		val |= self.vref_sel << 4
		val |= self.hw_avg_en << 6
		val |= self.window_comp_en << 7
		val |= self.bcs_en << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.channel_sel = (val & 0x0F) >> 0
		self.vref_sel = (val & 0x30) >> 4
		self.hw_avg_en = (val & 0x40) >> 6
		self.window_comp_en = (val & 0x80) >> 7
		self.bcs_en = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CHNL_CFG_13:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+128
		self.channel_sel = 0
		self.vref_sel = 0
		self.hw_avg_en = 0
		self.window_comp_en = 0
		self.bcs_en = 0
	def write(self):
		val = 0
		val |= self.channel_sel << 0
		val |= self.vref_sel << 4
		val |= self.hw_avg_en << 6
		val |= self.window_comp_en << 7
		val |= self.bcs_en << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.channel_sel = (val & 0x0F) >> 0
		self.vref_sel = (val & 0x30) >> 4
		self.hw_avg_en = (val & 0x40) >> 6
		self.window_comp_en = (val & 0x80) >> 7
		self.bcs_en = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CHNL_CFG_14:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+132
		self.channel_sel = 0
		self.vref_sel = 0
		self.hw_avg_en = 0
		self.window_comp_en = 0
		self.bcs_en = 0
	def write(self):
		val = 0
		val |= self.channel_sel << 0
		val |= self.vref_sel << 4
		val |= self.hw_avg_en << 6
		val |= self.window_comp_en << 7
		val |= self.bcs_en << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.channel_sel = (val & 0x0F) >> 0
		self.vref_sel = (val & 0x30) >> 4
		self.hw_avg_en = (val & 0x40) >> 6
		self.window_comp_en = (val & 0x80) >> 7
		self.bcs_en = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CHNL_CFG_15:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+136
		self.channel_sel = 0
		self.vref_sel = 0
		self.hw_avg_en = 0
		self.window_comp_en = 0
		self.bcs_en = 0
	def write(self):
		val = 0
		val |= self.channel_sel << 0
		val |= self.vref_sel << 4
		val |= self.hw_avg_en << 6
		val |= self.window_comp_en << 7
		val |= self.bcs_en << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.channel_sel = (val & 0x0F) >> 0
		self.vref_sel = (val & 0x30) >> 4
		self.hw_avg_en = (val & 0x40) >> 6
		self.window_comp_en = (val & 0x80) >> 7
		self.bcs_en = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class RESULT_CFG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+140
		self.fifo_en = 0
	def write(self):
		val = 0
		val |= self.fifo_en << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.fifo_en = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class HW_AVG_CFG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+144
		self.hw_sample_cnt = 0
		self.hw_avg_sample_div = 0
		self.result = 0
	def write(self):
		val = 0
		val |= self.hw_sample_cnt << 0
		val |= self.hw_avg_sample_div << 4
		val |= self.result << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.hw_sample_cnt = (val & 0x0F) >> 0
		self.hw_avg_sample_div = (val & 0xF0) >> 4
		self.result = (val & 0xFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class TIMER_START:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+212
		self.timer_cnt_start = 0
	def write(self):
		val = 0
		val |= self.timer_cnt_start << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.timer_cnt_start = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class TIMER_SAMPLE:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+216
		self.timer_cnt_sample = 0
	def write(self):
		val = 0
		val |= self.timer_cnt_sample << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.timer_cnt_sample = (val & 0x1F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class TIMER_CONVERSION:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+220
		self.timer_cnt_conversion = 0
	def write(self):
		val = 0
		val |= self.timer_cnt_conversion << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.timer_cnt_conversion = (val & 0xFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class WINDOW_COMP:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+224
		self.window_comp_th_low = 0
		self.window_comp_th_high = 0
	def write(self):
		val = 0
		val |= self.window_comp_th_low << 0
		val |= self.window_comp_th_high << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.window_comp_th_low = (val & 0xFFFF) >> 0
		self.window_comp_th_high = (val & 0xFFFF0000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class ADC_STATUS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+228
		self.adc_busy = 0
	def write(self):
		val = 0
		val |= self.adc_busy << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.adc_busy = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_REG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+232
		self.dma_en = 0
	def write(self):
		val = 0
		val |= self.dma_en << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_en = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class POWER_DN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+236
		self.pwr_dn = 0
	def write(self):
		val = 0
		val |= self.pwr_dn << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.pwr_dn = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SUBS_PORT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+240
		self.subs_port = 0
	def write(self):
		val = 0
		val |= self.subs_port << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.subs_port = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PUBS_PORT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+244
		self.pubs_port = 0
	def write(self):
		val = 0
		val |= self.pubs_port << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.pubs_port = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CALIBRATION_REQ:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+248
		self.cal_req = 0
		self.cal_done = 0
		self.cal_ctrl = 0
	def write(self):
		val = 0
		val |= self.cal_req << 0
		val |= self.cal_done << 1
		val |= self.cal_ctrl << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.cal_req = (val & 0x01) >> 0
		self.cal_done = (val & 0x02) >> 1
		self.cal_ctrl = (val & 0xFFFFC) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class BLOCK_ASYNC_REQ:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+252
		self.block_async_req = 0
	def write(self):
		val = 0
		val |= self.block_async_req << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.block_async_req = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SW_TRIGGER:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+256
		self.sw_trigger = 0
		self.sw_trigger_en = 0
	def write(self):
		val = 0
		val |= self.sw_trigger << 0
		val |= self.sw_trigger_en << 1
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.sw_trigger = (val & 0x01) >> 0
		self.sw_trigger_en = (val & 0x02) >> 1
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SPARE_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+260
		self.adc_cfg0 = 0
		self.adc_cfg1 = 0
		self.adc_cfg2 = 0
		self.adc_cfg3 = 0
	def write(self):
		val = 0
		val |= self.adc_cfg0 << 0
		val |= self.adc_cfg1 << 8
		val |= self.adc_cfg2 << 16
		val |= self.adc_cfg3 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.adc_cfg0 = (val & 0xFF) >> 0
		self.adc_cfg1 = (val & 0xFF00) >> 8
		self.adc_cfg2 = (val & 0xFF0000) >> 16
		self.adc_cfg3 = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SPARE_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+264
		self.adc_sts0 = 0
		self.adc_sts1 = 0
		self.adc_sts2 = 0
		self.adc_sts3 = 0
	def write(self):
		val = 0
		val |= self.adc_sts0 << 0
		val |= self.adc_sts1 << 8
		val |= self.adc_sts2 << 16
		val |= self.adc_sts3 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.adc_sts0 = (val & 0xFF) >> 0
		self.adc_sts1 = (val & 0xFF00) >> 8
		self.adc_sts2 = (val & 0xFF0000) >> 16
		self.adc_sts3 = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class EOC_ANA:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+268
		self.eoc_ana = 0
	def write(self):
		val = 0
		val |= self.eoc_ana << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.eoc_ana = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class TEMP_SENSOR_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+272
		self.temp_sensor_en = 0
	def write(self):
		val = 0
		val |= self.temp_sensor_en << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.temp_sensor_en = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SM_STATE:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+276
		self.curr_state = 0
	def write(self):
		val = 0
		val |= self.curr_state << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.curr_state = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_TRANSFER_CNT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+280
		self.dma_transfer_cnt = 0
	def write(self):
		val = 0
		val |= self.dma_transfer_cnt << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_transfer_cnt = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class adc:
	def __init__(self,dev,base_addr):
		self.DESC = DESC(dev,base_addr)
		self.PWR_EN = PWR_EN(dev,base_addr)
		self.RST_CTRL = RST_CTRL(dev,base_addr)
		self.RST_STS = RST_STS(dev,base_addr)
		self.DBG_CTRL = DBG_CTRL(dev,base_addr)
		self.CLK_CTRL = CLK_CTRL(dev,base_addr)
		self.CLK_SEL = CLK_SEL(dev,base_addr)
		self.INTR_EVENT = INTR_EVENT(dev,base_addr)
		self.INTR_EN_0 = INTR_EN_0(dev,base_addr)
		self.INTR_EN_1 = INTR_EN_1(dev,base_addr)
		self.DMA_EN_0 = DMA_EN_0(dev,base_addr)
		self.DMA_EN_1 = DMA_EN_1(dev,base_addr)
		self.EVENT_EN_0 = EVENT_EN_0(dev,base_addr)
		self.EVENT_EN_1 = EVENT_EN_1(dev,base_addr)
		self.INTR_NMI_EN_0 = INTR_NMI_EN_0(dev,base_addr)
		self.INTR_NMI_EN_1 = INTR_NMI_EN_1(dev,base_addr)
		self.INTR_STS = INTR_STS(dev,base_addr)
		self.INTR_SW = INTR_SW(dev,base_addr)
		self.CONV_CFG = CONV_CFG(dev,base_addr)
		self.CHNL_CFG_0 = CHNL_CFG_0(dev,base_addr)
		self.CHNL_CFG_1 = CHNL_CFG_1(dev,base_addr)
		self.CHNL_CFG_2 = CHNL_CFG_2(dev,base_addr)
		self.CHNL_CFG_3 = CHNL_CFG_3(dev,base_addr)
		self.CHNL_CFG_4 = CHNL_CFG_4(dev,base_addr)
		self.CHNL_CFG_5 = CHNL_CFG_5(dev,base_addr)
		self.CHNL_CFG_6 = CHNL_CFG_6(dev,base_addr)
		self.CHNL_CFG_7 = CHNL_CFG_7(dev,base_addr)
		self.CHNL_CFG_8 = CHNL_CFG_8(dev,base_addr)
		self.CHNL_CFG_9 = CHNL_CFG_9(dev,base_addr)
		self.CHNL_CFG_10 = CHNL_CFG_10(dev,base_addr)
		self.CHNL_CFG_11 = CHNL_CFG_11(dev,base_addr)
		self.CHNL_CFG_12 = CHNL_CFG_12(dev,base_addr)
		self.CHNL_CFG_13 = CHNL_CFG_13(dev,base_addr)
		self.CHNL_CFG_14 = CHNL_CFG_14(dev,base_addr)
		self.CHNL_CFG_15 = CHNL_CFG_15(dev,base_addr)
		self.RESULT_CFG = RESULT_CFG(dev,base_addr)
		self.HW_AVG_CFG = HW_AVG_CFG(dev,base_addr)
		self.TIMER_START = TIMER_START(dev,base_addr)
		self.TIMER_SAMPLE = TIMER_SAMPLE(dev,base_addr)
		self.TIMER_CONVERSION = TIMER_CONVERSION(dev,base_addr)
		self.WINDOW_COMP = WINDOW_COMP(dev,base_addr)
		self.ADC_STATUS = ADC_STATUS(dev,base_addr)
		self.DMA_REG = DMA_REG(dev,base_addr)
		self.POWER_DN = POWER_DN(dev,base_addr)
		self.SUBS_PORT = SUBS_PORT(dev,base_addr)
		self.PUBS_PORT = PUBS_PORT(dev,base_addr)
		self.CALIBRATION_REQ = CALIBRATION_REQ(dev,base_addr)
		self.BLOCK_ASYNC_REQ = BLOCK_ASYNC_REQ(dev,base_addr)
		self.SW_TRIGGER = SW_TRIGGER(dev,base_addr)
		self.SPARE_CTRL = SPARE_CTRL(dev,base_addr)
		self.SPARE_STS = SPARE_STS(dev,base_addr)
		self.EOC_ANA = EOC_ANA(dev,base_addr)
		self.TEMP_SENSOR_EN = TEMP_SENSOR_EN(dev,base_addr)
		self.SM_STATE = SM_STATE(dev,base_addr)
		self.DMA_TRANSFER_CNT = DMA_TRANSFER_CNT(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
