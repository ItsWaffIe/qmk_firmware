/* Copyright 2020 @ItsWaffle/@waffle#0007
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#include "config_common.h"
#define VENDOR_ID       0x9237
#define PRODUCT_ID      0x1972
#define DEVICE_VER      0x0000
#define MANUFACTURER    Waffle Inc.
#define PRODUCT         Minidox
#define MATRIX_ROWS 8
#define MATRIX_COLS 5
#define MATRIX_ROW_PINS { F7, B1, B3, B5 }
#define MATRIX_COL_PINS { F6, F5, F4, B6, B4 }
#define MATRIX_ROW_PINS_RIGHT { E6, C6, D4, B3 }
#define MATRIX_COL_PINS_RIGHT { D7, B4, B5, B6, B2 }
#define UNUSED_PINS
#define USE_SERIAL
#define SOFT_SERIAL_PIN D3
#define DIODE_DIRECTION COL2ROW
#define USB_POLLING_INTERVAL_MS 1
#define DEBOUNCE 5
