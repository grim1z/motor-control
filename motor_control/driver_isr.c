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

uint32_t i2c_data_ready;
uint8_t reg_addr;
uint8_t is_addr=0;

enum registers {
	ID,
	GSR,
	RLSPDSET,
	RLSPDGET,
	RLSTS,
	RRSPDSET,
	RRSPDGET,
	RRSTS,
	FLSPDSET,
	FLSPDGET,
	FLSTS,
	FRSPDSET,
	FRSPDGET,
	FRSTS,
	/* */
	END_REGLIST
};

uint8_t register_map[END_REGLIST];

#define START_WRITE 0x60
#define START_READ 0xA8
#define CONTINUE_READ 0xB8
#define STOP_WRITE 0xA0
#define WRITE 0x80
#define STOP_READ 0xC0


void init_regmap(void)
{
	int i;

	for (i=0; i< END_REGLIST; i++) {
		register_map[i] = 0;
	}

	register_map[ID] = 0x01;
}

ISR(TWI_vect)
{				
//	cpu_irq_disable();
	switch(TWSR & 0xFC) {
		case START_WRITE: 
			TWCR |= 1<< TWINT;
			TWCR |= 1<< TWEA;
			is_addr = 1;
			break;
			
		case WRITE:
			if (is_addr) {
				reg_addr = TWDR;
				if (reg_addr >= sizeof(register_map)) {
					reg_addr = sizeof(register_map) - 1;
				}
//				DEBUG_PRINT("Set address %x\n", reg_addr);
				is_addr = 0;
			} else {
				*(uint8_t*)(register_map + reg_addr) = TWDR;
//				DEBUG_PRINT("write register  %x with %x\n", reg_addr,*(uint8_t*)(register_map + reg_addr) );
				if (reg_addr++ >= sizeof(register_map)) {
					reg_addr = sizeof(register_map) - 1;
				}
				i2c_data_ready |= 1 << reg_addr;
			}
			TWCR |= 1<<TWINT;
			TWCR |= 1<< TWEA;
			break;
			
		case STOP_WRITE:
			TWCR |= 1<< TWINT;
			break;
			
		case START_READ:
		case CONTINUE_READ:		
			TWDR = *(uint8_t*)(register_map + reg_addr);
			//DEBUG_PRINT("Read register %x = %x\n", reg_addr,*(uint8_t*)(register_map + reg_addr) )
			TWCR |= 1 << TWINT;
			TWCR |= 1<< TWEA;
			if (reg_addr++ >= sizeof(register_map)) {
				reg_addr = sizeof(register_map) - 1;	
			}
			break;
				
		case STOP_READ:
			TWCR |= 1 << TWINT;
			TWCR |= 1 << TWEA;
			break;
	}
//	cpu_irq_enable();
}

