/************************************************************************/
/* Motor speed control (using PID)                                      */
/* based on a modified Pololu Baby Orangutan B hardware                 */
/* (ATmega328P microcontroller & 2x TB6612FNG)                          */
/*                                                                      */
/*  2016-2017 grim1z                                                    */
/************************************************************************/

#include <atmel_start.h>
#ifndef F_CPU
#error
#endif
//#include <avr/io.h>
#include <util/delay.h>
//#include <avr/io.h>
#include <stdio.h>

#include "pid.h"

//#define SIMULATOR
#define MOTOR_NBR 4

extern uint8_t dbg_changedbits;

uint8_t enc_count[MOTOR_NBR];
char str[64];

/* P, I and D parameter values
 *
 * The K_P, K_I and K_D values (P, I and D gains)
 * need to be modified to adapt to the application at hand
 */
#define K_P     1.6
#define K_I     6.5

// Parameters for regulator
struct PID_DATA pidData[MOTOR_NBR];


int main(void)
{
	int16_t referenceValue[MOTOR_NBR], ProcessedValue;
	uint8_t tmp, measurementValue[MOTOR_NBR];
	uint8_t prev_enc_count[MOTOR_NBR];
	int16_t motor_speed = 0;
	uint16_t previous_time, duration;
	uint8_t i;

	/* Initialize counter values before interrupts are enabled */
	for(i=0; i<MOTOR_NBR; i++) {
		prev_enc_count[i] = 0;
		enc_count[i] = 0;
	}

	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	cpu_irq_enable();

//	PORTD_set_pin_dir(PORTD1, PORT_DIR_OUT); // debug LED on PD1

//	TIMER_0_set_comp_b(0xff); // workaround current board routing (PWM forced high)
//	TIMER_0_set_comp_a(256-motor_speed); // 256-value to workaround current board routing (PWM forced high)
	TIMER_0_set_comp_a(0); // motor off
	TIMER_0_set_comp_b(0); // motor off
	TIMER_2_set_comp_a(0); // motor off
	TIMER_2_set_comp_b(0); // motor off

	DIR1_R_set_level(1); // set CW rotation for right motors
	DIR2_R_set_level(0);

//	DIR1_L_set_level(1); // set CW rotation for left motors
//	DIR2_L_set_level(0);
	DIR1_L_set_level(0); // workaround direction issue (cabling??)
	DIR2_L_set_level(1);

	for(i=0; i<MOTOR_NBR; i++) {
		pid_init(K_P * SCALING_FACTOR, K_I * SCALING_FACTOR , &pidData[i]);
	}

	while(1) {
		previous_time = TCNT1;
		//USART_0_transmit('v');

		/* Run PID calculations once every PID timer timeout */
		referenceValue[0] = 2; // RR speed target
		referenceValue[1] = 2; // FR speed target
		referenceValue[2] = 2; // FL speed target
		referenceValue[3] = 2; // RL speed target

		for(i=0; i<MOTOR_NBR; i++) {
			tmp = enc_count[i];
			measurementValue[i] = tmp-prev_enc_count[i];
			prev_enc_count[i] = tmp;

			ProcessedValue = pid_controller(referenceValue[i], (int16_t)measurementValue[i], &pidData[i]);

			motor_speed = ProcessedValue;
			if (motor_speed < 0)
				motor_speed = 0;
			else if (motor_speed > 255)
				motor_speed = 255;

			switch(i) {
				case 0:
					TIMER_2_set_comp_b(motor_speed); // set Rear Right motor speed
					break;
				case 1:
					TIMER_0_set_comp_a(motor_speed); // set Front Right motor speed
					break;
				case 2:
					TIMER_0_set_comp_b(motor_speed); // set Front Left motor speed
					break;
				case 3:
					TIMER_2_set_comp_a(motor_speed); // set Rear Left motor speed
					break;
				default:
					break;
			}

//			TIMER_0_set_comp_a(255-motor_speed); // 255-value to workaround current board routing (PWM forced high)
		}

//		Set_Input(inputValue);
		//printf_P("%d", inputValue);
#ifndef SIMULATOR
		_delay_ms(130);
#endif
		duration = TCNT1 - previous_time;
		sprintf(str, "%dx51.2µs ; %d ; %d\n\r", duration, measurementValue, motor_speed);
		USART_0_put_string(str);
		sprintf(str, "%x\n\r", dbg_changedbits);
		USART_0_put_string(str);
	}
}
