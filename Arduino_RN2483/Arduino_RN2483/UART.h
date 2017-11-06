/*
 * UART.h
 *
 *  Created on: Oct 30, 2017
 *      Author: nghiaphung
 */

#ifndef UART_H_
#define UART_H_

#include "Arduino.h"

void UART_Init (void);
void UART_SendChar(char pChar);
char UART_GetChar(void);
int UART_Available(void);
void UART_SendString(String pString);
int UART_GetString(String *s, uint8_t* pLen);


#endif /* UART_H_ */
