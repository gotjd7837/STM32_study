/*
 * oled_controller.c
 *
 *  Created on: Aug 29, 2024
 *      Author: gotjd
 */

#include "oled_controller.h"
#include "ds18b20.h"
#include "fonts.h"
#include "ssd1306.h"
#include <stdio.h>
#include "button_controller.h"

extern TIM_HandleTypeDef htim3;

void OLED_temp_render()
{
	int temp = set_temp;
	char temp_str[20] = {0};

	sprintf(temp_str, "%d.0", temp);

	HAL_TIM_Base_Stop_IT(&htim3);
	SSD1306_GotoXY (0,0);
	SSD1306_Puts ("SetT | Work", &Font_11x18, 1);
	SSD1306_GotoXY (0, 18);
	SSD1306_Puts ("--------------------", &Font_7x10, 1);
	SSD1306_GotoXY (0, 40);
	SSD1306_Puts (temp_str, &Font_11x18, 1);
	SSD1306_UpdateScreen(); //display
	HAL_TIM_Base_Start_IT(&htim3);
}

void OLED_defult_render()
{
	int temp = set_temp;
	char temp_str[20] = {0};

	sprintf(temp_str, "%d.0", temp);

	HAL_TIM_Base_Stop_IT(&htim3);
	SSD1306_GotoXY (0,0);
	SSD1306_Puts ("SetT | Work", &Font_11x18, 1);
	SSD1306_GotoXY (0, 18);
	SSD1306_Puts ("--------------------", &Font_7x10, 1);
	SSD1306_GotoXY (0, 40);
	SSD1306_Puts (temp_str, &Font_11x18, 1);
	SSD1306_GotoXY (47, 40);
	SSD1306_Puts (" |  OFF", &Font_11x18, 1);
	SSD1306_UpdateScreen(); //display
	HAL_TIM_Base_Start_IT(&htim3);
}

void OLED_stop_render()
{
	HAL_TIM_Base_Stop_IT(&htim3);
	SSD1306_GotoXY (47, 40);
	SSD1306_Puts (" |  OFF", &Font_11x18, 1);
	SSD1306_UpdateScreen(); //display
	HAL_TIM_Base_Start_IT(&htim3);
}

void OLED_on_render()
{
	HAL_TIM_Base_Stop_IT(&htim3);
	SSD1306_GotoXY (47, 40);
	SSD1306_Puts (" |  ON ", &Font_11x18, 1);
	SSD1306_UpdateScreen(); //display
	HAL_TIM_Base_Start_IT(&htim3);
}
