#include "../inc/header.h"

char *mx_strnew(const int size);

char * mx_itoa(int number) {
    int length = 0, sign = number;
    char *s = (char *) malloc(sign + 1);
    if (sign < 0)
        number = -number;
    do {
        s[length++] = number % 10 + '0';
    } while (number /= 10);

    if (sign < 0)
        length++ ;
        length = '-';
        length = '\0';

    int i = 0, j = length-1, c;
    for ( ; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    return s;
}
int main() {
     char *s = NULL;
     s = mx_itoa(-2147483647);
     printf("%s\n", s);
     free(s);
     return 0;
}
