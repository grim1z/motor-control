/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <port.h>

/**
 * \brief Set DIR1_R pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void DIR1_R_set_pull_mode(
	const enum port_pull_mode  pull_mode)
{
	PORTB_set_pin_pull_mode(PORTB0, pull_mode);
}

/**
 * \brief Set DIR1_R data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void DIR1_R_set_dir(
	const enum port_dir dir)
{
	PORTB_set_pin_dir(PORTB0, dir);
}

/**
 * \brief Set DIR1_R level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void DIR1_R_set_level(
	const bool level)
{
	PORTB_set_pin_level(PORTB0, level);
}

/**
 * \brief Toggle output level on DIR1_R
 *
 * Toggle the pin level
 */
static inline void DIR1_R_toggle_level()
{
	PORTB_toggle_pin_level(PORTB0);
}

/**
 * \brief Get level on DIR1_R
 *
 * Reads the level on a pin
 */
static inline bool DIR1_R_get_level()
{
	return PORTB_get_pin_level(PORTB0);
}

/**
 * \brief Set DIR2_R pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void DIR2_R_set_pull_mode(
	const enum port_pull_mode  pull_mode)
{
	PORTB_set_pin_pull_mode(PORTB1, pull_mode);
}

/**
 * \brief Set DIR2_R data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void DIR2_R_set_dir(
	const enum port_dir dir)
{
	PORTB_set_pin_dir(PORTB1, dir);
}

/**
 * \brief Set DIR2_R level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void DIR2_R_set_level(
	const bool level)
{
	PORTB_set_pin_level(PORTB1, level);
}

/**
 * \brief Toggle output level on DIR2_R
 *
 * Toggle the pin level
 */
static inline void DIR2_R_toggle_level()
{
	PORTB_toggle_pin_level(PORTB1);
}

/**
 * \brief Get level on DIR2_R
 *
 * Reads the level on a pin
 */
static inline bool DIR2_R_get_level()
{
	return PORTB_get_pin_level(PORTB1);
}

/**
 * \brief Set PWM_FRONT_R pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PWM_FRONT_R_set_pull_mode(
	const enum port_pull_mode  pull_mode)
{
	PORTB_set_pin_pull_mode(PORTB3, pull_mode);
}

/**
 * \brief Set PWM_FRONT_R data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PWM_FRONT_R_set_dir(
	const enum port_dir dir)
{
	PORTB_set_pin_dir(PORTB3, dir);
}

/**
 * \brief Set PWM_FRONT_R level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PWM_FRONT_R_set_level(
	const bool level)
{
	PORTB_set_pin_level(PORTB3, level);
}

/**
 * \brief Toggle output level on PWM_FRONT_R
 *
 * Toggle the pin level
 */
static inline void PWM_FRONT_R_toggle_level()
{
	PORTB_toggle_pin_level(PORTB3);
}

/**
 * \brief Get level on PWM_FRONT_R
 *
 * Reads the level on a pin
 */
static inline bool PWM_FRONT_R_get_level()
{
	return PORTB_get_pin_level(PORTB3);
}

/**
 * \brief Set ENC_REAR_R pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void ENC_REAR_R_set_pull_mode(
	const enum port_pull_mode  pull_mode)
{
	PORTC_set_pin_pull_mode(PORTC0, pull_mode);
}

/**
 * \brief Set ENC_REAR_R data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void ENC_REAR_R_set_dir(
	const enum port_dir dir)
{
	PORTC_set_pin_dir(PORTC0, dir);
}

/**
 * \brief Set ENC_REAR_R level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void ENC_REAR_R_set_level(
	const bool level)
{
	PORTC_set_pin_level(PORTC0, level);
}

/**
 * \brief Toggle output level on ENC_REAR_R
 *
 * Toggle the pin level
 */
static inline void ENC_REAR_R_toggle_level()
{
	PORTC_toggle_pin_level(PORTC0);
}

/**
 * \brief Get level on ENC_REAR_R
 *
 * Reads the level on a pin
 */
