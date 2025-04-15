class PASSWD:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+0
		self.passwd = 0
	def write(self):
		val = 0
		val |= self.passwd << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.passwd = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PASSWD_VALID:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+4
		self.passwd_valid = 0
	def write(self):
		val = 0
		val |= self.passwd_valid << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.passwd_valid = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class FACTORY_RESET:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+8
		self.factory_reset = 0
	def write(self):
		val = 0
		val |= self.factory_reset << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.factory_reset = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class FLASH_ERASE:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+12
		self.flash_erase = 0
	def write(self):
		val = 0
		val |= self.flash_erase << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.flash_erase = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class TX_DATA:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+16
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

class TX_FLAG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+20
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
		self._addr = base_addr+24
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

class RX_FLAG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+28
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

class PMCU:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+32
		self.pmcu = 0
	def write(self):
		val = 0
		val |= self.pmcu << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.pmcu = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SYSCTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+36
		self.sysctl = 0
	def write(self):
		val = 0
		val |= self.sysctl << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.sysctl = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DFT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+40
		self.test_mode = 0
		self.mbist_en = 0
		self.dft_reg = 0
	def write(self):
		val = 0
		val |= self.test_mode << 0
		val |= self.mbist_en << 1
		val |= self.dft_reg << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.test_mode = (val & 0x01) >> 0
		self.mbist_en = (val & 0x02) >> 1
		self.dft_reg = (val & 0x7C) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MBIST_ROM_CFG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+44
		self.rom_start = 0
	def write(self):
		val = 0
		val |= self.rom_start << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rom_start = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MBIST_ROM_STS0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+48
		self.rom_done = 0
	def write(self):
		val = 0
		val |= self.rom_done << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rom_done = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MBIST_ROM_STS1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+52
		self.rom_crc = 0
	def write(self):
		val = 0
		val |= self.rom_crc << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rom_crc = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MBIST_RAM_CFG0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+56
		self.ram_start = 0
		self.ram_cmd = 0
	def write(self):
		val = 0
		val |= self.ram_start << 0
		val |= self.ram_cmd << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.ram_start = (val & 0x01) >> 0
		self.ram_cmd = (val & 0xFF00) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MBIST_RAM_CFG1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+60
		self.ram_seed = 0
	def write(self):
		val = 0
		val |= self.ram_seed << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.ram_seed = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MBIST_RAM_STS0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+64
		self.ram_done = 0
		self.ram_sts = 0
	def write(self):
		val = 0
		val |= self.ram_done << 0
		val |= self.ram_sts << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.ram_done = (val & 0x01) >> 0
		self.ram_sts = (val & 0xFF00) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MBIST_RAM_STS1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+68
		self.ram_sts_word = 0
	def write(self):
		val = 0
		val |= self.ram_sts_word << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.ram_sts_word = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class secure_ip_ap:
	def __init__(self,dev,base_addr):
		self.PASSWD = PASSWD(dev,base_addr)
		self.PASSWD_VALID = PASSWD_VALID(dev,base_addr)
		self.FACTORY_RESET = FACTORY_RESET(dev,base_addr)
		self.FLASH_ERASE = FLASH_ERASE(dev,base_addr)
		self.TX_DATA = TX_DATA(dev,base_addr)
		self.TX_FLAG = TX_FLAG(dev,base_addr)
		self.RX_DATA = RX_DATA(dev,base_addr)
		self.RX_FLAG = RX_FLAG(dev,base_addr)
		self.PMCU = PMCU(dev,base_addr)
		self.SYSCTL = SYSCTL(dev,base_addr)
		self.DFT = DFT(dev,base_addr)
		self.MBIST_ROM_CFG = MBIST_ROM_CFG(dev,base_addr)
		self.MBIST_ROM_STS0 = MBIST_ROM_STS0(dev,base_addr)
		self.MBIST_ROM_STS1 = MBIST_ROM_STS1(dev,base_addr)
		self.MBIST_RAM_CFG0 = MBIST_RAM_CFG0(dev,base_addr)
		self.MBIST_RAM_CFG1 = MBIST_RAM_CFG1(dev,base_addr)
		self.MBIST_RAM_STS0 = MBIST_RAM_STS0(dev,base_addr)
		self.MBIST_RAM_STS1 = MBIST_RAM_STS1(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
