/**********************************************************************
 *
 * Generic PID implementation for AVR.
 *
 * Discrete PID controller implementation. Set up by giving P/I/D terms
 * to Init_PID(), and uses a struct PID_DATA to store internal values.
 *
 * Based on application note AVR221 - Discrete PID controller
 * by Atmel Corporation: http://www.atmel.com
 *
 **********************************************************************/

#include "pid.h"
#include "stdint.h"
#include <stdio.h>
#include "usart.h"

extern char str[64];

/* Initialisation of PID controller parameters.
 *
 *  Initialise the variables used by the PID algorithm.
 *
 *  p_factor  Proportional term.
 *  i_factor  Integral term.
 *  pid       Struct with PID status.
 */
void pid_init(int16_t p_factor, int16_t i_factor, struct PID_DATA *pid)
{
  /* Start values for PID controller */
  pid->sumError = 0;
  /* Tuning constants for PID loop */
  pid->P_Factor = p_factor;
  pid->I_Factor = i_factor;
  /* Limits to avoid overflow */
  pid->maxError = MAX_RET / (pid->P_Factor + 1);
  pid->maxSumError = MAX_I_TERM / (pid->I_Factor + 1);
}


/* PID control algorithm.
 *
 *  Calculates output from setpoint, process value and PID status.
 *
 *  setPoint      Desired value.
 *  processValue  Measured value.
 *  pid_st        PID status struct.
 */
int16_t pid_controller(int16_t setPoint, int16_t processValue, struct PID_DATA *pid_st)
{
	int16_t error, p_term;
	int32_t ret, i_term, temp;

	error = setPoint - processValue;
  
	/* Calculate Pterm and limit error overflow */
	if (error > pid_st->maxError) {
		p_term = MAX_P_TERM;
	}
	else if (error < -pid_st->maxError) {
		p_term = -MAX_P_TERM;
	} else {
		p_term = pid_st->P_Factor * error;
	}

	sprintf(str, "p=%d ", p_term);
	USART_0_put_string(str);

	/* Calculate Iterm and limit integral runaway */
	temp = pid_st->sumError + error;
	if(temp > pid_st->maxSumError) {
		i_term = MAX_I_TERM;
		pid_st->sumError = pid_st->maxSumError;
		USART_0_transmit('!');
	} else if(temp < -pid_st->maxSumError) {
		i_term = -MAX_I_TERM;
		pid_st->sumError = -pid_st->maxSumError;
		USART_0_transmit('!');
	} else {
		pid_st->sumError = temp;
		i_term = pid_st->I_Factor * pid_st->sumError;
	}
	sprintf(str, "s=%d ", pid_st->sumError);
	USART_0_put_string(str);

//	sprintf(str, "i=%x ", i_term>>16);
//	USART_0_put_string(str);

	ret = (p_term + i_term) / SCALING_FACTOR;
	sprintf(str, "ret=%d ", ret);
	USART_0_put_string(str);

	if(ret > MAX_RET) {
		ret = MAX_RET;
	} else if(ret < -MAX_RET) {
		ret = -MAX_RET;
	}

	return((int16_t)ret);
}

/* Resets the integrator.
 *
 *  Calling this function will reset the integrator in the PID regulator.
 */
void pid_reset_integrator(pidData_t *pid_st)
{
  pid_st->sumError = 0;
}
