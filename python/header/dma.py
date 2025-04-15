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

class DBG_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+20
		self.halt_mode = 0
	def write(self):
		val = 0
		val |= self.halt_mode << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.halt_mode = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+24
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
		self._addr = base_addr+28
		self.dma_done_0 = 0
		self.dma_done_1 = 0
		self.dma_done_2 = 0
		self.dma_done_3 = 0
		self.dma_done_4 = 0
		self.dma_done_5 = 0
		self.dma_done_6 = 0
		self.dma_done_7 = 0
		self.dma_done_8 = 0
		self.dma_done_9 = 0
		self.dma_done_10 = 0
		self.dma_done_11 = 0
		self.dma_done_12 = 0
		self.dma_done_13 = 0
		self.dma_done_14 = 0
		self.dma_done_15 = 0
		self.early_irq_0 = 0
		self.early_irq_1 = 0
		self.early_irq_2 = 0
		self.early_irq_3 = 0
		self.early_irq_4 = 0
		self.early_irq_5 = 0
		self.early_irq_6 = 0
		self.early_irq_7 = 0
		self.early_irq_8 = 0
		self.early_irq_9 = 0
		self.early_irq_10 = 0
		self.early_irq_11 = 0
		self.early_irq_12 = 0
		self.early_irq_13 = 0
		self.early_irq_14 = 0
		self.early_irq_15 = 0
	def write(self):
		val = 0
		val |= self.dma_done_0 << 0
		val |= self.dma_done_1 << 1
		val |= self.dma_done_2 << 2
		val |= self.dma_done_3 << 3
		val |= self.dma_done_4 << 4
		val |= self.dma_done_5 << 5
		val |= self.dma_done_6 << 6
		val |= self.dma_done_7 << 7
		val |= self.dma_done_8 << 8
		val |= self.dma_done_9 << 9
		val |= self.dma_done_10 << 10
		val |= self.dma_done_11 << 11
		val |= self.dma_done_12 << 12
		val |= self.dma_done_13 << 13
		val |= self.dma_done_14 << 14
		val |= self.dma_done_15 << 15
		val |= self.early_irq_0 << 16
		val |= self.early_irq_1 << 17
		val |= self.early_irq_2 << 18
		val |= self.early_irq_3 << 19
		val |= self.early_irq_4 << 20
		val |= self.early_irq_5 << 21
		val |= self.early_irq_6 << 22
		val |= self.early_irq_7 << 23
		val |= self.early_irq_8 << 24
		val |= self.early_irq_9 << 25
		val |= self.early_irq_10 << 26
		val |= self.early_irq_11 << 27
		val |= self.early_irq_12 << 28
		val |= self.early_irq_13 << 29
		val |= self.early_irq_14 << 30
		val |= self.early_irq_15 << 31
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_done_0 = (val & 0x01) >> 0
		self.dma_done_1 = (val & 0x02) >> 1
		self.dma_done_2 = (val & 0x04) >> 2
		self.dma_done_3 = (val & 0x08) >> 3
		self.dma_done_4 = (val & 0x10) >> 4
		self.dma_done_5 = (val & 0x20) >> 5
		self.dma_done_6 = (val & 0x40) >> 6
		self.dma_done_7 = (val & 0x80) >> 7
		self.dma_done_8 = (val & 0x100) >> 8
		self.dma_done_9 = (val & 0x200) >> 9
		self.dma_done_10 = (val & 0x400) >> 10
		self.dma_done_11 = (val & 0x800) >> 11
		self.dma_done_12 = (val & 0x1000) >> 12
		self.dma_done_13 = (val & 0x2000) >> 13
		self.dma_done_14 = (val & 0x4000) >> 14
		self.dma_done_15 = (val & 0x8000) >> 15
		self.early_irq_0 = (val & 0x10000) >> 16
		self.early_irq_1 = (val & 0x20000) >> 17
		self.early_irq_2 = (val & 0x40000) >> 18
		self.early_irq_3 = (val & 0x80000) >> 19
		self.early_irq_4 = (val & 0x100000) >> 20
		self.early_irq_5 = (val & 0x200000) >> 21
		self.early_irq_6 = (val & 0x400000) >> 22
		self.early_irq_7 = (val & 0x800000) >> 23
		self.early_irq_8 = (val & 0x1000000) >> 24
		self.early_irq_9 = (val & 0x2000000) >> 25
		self.early_irq_10 = (val & 0x4000000) >> 26
		self.early_irq_11 = (val & 0x8000000) >> 27
		self.early_irq_12 = (val & 0x10000000) >> 28
		self.early_irq_13 = (val & 0x20000000) >> 29
		self.early_irq_14 = (val & 0x40000000) >> 30
		self.early_irq_15 = (val & 0x80000000) >> 31
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
		self.dma_done_en_0 = 0
		self.dma_done_en_1 = 0
		self.dma_done_en_2 = 0
		self.dma_done_en_3 = 0
		self.dma_done_en_4 = 0
		self.dma_done_en_5 = 0
		self.dma_done_en_6 = 0
		self.dma_done_en_7 = 0
		self.dma_done_en_8 = 0
		self.dma_done_en_9 = 0
		self.dma_done_en_10 = 0
		self.dma_done_en_11 = 0
		self.dma_done_en_12 = 0
		self.dma_done_en_13 = 0
		self.dma_done_en_14 = 0
		self.dma_done_en_15 = 0
	def write(self):
		val = 0
		val |= self.dma_done_en_0 << 0
		val |= self.dma_done_en_1 << 1
		val |= self.dma_done_en_2 << 2
		val |= self.dma_done_en_3 << 3
		val |= self.dma_done_en_4 << 4
		val |= self.dma_done_en_5 << 5
		val |= self.dma_done_en_6 << 6
		val |= self.dma_done_en_7 << 7
		val |= self.dma_done_en_8 << 8
		val |= self.dma_done_en_9 << 9
		val |= self.dma_done_en_10 << 10
		val |= self.dma_done_en_11 << 11
		val |= self.dma_done_en_12 << 12
		val |= self.dma_done_en_13 << 13
		val |= self.dma_done_en_14 << 14
		val |= self.dma_done_en_15 << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_done_en_0 = (val & 0x01) >> 0
		self.dma_done_en_1 = (val & 0x02) >> 1
		self.dma_done_en_2 = (val & 0x04) >> 2
		self.dma_done_en_3 = (val & 0x08) >> 3
		self.dma_done_en_4 = (val & 0x10) >> 4
		self.dma_done_en_5 = (val & 0x20) >> 5
		self.dma_done_en_6 = (val & 0x40) >> 6
		self.dma_done_en_7 = (val & 0x80) >> 7
		self.dma_done_en_8 = (val & 0x100) >> 8
		self.dma_done_en_9 = (val & 0x200) >> 9
		self.dma_done_en_10 = (val & 0x400) >> 10
		self.dma_done_en_11 = (val & 0x800) >> 11
		self.dma_done_en_12 = (val & 0x1000) >> 12
		self.dma_done_en_13 = (val & 0x2000) >> 13
		self.dma_done_en_14 = (val & 0x4000) >> 14
		self.dma_done_en_15 = (val & 0x8000) >> 15
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
		self.early_irq_en_0 = 0
		self.early_irq_en_1 = 0
		self.early_irq_en_2 = 0
		self.early_irq_en_3 = 0
		self.early_irq_en_4 = 0
		self.early_irq_en_5 = 0
		self.early_irq_en_6 = 0
		self.early_irq_en_7 = 0
		self.early_irq_en_8 = 0
		self.early_irq_en_9 = 0
		self.early_irq_en_10 = 0
		self.early_irq_en_11 = 0
		self.early_irq_en_12 = 0
		self.early_irq_en_13 = 0
		self.early_irq_en_14 = 0
		self.early_irq_en_15 = 0
	def write(self):
		val = 0
		val |= self.early_irq_en_0 << 0
		val |= self.early_irq_en_1 << 1
		val |= self.early_irq_en_2 << 2
		val |= self.early_irq_en_3 << 3
		val |= self.early_irq_en_4 << 4
		val |= self.early_irq_en_5 << 5
		val |= self.early_irq_en_6 << 6
		val |= self.early_irq_en_7 << 7
		val |= self.early_irq_en_8 << 8
		val |= self.early_irq_en_9 << 9
		val |= self.early_irq_en_10 << 10
		val |= self.early_irq_en_11 << 11
		val |= self.early_irq_en_12 << 12
		val |= self.early_irq_en_13 << 13
		val |= self.early_irq_en_14 << 14
		val |= self.early_irq_en_15 << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.early_irq_en_0 = (val & 0x01) >> 0
		self.early_irq_en_1 = (val & 0x02) >> 1
		self.early_irq_en_2 = (val & 0x04) >> 2
		self.early_irq_en_3 = (val & 0x08) >> 3
		self.early_irq_en_4 = (val & 0x10) >> 4
		self.early_irq_en_5 = (val & 0x20) >> 5
		self.early_irq_en_6 = (val & 0x40) >> 6
		self.early_irq_en_7 = (val & 0x80) >> 7
		self.early_irq_en_8 = (val & 0x100) >> 8
		self.early_irq_en_9 = (val & 0x200) >> 9
		self.early_irq_en_10 = (val & 0x400) >> 10
		self.early_irq_en_11 = (val & 0x800) >> 11
		self.early_irq_en_12 = (val & 0x1000) >> 12
		self.early_irq_en_13 = (val & 0x2000) >> 13
		self.early_irq_en_14 = (val & 0x4000) >> 14
		self.early_irq_en_15 = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_NMI_EN_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+40
		self.dma_done_nmi_en_0 = 0
		self.dma_done_nmi_en_1 = 0
		self.dma_done_nmi_en_2 = 0
		self.dma_done_nmi_en_3 = 0
		self.dma_done_nmi_en_4 = 0
		self.dma_done_nmi_en_5 = 0
		self.dma_done_nmi_en_6 = 0
		self.dma_done_nmi_en_7 = 0
		self.dma_done_nmi_en_8 = 0
		self.dma_done_nmi_en_9 = 0
		self.dma_done_nmi_en_10 = 0
		self.dma_done_nmi_en_11 = 0
		self.dma_done_nmi_en_12 = 0
		self.dma_done_nmi_en_13 = 0
		self.dma_done_nmi_en_14 = 0
		self.dma_done_nmi_en_15 = 0
	def write(self):
		val = 0
		val |= self.dma_done_nmi_en_0 << 0
		val |= self.dma_done_nmi_en_1 << 1
		val |= self.dma_done_nmi_en_2 << 2
		val |= self.dma_done_nmi_en_3 << 3
		val |= self.dma_done_nmi_en_4 << 4
		val |= self.dma_done_nmi_en_5 << 5
		val |= self.dma_done_nmi_en_6 << 6
		val |= self.dma_done_nmi_en_7 << 7
		val |= self.dma_done_nmi_en_8 << 8
		val |= self.dma_done_nmi_en_9 << 9
		val |= self.dma_done_nmi_en_10 << 10
		val |= self.dma_done_nmi_en_11 << 11
		val |= self.dma_done_nmi_en_12 << 12
		val |= self.dma_done_nmi_en_13 << 13
		val |= self.dma_done_nmi_en_14 << 14
		val |= self.dma_done_nmi_en_15 << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_done_nmi_en_0 = (val & 0x01) >> 0
		self.dma_done_nmi_en_1 = (val & 0x02) >> 1
		self.dma_done_nmi_en_2 = (val & 0x04) >> 2
		self.dma_done_nmi_en_3 = (val & 0x08) >> 3
		self.dma_done_nmi_en_4 = (val & 0x10) >> 4
		self.dma_done_nmi_en_5 = (val & 0x20) >> 5
		self.dma_done_nmi_en_6 = (val & 0x40) >> 6
		self.dma_done_nmi_en_7 = (val & 0x80) >> 7
		self.dma_done_nmi_en_8 = (val & 0x100) >> 8
		self.dma_done_nmi_en_9 = (val & 0x200) >> 9
		self.dma_done_nmi_en_10 = (val & 0x400) >> 10
		self.dma_done_nmi_en_11 = (val & 0x800) >> 11
		self.dma_done_nmi_en_12 = (val & 0x1000) >> 12
		self.dma_done_nmi_en_13 = (val & 0x2000) >> 13
		self.dma_done_nmi_en_14 = (val & 0x4000) >> 14
		self.dma_done_nmi_en_15 = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_NMI_EN_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+44
		self.early_irq_nmi_en_0 = 0
		self.early_irq_nmi_en_1 = 0
		self.early_irq_nmi_en_2 = 0
		self.early_irq_nmi_en_3 = 0
		self.early_irq_nmi_en_4 = 0
		self.early_irq_nmi_en_5 = 0
		self.early_irq_nmi_en_6 = 0
		self.early_irq_nmi_en_7 = 0
		self.early_irq_nmi_en_8 = 0
		self.early_irq_nmi_en_9 = 0
		self.early_irq_nmi_en_10 = 0
		self.early_irq_nmi_en_11 = 0
		self.early_irq_nmi_en_12 = 0
		self.early_irq_nmi_en_13 = 0
		self.early_irq_nmi_en_14 = 0
		self.early_irq_nmi_en_15 = 0
	def write(self):
		val = 0
		val |= self.early_irq_nmi_en_0 << 0
		val |= self.early_irq_nmi_en_1 << 1
		val |= self.early_irq_nmi_en_2 << 2
		val |= self.early_irq_nmi_en_3 << 3
		val |= self.early_irq_nmi_en_4 << 4
		val |= self.early_irq_nmi_en_5 << 5
		val |= self.early_irq_nmi_en_6 << 6
		val |= self.early_irq_nmi_en_7 << 7
		val |= self.early_irq_nmi_en_8 << 8
		val |= self.early_irq_nmi_en_9 << 9
		val |= self.early_irq_nmi_en_10 << 10
		val |= self.early_irq_nmi_en_11 << 11
		val |= self.early_irq_nmi_en_12 << 12
		val |= self.early_irq_nmi_en_13 << 13
		val |= self.early_irq_nmi_en_14 << 14
		val |= self.early_irq_nmi_en_15 << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.early_irq_nmi_en_0 = (val & 0x01) >> 0
		self.early_irq_nmi_en_1 = (val & 0x02) >> 1
		self.early_irq_nmi_en_2 = (val & 0x04) >> 2
		self.early_irq_nmi_en_3 = (val & 0x08) >> 3
		self.early_irq_nmi_en_4 = (val & 0x10) >> 4
		self.early_irq_nmi_en_5 = (val & 0x20) >> 5
		self.early_irq_nmi_en_6 = (val & 0x40) >> 6
		self.early_irq_nmi_en_7 = (val & 0x80) >> 7
		self.early_irq_nmi_en_8 = (val & 0x100) >> 8
		self.early_irq_nmi_en_9 = (val & 0x200) >> 9
		self.early_irq_nmi_en_10 = (val & 0x400) >> 10
		self.early_irq_nmi_en_11 = (val & 0x800) >> 11
		self.early_irq_nmi_en_12 = (val & 0x1000) >> 12
		self.early_irq_nmi_en_13 = (val & 0x2000) >> 13
		self.early_irq_nmi_en_14 = (val & 0x4000) >> 14
		self.early_irq_nmi_en_15 = (val & 0x8000) >> 15
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
		self.dma_done_event_en_0 = 0
		self.dma_done_event_en_1 = 0
		self.dma_done_event_en_2 = 0
		self.dma_done_event_en_3 = 0
		self.dma_done_event_en_4 = 0
		self.dma_done_event_en_5 = 0
		self.dma_done_event_en_6 = 0
		self.dma_done_event_en_7 = 0
		self.dma_done_event_en_8 = 0
		self.dma_done_event_en_9 = 0
		self.dma_done_event_en_10 = 0
		self.dma_done_event_en_11 = 0
		self.dma_done_event_en_12 = 0
		self.dma_done_event_en_13 = 0
		self.dma_done_event_en_14 = 0
		self.dma_done_event_en_15 = 0
	def write(self):
		val = 0
		val |= self.dma_done_event_en_0 << 0
		val |= self.dma_done_event_en_1 << 1
		val |= self.dma_done_event_en_2 << 2
		val |= self.dma_done_event_en_3 << 3
		val |= self.dma_done_event_en_4 << 4
		val |= self.dma_done_event_en_5 << 5
		val |= self.dma_done_event_en_6 << 6
		val |= self.dma_done_event_en_7 << 7
		val |= self.dma_done_event_en_8 << 8
		val |= self.dma_done_event_en_9 << 9
		val |= self.dma_done_event_en_10 << 10
		val |= self.dma_done_event_en_11 << 11
		val |= self.dma_done_event_en_12 << 12
		val |= self.dma_done_event_en_13 << 13
		val |= self.dma_done_event_en_14 << 14
		val |= self.dma_done_event_en_15 << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_done_event_en_0 = (val & 0x01) >> 0
		self.dma_done_event_en_1 = (val & 0x02) >> 1
		self.dma_done_event_en_2 = (val & 0x04) >> 2
		self.dma_done_event_en_3 = (val & 0x08) >> 3
		self.dma_done_event_en_4 = (val & 0x10) >> 4
		self.dma_done_event_en_5 = (val & 0x20) >> 5
		self.dma_done_event_en_6 = (val & 0x40) >> 6
		self.dma_done_event_en_7 = (val & 0x80) >> 7
		self.dma_done_event_en_8 = (val & 0x100) >> 8
		self.dma_done_event_en_9 = (val & 0x200) >> 9
		self.dma_done_event_en_10 = (val & 0x400) >> 10
		self.dma_done_event_en_11 = (val & 0x800) >> 11
		self.dma_done_event_en_12 = (val & 0x1000) >> 12
		self.dma_done_event_en_13 = (val & 0x2000) >> 13
		self.dma_done_event_en_14 = (val & 0x4000) >> 14
		self.dma_done_event_en_15 = (val & 0x8000) >> 15
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
		self.early_irq_event_en_0 = 0
		self.early_irq_event_en_1 = 0
		self.early_irq_event_en_2 = 0
		self.early_irq_event_en_3 = 0
		self.early_irq_event_en_4 = 0
		self.early_irq_event_en_5 = 0
		self.early_irq_event_en_6 = 0
		self.early_irq_event_en_7 = 0
		self.early_irq_event_en_8 = 0
		self.early_irq_event_en_9 = 0
		self.early_irq_event_en_10 = 0
		self.early_irq_event_en_11 = 0
		self.early_irq_event_en_12 = 0
		self.early_irq_event_en_13 = 0
		self.early_irq_event_en_14 = 0
		self.early_irq_event_en_15 = 0
	def write(self):
		val = 0
		val |= self.early_irq_event_en_0 << 0
		val |= self.early_irq_event_en_1 << 1
		val |= self.early_irq_event_en_2 << 2
		val |= self.early_irq_event_en_3 << 3
		val |= self.early_irq_event_en_4 << 4
		val |= self.early_irq_event_en_5 << 5
		val |= self.early_irq_event_en_6 << 6
		val |= self.early_irq_event_en_7 << 7
		val |= self.early_irq_event_en_8 << 8
		val |= self.early_irq_event_en_9 << 9
		val |= self.early_irq_event_en_10 << 10
		val |= self.early_irq_event_en_11 << 11
		val |= self.early_irq_event_en_12 << 12
		val |= self.early_irq_event_en_13 << 13
		val |= self.early_irq_event_en_14 << 14
		val |= self.early_irq_event_en_15 << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.early_irq_event_en_0 = (val & 0x01) >> 0
		self.early_irq_event_en_1 = (val & 0x02) >> 1
		self.early_irq_event_en_2 = (val & 0x04) >> 2
		self.early_irq_event_en_3 = (val & 0x08) >> 3
		self.early_irq_event_en_4 = (val & 0x10) >> 4
		self.early_irq_event_en_5 = (val & 0x20) >> 5
		self.early_irq_event_en_6 = (val & 0x40) >> 6
		self.early_irq_event_en_7 = (val & 0x80) >> 7
		self.early_irq_event_en_8 = (val & 0x100) >> 8
		self.early_irq_event_en_9 = (val & 0x200) >> 9
		self.early_irq_event_en_10 = (val & 0x400) >> 10
		self.early_irq_event_en_11 = (val & 0x800) >> 11
		self.early_irq_event_en_12 = (val & 0x1000) >> 12
		self.early_irq_event_en_13 = (val & 0x2000) >> 13
		self.early_irq_event_en_14 = (val & 0x4000) >> 14
		self.early_irq_event_en_15 = (val & 0x8000) >> 15
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
		self.dma_done_sw_set_0 = 0
		self.dma_done_sw_set_1 = 0
		self.dma_done_sw_set_2 = 0
		self.dma_done_sw_set_3 = 0
		self.dma_done_sw_set_4 = 0
		self.dma_done_sw_set_5 = 0
		self.dma_done_sw_set_6 = 0
		self.dma_done_sw_set_7 = 0
		self.dma_done_sw_set_8 = 0
		self.dma_done_sw_set_9 = 0
		self.dma_done_sw_set_10 = 0
		self.dma_done_sw_set_11 = 0
		self.dma_done_sw_set_12 = 0
		self.dma_done_sw_set_13 = 0
		self.dma_done_sw_set_14 = 0
		self.dma_done_sw_set_15 = 0
		self.early_irq_sw_set_0 = 0
		self.early_irq_sw_set_1 = 0
		self.early_irq_sw_set_2 = 0
		self.early_irq_sw_set_3 = 0
		self.early_irq_sw_set_4 = 0
		self.early_irq_sw_set_5 = 0
		self.early_irq_sw_set_6 = 0
		self.early_irq_sw_set_7 = 0
		self.early_irq_sw_set_8 = 0
		self.early_irq_sw_set_9 = 0
		self.early_irq_sw_set_10 = 0
		self.early_irq_sw_set_11 = 0
		self.early_irq_sw_set_12 = 0
		self.early_irq_sw_set_13 = 0
		self.early_irq_sw_set_14 = 0
		self.early_irq_sw_set_15 = 0
	def write(self):
		val = 0
		val |= self.dma_done_sw_set_0 << 0
		val |= self.dma_done_sw_set_1 << 1
		val |= self.dma_done_sw_set_2 << 2
		val |= self.dma_done_sw_set_3 << 3
		val |= self.dma_done_sw_set_4 << 4
		val |= self.dma_done_sw_set_5 << 5
		val |= self.dma_done_sw_set_6 << 6
		val |= self.dma_done_sw_set_7 << 7
		val |= self.dma_done_sw_set_8 << 8
		val |= self.dma_done_sw_set_9 << 9
		val |= self.dma_done_sw_set_10 << 10
		val |= self.dma_done_sw_set_11 << 11
		val |= self.dma_done_sw_set_12 << 12
		val |= self.dma_done_sw_set_13 << 13
		val |= self.dma_done_sw_set_14 << 14
		val |= self.dma_done_sw_set_15 << 15
		val |= self.early_irq_sw_set_0 << 16
		val |= self.early_irq_sw_set_1 << 17
		val |= self.early_irq_sw_set_2 << 18
		val |= self.early_irq_sw_set_3 << 19
		val |= self.early_irq_sw_set_4 << 20
		val |= self.early_irq_sw_set_5 << 21
		val |= self.early_irq_sw_set_6 << 22
		val |= self.early_irq_sw_set_7 << 23
		val |= self.early_irq_sw_set_8 << 24
		val |= self.early_irq_sw_set_9 << 25
		val |= self.early_irq_sw_set_10 << 26
		val |= self.early_irq_sw_set_11 << 27
		val |= self.early_irq_sw_set_12 << 28
		val |= self.early_irq_sw_set_13 << 29
		val |= self.early_irq_sw_set_14 << 30
		val |= self.early_irq_sw_set_15 << 31
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_done_sw_set_0 = (val & 0x01) >> 0
		self.dma_done_sw_set_1 = (val & 0x02) >> 1
		self.dma_done_sw_set_2 = (val & 0x04) >> 2
		self.dma_done_sw_set_3 = (val & 0x08) >> 3
		self.dma_done_sw_set_4 = (val & 0x10) >> 4
		self.dma_done_sw_set_5 = (val & 0x20) >> 5
		self.dma_done_sw_set_6 = (val & 0x40) >> 6
		self.dma_done_sw_set_7 = (val & 0x80) >> 7
		self.dma_done_sw_set_8 = (val & 0x100) >> 8
		self.dma_done_sw_set_9 = (val & 0x200) >> 9
		self.dma_done_sw_set_10 = (val & 0x400) >> 10
		self.dma_done_sw_set_11 = (val & 0x800) >> 11
		self.dma_done_sw_set_12 = (val & 0x1000) >> 12
		self.dma_done_sw_set_13 = (val & 0x2000) >> 13
		self.dma_done_sw_set_14 = (val & 0x4000) >> 14
		self.dma_done_sw_set_15 = (val & 0x8000) >> 15
		self.early_irq_sw_set_0 = (val & 0x10000) >> 16
		self.early_irq_sw_set_1 = (val & 0x20000) >> 17
		self.early_irq_sw_set_2 = (val & 0x40000) >> 18
		self.early_irq_sw_set_3 = (val & 0x80000) >> 19
		self.early_irq_sw_set_4 = (val & 0x100000) >> 20
		self.early_irq_sw_set_5 = (val & 0x200000) >> 21
		self.early_irq_sw_set_6 = (val & 0x400000) >> 22
		self.early_irq_sw_set_7 = (val & 0x800000) >> 23
		self.early_irq_sw_set_8 = (val & 0x1000000) >> 24
		self.early_irq_sw_set_9 = (val & 0x2000000) >> 25
		self.early_irq_sw_set_10 = (val & 0x4000000) >> 26
		self.early_irq_sw_set_11 = (val & 0x8000000) >> 27
		self.early_irq_sw_set_12 = (val & 0x10000000) >> 28
		self.early_irq_sw_set_13 = (val & 0x20000000) >> 29
		self.early_irq_sw_set_14 = (val & 0x40000000) >> 30
		self.early_irq_sw_set_15 = (val & 0x80000000) >> 31
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_CFG_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+60
		self.ctrl_base_ptr = 0
	def write(self):
		val = 0
		val |= self.ctrl_base_ptr << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.ctrl_base_ptr = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_CFG_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+64
		self.alt_ctrl_base_ptr = 0
	def write(self):
		val = 0
		val |= self.alt_ctrl_base_ptr << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.alt_ctrl_base_ptr = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_CFG_2:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+68
		self.chnls_minus_1 = 0
		self.master_enable = 0
	def write(self):
		val = 0
		val |= self.chnls_minus_1 << 0
		val |= self.master_enable << 5
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.chnls_minus_1 = (val & 0x1F) >> 0
		self.master_enable = (val & 0x20) >> 5
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_WAITONREQ:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+72
		self.waitonreq = 0
	def write(self):
		val = 0
		val |= self.waitonreq << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.waitonreq = (val & 0xFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class FILL_MODE:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+76
		self.fill_mode_en = 0
	def write(self):
		val = 0
		val |= self.fill_mode_en << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.fill_mode_en = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class FILL_MODE_CFG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+80
		self.fill_mode_chnl_no = 0
		self.fill_mode_incr_val = 0
		self.fill_mode_init_val = 0
	def write(self):
		val = 0
		val |= self.fill_mode_chnl_no << 0
		val |= self.fill_mode_incr_val << 4
		val |= self.fill_mode_init_val << 12
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.fill_mode_chnl_no = (val & 0x0F) >> 0
		self.fill_mode_incr_val = (val & 0xFF0) >> 4
		self.fill_mode_init_val = (val & 0xFF000) >> 12
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class STRIDE_MODE:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+84
		self.stride_mode_en = 0
	def write(self):
		val = 0
		val |= self.stride_mode_en << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.stride_mode_en = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class STRIDE_MODE_CFG_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+88
		self.stride_mode_chnl_no = 0
		self.src_stride_val = 0
		self.dst_stride_val = 0
		self.src_inc = 0
		self.dst_inc = 0
	def write(self):
		val = 0
		val |= self.stride_mode_chnl_no << 0
		val |= self.src_stride_val << 4
		val |= self.dst_stride_val << 8
		val |= self.src_inc << 12
		val |= self.dst_inc << 14
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.stride_mode_chnl_no = (val & 0x0F) >> 0
		self.src_stride_val = (val & 0xF0) >> 4
		self.dst_stride_val = (val & 0xF00) >> 8
		self.src_inc = (val & 0x3000) >> 12
		self.dst_inc = (val & 0xC000) >> 14
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class STRIDE_MODE_CFG_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+92
		self.stride_mode_src_base_addr = 0
	def write(self):
		val = 0
		val |= self.stride_mode_src_base_addr << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.stride_mode_src_base_addr = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class STRIDE_MODE_CFG_2:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+96
		self.stride_mode_dst_base_addr = 0
	def write(self):
		val = 0
		val |= self.stride_mode_dst_base_addr << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.stride_mode_dst_base_addr = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EARLY_IRQ_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+100
		self.rem_transaction_chnl0 = 0
	def write(self):
		val = 0
		val |= self.rem_transaction_chnl0 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rem_transaction_chnl0 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EARLY_IRQ_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+104
		self.rem_transaction_chnl1 = 0
	def write(self):
		val = 0
		val |= self.rem_transaction_chnl1 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rem_transaction_chnl1 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EARLY_IRQ_2:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+108
		self.rem_transaction_chnl2 = 0
	def write(self):
		val = 0
		val |= self.rem_transaction_chnl2 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rem_transaction_chnl2 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EARLY_IRQ_3:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+112
		self.rem_transaction_chnl3 = 0
	def write(self):
		val = 0
		val |= self.rem_transaction_chnl3 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rem_transaction_chnl3 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EARLY_IRQ_4:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+116
		self.rem_transaction_chnl4 = 0
	def write(self):
		val = 0
		val |= self.rem_transaction_chnl4 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rem_transaction_chnl4 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EARLY_IRQ_5:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+120
		self.rem_transaction_chnl5 = 0
	def write(self):
		val = 0
		val |= self.rem_transaction_chnl5 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rem_transaction_chnl5 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EARLY_IRQ_6:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+124
		self.rem_transaction_chnl6 = 0
	def write(self):
		val = 0
		val |= self.rem_transaction_chnl6 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rem_transaction_chnl6 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EARLY_IRQ_7:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+128
		self.rem_transaction_chnl7 = 0
	def write(self):
		val = 0
		val |= self.rem_transaction_chnl7 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rem_transaction_chnl7 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EARLY_IRQ_8:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+132
		self.rem_transaction_chnl8 = 0
	def write(self):
		val = 0
		val |= self.rem_transaction_chnl8 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rem_transaction_chnl8 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EARLY_IRQ_9:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+136
		self.rem_transaction_chnl9 = 0
	def write(self):
		val = 0
		val |= self.rem_transaction_chnl9 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rem_transaction_chnl9 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EARLY_IRQ_10:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+140
		self.rem_transaction_chnl10 = 0
	def write(self):
		val = 0
		val |= self.rem_transaction_chnl10 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rem_transaction_chnl10 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EARLY_IRQ_11:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+144
		self.rem_transaction_chnl11 = 0
	def write(self):
		val = 0
		val |= self.rem_transaction_chnl11 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rem_transaction_chnl11 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EARLY_IRQ_12:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+148
		self.rem_transaction_chnl12 = 0
	def write(self):
		val = 0
		val |= self.rem_transaction_chnl12 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rem_transaction_chnl12 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EARLY_IRQ_13:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+152
		self.rem_transaction_chnl13 = 0
	def write(self):
		val = 0
		val |= self.rem_transaction_chnl13 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rem_transaction_chnl13 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EARLY_IRQ_14:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+156
		self.rem_transaction_chnl14 = 0
	def write(self):
		val = 0
		val |= self.rem_transaction_chnl14 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rem_transaction_chnl14 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EARLY_IRQ_15:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+160
		self.rem_transaction_chnl15 = 0
	def write(self):
		val = 0
		val |= self.rem_transaction_chnl15 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rem_transaction_chnl15 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_EARLY_IRQ_CFG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+164
		self.early_irq_alternate_sel = 0
	def write(self):
		val = 0
		val |= self.early_irq_alternate_sel << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.early_irq_alternate_sel = (val & 0xFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REPEATED_TRANSFER_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+168
		self.rptd_trnsfr_en = 0
	def write(self):
		val = 0
		val |= self.rptd_trnsfr_en << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rptd_trnsfr_en = (val & 0xFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REPEATED_TRANSFER_CHNL_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+172
		self.rptd_trnsfr_total_transaction_chnl0 = 0
	def write(self):
		val = 0
		val |= self.rptd_trnsfr_total_transaction_chnl0 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rptd_trnsfr_total_transaction_chnl0 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REPEATED_TRANSFER_CHNL_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+176
		self.rptd_trnsfr_total_transaction_chnl1 = 0
	def write(self):
		val = 0
		val |= self.rptd_trnsfr_total_transaction_chnl1 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rptd_trnsfr_total_transaction_chnl1 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REPEATED_TRANSFER_CHNL_2:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+180
		self.rptd_trnsfr_total_transaction_chnl2 = 0
	def write(self):
		val = 0
		val |= self.rptd_trnsfr_total_transaction_chnl2 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rptd_trnsfr_total_transaction_chnl2 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REPEATED_TRANSFER_CHNL_3:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+184
		self.rptd_trnsfr_total_transaction_chnl3 = 0
	def write(self):
		val = 0
		val |= self.rptd_trnsfr_total_transaction_chnl3 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rptd_trnsfr_total_transaction_chnl3 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REPEATED_TRANSFER_CHNL_4:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+188
		self.rptd_trnsfr_total_transaction_chnl4 = 0
	def write(self):
		val = 0
		val |= self.rptd_trnsfr_total_transaction_chnl4 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rptd_trnsfr_total_transaction_chnl4 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REPEATED_TRANSFER_CHNL_5:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+192
		self.rptd_trnsfr_total_transaction_chnl5 = 0
	def write(self):
		val = 0
		val |= self.rptd_trnsfr_total_transaction_chnl5 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rptd_trnsfr_total_transaction_chnl5 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REPEATED_TRANSFER_CHNL_6:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+196
		self.rptd_trnsfr_total_transaction_chnl6 = 0
	def write(self):
		val = 0
		val |= self.rptd_trnsfr_total_transaction_chnl6 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rptd_trnsfr_total_transaction_chnl6 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REPEATED_TRANSFER_CHNL_7:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+200
		self.rptd_trnsfr_total_transaction_chnl7 = 0
	def write(self):
		val = 0
		val |= self.rptd_trnsfr_total_transaction_chnl7 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rptd_trnsfr_total_transaction_chnl7 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REPEATED_TRANSFER_CHNL_8:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+204
		self.rptd_trnsfr_total_transaction_chnl8 = 0
	def write(self):
		val = 0
		val |= self.rptd_trnsfr_total_transaction_chnl8 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rptd_trnsfr_total_transaction_chnl8 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REPEATED_TRANSFER_CHNL_9:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+208
		self.rptd_trnsfr_total_transaction_chnl9 = 0
	def write(self):
		val = 0
		val |= self.rptd_trnsfr_total_transaction_chnl9 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rptd_trnsfr_total_transaction_chnl9 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REPEATED_TRANSFER_CHNL_10:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+212
		self.rptd_trnsfr_total_transaction_chnl10 = 0
	def write(self):
		val = 0
		val |= self.rptd_trnsfr_total_transaction_chnl10 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rptd_trnsfr_total_transaction_chnl10 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REPEATED_TRANSFER_CHNL_11:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+216
		self.rptd_trnsfr_total_transaction_chnl11 = 0
	def write(self):
		val = 0
		val |= self.rptd_trnsfr_total_transaction_chnl11 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rptd_trnsfr_total_transaction_chnl11 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REPEATED_TRANSFER_CHNL_12:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+220
		self.rptd_trnsfr_total_transaction_chnl12 = 0
	def write(self):
		val = 0
		val |= self.rptd_trnsfr_total_transaction_chnl12 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rptd_trnsfr_total_transaction_chnl12 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REPEATED_TRANSFER_CHNL_13:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+224
		self.rptd_trnsfr_total_transaction_chnl13 = 0
	def write(self):
		val = 0
		val |= self.rptd_trnsfr_total_transaction_chnl13 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rptd_trnsfr_total_transaction_chnl13 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REPEATED_TRANSFER_CHNL_14:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+228
		self.rptd_trnsfr_total_transaction_chnl14 = 0
	def write(self):
		val = 0
		val |= self.rptd_trnsfr_total_transaction_chnl14 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rptd_trnsfr_total_transaction_chnl14 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REPEATED_TRANSFER_CHNL_15:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+232
		self.rptd_trnsfr_total_transaction_chnl15 = 0
	def write(self):
		val = 0
		val |= self.rptd_trnsfr_total_transaction_chnl15 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rptd_trnsfr_total_transaction_chnl15 = (val & 0x3FF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REPEATED_TRANSFER_ALTERNATE_SEL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+236
		self.rptd_trnsfr_alternate_sel = 0
	def write(self):
		val = 0
		val |= self.rptd_trnsfr_alternate_sel << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rptd_trnsfr_alternate_sel = (val & 0xFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_ARBITRATION:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+240
		self.dma_rr_en = 0
	def write(self):
		val = 0
		val |= self.dma_rr_en << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_rr_en = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_ARBITRATION_MASK:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+244
		self.dma_rr_mask = 0
	def write(self):
		val = 0
		val |= self.dma_rr_mask << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_rr_mask = (val & 0xFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class dma:
	def __init__(self,dev,base_addr):
		self.DESC = DESC(dev,base_addr)
		self.PWR_EN = PWR_EN(dev,base_addr)
		self.RST_CTRL = RST_CTRL(dev,base_addr)
		self.RST_STS = RST_STS(dev,base_addr)
		self.CLK_CTRL = CLK_CTRL(dev,base_addr)
		self.DBG_CTRL = DBG_CTRL(dev,base_addr)
		self.INTR_STS = INTR_STS(dev,base_addr)
		self.INTR_EVENT = INTR_EVENT(dev,base_addr)
		self.INTR_EN_0 = INTR_EN_0(dev,base_addr)
		self.INTR_EN_1 = INTR_EN_1(dev,base_addr)
		self.INTR_NMI_EN_0 = INTR_NMI_EN_0(dev,base_addr)
		self.INTR_NMI_EN_1 = INTR_NMI_EN_1(dev,base_addr)
		self.EVENT_EN_0 = EVENT_EN_0(dev,base_addr)
		self.EVENT_EN_1 = EVENT_EN_1(dev,base_addr)
		self.INTR_SW_SET = INTR_SW_SET(dev,base_addr)
		self.DMA_CFG_0 = DMA_CFG_0(dev,base_addr)
		self.DMA_CFG_1 = DMA_CFG_1(dev,base_addr)
		self.DMA_CFG_2 = DMA_CFG_2(dev,base_addr)
		self.DMA_WAITONREQ = DMA_WAITONREQ(dev,base_addr)
		self.FILL_MODE = FILL_MODE(dev,base_addr)
		self.FILL_MODE_CFG = FILL_MODE_CFG(dev,base_addr)
		self.STRIDE_MODE = STRIDE_MODE(dev,base_addr)
		self.STRIDE_MODE_CFG_0 = STRIDE_MODE_CFG_0(dev,base_addr)
		self.STRIDE_MODE_CFG_1 = STRIDE_MODE_CFG_1(dev,base_addr)
		self.STRIDE_MODE_CFG_2 = STRIDE_MODE_CFG_2(dev,base_addr)
		self.DMA_EARLY_IRQ_0 = DMA_EARLY_IRQ_0(dev,base_addr)
		self.DMA_EARLY_IRQ_1 = DMA_EARLY_IRQ_1(dev,base_addr)
		self.DMA_EARLY_IRQ_2 = DMA_EARLY_IRQ_2(dev,base_addr)
		self.DMA_EARLY_IRQ_3 = DMA_EARLY_IRQ_3(dev,base_addr)
		self.DMA_EARLY_IRQ_4 = DMA_EARLY_IRQ_4(dev,base_addr)
		self.DMA_EARLY_IRQ_5 = DMA_EARLY_IRQ_5(dev,base_addr)
		self.DMA_EARLY_IRQ_6 = DMA_EARLY_IRQ_6(dev,base_addr)
		self.DMA_EARLY_IRQ_7 = DMA_EARLY_IRQ_7(dev,base_addr)
		self.DMA_EARLY_IRQ_8 = DMA_EARLY_IRQ_8(dev,base_addr)
		self.DMA_EARLY_IRQ_9 = DMA_EARLY_IRQ_9(dev,base_addr)
		self.DMA_EARLY_IRQ_10 = DMA_EARLY_IRQ_10(dev,base_addr)
		self.DMA_EARLY_IRQ_11 = DMA_EARLY_IRQ_11(dev,base_addr)
		self.DMA_EARLY_IRQ_12 = DMA_EARLY_IRQ_12(dev,base_addr)
		self.DMA_EARLY_IRQ_13 = DMA_EARLY_IRQ_13(dev,base_addr)
		self.DMA_EARLY_IRQ_14 = DMA_EARLY_IRQ_14(dev,base_addr)
		self.DMA_EARLY_IRQ_15 = DMA_EARLY_IRQ_15(dev,base_addr)
		self.DMA_EARLY_IRQ_CFG = DMA_EARLY_IRQ_CFG(dev,base_addr)
		self.REPEATED_TRANSFER_EN = REPEATED_TRANSFER_EN(dev,base_addr)
		self.REPEATED_TRANSFER_CHNL_0 = REPEATED_TRANSFER_CHNL_0(dev,base_addr)
		self.REPEATED_TRANSFER_CHNL_1 = REPEATED_TRANSFER_CHNL_1(dev,base_addr)
		self.REPEATED_TRANSFER_CHNL_2 = REPEATED_TRANSFER_CHNL_2(dev,base_addr)
		self.REPEATED_TRANSFER_CHNL_3 = REPEATED_TRANSFER_CHNL_3(dev,base_addr)
		self.REPEATED_TRANSFER_CHNL_4 = REPEATED_TRANSFER_CHNL_4(dev,base_addr)
		self.REPEATED_TRANSFER_CHNL_5 = REPEATED_TRANSFER_CHNL_5(dev,base_addr)
		self.REPEATED_TRANSFER_CHNL_6 = REPEATED_TRANSFER_CHNL_6(dev,base_addr)
		self.REPEATED_TRANSFER_CHNL_7 = REPEATED_TRANSFER_CHNL_7(dev,base_addr)
		self.REPEATED_TRANSFER_CHNL_8 = REPEATED_TRANSFER_CHNL_8(dev,base_addr)
		self.REPEATED_TRANSFER_CHNL_9 = REPEATED_TRANSFER_CHNL_9(dev,base_addr)
		self.REPEATED_TRANSFER_CHNL_10 = REPEATED_TRANSFER_CHNL_10(dev,base_addr)
		self.REPEATED_TRANSFER_CHNL_11 = REPEATED_TRANSFER_CHNL_11(dev,base_addr)
		self.REPEATED_TRANSFER_CHNL_12 = REPEATED_TRANSFER_CHNL_12(dev,base_addr)
		self.REPEATED_TRANSFER_CHNL_13 = REPEATED_TRANSFER_CHNL_13(dev,base_addr)
		self.REPEATED_TRANSFER_CHNL_14 = REPEATED_TRANSFER_CHNL_14(dev,base_addr)
		self.REPEATED_TRANSFER_CHNL_15 = REPEATED_TRANSFER_CHNL_15(dev,base_addr)
		self.REPEATED_TRANSFER_ALTERNATE_SEL = REPEATED_TRANSFER_ALTERNATE_SEL(dev,base_addr)
		self.DMA_ARBITRATION = DMA_ARBITRATION(dev,base_addr)
		self.DMA_ARBITRATION_MASK = DMA_ARBITRATION_MASK(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
