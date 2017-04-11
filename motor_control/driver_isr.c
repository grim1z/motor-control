/*
 * Initial Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include <atmel_start.h>
#include <compiler.h>

extern uint8_t enc_count[];

uint8_t dbg_changedbits;


ISR(PCINT1_vect)
{
	/* Interrupt from motor encoder occurred */
	static uint8_t portbhistory;
	uint8_t currentbits;
	uint8_t changedbits;

	currentbits = PINC; // read port only once to avoid loosing any interrupt
	changedbits = currentbits ^ portbhistory;
	dbg_changedbits = changedbits;
	portbhistory = currentbits;

	if (changedbits & (1 << PC0)) {
		/* PCINT8 changed */ /* Rear Right encoder */
//		PIND = (1 << PD1); // toggle PD1 for debug purpose
		enc_count[0]++;
	}
	if (changedbits & (1 << PC1)) {
		/* PCINT9 changed */ /* Front Right encoder */
		enc_count[1]++;
	}
	if (changedbits & (1 << PC2)) {
		/* PCINT10 changed */ /* Front Left encoder */
		enc_count[2]++;
	}
	if (changedbits & (1 << PC3)) {
		/* PCINT11 changed */ /* Rear Left encoder */
		enc_count[3]++;
	}
}
