#include "./str.h"
#include "allocator.h"
#include <stdint.h>

typedef struct {
  Str message;
  uint8_t code;
} Error;

// Creates a new error with a message
Error error_new(char *error_message, uint8_t code, Allocator *alloc) {
  alloc = alloc_default(alloc);
  Str str = str_new(error_message, alloc);
  Error e = {.message = str, .code = code};
  return e;
}
