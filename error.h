

#ifndef ERR_H
#define ERR_H

#include "./str.h"

// Error
typedef struct {
  Str message;
  uint8_t code;
} Error;

Error error_new(char *error_message, uint8_t code, Allocator *alloc);

#endif
