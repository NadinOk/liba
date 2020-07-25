#include "../inc/libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    unsigned int i = 0;

    if (!arr || !delim || arr == NULL || delim == NULL || *arr == NULL) {
        return ;
    }

    while (arr[i] != '\0') {
        mx_printstr(arr[i]);
        if(arr[i + 1] != NULL) {
        mx_printstr(delim);
        }
        i++;
    }
    mx_printchar('\n');
}
