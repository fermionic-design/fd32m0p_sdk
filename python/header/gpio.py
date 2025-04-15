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
	def write(self):
		val = 0
		val |= self.en_async_clk_req << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.en_async_clk_req = (val & 0x01) >> 0
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
		self.intr0 = 0
		self.intr1 = 0
		self.intr2 = 0
		self.intr3 = 0
		self.intr4 = 0
		self.intr5 = 0
		self.intr6 = 0
		self.intr7 = 0
		self.intr8 = 0
		self.intr9 = 0
		self.intr10 = 0
		self.intr11 = 0
		self.intr12 = 0
		self.intr13 = 0
		self.intr14 = 0
		self.intr15 = 0
		self.intr16 = 0
		self.intr17 = 0
		self.intr18 = 0
		self.intr19 = 0
		self.intr20 = 0
		self.intr21 = 0
		self.intr22 = 0
		self.intr23 = 0
		self.intr24 = 0
		self.intr25 = 0
		self.intr26 = 0
		self.intr27 = 0
		self.intr28 = 0
		self.intr29 = 0
		self.intr30 = 0
		self.intr31 = 0
	def write(self):
		val = 0
		val |= self.intr0 << 0
		val |= self.intr1 << 1
		val |= self.intr2 << 2
		val |= self.intr3 << 3
		val |= self.intr4 << 4
		val |= self.intr5 << 5
		val |= self.intr6 << 6
		val |= self.intr7 << 7
		val |= self.intr8 << 8
		val |= self.intr9 << 9
		val |= self.intr10 << 10
		val |= self.intr11 << 11
		val |= self.intr12 << 12
		val |= self.intr13 << 13
		val |= self.intr14 << 14
		val |= self.intr15 << 15
		val |= self.intr16 << 16
		val |= self.intr17 << 17
		val |= self.intr18 << 18
		val |= self.intr19 << 19
		val |= self.intr20 << 20
		val |= self.intr21 << 21
		val |= self.intr22 << 22
		val |= self.intr23 << 23
		val |= self.intr24 << 24
		val |= self.intr25 << 25
		val |= self.intr26 << 26
		val |= self.intr27 << 27
		val |= self.intr28 << 28
		val |= self.intr29 << 29
		val |= self.intr30 << 30
		val |= self.intr31 << 31
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.intr0 = (val & 0x01) >> 0
		self.intr1 = (val & 0x02) >> 1
		self.intr2 = (val & 0x04) >> 2
		self.intr3 = (val & 0x08) >> 3
		self.intr4 = (val & 0x10) >> 4
		self.intr5 = (val & 0x20) >> 5
		self.intr6 = (val & 0x40) >> 6
		self.intr7 = (val & 0x80) >> 7
		self.intr8 = (val & 0x100) >> 8
		self.intr9 = (val & 0x200) >> 9
		self.intr10 = (val & 0x400) >> 10
		self.intr11 = (val & 0x800) >> 11
		self.intr12 = (val & 0x1000) >> 12
		self.intr13 = (val & 0x2000) >> 13
		self.intr14 = (val & 0x4000) >> 14
		self.intr15 = (val & 0x8000) >> 15
		self.intr16 = (val & 0x10000) >> 16
		self.intr17 = (val & 0x20000) >> 17
		self.intr18 = (val & 0x40000) >> 18
		self.intr19 = (val & 0x80000) >> 19
		self.intr20 = (val & 0x100000) >> 20
		self.intr21 = (val & 0x200000) >> 21
		self.intr22 = (val & 0x400000) >> 22
		self.intr23 = (val & 0x800000) >> 23
		self.intr24 = (val & 0x1000000) >> 24
		self.intr25 = (val & 0x2000000) >> 25
		self.intr26 = (val & 0x4000000) >> 26
		self.intr27 = (val & 0x8000000) >> 27
		self.intr28 = (val & 0x10000000) >> 28
		self.intr29 = (val & 0x20000000) >> 29
		self.intr30 = (val & 0x40000000) >> 30
		self.intr31 = (val & 0x80000000) >> 31
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EN0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+28
		self.intr0_en = 0
		self.intr1_en = 0
		self.intr2_en = 0
		self.intr3_en = 0
		self.intr4_en = 0
		self.intr5_en = 0
		self.intr6_en = 0
		self.intr7_en = 0
		self.intr8_en = 0
		self.intr9_en = 0
		self.intr10_en = 0
		self.intr11_en = 0
		self.intr12_en = 0
		self.intr13_en = 0
		self.intr14_en = 0
		self.intr15_en = 0
	def write(self):
		val = 0
		val |= self.intr0_en << 0
		val |= self.intr1_en << 1
		val |= self.intr2_en << 2
		val |= self.intr3_en << 3
		val |= self.intr4_en << 4
		val |= self.intr5_en << 5
		val |= self.intr6_en << 6
		val |= self.intr7_en << 7
		val |= self.intr8_en << 8
		val |= self.intr9_en << 9
		val |= self.intr10_en << 10
		val |= self.intr11_en << 11
		val |= self.intr12_en << 12
		val |= self.intr13_en << 13
		val |= self.intr14_en << 14
		val |= self.intr15_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.intr0_en = (val & 0x01) >> 0
		self.intr1_en = (val & 0x02) >> 1
		self.intr2_en = (val & 0x04) >> 2
		self.intr3_en = (val & 0x08) >> 3
		self.intr4_en = (val & 0x10) >> 4
		self.intr5_en = (val & 0x20) >> 5
		self.intr6_en = (val & 0x40) >> 6
		self.intr7_en = (val & 0x80) >> 7
		self.intr8_en = (val & 0x100) >> 8
		self.intr9_en = (val & 0x200) >> 9
		self.intr10_en = (val & 0x400) >> 10
		self.intr11_en = (val & 0x800) >> 11
		self.intr12_en = (val & 0x1000) >> 12
		self.intr13_en = (val & 0x2000) >> 13
		self.intr14_en = (val & 0x4000) >> 14
		self.intr15_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EN1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+32
		self.intr16_en = 0
		self.intr17_en = 0
		self.intr18_en = 0
		self.intr19_en = 0
		self.intr20_en = 0
		self.intr21_en = 0
		self.intr22_en = 0
		self.intr23_en = 0
		self.intr24_en = 0
		self.intr25_en = 0
		self.intr26_en = 0
		self.intr27_en = 0
		self.intr28_en = 0
		self.intr29_en = 0
		self.intr30_en = 0
		self.intr31_en = 0
	def write(self):
		val = 0
		val |= self.intr16_en << 0
		val |= self.intr17_en << 1
		val |= self.intr18_en << 2
		val |= self.intr19_en << 3
		val |= self.intr20_en << 4
		val |= self.intr21_en << 5
		val |= self.intr22_en << 6
		val |= self.intr23_en << 7
		val |= self.intr24_en << 8
		val |= self.intr25_en << 9
		val |= self.intr26_en << 10
		val |= self.intr27_en << 11
		val |= self.intr28_en << 12
		val |= self.intr29_en << 13
		val |= self.intr30_en << 14
		val |= self.intr31_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.intr16_en = (val & 0x01) >> 0
		self.intr17_en = (val & 0x02) >> 1
		self.intr18_en = (val & 0x04) >> 2
		self.intr19_en = (val & 0x08) >> 3
		self.intr20_en = (val & 0x10) >> 4
		self.intr21_en = (val & 0x20) >> 5
		self.intr22_en = (val & 0x40) >> 6
		self.intr23_en = (val & 0x80) >> 7
		self.intr24_en = (val & 0x100) >> 8
		self.intr25_en = (val & 0x200) >> 9
		self.intr26_en = (val & 0x400) >> 10
		self.intr27_en = (val & 0x800) >> 11
		self.intr28_en = (val & 0x1000) >> 12
		self.intr29_en = (val & 0x2000) >> 13
		self.intr30_en = (val & 0x4000) >> 14
		self.intr31_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_NMI_EN0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+36
		self.intr0_nmi_en = 0
		self.intr1_nmi_en = 0
		self.intr2_nmi_en = 0
		self.intr3_nmi_en = 0
		self.intr4_nmi_en = 0
		self.intr5_nmi_en = 0
		self.intr6_nmi_en = 0
		self.intr7_nmi_en = 0
		self.intr8_nmi_en = 0
		self.intr9_nmi_en = 0
		self.intr10_nmi_en = 0
		self.intr11_nmi_en = 0
		self.intr12_nmi_en = 0
		self.intr13_nmi_en = 0
		self.intr14_nmi_en = 0
		self.intr15_nmi_en = 0
	def write(self):
		val = 0
		val |= self.intr0_nmi_en << 0
		val |= self.intr1_nmi_en << 1
		val |= self.intr2_nmi_en << 2
		val |= self.intr3_nmi_en << 3
		val |= self.intr4_nmi_en << 4
		val |= self.intr5_nmi_en << 5
		val |= self.intr6_nmi_en << 6
		val |= self.intr7_nmi_en << 7
		val |= self.intr8_nmi_en << 8
		val |= self.intr9_nmi_en << 9
		val |= self.intr10_nmi_en << 10
		val |= self.intr11_nmi_en << 11
		val |= self.intr12_nmi_en << 12
		val |= self.intr13_nmi_en << 13
		val |= self.intr14_nmi_en << 14
		val |= self.intr15_nmi_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.intr0_nmi_en = (val & 0x01) >> 0
		self.intr1_nmi_en = (val & 0x02) >> 1
		self.intr2_nmi_en = (val & 0x04) >> 2
		self.intr3_nmi_en = (val & 0x08) >> 3
		self.intr4_nmi_en = (val & 0x10) >> 4
		self.intr5_nmi_en = (val & 0x20) >> 5
		self.intr6_nmi_en = (val & 0x40) >> 6
		self.intr7_nmi_en = (val & 0x80) >> 7
		self.intr8_nmi_en = (val & 0x100) >> 8
		self.intr9_nmi_en = (val & 0x200) >> 9
		self.intr10_nmi_en = (val & 0x400) >> 10
		self.intr11_nmi_en = (val & 0x800) >> 11
		self.intr12_nmi_en = (val & 0x1000) >> 12
		self.intr13_nmi_en = (val & 0x2000) >> 13
		self.intr14_nmi_en = (val & 0x4000) >> 14
		self.intr15_nmi_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_NMI_EN1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+40
		self.intr16_nmi_en = 0
		self.intr17_nmi_en = 0
		self.intr18_nmi_en = 0
		self.intr19_nmi_en = 0
		self.intr20_nmi_en = 0
		self.intr21_nmi_en = 0
		self.intr22_nmi_en = 0
		self.intr23_nmi_en = 0
		self.intr24_nmi_en = 0
		self.intr25_nmi_en = 0
		self.intr26_nmi_en = 0
		self.intr27_nmi_en = 0
		self.intr28_nmi_en = 0
		self.intr29_nmi_en = 0
		self.intr30_nmi_en = 0
		self.intr31_nmi_en = 0
	def write(self):
		val = 0
		val |= self.intr16_nmi_en << 0
		val |= self.intr17_nmi_en << 1
		val |= self.intr18_nmi_en << 2
		val |= self.intr19_nmi_en << 3
		val |= self.intr20_nmi_en << 4
		val |= self.intr21_nmi_en << 5
		val |= self.intr22_nmi_en << 6
		val |= self.intr23_nmi_en << 7
		val |= self.intr24_nmi_en << 8
		val |= self.intr25_nmi_en << 9
		val |= self.intr26_nmi_en << 10
		val |= self.intr27_nmi_en << 11
		val |= self.intr28_nmi_en << 12
		val |= self.intr29_nmi_en << 13
		val |= self.intr30_nmi_en << 14
		val |= self.intr31_nmi_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.intr16_nmi_en = (val & 0x01) >> 0
		self.intr17_nmi_en = (val & 0x02) >> 1
		self.intr18_nmi_en = (val & 0x04) >> 2
		self.intr19_nmi_en = (val & 0x08) >> 3
		self.intr20_nmi_en = (val & 0x10) >> 4
		self.intr21_nmi_en = (val & 0x20) >> 5
		self.intr22_nmi_en = (val & 0x40) >> 6
		self.intr23_nmi_en = (val & 0x80) >> 7
		self.intr24_nmi_en = (val & 0x100) >> 8
		self.intr25_nmi_en = (val & 0x200) >> 9
		self.intr26_nmi_en = (val & 0x400) >> 10
		self.intr27_nmi_en = (val & 0x800) >> 11
		self.intr28_nmi_en = (val & 0x1000) >> 12
		self.intr29_nmi_en = (val & 0x2000) >> 13
		self.intr30_nmi_en = (val & 0x4000) >> 14
		self.intr31_nmi_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class EVENT_EN0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+44
		self.intr0_event_en = 0
		self.intr1_event_en = 0
		self.intr2_event_en = 0
		self.intr3_event_en = 0
		self.intr4_event_en = 0
		self.intr5_event_en = 0
		self.intr6_event_en = 0
		self.intr7_event_en = 0
		self.intr8_event_en = 0
		self.intr9_event_en = 0
		self.intr10_event_en = 0
		self.intr11_event_en = 0
		self.intr12_event_en = 0
		self.intr13_event_en = 0
		self.intr14_event_en = 0
		self.intr15_event_en = 0
	def write(self):
		val = 0
		val |= self.intr0_event_en << 0
		val |= self.intr1_event_en << 1
		val |= self.intr2_event_en << 2
		val |= self.intr3_event_en << 3
		val |= self.intr4_event_en << 4
		val |= self.intr5_event_en << 5
		val |= self.intr6_event_en << 6
		val |= self.intr7_event_en << 7
		val |= self.intr8_event_en << 8
		val |= self.intr9_event_en << 9
		val |= self.intr10_event_en << 10
		val |= self.intr11_event_en << 11
		val |= self.intr12_event_en << 12
		val |= self.intr13_event_en << 13
		val |= self.intr14_event_en << 14
		val |= self.intr15_event_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.intr0_event_en = (val & 0x01) >> 0
		self.intr1_event_en = (val & 0x02) >> 1
		self.intr2_event_en = (val & 0x04) >> 2
		self.intr3_event_en = (val & 0x08) >> 3
		self.intr4_event_en = (val & 0x10) >> 4
		self.intr5_event_en = (val & 0x20) >> 5
		self.intr6_event_en = (val & 0x40) >> 6
		self.intr7_event_en = (val & 0x80) >> 7
		self.intr8_event_en = (val & 0x100) >> 8
		self.intr9_event_en = (val & 0x200) >> 9
		self.intr10_event_en = (val & 0x400) >> 10
		self.intr11_event_en = (val & 0x800) >> 11
		self.intr12_event_en = (val & 0x1000) >> 12
		self.intr13_event_en = (val & 0x2000) >> 13
		self.intr14_event_en = (val & 0x4000) >> 14
		self.intr15_event_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class EVENT_EN1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+48
		self.intr16_event_en = 0
		self.intr17_event_en = 0
		self.intr18_event_en = 0
		self.intr19_event_en = 0
		self.intr20_event_en = 0
		self.intr21_event_en = 0
		self.intr22_event_en = 0
		self.intr23_event_en = 0
		self.intr24_event_en = 0
		self.intr25_event_en = 0
		self.intr26_event_en = 0
		self.intr27_event_en = 0
		self.intr28_event_en = 0
		self.intr29_event_en = 0
		self.intr30_event_en = 0
		self.intr31_event_en = 0
	def write(self):
		val = 0
		val |= self.intr16_event_en << 0
		val |= self.intr17_event_en << 1
		val |= self.intr18_event_en << 2
		val |= self.intr19_event_en << 3
		val |= self.intr20_event_en << 4
		val |= self.intr21_event_en << 5
		val |= self.intr22_event_en << 6
		val |= self.intr23_event_en << 7
		val |= self.intr24_event_en << 8
		val |= self.intr25_event_en << 9
		val |= self.intr26_event_en << 10
		val |= self.intr27_event_en << 11
		val |= self.intr28_event_en << 12
		val |= self.intr29_event_en << 13
		val |= self.intr30_event_en << 14
		val |= self.intr31_event_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.intr16_event_en = (val & 0x01) >> 0
		self.intr17_event_en = (val & 0x02) >> 1
		self.intr18_event_en = (val & 0x04) >> 2
		self.intr19_event_en = (val & 0x08) >> 3
		self.intr20_event_en = (val & 0x10) >> 4
		self.intr21_event_en = (val & 0x20) >> 5
		self.intr22_event_en = (val & 0x40) >> 6
		self.intr23_event_en = (val & 0x80) >> 7
		self.intr24_event_en = (val & 0x100) >> 8
		self.intr25_event_en = (val & 0x200) >> 9
		self.intr26_event_en = (val & 0x400) >> 10
		self.intr27_event_en = (val & 0x800) >> 11
		self.intr28_event_en = (val & 0x1000) >> 12
		self.intr29_event_en = (val & 0x2000) >> 13
		self.intr30_event_en = (val & 0x4000) >> 14
		self.intr31_event_en = (val & 0x8000) >> 15
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
		self.intr0_sw_set = 0
		self.intr1_sw_set = 0
		self.intr2_sw_set = 0
		self.intr3_sw_set = 0
		self.intr4_sw_set = 0
		self.intr5_sw_set = 0
		self.intr6_sw_set = 0
		self.intr7_sw_set = 0
		self.intr8_sw_set = 0
		self.intr9_sw_set = 0
		self.intr10_sw_set = 0
		self.intr11_sw_set = 0
		self.intr12_sw_set = 0
		self.intr13_sw_set = 0
		self.intr14_sw_set = 0
		self.intr15_sw_set = 0
		self.intr16_sw_set = 0
		self.intr17_sw_set = 0
		self.intr18_sw_set = 0
		self.intr19_sw_set = 0
		self.intr20_sw_set = 0
		self.intr21_sw_set = 0
		self.intr22_sw_set = 0
		self.intr23_sw_set = 0
		self.intr24_sw_set = 0
		self.intr25_sw_set = 0
		self.intr26_sw_set = 0
		self.intr27_sw_set = 0
		self.intr28_sw_set = 0
		self.intr29_sw_set = 0
		self.intr30_sw_set = 0
		self.intr31_sw_set = 0
	def write(self):
		val = 0
		val |= self.intr0_sw_set << 0
		val |= self.intr1_sw_set << 1
		val |= self.intr2_sw_set << 2
		val |= self.intr3_sw_set << 3
		val |= self.intr4_sw_set << 4
		val |= self.intr5_sw_set << 5
		val |= self.intr6_sw_set << 6
		val |= self.intr7_sw_set << 7
		val |= self.intr8_sw_set << 8
		val |= self.intr9_sw_set << 9
		val |= self.intr10_sw_set << 10
		val |= self.intr11_sw_set << 11
		val |= self.intr12_sw_set << 12
		val |= self.intr13_sw_set << 13
		val |= self.intr14_sw_set << 14
		val |= self.intr15_sw_set << 15
		val |= self.intr16_sw_set << 16
		val |= self.intr17_sw_set << 17
		val |= self.intr18_sw_set << 18
		val |= self.intr19_sw_set << 19
		val |= self.intr20_sw_set << 20
		val |= self.intr21_sw_set << 21
		val |= self.intr22_sw_set << 22
		val |= self.intr23_sw_set << 23
		val |= self.intr24_sw_set << 24
		val |= self.intr25_sw_set << 25
		val |= self.intr26_sw_set << 26
		val |= self.intr27_sw_set << 27
		val |= self.intr28_sw_set << 28
		val |= self.intr29_sw_set << 29
		val |= self.intr30_sw_set << 30
		val |= self.intr31_sw_set << 31
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.intr0_sw_set = (val & 0x01) >> 0
		self.intr1_sw_set = (val & 0x02) >> 1
		self.intr2_sw_set = (val & 0x04) >> 2
		self.intr3_sw_set = (val & 0x08) >> 3
		self.intr4_sw_set = (val & 0x10) >> 4
		self.intr5_sw_set = (val & 0x20) >> 5
		self.intr6_sw_set = (val & 0x40) >> 6
		self.intr7_sw_set = (val & 0x80) >> 7
		self.intr8_sw_set = (val & 0x100) >> 8
		self.intr9_sw_set = (val & 0x200) >> 9
		self.intr10_sw_set = (val & 0x400) >> 10
		self.intr11_sw_set = (val & 0x800) >> 11
		self.intr12_sw_set = (val & 0x1000) >> 12
		self.intr13_sw_set = (val & 0x2000) >> 13
		self.intr14_sw_set = (val & 0x4000) >> 14
		self.intr15_sw_set = (val & 0x8000) >> 15
		self.intr16_sw_set = (val & 0x10000) >> 16
		self.intr17_sw_set = (val & 0x20000) >> 17
		self.intr18_sw_set = (val & 0x40000) >> 18
		self.intr19_sw_set = (val & 0x80000) >> 19
		self.intr20_sw_set = (val & 0x100000) >> 20
		self.intr21_sw_set = (val & 0x200000) >> 21
		self.intr22_sw_set = (val & 0x400000) >> 22
		self.intr23_sw_set = (val & 0x800000) >> 23
		self.intr24_sw_set = (val & 0x1000000) >> 24
		self.intr25_sw_set = (val & 0x2000000) >> 25
		self.intr26_sw_set = (val & 0x4000000) >> 26
		self.intr27_sw_set = (val & 0x8000000) >> 27
		self.intr28_sw_set = (val & 0x10000000) >> 28
		self.intr29_sw_set = (val & 0x20000000) >> 29
		self.intr30_sw_set = (val & 0x40000000) >> 30
		self.intr31_sw_set = (val & 0x80000000) >> 31
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DOUT_3_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+56
		self.dout_0 = 0
		self.dout_1 = 0
		self.dout_2 = 0
		self.dout_3 = 0
	def write(self):
		val = 0
		val |= self.dout_0 << 0
		val |= self.dout_1 << 8
		val |= self.dout_2 << 16
		val |= self.dout_3 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dout_0 = (val & 0x01) >> 0
		self.dout_1 = (val & 0x100) >> 8
		self.dout_2 = (val & 0x10000) >> 16
		self.dout_3 = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DOUT_7_4:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+60
		self.dout_4 = 0
		self.dout_5 = 0
		self.dout_6 = 0
		self.dout_7 = 0
	def write(self):
		val = 0
		val |= self.dout_4 << 0
		val |= self.dout_5 << 8
		val |= self.dout_6 << 16
		val |= self.dout_7 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dout_4 = (val & 0x01) >> 0
		self.dout_5 = (val & 0x100) >> 8
		self.dout_6 = (val & 0x10000) >> 16
		self.dout_7 = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DOUT_11_8:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+64
		self.dout_8 = 0
		self.dout_9 = 0
		self.dout_10 = 0
		self.dout_11 = 0
	def write(self):
		val = 0
		val |= self.dout_8 << 0
		val |= self.dout_9 << 8
		val |= self.dout_10 << 16
		val |= self.dout_11 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dout_8 = (val & 0x01) >> 0
		self.dout_9 = (val & 0x100) >> 8
		self.dout_10 = (val & 0x10000) >> 16
		self.dout_11 = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DOUT_15_12:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+68
		self.dout_12 = 0
		self.dout_13 = 0
		self.dout_14 = 0
		self.dout_15 = 0
	def write(self):
		val = 0
		val |= self.dout_12 << 0
		val |= self.dout_13 << 8
		val |= self.dout_14 << 16
		val |= self.dout_15 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dout_12 = (val & 0x01) >> 0
		self.dout_13 = (val & 0x100) >> 8
		self.dout_14 = (val & 0x10000) >> 16
		self.dout_15 = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DOUT_19_16:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+72
		self.dout_16 = 0
		self.dout_17 = 0
		self.dout_18 = 0
		self.dout_19 = 0
	def write(self):
		val = 0
		val |= self.dout_16 << 0
		val |= self.dout_17 << 8
		val |= self.dout_18 << 16
		val |= self.dout_19 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dout_16 = (val & 0x01) >> 0
		self.dout_17 = (val & 0x100) >> 8
		self.dout_18 = (val & 0x10000) >> 16
		self.dout_19 = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DOUT_23_20:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+76
		self.dout_20 = 0
		self.dout_21 = 0
		self.dout_22 = 0
		self.dout_23 = 0
	def write(self):
		val = 0
		val |= self.dout_20 << 0
		val |= self.dout_21 << 8
		val |= self.dout_22 << 16
		val |= self.dout_23 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dout_20 = (val & 0x01) >> 0
		self.dout_21 = (val & 0x100) >> 8
		self.dout_22 = (val & 0x10000) >> 16
		self.dout_23 = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DOUT_27_24:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+80
		self.dout_24 = 0
		self.dout_25 = 0
		self.dout_26 = 0
		self.dout_27 = 0
	def write(self):
		val = 0
		val |= self.dout_24 << 0
		val |= self.dout_25 << 8
		val |= self.dout_26 << 16
		val |= self.dout_27 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dout_24 = (val & 0x01) >> 0
		self.dout_25 = (val & 0x100) >> 8
		self.dout_26 = (val & 0x10000) >> 16
		self.dout_27 = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DOUT_31_28:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+84
		self.dout_28 = 0
		self.dout_29 = 0
		self.dout_30 = 0
		self.dout_31 = 0
	def write(self):
		val = 0
		val |= self.dout_28 << 0
		val |= self.dout_29 << 8
		val |= self.dout_30 << 16
		val |= self.dout_31 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dout_28 = (val & 0x01) >> 0
		self.dout_29 = (val & 0x100) >> 8
		self.dout_30 = (val & 0x10000) >> 16
		self.dout_31 = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DOUT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+88
		self.dout = 0
	def write(self):
		val = 0
		val |= self.dout << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dout = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DOUT_SET:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+92
		self.dout_set = 0
	def write(self):
		val = 0
		val |= self.dout_set << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dout_set = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DOUT_CLR:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+96
		self.dout_clr = 0
	def write(self):
		val = 0
		val |= self.dout_clr << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dout_clr = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DOUT_TGL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+100
		self.dout_tgl = 0
	def write(self):
		val = 0
		val |= self.dout_tgl << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dout_tgl = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DOUT_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+104
		self.dout_en = 0
	def write(self):
		val = 0
		val |= self.dout_en << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dout_en = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DOUT_EN_SET:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+108
		self.dout_en_set = 0
	def write(self):
		val = 0
		val |= self.dout_en_set << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dout_en_set = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DOUT_EN_CLR:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+112
		self.dout_en_clr = 0
	def write(self):
		val = 0
		val |= self.dout_en_clr << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dout_en_clr = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DIN_3_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+116
		self.din_0 = 0
		self.din_1 = 0
		self.din_2 = 0
		self.din_3 = 0
	def write(self):
		val = 0
		val |= self.din_0 << 0
		val |= self.din_1 << 8
		val |= self.din_2 << 16
		val |= self.din_3 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.din_0 = (val & 0x01) >> 0
		self.din_1 = (val & 0x100) >> 8
		self.din_2 = (val & 0x10000) >> 16
		self.din_3 = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DIN_7_4:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+120
		self.din_4 = 0
		self.din_5 = 0
		self.din_6 = 0
		self.din_7 = 0
	def write(self):
		val = 0
		val |= self.din_4 << 0
		val |= self.din_5 << 8
		val |= self.din_6 << 16
		val |= self.din_7 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.din_4 = (val & 0x01) >> 0
		self.din_5 = (val & 0x100) >> 8
		self.din_6 = (val & 0x10000) >> 16
		self.din_7 = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DIN_11_8:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+124
		self.din_8 = 0
		self.din_9 = 0
		self.din_10 = 0
		self.din_11 = 0
	def write(self):
		val = 0
		val |= self.din_8 << 0
		val |= self.din_9 << 8
		val |= self.din_10 << 16
		val |= self.din_11 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.din_8 = (val & 0x01) >> 0
		self.din_9 = (val & 0x100) >> 8
		self.din_10 = (val & 0x10000) >> 16
		self.din_11 = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DIN_15_12:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+128
		self.din_12 = 0
		self.din_13 = 0
		self.din_14 = 0
		self.din_15 = 0
	def write(self):
		val = 0
		val |= self.din_12 << 0
		val |= self.din_13 << 8
		val |= self.din_14 << 16
		val |= self.din_15 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.din_12 = (val & 0x01) >> 0
		self.din_13 = (val & 0x100) >> 8
		self.din_14 = (val & 0x10000) >> 16
		self.din_15 = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DIN_19_16:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+132
		self.din_16 = 0
		self.din_17 = 0
		self.din_18 = 0
		self.din_19 = 0
	def write(self):
		val = 0
		val |= self.din_16 << 0
		val |= self.din_17 << 8
		val |= self.din_18 << 16
		val |= self.din_19 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.din_16 = (val & 0x01) >> 0
		self.din_17 = (val & 0x100) >> 8
		self.din_18 = (val & 0x10000) >> 16
		self.din_19 = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DIN_23_20:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+136
		self.din_20 = 0
		self.din_21 = 0
		self.din_22 = 0
		self.din_23 = 0
	def write(self):
		val = 0
		val |= self.din_20 << 0
		val |= self.din_21 << 8
		val |= self.din_22 << 16
		val |= self.din_23 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.din_20 = (val & 0x01) >> 0
		self.din_21 = (val & 0x100) >> 8
		self.din_22 = (val & 0x10000) >> 16
		self.din_23 = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DIN_27_24:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+140
		self.din_24 = 0
		self.din_25 = 0
		self.din_26 = 0
		self.din_27 = 0
	def write(self):
		val = 0
		val |= self.din_24 << 0
		val |= self.din_25 << 8
		val |= self.din_26 << 16
		val |= self.din_27 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.din_24 = (val & 0x01) >> 0
		self.din_25 = (val & 0x100) >> 8
		self.din_26 = (val & 0x10000) >> 16
		self.din_27 = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DIN_31_28:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+144
		self.din_28 = 0
		self.din_29 = 0
		self.din_30 = 0
		self.din_31 = 0
	def write(self):
		val = 0
		val |= self.din_28 << 0
		val |= self.din_29 << 8
		val |= self.din_30 << 16
		val |= self.din_31 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.din_28 = (val & 0x01) >> 0
		self.din_29 = (val & 0x100) >> 8
		self.din_30 = (val & 0x10000) >> 16
		self.din_31 = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DIN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+148
		self.din = 0
	def write(self):
		val = 0
		val |= self.din << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.din = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class FILT_EN_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+152
		self.filt_en_0 = 0
		self.filt_en_1 = 0
		self.filt_en_2 = 0
		self.filt_en_3 = 0
		self.filt_en_4 = 0
		self.filt_en_5 = 0
		self.filt_en_6 = 0
		self.filt_en_7 = 0
		self.filt_en_8 = 0
		self.filt_en_9 = 0
		self.filt_en_10 = 0
		self.filt_en_11 = 0
		self.filt_en_12 = 0
		self.filt_en_13 = 0
		self.filt_en_14 = 0
		self.filt_en_15 = 0
	def write(self):
		val = 0
		val |= self.filt_en_0 << 0
		val |= self.filt_en_1 << 2
		val |= self.filt_en_2 << 4
		val |= self.filt_en_3 << 6
		val |= self.filt_en_4 << 8
		val |= self.filt_en_5 << 10
		val |= self.filt_en_6 << 12
		val |= self.filt_en_7 << 14
		val |= self.filt_en_8 << 16
		val |= self.filt_en_9 << 18
		val |= self.filt_en_10 << 20
		val |= self.filt_en_11 << 22
		val |= self.filt_en_12 << 24
		val |= self.filt_en_13 << 26
		val |= self.filt_en_14 << 28
		val |= self.filt_en_15 << 30
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.filt_en_0 = (val & 0x03) >> 0
		self.filt_en_1 = (val & 0x0C) >> 2
		self.filt_en_2 = (val & 0x30) >> 4
		self.filt_en_3 = (val & 0xC0) >> 6
		self.filt_en_4 = (val & 0x300) >> 8
		self.filt_en_5 = (val & 0xC00) >> 10
		self.filt_en_6 = (val & 0x3000) >> 12
		self.filt_en_7 = (val & 0xC000) >> 14
		self.filt_en_8 = (val & 0x30000) >> 16
		self.filt_en_9 = (val & 0xC0000) >> 18
		self.filt_en_10 = (val & 0x300000) >> 20
		self.filt_en_11 = (val & 0xC00000) >> 22
		self.filt_en_12 = (val & 0x3000000) >> 24
		self.filt_en_13 = (val & 0xC000000) >> 26
		self.filt_en_14 = (val & 0x30000000) >> 28
		self.filt_en_15 = (val & 0xC0000000) >> 30
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class FILT_EN_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+156
		self.filt_en_16 = 0
		self.filt_en_17 = 0
		self.filt_en_18 = 0
		self.filt_en_19 = 0
		self.filt_en_20 = 0
		self.filt_en_21 = 0
		self.filt_en_22 = 0
		self.filt_en_23 = 0
		self.filt_en_24 = 0
		self.filt_en_25 = 0
		self.filt_en_26 = 0
		self.filt_en_27 = 0
		self.filt_en_28 = 0
		self.filt_en_29 = 0
		self.filt_en_30 = 0
		self.filt_en_31 = 0
	def write(self):
		val = 0
		val |= self.filt_en_16 << 0
		val |= self.filt_en_17 << 2
		val |= self.filt_en_18 << 4
		val |= self.filt_en_19 << 6
		val |= self.filt_en_20 << 8
		val |= self.filt_en_21 << 10
		val |= self.filt_en_22 << 12
		val |= self.filt_en_23 << 14
		val |= self.filt_en_24 << 16
		val |= self.filt_en_25 << 18
		val |= self.filt_en_26 << 20
		val |= self.filt_en_27 << 22
		val |= self.filt_en_28 << 24
		val |= self.filt_en_29 << 26
		val |= self.filt_en_30 << 28
		val |= self.filt_en_31 << 30
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.filt_en_16 = (val & 0x03) >> 0
		self.filt_en_17 = (val & 0x0C) >> 2
		self.filt_en_18 = (val & 0x30) >> 4
		self.filt_en_19 = (val & 0xC0) >> 6
		self.filt_en_20 = (val & 0x300) >> 8
		self.filt_en_21 = (val & 0xC00) >> 10
		self.filt_en_22 = (val & 0x3000) >> 12
		self.filt_en_23 = (val & 0xC000) >> 14
		self.filt_en_24 = (val & 0x30000) >> 16
		self.filt_en_25 = (val & 0xC0000) >> 18
		self.filt_en_26 = (val & 0x300000) >> 20
		self.filt_en_27 = (val & 0xC00000) >> 22
		self.filt_en_28 = (val & 0x3000000) >> 24
		self.filt_en_29 = (val & 0xC000000) >> 26
		self.filt_en_30 = (val & 0x30000000) >> 28
		self.filt_en_31 = (val & 0xC0000000) >> 30
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_POL_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+160
		self.intr_pol_0 = 0
		self.intr_pol_1 = 0
		self.intr_pol_2 = 0
		self.intr_pol_3 = 0
		self.intr_pol_4 = 0
		self.intr_pol_5 = 0
		self.intr_pol_6 = 0
		self.intr_pol_7 = 0
		self.intr_pol_8 = 0
		self.intr_pol_9 = 0
		self.intr_pol_10 = 0
		self.intr_pol_11 = 0
		self.intr_pol_12 = 0
		self.intr_pol_13 = 0
		self.intr_pol_14 = 0
		self.intr_pol_15 = 0
	def write(self):
		val = 0
		val |= self.intr_pol_0 << 0
		val |= self.intr_pol_1 << 2
		val |= self.intr_pol_2 << 4
		val |= self.intr_pol_3 << 6
		val |= self.intr_pol_4 << 8
		val |= self.intr_pol_5 << 10
		val |= self.intr_pol_6 << 12
		val |= self.intr_pol_7 << 14
		val |= self.intr_pol_8 << 16
		val |= self.intr_pol_9 << 18
		val |= self.intr_pol_10 << 20
		val |= self.intr_pol_11 << 22
		val |= self.intr_pol_12 << 24
		val |= self.intr_pol_13 << 26
		val |= self.intr_pol_14 << 28
		val |= self.intr_pol_15 << 30
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.intr_pol_0 = (val & 0x03) >> 0
		self.intr_pol_1 = (val & 0x0C) >> 2
		self.intr_pol_2 = (val & 0x30) >> 4
		self.intr_pol_3 = (val & 0xC0) >> 6
		self.intr_pol_4 = (val & 0x300) >> 8
		self.intr_pol_5 = (val & 0xC00) >> 10
		self.intr_pol_6 = (val & 0x3000) >> 12
		self.intr_pol_7 = (val & 0xC000) >> 14
		self.intr_pol_8 = (val & 0x30000) >> 16
		self.intr_pol_9 = (val & 0xC0000) >> 18
		self.intr_pol_10 = (val & 0x300000) >> 20
		self.intr_pol_11 = (val & 0xC00000) >> 22
		self.intr_pol_12 = (val & 0x3000000) >> 24
		self.intr_pol_13 = (val & 0xC000000) >> 26
		self.intr_pol_14 = (val & 0x30000000) >> 28
		self.intr_pol_15 = (val & 0xC0000000) >> 30
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_POL_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+164
		self.intr_pol_16 = 0
		self.intr_pol_17 = 0
		self.intr_pol_18 = 0
		self.intr_pol_19 = 0
		self.intr_pol_20 = 0
		self.intr_pol_21 = 0
		self.intr_pol_22 = 0
		self.intr_pol_23 = 0
		self.intr_pol_24 = 0
		self.intr_pol_25 = 0
		self.intr_pol_26 = 0
		self.intr_pol_27 = 0
		self.intr_pol_28 = 0
		self.intr_pol_29 = 0
		self.intr_pol_30 = 0
		self.intr_pol_31 = 0
	def write(self):
		val = 0
		val |= self.intr_pol_16 << 0
		val |= self.intr_pol_17 << 2
		val |= self.intr_pol_18 << 4
		val |= self.intr_pol_19 << 6
		val |= self.intr_pol_20 << 8
		val |= self.intr_pol_21 << 10
		val |= self.intr_pol_22 << 12
		val |= self.intr_pol_23 << 14
		val |= self.intr_pol_24 << 16
		val |= self.intr_pol_25 << 18
		val |= self.intr_pol_26 << 20
		val |= self.intr_pol_27 << 22
		val |= self.intr_pol_28 << 24
		val |= self.intr_pol_29 << 26
		val |= self.intr_pol_30 << 28
		val |= self.intr_pol_31 << 30
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.intr_pol_16 = (val & 0x03) >> 0
		self.intr_pol_17 = (val & 0x0C) >> 2
		self.intr_pol_18 = (val & 0x30) >> 4
		self.intr_pol_19 = (val & 0xC0) >> 6
		self.intr_pol_20 = (val & 0x300) >> 8
		self.intr_pol_21 = (val & 0xC00) >> 10
		self.intr_pol_22 = (val & 0x3000) >> 12
		self.intr_pol_23 = (val & 0xC000) >> 14
		self.intr_pol_24 = (val & 0x30000) >> 16
		self.intr_pol_25 = (val & 0xC0000) >> 18
		self.intr_pol_26 = (val & 0x300000) >> 20
		self.intr_pol_27 = (val & 0xC00000) >> 22
		self.intr_pol_28 = (val & 0x3000000) >> 24
		self.intr_pol_29 = (val & 0xC000000) >> 26
		self.intr_pol_30 = (val & 0x30000000) >> 28
		self.intr_pol_31 = (val & 0xC0000000) >> 30
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SUB_CFG_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+168
		self.sub_en = 0
		self.action = 0
		self.bit_num = 0
	def write(self):
		val = 0
		val |= self.sub_en << 0
		val |= self.action << 8
		val |= self.bit_num << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.sub_en = (val & 0x01) >> 0
		self.action = (val & 0x300) >> 8
		self.bit_num = (val & 0x1F0000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SUB_CFG_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+172
		self.sub_en = 0
		self.action = 0
		self.bit_num = 0
	def write(self):
		val = 0
		val |= self.sub_en << 0
		val |= self.action << 8
		val |= self.bit_num << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.sub_en = (val & 0x01) >> 0
		self.action = (val & 0x300) >> 8
		self.bit_num = (val & 0x1F0000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_WR_MASK:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+176
		self.dma_wr_mask = 0
	def write(self):
		val = 0
		val |= self.dma_wr_mask << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_wr_mask = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class gpio:
	def __init__(self,dev,base_addr):
		self.DESC = DESC(dev,base_addr)
		self.PWR_EN = PWR_EN(dev,base_addr)
		self.RST_CTRL = RST_CTRL(dev,base_addr)
		self.RST_STS = RST_STS(dev,base_addr)
		self.CLK_CTRL = CLK_CTRL(dev,base_addr)
		self.INTR_STS = INTR_STS(dev,base_addr)
		self.INTR_EVENT = INTR_EVENT(dev,base_addr)
		self.INTR_EN0 = INTR_EN0(dev,base_addr)
		self.INTR_EN1 = INTR_EN1(dev,base_addr)
		self.INTR_NMI_EN0 = INTR_NMI_EN0(dev,base_addr)
		self.INTR_NMI_EN1 = INTR_NMI_EN1(dev,base_addr)
		self.EVENT_EN0 = EVENT_EN0(dev,base_addr)
		self.EVENT_EN1 = EVENT_EN1(dev,base_addr)
		self.INTR_SW_SET = INTR_SW_SET(dev,base_addr)
		self.DOUT_3_0 = DOUT_3_0(dev,base_addr)
		self.DOUT_7_4 = DOUT_7_4(dev,base_addr)
		self.DOUT_11_8 = DOUT_11_8(dev,base_addr)
		self.DOUT_15_12 = DOUT_15_12(dev,base_addr)
		self.DOUT_19_16 = DOUT_19_16(dev,base_addr)
		self.DOUT_23_20 = DOUT_23_20(dev,base_addr)
		self.DOUT_27_24 = DOUT_27_24(dev,base_addr)
		self.DOUT_31_28 = DOUT_31_28(dev,base_addr)
		self.DOUT = DOUT(dev,base_addr)
		self.DOUT_SET = DOUT_SET(dev,base_addr)
		self.DOUT_CLR = DOUT_CLR(dev,base_addr)
		self.DOUT_TGL = DOUT_TGL(dev,base_addr)
		self.DOUT_EN = DOUT_EN(dev,base_addr)
		self.DOUT_EN_SET = DOUT_EN_SET(dev,base_addr)
		self.DOUT_EN_CLR = DOUT_EN_CLR(dev,base_addr)
		self.DIN_3_0 = DIN_3_0(dev,base_addr)
		self.DIN_7_4 = DIN_7_4(dev,base_addr)
		self.DIN_11_8 = DIN_11_8(dev,base_addr)
		self.DIN_15_12 = DIN_15_12(dev,base_addr)
		self.DIN_19_16 = DIN_19_16(dev,base_addr)
		self.DIN_23_20 = DIN_23_20(dev,base_addr)
		self.DIN_27_24 = DIN_27_24(dev,base_addr)
		self.DIN_31_28 = DIN_31_28(dev,base_addr)
		self.DIN = DIN(dev,base_addr)
		self.FILT_EN_0 = FILT_EN_0(dev,base_addr)
		self.FILT_EN_1 = FILT_EN_1(dev,base_addr)
		self.INTR_POL_0 = INTR_POL_0(dev,base_addr)
		self.INTR_POL_1 = INTR_POL_1(dev,base_addr)
		self.SUB_CFG_0 = SUB_CFG_0(dev,base_addr)
		self.SUB_CFG_1 = SUB_CFG_1(dev,base_addr)
		self.DMA_WR_MASK = DMA_WR_MASK(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
