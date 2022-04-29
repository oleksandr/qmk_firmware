# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes         # Console for debug
COMMAND_ENABLE = yes         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output

UNICODE_ENABLE = yes
UNICODEMAP_ENABLE = no
UCIS_ENABLE = no

SPLIT_KEYBOARD = yes
POINTING_DEVICE_ENABLE = no
COMBO_ENABLE = no

AUTO_SHIFT_ENABLE = yes # Auto Shift

SRC += spi_master.c
SRC += adns/adns.c
SRC += pmw/pmw.c
