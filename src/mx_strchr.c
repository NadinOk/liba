#include "../inc/libmx.h"

char *mx_strchr(const char* s, int c) {
  char *i = (char *)s;
  char *res;
  for(; *i++ != '\0';){
    if(*i == c){
      return res = i;
    }
  }
  return 0;
}
