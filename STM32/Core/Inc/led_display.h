/*
 * led_display.h
 *
 *  Created on: Sep 29, 2023
 *      Author: Nhat Khai
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_

#include "main.h"

#define LED_NUMBER 4

extern int led_index;
extern int led_buffer[LED_NUMBER];

void display7SEG(int num);
void update7SEG(int index);

#endif /* INC_LED_DISPLAY_H_ */