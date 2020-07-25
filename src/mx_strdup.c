#include "../inc/libmx.h"

char *mx_strdup(const char *str) {
	char *i = mx_strnew(mx_strlen(str));
	    
    if(!i){
	    return NULL;
    }		
    return mx_strcpy(i, str);
} 
