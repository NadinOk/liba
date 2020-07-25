#include "../inc/libmx.h"

void mx_del_strarr(char ***arr) {
    int i = 0;
    char **j = (char **) arr;

    if (!arr || !*arr)
        return;
    while (j[i]) {
        free((char *)j[i]);
        i++;
    }
    free((char **)j);
    *arr = NULL;
}
