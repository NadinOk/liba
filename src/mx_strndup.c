#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {
  	char *new =  mx_strnew(n);
  
  		if (new == NULL) {
    		return NULL;
  		}
  		mx_strncpy(new, s1, n);
  		return new;
}
