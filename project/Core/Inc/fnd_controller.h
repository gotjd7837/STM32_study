/*
 * fnd_controller.h
 *
 *  Created on: Aug 20, 2024
 *      Author: gotjd
 */

#ifndef INC_FND_CONTROLLER_H_
#define INC_FND_CONTROLLER_H_

#include "main.h"

extern uint8_t _LED_0F[29];

void init_fnd();

void send(uint8_t X);
void send_port(uint8_t X, uint8_t port);

void digit4_temper(int n);
void FND_stop();


#endif /* INC_FND_CONTROLLER_H_ */
