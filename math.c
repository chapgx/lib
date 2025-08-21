#include <stddef.h>
#include <stdint.h>

// Camack's inverse square root approximation function
float math_carmack_isqrt(float number) {
  int i;
  float x, y;
  x = number * 0.5;
  y = number;
  i = *(int *)&y;            // evil floating point bit level hacking
  i = 0x5f3759df - (i >> 1); // what the hell ?
  y = *(float *)&i;
  y = y * (1.5 - (x * y * y));
  y = y * (1.5 - (x * y * y)); // second itearation for mor accuracy
  return y;
}

int math_rand_integer(uint32_t index) {
  index = (index << 13) ^ index;
  return ((index * (index * index * 15731 + 789221) + 1376312589) & 0x7fffffff);
}
