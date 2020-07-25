#include "../inc/libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
	int i;
    char *j;
    int res;

    if (str == 0 || sub == 0)
        return -2;
    i = mx_strlen(str);
    j = mx_strstr(str, sub);
    if (j == NULL)
        return -1;
    res = i - mx_strlen(j);
    return res;
}
