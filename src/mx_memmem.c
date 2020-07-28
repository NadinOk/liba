#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void*little,
				 size_t little_len) {

	 if (big == NULL || little == NULL || big_len == 0 || little_len == 0 || big_len < little_len)
    {
        return NULL;
    }

    const char* b = (char*)big;

    for (size_t i = 0; i < big_len; i++)
    {
        if(mx_memcmp(b, little, little_len) == 0)
        {
            return (void*)b;
        }
        b++;
    }
    return NULL;
}
