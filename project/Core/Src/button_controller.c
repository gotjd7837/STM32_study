/*
 * button_controller.c
 *
 *  Created on: Aug 29, 2024
 *      Author: gotjd
 */

#include "button_controller.h"
#include "main.h"
#include "oled_controller.h"

#define t_OFF 0
#define t_ON 1

int set_temp = 27;
int start_sw = 0;

uint8_t check_start_sw()
{
	if (HAL_GPIO_ReadPin(PB1_START_SW_PIN_GPIO_Port, PB1_START_SW_PIN_Pin))
	{
		if (start_sw == t_ON)
		{
			OLED_stop_render();
			start_sw = t_OFF;
		}
		return (t_OFF);
	}
	else
	{
		if (start_sw == t_OFF)
		{
			OLED_on_render();
			start_sw = t_ON;
		}
		return (t_ON);
	}
}
