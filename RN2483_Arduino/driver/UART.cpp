/*
 *  UART.cpp
 *  Brief: module UART to interface with RN2483
 *  Created on: Oct 30, 2017
 *      Author: nghiaphung
 */

// The default setting for the UART interface are 57600 bps, 8bits, no parity
// 1 stop bit, no flow control

#include "Arduino.h"
#include "../RN2483_platform.h"
#include "../user_platform.h"

#define RN2483_BAUDRATE     57600
#define UART                Serial

void UART_Init (void)
{
	Serial.begin(RN2483_BAUDRATE);
}


void UART_SendChar(char pChar)
{
	UART.write(pChar);
}

char UART_GetChar(void)
{
	return UART.read();
}

int UART_Available(void)
{
	return UART.available();
}

void UART_SendString (String pString)
{
	UART.print(pString);
}

int UART_GetString (String *s, uint8_t* pLen)
{
	char c;
	*s = "";
	*pLen = 0;
	if (UART_Available())
	{
		c = UART_GetChar();
		*s += c;
		*pLen ++;
		uint32_t startTime = millis(); // get start time of recv
		while ((c != '\n') && ((millis() - 10) < startTime)) // while not recv '\n' and not timeout (10ms)
		{
			c = UART_GetChar();
			*pLen++;
			*s += c;
		}
		if (c == '\n')
		{
			return Exit_OK;
		}
		else
		{
			return Exit_Failure;
		}
	}
	return Exit_Normal;
}


