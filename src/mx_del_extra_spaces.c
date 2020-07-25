#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str) {
    
   if (!str)
        return NULL;

    unsigned int str_len = mx_strlen(str);
    char* temp_str = mx_strnew(str_len);
    unsigned int k = 0;

    for (unsigned int i = 0; i < str_len; i++)
    {
        if (!mx_isspace(str[i]))
        {
            temp_str[k] = str[i];
            k++;
        }
        if (!mx_isspace(str[i]) && mx_isspace(str[i + 1]))
        {
            temp_str[k] = ' ';
            k++;
        }
    }

    char* new_str = mx_strtrim(temp_str);
        free(temp_str);
    if (new_str == NULL)
        return NULL;
    return new_str;
}
