#include "../inc/header.h"

char *mx_strcpy(char *dst, const char *src) {

char *i = dst;
const char *j = src;
	
	while (*j != '\0') {
		*i = *j;
		i++;
		j++;
	}
return dst;	
}
