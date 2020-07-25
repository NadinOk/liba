#include "../inc/libmx.h"

int mx_int_len(unsigned int n) {
  int i = 0;
  if (n == 0)
    return 1;
  while (n != 0) {
    i++;
    n /= 10;
  }
  return i;
}
