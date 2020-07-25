#include "../inc/libmx.h"


char * mx_itoa(int number) {
    int length = 0, sign = 0, p = 1, i = 0;
    if (number < 0) {
      if(number == -2147483648) {
        return "-2147483648";
      }
        sign = 1;
        length++;
        number *= -1;
    }
    char *s = mx_strnew(mx_int_len(number) + sign + 1);
    if (sign == 1)
        s[length++] = '-';
    for(int tmp = number; tmp >= 10; tmp /= 10){
      p *= 10;
    }
     while (number >= 10 || p >= 10){
        if (number < p) {
        s[length++] = '0';
      } else {
        i = (number - (number % 10)) / p;
        s[length++] = i + '0';
        number -= number - number % p;
      }
      p /= 10;
    }
    s[length++] = number + '0';
    s[length] = '\0';
    return s;
}
