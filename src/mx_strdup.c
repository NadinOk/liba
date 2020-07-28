#include "../inc/libmx.h"

char *mx_strdup(const char *str) {
	 unsigned int str_length = mx_strlen(s1);
    char* dup_line = mx_strnew(str_length);
 	  return mx_strcpy(dup_line, s1);
}
