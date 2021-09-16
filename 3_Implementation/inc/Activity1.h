/**
 * @file Activity1.h
 * @author SULTAN (you@domain.com)
 * @brief Initialization of seat, heater and led
 * @version 0.1
 * @date 2021-09-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#include <avr/io.h>
#include<util/delay.h>

#define SEAT_CHECK !(PIND &(1<<PD1))
#define HEATER_ON (PIND &(1<<PD2))
#define HEATER_OFF PORTD&=~(1<<PD2)
#define LED_ON PORTD|=(1<<PD0)
#define LED_OFF PORTD &=~(1<<PD0)

void SEAT_CHECKING();

#endif // ACTIVITY1_H_INCLUDED
