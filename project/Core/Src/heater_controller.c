/*
 * heater_controller.c
 *
 *  Created on: Aug 23, 2024
 *      Author: gotjd
 */

#include "heater_controller.h"

static uint8_t state = 0;

void heater_controll(uint8_t on_off)
{
	HAL_GPIO_WritePin(PB5_RELAY_ON_OFF_CTRL_GPIO_Port, PB5_RELAY_ON_OFF_CTRL_Pin, on_off);
	state = on_off;
}

uint8_t heater_state()
{
	return (state);
}
