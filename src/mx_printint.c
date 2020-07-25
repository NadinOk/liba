#include "../inc/libmx.h"


void mx_printint(int n){
  int tmp = n;
  int p = 1;
  int i; 
  
  if(n == -2147483648){
    write(1, "-2147483648", 11);
  }
  else{
    if(n < 0){
      mx_printchar('-');
      n *= -1;
    }
    for(tmp = n; tmp >= 10; tmp /= 10){
      p *= 10;
    }
    while(n >= 10 || p >= 10) {
      if (n < p) {
        mx_printchar('0');
      } else {
        i = (n - (n % 10)) / p;
        mx_printchar(i + 48);
        n -= n - n % p;
      }
      p /= 10;
    }
    mx_printchar(n + 48);
  }
}
