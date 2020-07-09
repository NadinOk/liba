#include <stdlib.h>

char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str) {
	char *i = mx_strnew(mx_strlen(str));
	    
    if(!i){
	    return NULL;
    }		
    return mx_strcpy(i, str);
} 
