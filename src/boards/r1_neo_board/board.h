/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2025 Simon Li for muzi ᴡᴏʀᴋꜱ
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _R1_NEO_BOARD_H
#define _R1_NEO_BOARD_H

#define _PINNUM(port, pin)    ((port)*32 + (pin))

#define UICR_REGOUT0_VALUE UICR_REGOUT0_VOUT_3V3 // Carryover from 4630

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER           0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER        2
#define BUTTON_1              _PINNUM(0, 8)	// This pin is not connected on 4630. 
#define BUTTON_2              _PINNUM(0, 8)	// This pin is not connected on 4630. 
#define BUTTON_PULL           NRF_GPIO_PIN_PULLUP // Carryover from 4630

/*------------------------------------------------------------------*/
/* SIGNAL
 *------------------------------------------------------------------*/
#define SIGNAL_DFU            _PINNUM(0, 30) // Tells IO controller we are in DFU mode

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER   "muzi ᴡᴏʀᴋꜱ"
#define BLEDIS_MODEL          "R1 Neo"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x239A
#define USB_DESC_UF2_PID       0x0061
#define USB_DESC_CDC_ONLY_PID  0x0061

//--------------------------------------------------------------------+
// UF2
//--------------------------------------------------------------------+
#define UF2_PRODUCT_NAME      "R1 Neo"
#define UF2_VOLUME_LABEL      "R1-Neo"
#define UF2_BOARD_ID          "R1-Neo-Board"
#define UF2_INDEX_URL         "https://muzi.works"


#endif // _R1_NEO_BOARD_H
