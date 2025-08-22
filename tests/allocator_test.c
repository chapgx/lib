#include "../allocator.h"
#include "../core.h"
#include "../str.h"
#include <stddef.h>
#include <stdio.h>

int main() {
  Allocator *alloc = alloc_default(NULL);

  size_t initial_offset = arena_get_offset();

  Allocator *tempalloc = alloc_temp();

  Str s = str_new("Richard Chapman Gomez", tempalloc);

  str_print(&s);

  assertf(24 == arena_get_offset(), "expected %d got %zu", 24,
          arena_get_offset());

  tempalloc->free(NULL);

  assertf(arena_get_offset() == initial_offset,
          "expected offset to be %zu but got %zu", initial_offset,
          arena_get_offset());

  alloc->free(NULL);
}
