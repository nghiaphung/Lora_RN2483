#ifndef RN2483_H_
#define RN2483_H_


#include "UART.h"

typedef enum {
  CMD_TYPE_SYS    = 0,
  CMD_TYPE_MAC    = 1,
  CMD_TYPE_RADIO  = 2,
}cmd_type_t;

typedef enum {
  CMD_SLEEP          = 0,
  CMD_RESET          = 1,
  CMD_ERASE_FW       = 2,
  CMD_FACTORY_RESET  = 3,
  CMD_SET            = 4,
  CMD_GET            = 5,
  CMD_TX             = 6,
  CMD_RX             = 7,
  CMD_JOIN           = 8,
  CMD_SAVE           = 9,
  CMD_FORCE_ENABLE   = 10,
  CMD_PAUSE          = 11,
  CMD_RESUME         = 12,
  CMD_CW             = 13,
}cmd_t;


#endif
