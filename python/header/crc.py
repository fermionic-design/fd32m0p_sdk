class PWR_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+0
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
		self._addr = base_addr+4
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
		self._addr = base_addr+8
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

class CRCCONFIG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+12
		self.poly_type = 0
		self.input_bit_rev = 0
		self.output_bit_rev = 0
		self.in_is_big_endian = 0
		self.out_is_big_endian = 0
	def write(self):
		val = 0
		val |= self.poly_type << 0
		val |= self.input_bit_rev << 1
		val |= self.output_bit_rev << 2
		val |= self.in_is_big_endian << 3
		val |= self.out_is_big_endian << 4
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.poly_type = (val & 0x01) >> 0
		self.input_bit_rev = (val & 0x02) >> 1
		self.output_bit_rev = (val & 0x04) >> 2
		self.in_is_big_endian = (val & 0x08) >> 3
		self.out_is_big_endian = (val & 0x10) >> 4
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CRCSEED:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+16
		self.seed = 0
		self.data = 0
	def write(self):
		val = 0
		val |= self.seed << 0
		val |= self.data << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.seed = (val & 0xFFFFFFFF) >> 0
		self.data = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CRCRESULT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+4116
		self.result = 0
	def write(self):
		val = 0
		val |= self.result << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.result = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class crc:
	def __init__(self,dev,base_addr):
		self.PWR_EN = PWR_EN(dev,base_addr)
		self.RST_CTRL = RST_CTRL(dev,base_addr)
		self.RST_STS = RST_STS(dev,base_addr)
		self.CRCCONFIG = CRCCONFIG(dev,base_addr)
		self.CRCSEED = CRCSEED(dev,base_addr)
		self.CRCRESULT = CRCRESULT(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
