#include "./str.h"
#include <stdint.h>

typedef struct {
  uint8_t code;
  Str message;
} Error;

// Creates a new error with a message
Error err_new(Str message) {
  Error e = {.code = 0, .message = message};
  return e;
}
