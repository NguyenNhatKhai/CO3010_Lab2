/*
 * software_timer.h
 *
 *  Created on: Sep 29, 2023
 *      Author: Nhat Khai
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_flag;

void setTimer0(int duration);
void runTimer();

#endif /* INC_SOFTWARE_TIMER_H_ */
