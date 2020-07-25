#include "../inc/libmx.h"

void mx_str_reverse(char *s) {
  int start = 0;
  int end = mx_strlen(s) -1;
  while (start < end){
    mx_swap_char(&s[start], &s[end]);
    start ++; 
    end --;    
  }
}


