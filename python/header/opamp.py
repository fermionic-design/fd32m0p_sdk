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

class CTRL0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+16
		self.enable = 0
		self.bcs_en = 0
		self.rri_en = 0
		self.out_en = 0
	def write(self):
		val = 0
		val |= self.enable << 0
		val |= self.bcs_en << 8
		val |= self.rri_en << 16
		val |= self.out_en << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.enable = (val & 0x01) >> 0
		self.bcs_en = (val & 0x100) >> 8
		self.rri_en = (val & 0x10000) >> 16
		self.out_en = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GAIN_CTRL0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+20
		self.gain = 0
		self.gbw = 0
		self.chop_en = 0
		self.chop_mode = 0
	def write(self):
		val = 0
		val |= self.gain << 0
		val |= self.gbw << 8
		val |= self.chop_en << 16
		val |= self.chop_mode << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gain = (val & 0x0F) >> 0
		self.gbw = (val & 0x100) >> 8
		self.chop_en = (val & 0x10000) >> 16
		self.chop_mode = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INPUT_CTRL0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+24
		self.in_p_sel = 0
		self.in_n_sel = 0
		self.in_m_sel = 0
	def write(self):
		val = 0
		val |= self.in_p_sel << 0
		val |= self.in_n_sel << 4
		val |= self.in_m_sel << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.in_p_sel = (val & 0x0F) >> 0
		self.in_n_sel = (val & 0xF0) >> 4
		self.in_m_sel = (val & 0xF00) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SPARE_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+28
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
		self._addr = base_addr+32
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

class opamp:
	def __init__(self,dev,base_addr):
		self.DESC = DESC(dev,base_addr)
		self.PWR_EN = PWR_EN(dev,base_addr)
		self.RST_CTRL = RST_CTRL(dev,base_addr)
		self.RST_STS = RST_STS(dev,base_addr)
		self.CTRL0 = CTRL0(dev,base_addr)
		self.GAIN_CTRL0 = GAIN_CTRL0(dev,base_addr)
		self.INPUT_CTRL0 = INPUT_CTRL0(dev,base_addr)
		self.SPARE_CTRL = SPARE_CTRL(dev,base_addr)
		self.SPARE_STS = SPARE_STS(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