static inline bool ENC_REAR_R_get_level()
{
	return PORTC_get_pin_level(PORTC0);
}

/**
 * \brief Set ENC_REAR_L pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void ENC_REAR_L_set_pull_mode(
	const enum port_pull_mode  pull_mode)
{
	PORTC_set_pin_pull_mode(PORTC1, pull_mode);
}

/**
 * \brief Set ENC_REAR_L data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void ENC_REAR_L_set_dir(
	const enum port_dir dir)
{
	PORTC_set_pin_dir(PORTC1, dir);
}

/**
 * \brief Set ENC_REAR_L level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void ENC_REAR_L_set_level(
	const bool level)
{
	PORTC_set_pin_level(PORTC1, level);
}

/**
 * \brief Toggle output level on ENC_REAR_L
 *
 * Toggle the pin level
 */
static inline void ENC_REAR_L_toggle_level()
{
	PORTC_toggle_pin_level(PORTC1);
}

/**
 * \brief Get level on ENC_REAR_L
 *
 * Reads the level on a pin
 */
static inline bool ENC_REAR_L_get_level()
{
	return PORTC_get_pin_level(PORTC1);
}

/**
 * \brief Set ENC_FRONT_R pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void ENC_FRONT_R_set_pull_mode(
	const enum port_pull_mode  pull_mode)
{
	PORTC_set_pin_pull_mode(PORTC2, pull_mode);
}

/**
 * \brief Set ENC_FRONT_R data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void ENC_FRONT_R_set_dir(
	const enum port_dir dir)
{
	PORTC_set_pin_dir(PORTC2, dir);
}

/**
 * \brief Set ENC_FRONT_R level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void ENC_FRONT_R_set_level(
	const bool level)
{
	PORTC_set_pin_level(PORTC2, level);
}

/**
 * \brief Toggle output level on ENC_FRONT_R
 *
 * Toggle the pin level
 */
static inline void ENC_FRONT_R_toggle_level()
{
	PORTC_toggle_pin_level(PORTC2);
}

/**
 * \brief Get level on ENC_FRONT_R
 *
 * Reads the level on a pin
 */
static inline bool ENC_FRONT_R_get_level()
{
	return PORTC_get_pin_level(PORTC2);
}

/**
 * \brief Set ENC_FRONT_L pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void ENC_FRONT_L_set_pull_mode(
	const enum port_pull_mode  pull_mode)
{
	PORTC_set_pin_pull_mode(PORTC3, pull_mode);
}

/**
 * \brief Set ENC_FRONT_L data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void ENC_FRONT_L_set_dir(
	const enum port_dir dir)
{
	PORTC_set_pin_dir(PORTC3, dir);
}

/**
 * \brief Set ENC_FRONT_L level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void ENC_FRONT_L_set_level(
	const bool level)
{
	PORTC_set_pin_level(PORTC3, level);
}

/**
 * \brief Toggle output level on ENC_FRONT_L
 *
 * Toggle the pin level
 */
static inline void ENC_FRONT_L_toggle_level()
{
	PORTC_toggle_pin_level(PORTC3);
}

/**
 * \brief Get level on ENC_FRONT_L
 *
 * Reads the level on a pin
 */
static inline bool ENC_FRONT_L_get_level()
{
	return PORTC_get_pin_level(PORTC3);
}

/**
 * \brief Set SDA pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SDA_set_pull_mode(
	const enum port_pull_mode  pull_mode)
{
	PORTC_set_pin_pull_mode(PORTC4, pull_mode);
}

/**
 * \brief Set SDA data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SDA_set_dir(
	const enum port_dir dir)
{
	PORTC_set_pin_dir(PORTC4, dir);
}

/**
 * \brief Set SDA level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SDA_set_level(
	const bool level)
{
	PORTC_set_pin_level(PORTC4, level);
}

/**
 * \brief Toggle output level on SDA
 *
 * Toggle the pin level
 */
static inline void SDA_toggle_level()
{
	PORTC_toggle_pin_level(PORTC4);
}

