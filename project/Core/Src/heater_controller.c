/*
 * heater_controller.c
 *
 *  Created on: Aug 23, 2024
 *      Author: gotjd
 */

#include "heater_controller.h"
#include "ds18b20.h"
#include "button_controller.h"

void heater_controll()
{
	// 현재 온도
	int cur_temp = ds18b20[0].Temperature;

	if (set_temp > cur_temp)
		HAL_GPIO_WritePin(PB5_RELAY_ON_OFF_CTRL_GPIO_Port, PB5_RELAY_ON_OFF_CTRL_Pin, 1);
	else
		HAL_GPIO_WritePin(PB5_RELAY_ON_OFF_CTRL_GPIO_Port, PB5_RELAY_ON_OFF_CTRL_Pin, 0);
}

void heater_force_off()
{
	HAL_GPIO_WritePin(PB5_RELAY_ON_OFF_CTRL_GPIO_Port, PB5_RELAY_ON_OFF_CTRL_Pin, 0);
}
