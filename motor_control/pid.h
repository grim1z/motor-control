/**********************************************************************
 *
 * Header file for pid.c
 *
 * Based on application note AVR221 - Discrete PID controller
 * by Atmel Corporation: http://www.atmel.com
 *
 **********************************************************************/

#ifndef PID_H
#define PID_H

#include "stdint.h"

#define SCALING_FACTOR  128

/* PID Status
 *
 * Setpoints and data used by the PID control algorithm
 */
typedef struct PID_DATA{
  // Summation of errors, used for integrate calculations
  int32_t sumError;
  // Maximum allowed sumerror, avoid overflow
  int32_t maxSumError;
  // The Proportional tuning constant, multiplied with SCALING_FACTOR
  int16_t P_Factor;
  // The Integral tuning constant, multiplied with SCALING_FACTOR
  int16_t I_Factor;
  // Maximum allowed error, avoid overflow
  int16_t maxError;
} pidData_t;

/* Maximum values
 *
 * Needed to avoid sign/overflow problems
 */
// Maximum value of variables
#define MAX_RET         (INT16_MAX/2)/*INT16_MAX*/
#define MAX_P_TERM      (INT16_MAX/2)
//#define MAX_LONG        INT32_MAX/*INT32_MAX*/
#define MAX_I_TERM      (INT32_MAX / 2)

// Boolean values
//#define FALSE           0
//#define TRUE            1

void pid_init(int16_t p_factor, int16_t i_factor, struct PID_DATA *pid);
int16_t pid_controller(int16_t setPoint, int16_t processValue, struct PID_DATA *pid_st);
void pid_reset_integrator(pidData_t *pid_st);

#endif
