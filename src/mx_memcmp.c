#include "../inc/libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
	char *str_1 = (char*)s1;
    char *str_2 = (char*)s2;
    unsigned int i = 0;
       if(!n)
           return 0;

       for (; i < n; i++){
       	if(str_1[i] != str_2[i]) {
       		return str_1[i] - str_2[i];
       }
	}
       return 0;
}
