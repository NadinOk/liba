#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void*little,
				 size_t little_len) {

	 char *h = (char *)big;
	 char *i = (char *)little;
	size_t j = 0;
    	if (!little) {
    		return (void *)big;
    	} 
    	if (!big_len || !little_len || little_len > big_len ) {
    		return NULL;
    	}
    	if (little_len > 0 ) {
    		return mx_memchr(big, (int)*i, big_len);
    	}
		for (; j <= (big_len - little_len); j++) {
    		if ((*h == *i) && mx_memcmp(h, i, little_len) == 0) {
            return h;
            h++;
        }
    }
    return NULL;
}
