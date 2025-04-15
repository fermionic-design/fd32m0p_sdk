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

class BUS_CLK_FORCE:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+16
		self.bus_clk_force_32mhz = 0
		self.bus_clk_force_key = 0
	def write(self):
		val = 0
		val |= self.bus_clk_force_32mhz << 0
		val |= self.bus_clk_force_key << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.bus_clk_force_32mhz = (val & 0x01) >> 0
		self.bus_clk_force_key = (val & 0xFF000000) >> 24
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
		self._addr = base_addr+24
		self.intr_first = 0
	def write(self):
		val = 0
		val |= self.intr_first << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.intr_first = (val & 0x0F) >> 0
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
		self.prd0 = 0
		self.prd1 = 0
		self.alarm0 = 0
		self.alarm1 = 0
		self.rtc_rdy = 0
		self.interval_alarm = 0
	def write(self):
		val = 0
		val |= self.prd0 << 0
		val |= self.prd1 << 1
		val |= self.alarm0 << 2
		val |= self.alarm1 << 3
		val |= self.rtc_rdy << 4
		val |= self.interval_alarm << 5
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.prd0 = (val & 0x01) >> 0
		self.prd1 = (val & 0x02) >> 1
		self.alarm0 = (val & 0x04) >> 2
		self.alarm1 = (val & 0x08) >> 3
		self.rtc_rdy = (val & 0x10) >> 4
		self.interval_alarm = (val & 0x20) >> 5
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+32
		self.prd0_en = 0
		self.prd1_en = 0
		self.alarm0_en = 0
		self.alarm1_en = 0
		self.rtc_rdy_en = 0
		self.interval_alarm_en = 0
	def write(self):
		val = 0
		val |= self.prd0_en << 0
		val |= self.prd1_en << 1
		val |= self.alarm0_en << 2
		val |= self.alarm1_en << 3
		val |= self.rtc_rdy_en << 4
		val |= self.interval_alarm_en << 5
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.prd0_en = (val & 0x01) >> 0
		self.prd1_en = (val & 0x02) >> 1
		self.alarm0_en = (val & 0x04) >> 2
		self.alarm1_en = (val & 0x08) >> 3
		self.rtc_rdy_en = (val & 0x10) >> 4
		self.interval_alarm_en = (val & 0x20) >> 5
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_NMI_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+36
		self.prd0_nmi_en = 0
		self.prd1_nmi_en = 0
		self.alarm0_nmi_en = 0
		self.alarm1_nmi_en = 0
		self.rtc_rdy_nmi_en = 0
		self.interval_alarm_nmi_en = 0
	def write(self):
		val = 0
		val |= self.prd0_nmi_en << 0
		val |= self.prd1_nmi_en << 1
		val |= self.alarm0_nmi_en << 2
		val |= self.alarm1_nmi_en << 3
		val |= self.rtc_rdy_nmi_en << 4
		val |= self.interval_alarm_nmi_en << 5
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.prd0_nmi_en = (val & 0x01) >> 0
		self.prd1_nmi_en = (val & 0x02) >> 1
		self.alarm0_nmi_en = (val & 0x04) >> 2
		self.alarm1_nmi_en = (val & 0x08) >> 3
		self.rtc_rdy_nmi_en = (val & 0x10) >> 4
		self.interval_alarm_nmi_en = (val & 0x20) >> 5
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class EVENT_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+40
		self.prd0_event_en = 0
		self.prd1_event_en = 0
		self.alarm0_event_en = 0
		self.alarm1_event_en = 0
		self.rtc_rdy_event_en = 0
		self.interval_alarm_event_en = 0
	def write(self):
		val = 0
		val |= self.prd0_event_en << 0
		val |= self.prd1_event_en << 1
		val |= self.alarm0_event_en << 2
		val |= self.alarm1_event_en << 3
		val |= self.rtc_rdy_event_en << 4
		val |= self.interval_alarm_event_en << 5
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.prd0_event_en = (val & 0x01) >> 0
		self.prd1_event_en = (val & 0x02) >> 1
		self.alarm0_event_en = (val & 0x04) >> 2
		self.alarm1_event_en = (val & 0x08) >> 3
		self.rtc_rdy_event_en = (val & 0x10) >> 4
		self.interval_alarm_event_en = (val & 0x20) >> 5
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_SW_SET:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+44
		self.prd0_sw_set = 0
		self.prd1_sw_set = 0
		self.alarm0_sw_set = 0
		self.alarm1_sw_set = 0
		self.rtc_rdy_sw_set = 0
		self.interval_alarm_sw_set = 0
	def write(self):
		val = 0
		val |= self.prd0_sw_set << 0
		val |= self.prd1_sw_set << 1
		val |= self.alarm0_sw_set << 2
		val |= self.alarm1_sw_set << 3
		val |= self.rtc_rdy_sw_set << 4
		val |= self.interval_alarm_sw_set << 5
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.prd0_sw_set = (val & 0x01) >> 0
		self.prd1_sw_set = (val & 0x02) >> 1
		self.alarm0_sw_set = (val & 0x04) >> 2
		self.alarm1_sw_set = (val & 0x08) >> 3
		self.rtc_rdy_sw_set = (val & 0x10) >> 4
		self.interval_alarm_sw_set = (val & 0x20) >> 5
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DEBUG_CTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+48
		self.intr_en_during_debug = 0
		self.ctr_en_during_debug = 0
	def write(self):
		val = 0
		val |= self.intr_en_during_debug << 0
		val |= self.ctr_en_during_debug << 1
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.intr_en_during_debug = (val & 0x01) >> 0
		self.ctr_en_during_debug = (val & 0x02) >> 1
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class RTC_CTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+52
		self.rtc_bcd = 0
	def write(self):
		val = 0
		val |= self.rtc_bcd << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rtc_bcd = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SEC_CTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+56
		self.sec_bin = 0
		self.sec_lsb_bcd = 0
		self.sec_msb_bcd = 0
		self.sec_rtc_rdy = 0
	def write(self):
		val = 0
		val |= self.sec_bin << 0
		val |= self.sec_lsb_bcd << 6
		val |= self.sec_msb_bcd << 10
		val |= self.sec_rtc_rdy << 14
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.sec_bin = (val & 0x3F) >> 0
		self.sec_lsb_bcd = (val & 0x3C0) >> 6
		self.sec_msb_bcd = (val & 0x3C00) >> 10
		self.sec_rtc_rdy = (val & 0x4000) >> 14
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MIN_CTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+60
		self.min_bin = 0
		self.min_lsb_bcd = 0
		self.min_msb_bcd = 0
		self.min_rtc_rdy = 0
	def write(self):
		val = 0
		val |= self.min_bin << 0
		val |= self.min_lsb_bcd << 6
		val |= self.min_msb_bcd << 10
		val |= self.min_rtc_rdy << 14
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.min_bin = (val & 0x3F) >> 0
		self.min_lsb_bcd = (val & 0x3C0) >> 6
		self.min_msb_bcd = (val & 0x3C00) >> 10
		self.min_rtc_rdy = (val & 0x4000) >> 14
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class HR_CTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+64
		self.hr_bin = 0
		self.hr_lsb_bcd = 0
		self.hr_msb_bcd = 0
		self.hr_rtc_rdy = 0
	def write(self):
		val = 0
		val |= self.hr_bin << 0
		val |= self.hr_lsb_bcd << 5
		val |= self.hr_msb_bcd << 9
		val |= self.hr_rtc_rdy << 13
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.hr_bin = (val & 0x1F) >> 0
		self.hr_lsb_bcd = (val & 0x1E0) >> 5
		self.hr_msb_bcd = (val & 0x1E00) >> 9
		self.hr_rtc_rdy = (val & 0x2000) >> 13
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DOM_CTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+68
		self.dom_bin = 0
		self.dom_lsb_bcd = 0
		self.dom_msb_bcd = 0
		self.dom_rtc_rdy = 0
	def write(self):
		val = 0
		val |= self.dom_bin << 0
		val |= self.dom_lsb_bcd << 5
		val |= self.dom_msb_bcd << 9
		val |= self.dom_rtc_rdy << 13
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dom_bin = (val & 0x1F) >> 0
		self.dom_lsb_bcd = (val & 0x1E0) >> 5
		self.dom_msb_bcd = (val & 0x1E00) >> 9
		self.dom_rtc_rdy = (val & 0x2000) >> 13
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DOW_CTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+72
		self.dow = 0
		self.dow_rtc_rdy = 0
	def write(self):
		val = 0
		val |= self.dow << 0
		val |= self.dow_rtc_rdy << 3
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dow = (val & 0x07) >> 0
		self.dow_rtc_rdy = (val & 0x08) >> 3
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MON_CTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+76
		self.mon_bin = 0
		self.mon_lsb_bcd = 0
		self.mon_msb_bcd = 0
		self.mon_rtc_rdy = 0
	def write(self):
		val = 0
		val |= self.mon_bin << 0
		val |= self.mon_lsb_bcd << 6
		val |= self.mon_msb_bcd << 10
		val |= self.mon_rtc_rdy << 14
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.mon_bin = (val & 0x3F) >> 0
		self.mon_lsb_bcd = (val & 0x3C0) >> 6
		self.mon_msb_bcd = (val & 0x3C00) >> 10
		self.mon_rtc_rdy = (val & 0x4000) >> 14
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class YEAR_CTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+80
		self.yr_bin = 0
		self.yr_lsb_bcd = 0
		self.yr_decade_bcd = 0
		self.yr_cent_low_bcd = 0
		self.yr_cent_high_bcd = 0
		self.yr_rtc_rdy = 0
	def write(self):
		val = 0
		val |= self.yr_bin << 0
		val |= self.yr_lsb_bcd << 12
		val |= self.yr_decade_bcd << 16
		val |= self.yr_cent_low_bcd << 20
		val |= self.yr_cent_high_bcd << 24
		val |= self.yr_rtc_rdy << 28
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.yr_bin = (val & 0xFFF) >> 0
		self.yr_lsb_bcd = (val & 0xF000) >> 12
		self.yr_decade_bcd = (val & 0xF0000) >> 16
		self.yr_cent_low_bcd = (val & 0xF00000) >> 20
		self.yr_cent_high_bcd = (val & 0xF000000) >> 24
		self.yr_rtc_rdy = (val & 0x10000000) >> 28
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class A0_MIN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+84
		self.a_min_en_0 = 0
		self.a_min_bin_0 = 0
		self.a_min_bcd_low_0 = 0
		self.a_min_bcd_high_0 = 0
	def write(self):
		val = 0
		val |= self.a_min_en_0 << 0
		val |= self.a_min_bin_0 << 1
		val |= self.a_min_bcd_low_0 << 7
		val |= self.a_min_bcd_high_0 << 11
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.a_min_en_0 = (val & 0x01) >> 0
		self.a_min_bin_0 = (val & 0x7E) >> 1
		self.a_min_bcd_low_0 = (val & 0x780) >> 7
		self.a_min_bcd_high_0 = (val & 0x7800) >> 11
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class A1_MIN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+88
		self.a_min_en_1 = 0
		self.a_min_bin_1 = 0
		self.a_min_bcd_low_1 = 0
		self.a_min_bcd_high_1 = 0
	def write(self):
		val = 0
		val |= self.a_min_en_1 << 0
		val |= self.a_min_bin_1 << 1
		val |= self.a_min_bcd_low_1 << 7
		val |= self.a_min_bcd_high_1 << 11
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.a_min_en_1 = (val & 0x01) >> 0
		self.a_min_bin_1 = (val & 0x7E) >> 1
		self.a_min_bcd_low_1 = (val & 0x780) >> 7
		self.a_min_bcd_high_1 = (val & 0x7800) >> 11
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class A0_HOUR:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+92
		self.a_hr_en_0 = 0
		self.a_hr_bin_0 = 0
		self.a_hr_bcd_low_0 = 0
		self.a_hr_bcd_high_0 = 0
	def write(self):
		val = 0
		val |= self.a_hr_en_0 << 0
		val |= self.a_hr_bin_0 << 1
		val |= self.a_hr_bcd_low_0 << 6
		val |= self.a_hr_bcd_high_0 << 10
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.a_hr_en_0 = (val & 0x01) >> 0
		self.a_hr_bin_0 = (val & 0x3E) >> 1
		self.a_hr_bcd_low_0 = (val & 0x3C0) >> 6
		self.a_hr_bcd_high_0 = (val & 0x3C00) >> 10
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class A1_HOUR:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+96
		self.a_hr_en_1 = 0
		self.a_hr_bin_1 = 0
		self.a_hr_bcd_low_1 = 0
		self.a_hr_bcd_high_1 = 0
	def write(self):
		val = 0
		val |= self.a_hr_en_1 << 0
		val |= self.a_hr_bin_1 << 1
		val |= self.a_hr_bcd_low_1 << 6
		val |= self.a_hr_bcd_high_1 << 10
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.a_hr_en_1 = (val & 0x01) >> 0
		self.a_hr_bin_1 = (val & 0x3E) >> 1
		self.a_hr_bcd_low_1 = (val & 0x3C0) >> 6
		self.a_hr_bcd_high_1 = (val & 0x3C00) >> 10
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class A0_DAY:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+100
		self.a_dow_en_0 = 0
		self.a_dow_0 = 0
		self.a_dom_en_0 = 0
		self.a_dom_bin_0 = 0
		self.a_dom_lsb_bcd_0 = 0
		self.a_dom_msb_bcd_0 = 0
	def write(self):
		val = 0
		val |= self.a_dow_en_0 << 0
		val |= self.a_dow_0 << 1
		val |= self.a_dom_en_0 << 4
		val |= self.a_dom_bin_0 << 5
		val |= self.a_dom_lsb_bcd_0 << 10
		val |= self.a_dom_msb_bcd_0 << 14
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.a_dow_en_0 = (val & 0x01) >> 0
		self.a_dow_0 = (val & 0x0E) >> 1
		self.a_dom_en_0 = (val & 0x10) >> 4
		self.a_dom_bin_0 = (val & 0x3E0) >> 5
		self.a_dom_lsb_bcd_0 = (val & 0x3C00) >> 10
		self.a_dom_msb_bcd_0 = (val & 0x3C000) >> 14
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class A1_DAY:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+104
		self.a_dow_en_1 = 0
		self.a_dow_1 = 0
		self.a_dom_en_1 = 0
		self.a_dom_bin_1 = 0
		self.a_dom_lsb_bcd_1 = 0
		self.a_dom_msb_bcd_1 = 0
	def write(self):
		val = 0
		val |= self.a_dow_en_1 << 0
		val |= self.a_dow_1 << 1
		val |= self.a_dom_en_1 << 4
		val |= self.a_dom_bin_1 << 5
		val |= self.a_dom_lsb_bcd_1 << 10
		val |= self.a_dom_msb_bcd_1 << 14
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.a_dow_en_1 = (val & 0x01) >> 0
		self.a_dow_1 = (val & 0x0E) >> 1
		self.a_dom_en_1 = (val & 0x10) >> 4
		self.a_dom_bin_1 = (val & 0x3E0) >> 5
		self.a_dom_lsb_bcd_1 = (val & 0x3C00) >> 10
		self.a_dom_msb_bcd_1 = (val & 0x3C000) >> 14
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PRD_INTR_SEL0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+108
		self.prd_intr_sel_0 = 0
	def write(self):
		val = 0
		val |= self.prd_intr_sel_0 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.prd_intr_sel_0 = (val & 0x07) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PRD_INTR_SEL1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+112
		self.prd_intr_sel_1 = 0
	def write(self):
		val = 0
		val |= self.prd_intr_sel_1 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.prd_intr_sel_1 = (val & 0x07) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTERVAL_INTR_SEL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+116
		self.interval_intr_sel = 0
	def write(self):
		val = 0
		val |= self.interval_intr_sel << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.interval_intr_sel = (val & 0x03) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class RTC_CAL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+120
		self.freq_out_cal = 0
		self.clk_cal_sign = 0
		self.clk_cal_ppm_val = 0
	def write(self):
		val = 0
		val |= self.freq_out_cal << 0
		val |= self.clk_cal_sign << 2
		val |= self.clk_cal_ppm_val << 3
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.freq_out_cal = (val & 0x03) >> 0
		self.clk_cal_sign = (val & 0x04) >> 2
		self.clk_cal_ppm_val = (val & 0x7F8) >> 3
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class RTC_TEMP_CMP:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+124
		self.temp_cmp_sign = 0
		self.temp_cmp_ppm_val = 0
	def write(self):
		val = 0
		val |= self.temp_cmp_sign << 0
		val |= self.temp_cmp_ppm_val << 1
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.temp_cmp_sign = (val & 0x01) >> 0
		self.temp_cmp_ppm_val = (val & 0x1FE) >> 1
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class rtc:
	def __init__(self,dev,base_addr):
		self.DESC = DESC(dev,base_addr)
		self.PWR_EN = PWR_EN(dev,base_addr)
		self.RST_CTRL = RST_CTRL(dev,base_addr)
		self.RST_STS = RST_STS(dev,base_addr)
		self.BUS_CLK_FORCE = BUS_CLK_FORCE(dev,base_addr)
		self.CLK_CTRL = CLK_CTRL(dev,base_addr)
		self.INTR_STS = INTR_STS(dev,base_addr)
		self.INTR_EVENT = INTR_EVENT(dev,base_addr)
		self.INTR_EN = INTR_EN(dev,base_addr)
		self.INTR_NMI_EN = INTR_NMI_EN(dev,base_addr)
		self.EVENT_EN = EVENT_EN(dev,base_addr)
		self.INTR_SW_SET = INTR_SW_SET(dev,base_addr)
		self.DEBUG_CTL = DEBUG_CTL(dev,base_addr)
		self.RTC_CTL = RTC_CTL(dev,base_addr)
		self.SEC_CTL = SEC_CTL(dev,base_addr)
		self.MIN_CTL = MIN_CTL(dev,base_addr)
		self.HR_CTL = HR_CTL(dev,base_addr)
		self.DOM_CTL = DOM_CTL(dev,base_addr)
		self.DOW_CTL = DOW_CTL(dev,base_addr)
		self.MON_CTL = MON_CTL(dev,base_addr)
		self.YEAR_CTL = YEAR_CTL(dev,base_addr)
		self.A0_MIN = A0_MIN(dev,base_addr)
		self.A1_MIN = A1_MIN(dev,base_addr)
		self.A0_HOUR = A0_HOUR(dev,base_addr)
		self.A1_HOUR = A1_HOUR(dev,base_addr)
		self.A0_DAY = A0_DAY(dev,base_addr)
		self.A1_DAY = A1_DAY(dev,base_addr)
		self.PRD_INTR_SEL0 = PRD_INTR_SEL0(dev,base_addr)
		self.PRD_INTR_SEL1 = PRD_INTR_SEL1(dev,base_addr)
		self.INTERVAL_INTR_SEL = INTERVAL_INTR_SEL(dev,base_addr)
		self.RTC_CAL = RTC_CAL(dev,base_addr)
		self.RTC_TEMP_CMP = RTC_TEMP_CMP(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
