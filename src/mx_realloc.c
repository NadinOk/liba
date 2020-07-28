#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    char *ptr_n = (char *)malloc(size);
  	
  	if(ptr == NULL) { 
  		return ptr_n;
  	}
  	mx_memcpy(ptr_n,ptr,malloc_size(ptr));
  	free(ptr);
  	return ptr_n;
  }
