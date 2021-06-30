MCU = STM32F303
CTPC = yes
DEBUG_MATRIX_SCAN_RATE_ENABLE = no
SERIAL_DRIVER = usart
WS2812_DRIVER = pwm
VIA_ENABLE = yes
OLED_DRIVER_ENABLE = yes
WPM_ENABLE = no
AUDIO_ENABLE = no
EXTRAKEY_ENABLE = yes
COMMAND_ENABLE = no
CONSOLE_ENABLE = no
BOOTMAGIC_ENABLE = lite
SPLIT_KEYBOARD = yes
RGBLIGHT_ENABLE = yes
NKRO_ENABLE = yes
ENCODER_ENABLE = yes
POINTING_DEVICE_ENABLE = yes
SRC += pimoroni_trackball.c
QUANTUM_LIB_SRC += i2c_master.c #drivers/chibios/i2cmaster.h needs patch - see lines 27/28
MOUSEKEY_ENABLE = no
