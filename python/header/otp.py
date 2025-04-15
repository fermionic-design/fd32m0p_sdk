class TIMER_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+0
		self.tsetup2 = 0
		self.tpas = 0
		self.tpah = 0
		self.tprogwh = 0
	def write(self):
		val = 0
		val |= self.tsetup2 << 0
		val |= self.tpas << 2
		val |= self.tpah << 3
		val |= self.tprogwh << 5
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.tsetup2 = (val & 0x03) >> 0
		self.tpas = (val & 0x04) >> 2
		self.tpah = (val & 0x18) >> 3
		self.tprogwh = (val & 0xFFE0) >> 5
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class OTP_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+4
		self.otp_mode = 0
		self.wr_start_addr = 0
		self.wr_end_addr = 0
	def write(self):
		val = 0
		val |= self.otp_mode << 0
		val |= self.wr_start_addr << 1
		val |= self.wr_end_addr << 6
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.otp_mode = (val & 0x01) >> 0
		self.wr_start_addr = (val & 0x3E) >> 1
		self.wr_end_addr = (val & 0x7C0) >> 6
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class OTP_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+8
		self.otp_wr_en = 0
	def write(self):
		val = 0
		val |= self.otp_wr_en << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.otp_wr_en = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class OTP_STATUS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+12
		self.otp_wr_done = 0
		self.otp = 0
	def write(self):
		val = 0
		val |= self.otp_wr_done << 0
		val |= self.otp << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.otp_wr_done = (val & 0x01) >> 0
		self.otp = (val & 0xFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+144
		self.wr_pstate = 0
		self.rd_pstate = 0
	def write(self):
		val = 0
		val |= self.wr_pstate << 0
		val |= self.rd_pstate << 3
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.wr_pstate = (val & 0x07) >> 0
		self.rd_pstate = (val & 0x78) >> 3
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class OTP_RD_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+148
		self.otp_rd_en = 0
	def write(self):
		val = 0
		val |= self.otp_rd_en << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.otp_rd_en = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class OTP_RD_STATUS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+152
		self.otp_rd_done = 0
	def write(self):
		val = 0
		val |= self.otp_rd_done << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.otp_rd_done = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class otp:
	def __init__(self,dev,base_addr):
		self.TIMER_CTRL = TIMER_CTRL(dev,base_addr)
		self.OTP_CTRL = OTP_CTRL(dev,base_addr)
		self.OTP_EN = OTP_EN(dev,base_addr)
		self.OTP_STATUS = OTP_STATUS(dev,base_addr)
		self.STS = STS(dev,base_addr)
		self.OTP_RD_EN = OTP_RD_EN(dev,base_addr)
		self.OTP_RD_STATUS = OTP_RD_STATUS(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
