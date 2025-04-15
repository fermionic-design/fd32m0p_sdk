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

class CLK_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+4
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

class FLASH_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+8
		self.clen = 0
		self.srl = 0
		self.isavb = 0
		self.rdecc = 0
		self.cpecc = 0
	def write(self):
		val = 0
		val |= self.clen << 0
		val |= self.srl << 1
		val |= self.isavb << 2
		val |= self.rdecc << 3
		val |= self.cpecc << 4
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.clen = (val & 0x01) >> 0
		self.srl = (val & 0x02) >> 1
		self.isavb = (val & 0x04) >> 2
		self.rdecc = (val & 0x08) >> 3
		self.cpecc = (val & 0x10) >> 4
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class FLASH_STATUS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+12
		self.eced = 0
	def write(self):
		val = 0
		val |= self.eced << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.eced = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class TIME_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+16
		self.tcsctrls = 0
		self.tras = 0
		self.eeprom_tras = 0
		self.trc = 0
		self.eeprom_trc = 0
	def write(self):
		val = 0
		val |= self.tcsctrls << 0
		val |= self.tras << 4
		val |= self.eeprom_tras << 10
		val |= self.trc << 18
		val |= self.eeprom_trc << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.tcsctrls = (val & 0x0F) >> 0
		self.tras = (val & 0x3F0) >> 4
		self.eeprom_tras = (val & 0x3FC00) >> 10
		self.trc = (val & 0xFC0000) >> 18
		self.eeprom_trc = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class TIME_CTRL_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+20
		self.tadhr = 0
		self.rtw = 0
		self.tads = 0
		self.twpw = 0
		self.tpwcsh = 0
	def write(self):
		val = 0
		val |= self.tadhr << 0
		val |= self.rtw << 1
		val |= self.tads << 9
		val |= self.twpw << 10
		val |= self.tpwcsh << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.tadhr = (val & 0x01) >> 0
		self.rtw = (val & 0x1FE) >> 1
		self.tads = (val & 0x200) >> 9
		self.twpw = (val & 0xFC00) >> 10
		self.tpwcsh = (val & 0xF0000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class TIME_CTRL_2:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+24
		self.twrc = 0
		self.twes = 0
		self.tbr = 0
		self.wtw = 0
	def write(self):
		val = 0
		val |= self.twrc << 0
		val |= self.twes << 4
		val |= self.tbr << 22
		val |= self.wtw << 26
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.twrc = (val & 0x0F) >> 0
		self.twes = (val & 0x3FFFF0) >> 4
		self.tbr = (val & 0x3C00000) >> 22
		self.wtw = (val & 0xFC000000) >> 26
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class TIME_UPTD:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+28
		self.flash_config_done = 0
	def write(self):
		val = 0
		val |= self.flash_config_done << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.flash_config_done = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class HSIZE_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+32
		self.force_hsize_val = 0
		self.force_hsize_en = 0
	def write(self):
		val = 0
		val |= self.force_hsize_val << 0
		val |= self.force_hsize_en << 3
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.force_hsize_val = (val & 0x07) >> 0
		self.force_hsize_en = (val & 0x08) >> 3
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+36
		self.flash_pstate = 0
	def write(self):
		val = 0
		val |= self.flash_pstate << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.flash_pstate = (val & 0x1F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class ECED_STATUS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+40
		self.eced_sts = 0
	def write(self):
		val = 0
		val |= self.eced_sts << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.eced_sts = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class flash:
	def __init__(self,dev,base_addr):
		self.DESC = DESC(dev,base_addr)
		self.CLK_CTRL = CLK_CTRL(dev,base_addr)
		self.FLASH_CTRL = FLASH_CTRL(dev,base_addr)
		self.FLASH_STATUS = FLASH_STATUS(dev,base_addr)
		self.TIME_CTRL = TIME_CTRL(dev,base_addr)
		self.TIME_CTRL_1 = TIME_CTRL_1(dev,base_addr)
		self.TIME_CTRL_2 = TIME_CTRL_2(dev,base_addr)
		self.TIME_UPTD = TIME_UPTD(dev,base_addr)
		self.HSIZE_CTRL = HSIZE_CTRL(dev,base_addr)
		self.STS = STS(dev,base_addr)
		self.ECED_STATUS = ECED_STATUS(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
