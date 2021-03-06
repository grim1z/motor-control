/**
 * \file
 *
 * \brief TC16 related functionality implementation.
*
 * Copyright (C) 2016 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */

#include <tc16.h>
#include <utils.h>

/**
 * \brief Initialize TIMER_1 interface
 */
int8_t TIMER_1_init()
{
    /* Enable TC1 */
    	PRR &= ~(1 << PRTIM1);

    TCCR1A = (0 << COM1A1) | (0 << COM1A0) | // Normal port operation, OCA disconnected
    		(0 << COM1B1) | (0 << COM1B0) | // Normal port operation, OCB disconnected
    		(0 << WGM11) | (0 << WGM10); // Mode 0 Normal

    TCCR1B = (0 << WGM13) | (0 << WGM12) | // Mode 0 Normal
    		(0 << ICNC1) | // Disable input capture noise canceler
    		(0 << ICES1) | // Falling edge will trigger input capture
    		(1 << CS12) | (0 << CS11) | (1 << CS10); // IO clock divided by 1024

    TIMSK1 = (0 << ICIE1) | // Disable input capture interrupt
    		(0 << OCIE1B) | // Disable output compare match B interrupt
    		(0 << OCIE1A) | // Disable output compare match A interrupt
    		(0 << TOIE1);   // Disable overflow interrupt

	return 0;
}

