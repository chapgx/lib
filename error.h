

#ifndef ERR_H
#define ERR_H

#include "./str.h"

// Error
typedef struct {
  uint8_t code;
  Str message;
} Error;

#endif
