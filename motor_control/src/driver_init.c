/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_init.h"
#include <system.h>

void exint_0_init(void)
{

// Set pin direction to input
ENC_REAR_R_set_dir(PORT_DIR_IN);

ENC_REAR_R_set_pull_mode(
        // <y> Pull configuration
        // <id> pad_pull_config
        // <PORT_PULL_OFF"> Off
        // <PORT_PULL_UP"> Pull-up
        PORT_PULL_UP);

// Set pin direction to input
ENC_REAR_L_set_dir(PORT_DIR_IN);

ENC_REAR_L_set_pull_mode(
        // <y> Pull configuration
        // <id> pad_pull_config
        // <PORT_PULL_OFF"> Off
        // <PORT_PULL_UP"> Pull-up
        PORT_PULL_UP);

// Set pin direction to input
ENC_FRONT_R_set_dir(PORT_DIR_IN);

ENC_FRONT_R_set_pull_mode(
        // <y> Pull configuration
        // <id> pad_pull_config
        // <PORT_PULL_OFF"> Off
        // <PORT_PULL_UP"> Pull-up
        PORT_PULL_UP);

// Set pin direction to input
ENC_FRONT_L_set_dir(PORT_DIR_IN);

ENC_FRONT_L_set_pull_mode(
        // <y> Pull configuration
        // <id> pad_pull_config
        // <PORT_PULL_OFF"> Off
        // <PORT_PULL_UP"> Pull-up
        PORT_PULL_UP);

	EXTERNAL_IRQ_0_init();
}

void tc8_0_init(void)
{

// Set pin direction to output
PWM_REAR_R_set_dir(PORT_DIR_OUT);

PWM_REAR_R_set_level(
        // <y> Initial level
        // <id> pad_initial_level
        // <false"> Low
        // <true"> High
        false);

// Set pin direction to output
PWM_REAR_L_set_dir(PORT_DIR_OUT);

PWM_REAR_L_set_level(
        // <y> Initial level
        // <id> pad_initial_level
        // <false"> Low
        // <true"> High
        false);

	TIMER_0_init();
}

void tc8_2_init(void)
{

// Set pin direction to output
PWM_FRONT_R_set_dir(PORT_DIR_OUT);

PWM_FRONT_R_set_level(
        // <y> Initial level
        // <id> pad_initial_level
        // <false"> Low
        // <true"> High
        false);

// Set pin direction to output
PWM_FRONT_L_set_dir(PORT_DIR_OUT);

PWM_FRONT_L_set_level(
        // <y> Initial level
        // <id> pad_initial_level
        // <false"> Low
        // <true"> High
        false);

	TIMER_2_init();
}

void tc16_1_init(void)
{
	TIMER_1_init();
}


void system_init()
{
	mcu_init();

	// PORT on PB0

// Set pin direction to output
DIR1_R_set_dir(PORT_DIR_OUT);

DIR1_R_set_level(
        // <y> Initial level
        // <id> pad_initial_level
        // <false"> Low
        // <true"> High
        false);

	// PORT on PB1

// Set pin direction to output
DIR2_R_set_dir(PORT_DIR_OUT);

DIR2_R_set_level(
        // <y> Initial level
        // <id> pad_initial_level
        // <false"> Low
        // <true"> High
        false);

	// PORT on PD4

// Set pin direction to output
DIR1_L_set_dir(PORT_DIR_OUT);

DIR1_L_set_level(
        // <y> Initial level
        // <id> pad_initial_level
        // <false"> Low
        // <true"> High
        false);

	// PORT on PD7

// Set pin direction to output
DIR2_L_set_dir(PORT_DIR_OUT);

DIR2_L_set_level(
        // <y> Initial level
        // <id> pad_initial_level
        // <false"> Low
        // <true"> High
        false);

sysctrl_init();

exint_0_init();

I2C_0_init();

tc8_0_init();

tc8_2_init();

tc16_1_init();

USART_0_init();  // keep LED available for debug

}

