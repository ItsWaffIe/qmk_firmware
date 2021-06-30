BOOTMAGIC_ENABLE = lite
EXTRAKEY_ENABLE = yes
MOUSEKEY_ENABLE = yes
COMBO_ENABLE = yes
TAP_DANCE_ENABLE = yes
LTO_ENABLE = yes
UNICODEMAP_ENABLE = yes
RANDICT = yes
SECRETS = yes

SRC += waffleus.c \
		tapdance.c \
		combos.c \
		pru.c

ifeq ($(strip $(PIMORONI_TRACKBALL)), yes)
	OPT_DEFS += -DPIMORONI_TRACKBALL
	POINTING_DEVICE_ENABLE = yes
	SRC += pimoroni_trackball.c
	QUANTUM_LIB_SRC += i2c_master.c
endif

ifeq ($(strip $(SECRETS)), yes)
    OPT_DEFS += -DSECRETS
endif

ifneq ("$(wildcard $(USER_PATH)/secrets.c)","")
  SRC += secrets.c
endif

ifeq ($(strip $(BOOTLOADER)), nanoboot)
	BOOTLOADER_SIZE = 512
endif

ifeq ($(strip $(OLED_DRIVER_ENABLE)), yes)
	SRC += oled.c
endif

ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)
	SRC += rgb.c
endif

ifeq ($(strip $(RANDICT)), yes)
	OPT_DEFS += -DRANDICT
endif
