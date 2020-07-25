#include "../inc/libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
   char *i =  (char*) s + n;
    	
    	while (n--) {
        	if ( *i != (char)c) {
        		i--;
        	}
        	else 
        		return i;
        	
	}
	return NULL;
}
