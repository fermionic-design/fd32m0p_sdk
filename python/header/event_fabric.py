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

class GEN_PUB_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+20
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+24
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_2:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+28
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_3:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+32
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_4:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+36
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_5:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+40
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_6:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+44
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_7:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+48
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_8:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+52
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_9:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+56
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_10:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+60
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_11:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+64
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_12:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+68
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_13:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+72
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_14:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+76
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_15:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+80
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_16:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+84
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_17:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+88
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_18:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+92
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_19:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+96
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_20:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+100
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_21:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+104
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_22:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+108
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_23:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+112
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_PUB_24:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+116
		self.gen_pub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_pub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_pub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+120
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+124
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_2:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+128
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_3:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+132
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_4:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+136
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_5:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+140
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_6:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+144
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_7:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+148
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_8:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+152
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_9:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+156
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_10:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+160
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_11:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+164
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_12:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+168
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_13:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+172
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_14:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+176
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_15:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+180
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_16:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+184
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_17:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+188
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_18:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+192
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_19:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+196
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_20:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+200
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_21:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+204
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_22:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+208
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_23:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+212
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GEN_SUB_24:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+216
		self.gen_sub_chan_id = 0
	def write(self):
		val = 0
		val |= self.gen_sub_chan_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gen_sub_chan_id = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_PUB_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+220
		self.dma_pub_event_id = 0
	def write(self):
		val = 0
		val |= self.dma_pub_event_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_pub_event_id = (val & 0x3F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_PUB_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+224
		self.dma_pub_event_id = 0
	def write(self):
		val = 0
		val |= self.dma_pub_event_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_pub_event_id = (val & 0x3F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_PUB_2:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+228
		self.dma_pub_event_id = 0
	def write(self):
		val = 0
		val |= self.dma_pub_event_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_pub_event_id = (val & 0x3F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_PUB_3:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+232
		self.dma_pub_event_id = 0
	def write(self):
		val = 0
		val |= self.dma_pub_event_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_pub_event_id = (val & 0x3F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_PUB_4:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+236
		self.dma_pub_event_id = 0
	def write(self):
		val = 0
		val |= self.dma_pub_event_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_pub_event_id = (val & 0x3F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_PUB_5:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+240
		self.dma_pub_event_id = 0
	def write(self):
		val = 0
		val |= self.dma_pub_event_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_pub_event_id = (val & 0x3F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_PUB_6:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+244
		self.dma_pub_event_id = 0
	def write(self):
		val = 0
		val |= self.dma_pub_event_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_pub_event_id = (val & 0x3F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_PUB_7:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+248
		self.dma_pub_event_id = 0
	def write(self):
		val = 0
		val |= self.dma_pub_event_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_pub_event_id = (val & 0x3F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_PUB_8:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+252
		self.dma_pub_event_id = 0
	def write(self):
		val = 0
		val |= self.dma_pub_event_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_pub_event_id = (val & 0x3F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_PUB_9:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+256
		self.dma_pub_event_id = 0
	def write(self):
		val = 0
		val |= self.dma_pub_event_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_pub_event_id = (val & 0x3F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_PUB_10:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+260
		self.dma_pub_event_id = 0
	def write(self):
		val = 0
		val |= self.dma_pub_event_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_pub_event_id = (val & 0x3F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_PUB_11:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+264
		self.dma_pub_event_id = 0
	def write(self):
		val = 0
		val |= self.dma_pub_event_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_pub_event_id = (val & 0x3F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_PUB_12:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+268
		self.dma_pub_event_id = 0
	def write(self):
		val = 0
		val |= self.dma_pub_event_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_pub_event_id = (val & 0x3F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_PUB_13:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+272
		self.dma_pub_event_id = 0
	def write(self):
		val = 0
		val |= self.dma_pub_event_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_pub_event_id = (val & 0x3F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_PUB_14:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+276
		self.dma_pub_event_id = 0
	def write(self):
		val = 0
		val |= self.dma_pub_event_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_pub_event_id = (val & 0x3F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DMA_PUB_15:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+280
		self.dma_pub_event_id = 0
	def write(self):
		val = 0
		val |= self.dma_pub_event_id << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dma_pub_event_id = (val & 0x3F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class event_fabric:
	def __init__(self,dev,base_addr):
		self.DESC = DESC(dev,base_addr)
		self.PWR_EN = PWR_EN(dev,base_addr)
		self.RST_CTRL = RST_CTRL(dev,base_addr)
		self.RST_STS = RST_STS(dev,base_addr)
		self.CLK_CTRL = CLK_CTRL(dev,base_addr)
		self.GEN_PUB_0 = GEN_PUB_0(dev,base_addr)
		self.GEN_PUB_1 = GEN_PUB_1(dev,base_addr)
		self.GEN_PUB_2 = GEN_PUB_2(dev,base_addr)
		self.GEN_PUB_3 = GEN_PUB_3(dev,base_addr)
		self.GEN_PUB_4 = GEN_PUB_4(dev,base_addr)
		self.GEN_PUB_5 = GEN_PUB_5(dev,base_addr)
		self.GEN_PUB_6 = GEN_PUB_6(dev,base_addr)
		self.GEN_PUB_7 = GEN_PUB_7(dev,base_addr)
		self.GEN_PUB_8 = GEN_PUB_8(dev,base_addr)
		self.GEN_PUB_9 = GEN_PUB_9(dev,base_addr)
		self.GEN_PUB_10 = GEN_PUB_10(dev,base_addr)
		self.GEN_PUB_11 = GEN_PUB_11(dev,base_addr)
		self.GEN_PUB_12 = GEN_PUB_12(dev,base_addr)
		self.GEN_PUB_13 = GEN_PUB_13(dev,base_addr)
		self.GEN_PUB_14 = GEN_PUB_14(dev,base_addr)
		self.GEN_PUB_15 = GEN_PUB_15(dev,base_addr)
		self.GEN_PUB_16 = GEN_PUB_16(dev,base_addr)
		self.GEN_PUB_17 = GEN_PUB_17(dev,base_addr)
		self.GEN_PUB_18 = GEN_PUB_18(dev,base_addr)
		self.GEN_PUB_19 = GEN_PUB_19(dev,base_addr)
		self.GEN_PUB_20 = GEN_PUB_20(dev,base_addr)
		self.GEN_PUB_21 = GEN_PUB_21(dev,base_addr)
		self.GEN_PUB_22 = GEN_PUB_22(dev,base_addr)
		self.GEN_PUB_23 = GEN_PUB_23(dev,base_addr)
		self.GEN_PUB_24 = GEN_PUB_24(dev,base_addr)
		self.GEN_SUB_0 = GEN_SUB_0(dev,base_addr)
		self.GEN_SUB_1 = GEN_SUB_1(dev,base_addr)
		self.GEN_SUB_2 = GEN_SUB_2(dev,base_addr)
		self.GEN_SUB_3 = GEN_SUB_3(dev,base_addr)
		self.GEN_SUB_4 = GEN_SUB_4(dev,base_addr)
		self.GEN_SUB_5 = GEN_SUB_5(dev,base_addr)
		self.GEN_SUB_6 = GEN_SUB_6(dev,base_addr)
		self.GEN_SUB_7 = GEN_SUB_7(dev,base_addr)
		self.GEN_SUB_8 = GEN_SUB_8(dev,base_addr)
		self.GEN_SUB_9 = GEN_SUB_9(dev,base_addr)
		self.GEN_SUB_10 = GEN_SUB_10(dev,base_addr)
		self.GEN_SUB_11 = GEN_SUB_11(dev,base_addr)
		self.GEN_SUB_12 = GEN_SUB_12(dev,base_addr)
		self.GEN_SUB_13 = GEN_SUB_13(dev,base_addr)
		self.GEN_SUB_14 = GEN_SUB_14(dev,base_addr)
		self.GEN_SUB_15 = GEN_SUB_15(dev,base_addr)
		self.GEN_SUB_16 = GEN_SUB_16(dev,base_addr)
		self.GEN_SUB_17 = GEN_SUB_17(dev,base_addr)
		self.GEN_SUB_18 = GEN_SUB_18(dev,base_addr)
		self.GEN_SUB_19 = GEN_SUB_19(dev,base_addr)
		self.GEN_SUB_20 = GEN_SUB_20(dev,base_addr)
		self.GEN_SUB_21 = GEN_SUB_21(dev,base_addr)
		self.GEN_SUB_22 = GEN_SUB_22(dev,base_addr)
		self.GEN_SUB_23 = GEN_SUB_23(dev,base_addr)
		self.GEN_SUB_24 = GEN_SUB_24(dev,base_addr)
		self.DMA_PUB_0 = DMA_PUB_0(dev,base_addr)
		self.DMA_PUB_1 = DMA_PUB_1(dev,base_addr)
		self.DMA_PUB_2 = DMA_PUB_2(dev,base_addr)
		self.DMA_PUB_3 = DMA_PUB_3(dev,base_addr)
		self.DMA_PUB_4 = DMA_PUB_4(dev,base_addr)
		self.DMA_PUB_5 = DMA_PUB_5(dev,base_addr)
		self.DMA_PUB_6 = DMA_PUB_6(dev,base_addr)
		self.DMA_PUB_7 = DMA_PUB_7(dev,base_addr)
		self.DMA_PUB_8 = DMA_PUB_8(dev,base_addr)
		self.DMA_PUB_9 = DMA_PUB_9(dev,base_addr)
		self.DMA_PUB_10 = DMA_PUB_10(dev,base_addr)
		self.DMA_PUB_11 = DMA_PUB_11(dev,base_addr)
		self.DMA_PUB_12 = DMA_PUB_12(dev,base_addr)
		self.DMA_PUB_13 = DMA_PUB_13(dev,base_addr)
		self.DMA_PUB_14 = DMA_PUB_14(dev,base_addr)
		self.DMA_PUB_15 = DMA_PUB_15(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