/**
 * \brief Get level on SDA
 *
 * Reads the level on a pin
 */
static inline bool SDA_get_level()
{
	return PORTC_get_pin_level(PORTC4);
}

/**
 * \brief Set SCL pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SCL_set_pull_mode(
	const enum port_pull_mode  pull_mode)
{
	PORTC_set_pin_pull_mode(PORTC5, pull_mode);
}

/**
 * \brief Set SCL data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SCL_set_dir(
	const enum port_dir dir)
{
	PORTC_set_pin_dir(PORTC5, dir);
}

/**
 * \brief Set SCL level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SCL_set_level(
	const bool level)
{
	PORTC_set_pin_level(PORTC5, level);
}

/**
 * \brief Toggle output level on SCL
 *
 * Toggle the pin level
 */
static inline void SCL_toggle_level()
{
	PORTC_toggle_pin_level(PORTC5);
}

/**
 * \brief Get level on SCL
 *
 * Reads the level on a pin
 */
static inline bool SCL_get_level()
{
	return PORTC_get_pin_level(PORTC5);
}

/**
 * \brief Set PD0 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PD0_set_pull_mode(
	const enum port_pull_mode  pull_mode)
{
	PORTD_set_pin_pull_mode(PORTD0, pull_mode);
}

/**
 * \brief Set PD0 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PD0_set_dir(
	const enum port_dir dir)
{
	PORTD_set_pin_dir(PORTD0, dir);
}

/**
 * \brief Set PD0 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PD0_set_level(
	const bool level)
{
	PORTD_set_pin_level(PORTD0, level);
}

/**
 * \brief Toggle output level on PD0
 *
 * Toggle the pin level
 */
static inline void PD0_toggle_level()
{
	PORTD_toggle_pin_level(PORTD0);
}

/**
 * \brief Get level on PD0
 *
 * Reads the level on a pin
 */
static inline bool PD0_get_level()
{
	return PORTD_get_pin_level(PORTD0);
}

/**
 * \brief Set PD1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PD1_set_pull_mode(
	const enum port_pull_mode  pull_mode)
{
	PORTD_set_pin_pull_mode(PORTD1, pull_mode);
}

/**
 * \brief Set PD1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PD1_set_dir(
	const enum port_dir dir)
{
	PORTD_set_pin_dir(PORTD1, dir);
}

/**
 * \brief Set PD1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PD1_set_level(
	const bool level)
{
	PORTD_set_pin_level(PORTD1, level);
}

/**
 * \brief Toggle output level on PD1
 *
 * Toggle the pin level
 */
static inline void PD1_toggle_level()
{
	PORTD_toggle_pin_level(PORTD1);
}

/**
 * \brief Get level on PD1
 *
 * Reads the level on a pin
 */
static inline bool PD1_get_level()
{
	return PORTD_get_pin_level(PORTD1);
}

/**
 * \brief Set PWM_FRONT_L pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PWM_FRONT_L_set_pull_mode(
	const enum port_pull_mode  pull_mode)
{
	PORTD_set_pin_pull_mode(PORTD3, pull_mode);
}

/**
 * \brief Set PWM_FRONT_L data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PWM_FRONT_L_set_dir(
	const enum port_dir dir)
{
	PORTD_set_pin_dir(PORTD3, dir);
}

/**
 * \brief Set PWM_FRONT_L level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PWM_FRONT_L_set_level(
	const bool level)
{
	PORTD_set_pin_level(PORTD3, level);
}

/**
 * \brief Toggle output level on PWM_FRONT_L
 *
 * Toggle the pin level
 */
static inline void PWM_FRONT_L_toggle_level()
{
	PORTD_toggle_pin_level(PORTD3);
}

/**
 * \brief Get level on PWM_FRONT_L
 *
 * Reads the level on a pin
 */
static inline bool PWM_FRONT_L_get_level()
{
	return PORTD_get_pin_level(PORTD3);
}

