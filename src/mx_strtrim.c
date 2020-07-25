#include "../inc/libmx.h"

char * mx_strtrim(const char * str){
    if (str == NULL) {
        return NULL;
    }

    unsigned int old_len, new_len, start, end, i;
    old_len = mx_strlen(str);

    start = 0;
    while (str[start] == ' ' || mx_isspace(str[start]) == 1) {
        start++;
    }

    end = old_len - 1;
    while (str[end] == ' ' || mx_isspace(str[end]) == 1) {
        end--;
    }

    new_len = old_len - start - (old_len - 1 - end);

    char* new_str = mx_strnew(new_len);
    i = 0;
    while (start <= end) {
        new_str[i] = str[start];
        start++;
        i++;
    }
    return new_str;
}
