/*
 * heater_controller.h
 *
 *  Created on: Aug 23, 2024
 *      Author: gotjd
 */

#ifndef INC_HEATER_CONTROLLER_H_
#define INC_HEATER_CONTROLLER_H_

#include "main.h"

enum {
	t_OFF = 0,
	t_ON = 1
};

void heater_controll(uint8_t on_off);
uint8_t heater_state();

#endif /* INC_HEATER_CONTROLLER_H_ */