/**
 * \brief Set DIR1_L pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void DIR1_L_set_pull_mode(
	const enum port_pull_mode  pull_mode)
{
	PORTD_set_pin_pull_mode(PORTD4, pull_mode);
}

/**
 * \brief Set DIR1_L data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void DIR1_L_set_dir(
	const enum port_dir dir)
{
	PORTD_set_pin_dir(PORTD4, dir);
}

/**
 * \brief Set DIR1_L level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void DIR1_L_set_level(
	const bool level)
{
	PORTD_set_pin_level(PORTD4, level);
}

/**
 * \brief Toggle output level on DIR1_L
 *
 * Toggle the pin level
 */
static inline void DIR1_L_toggle_level()
{
	PORTD_toggle_pin_level(PORTD4);
}

/**
 * \brief Get level on DIR1_L
 *
 * Reads the level on a pin
 */
static inline bool DIR1_L_get_level()
{
	return PORTD_get_pin_level(PORTD4);
}

/**
 * \brief Set PWM_REAR_L pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PWM_REAR_L_set_pull_mode(
	const enum port_pull_mode  pull_mode)
{
	PORTD_set_pin_pull_mode(PORTD5, pull_mode);
}

/**
 * \brief Set PWM_REAR_L data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PWM_REAR_L_set_dir(
	const enum port_dir dir)
{
	PORTD_set_pin_dir(PORTD5, dir);
}

/**
 * \brief Set PWM_REAR_L level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PWM_REAR_L_set_level(
	const bool level)
{
	PORTD_set_pin_level(PORTD5, level);
}

/**
 * \brief Toggle output level on PWM_REAR_L
 *
 * Toggle the pin level
 */
static inline void PWM_REAR_L_toggle_level()
{
	PORTD_toggle_pin_level(PORTD5);
}

/**
 * \brief Get level on PWM_REAR_L
 *
 * Reads the level on a pin
 */
static inline bool PWM_REAR_L_get_level()
{
	return PORTD_get_pin_level(PORTD5);
}

/**
 * \brief Set PWM_REAR_R pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PWM_REAR_R_set_pull_mode(
	const enum port_pull_mode  pull_mode)
{
	PORTD_set_pin_pull_mode(PORTD6, pull_mode);
}

/**
 * \brief Set PWM_REAR_R data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PWM_REAR_R_set_dir(
	const enum port_dir dir)
{
	PORTD_set_pin_dir(PORTD6, dir);
}

/**
 * \brief Set PWM_REAR_R level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PWM_REAR_R_set_level(
	const bool level)
{
	PORTD_set_pin_level(PORTD6, level);
}

/**
 * \brief Toggle output level on PWM_REAR_R
 *
 * Toggle the pin level
 */
static inline void PWM_REAR_R_toggle_level()
{
	PORTD_toggle_pin_level(PORTD6);
}

/**
 * \brief Get level on PWM_REAR_R
 *
 * Reads the level on a pin
 */
static inline bool PWM_REAR_R_get_level()
{
	return PORTD_get_pin_level(PORTD6);
}

/**
 * \brief Set DIR2_L pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void DIR2_L_set_pull_mode(
	const enum port_pull_mode  pull_mode)
{
	PORTD_set_pin_pull_mode(PORTD7, pull_mode);
}

/**
 * \brief Set DIR2_L data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void DIR2_L_set_dir(
	const enum port_dir dir)
{
	PORTD_set_pin_dir(PORTD7, dir);
}

/**
 * \brief Set DIR2_L level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void DIR2_L_set_level(
	const bool level)
{
	PORTD_set_pin_level(PORTD7, level);
}

/**
 * \brief Toggle output level on DIR2_L
 *
 * Toggle the pin level
 */
static inline void DIR2_L_toggle_level()
{
	PORTD_toggle_pin_level(PORTD7);
}

/**
 * \brief Get level on DIR2_L
 *
 * Reads the level on a pin
 */
static inline bool DIR2_L_get_level()
{
	return PORTD_get_pin_level(PORTD7);
}

#endif // ATMEL_START_PINS_H_INCLUDED
