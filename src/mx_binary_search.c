#include "../inc/header.h"

int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
	int i;
	int l = 0;
	int r = size -1;
	int j = *count;

	if(!*arr || *arr == NULL) {
		return -1;
	} 
		for(j = 0; l <= r; j++) {
			i = (l +r) / 2;
			(*count)++;
			if(mx_strcmp(arr[i], s) == 0) {
				(*count)++;
				return i;
			}
			else if(mx_strcmp(arr[i], s) > 0) {
				r = i - 1;
				
			} else {
				l = i +1;
			}
		}
		*count = 0;
		return -1;
	}

