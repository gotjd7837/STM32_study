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

void digit4_showzero(int n, int replay, int showZero);
void digit4_temper(int n);

void digit4_replay(int n, int replay);
void digit4(int n);
void digit4showZero_repaly(int n, int replay);
void digit4showZero(int n);
void digit2(int n, int port, int replay);
void digit2_port(int n, int port);


#endif /* INC_FND_CONTROLLER_H_ */
