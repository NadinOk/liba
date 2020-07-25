#include "../inc/libmx.h"

void *mx_memcpy(void* restrict dst, const void *restrict src, size_t n) {
    char *new = dst;
    const char *f = src;
    unsigned int i = 0;

    for (; i < n; i++)
    {
        new[i] = f[i];
    }
    return new;
}
