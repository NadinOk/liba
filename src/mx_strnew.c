#include "../inc/header.h"

char *mx_strnew(const int size) {
  char *str = (char *) malloc(size + 1);
  if (str == NULL) {
    return NULL;
  }
  for (int j = 0; j < size; j++) {
    str[j] = '\0';
  }
  str[size] = '\0';
  return str;
}
