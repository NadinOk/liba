#include "../inc/header.h"

char *mx_strnew(const int size);
int mx_int_len(unsigned int n);

char * mx_itoa(int number) {
    int length = 0, sign = 0, p = 1, i = 0;
    if (number < 0) {
        sign = 1;
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
/*int main() {
     char *s = NULL;
     //s = mx_itoa(-2147483647);
     s = mx_itoa(100);
     printf("%s\n", s);
     free(s);
     return 0;
}/*
