/*
 * RN2483.cpp
 * control Rn2483 to transfer data
 * 4/11/2017
 * author: nghiaphung
 */
#include "Arduino.h"
#include "RN2483.h"
#include "user_platform.h"
#include "UART.h"

int RN2483_SendCmd(cmd_type_t pType, cmd_t pCmd, char* param)
{
  String dataOut;
  switch(pType)
  {
    case CMD_TYPE_SYS:
      dataOut = "sys";      break;
    case CMD_TYPE_MAC:
      dataOut = "mac";      break;
    case CMD_TYPE_RADIO:
      dataOut = "radio";    break;
    default: return Exit_Failure;
  }

  switch(pCmd)
  {
    case CMD_SLEEP:
      dataOut += " sleep";         break;
    case CMD_RESET:
      dataOut += " reset";         break;
    case CMD_ERASE_FW:
      dataOut += " eraseFW";       break;
    case CMD_FACTORY_RESET:
      dataOut += " factoryRESET";  break;
    case CMD_SET:
      dataOut += " set";           break;
    case CMD_GET:
      dataOut += " get";           break;
    case CMD_TX:
      dataOut += " tx";            break;
    case CMD_RX:
      dataOut += " rx";            break;
    case CMD_JOIN:
      dataOut += " join";          break;
    case CMD_SAVE:
      dataOut += " save";          break;
    case CMD_FORCE_ENABLE:
      dataOut += " forceENABLE";   break;
    case CMD_PAUSE:
      dataOut += " pause";         break;
    case CMD_RESUME:
      dataOut += " resume";        break;
    case CMD_CW:
      dataOut += " cw";            break;
    default: return Exit_Failure;
  }
  if(param != NULL)
  {
    /* add parameter to cmd */
    dataOut += " "; //add space
    dataOut += param;
  }
  UART_SendString(dataOut);
  return Exit_OK;
}
 
