#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace)
{
    if (!str || !sub || !replace)
    {
        return NULL;
    }

    unsigned int str_len = mx_strlen(str);
    unsigned int sub_len = mx_strlen(sub);
    unsigned int replace_len = mx_strlen(replace);
    unsigned int substr_count = mx_count_substr(str, sub);
    unsigned int new_len = str_len - sub_len * substr_count + replace_len * substr_count;

    char* new_str = mx_strnew(new_len);

    unsigned int k = 0;
    while(*str && k < new_len)
    {
       if (mx_strncmp(str, sub, sub_len) == 0)
       {
           for (unsigned int j = 0; j < replace_len; j++, k++)
           {
               new_str[k] = replace[j];
           }
           str = str + sub_len - 1;
       }
       else
       {
           new_str[k] = *str;
           k++;
       }
       str++;
    }
    return new_str;
}
