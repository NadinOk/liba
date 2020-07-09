#include <unistd.h>
#include <stdio.h>

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
			if(mx_strcmp(arr[j], s) > 0) {
				r = j -1;
			}
			else if(mx_strcmp(arr[j], s) == 0) {
				(*count)++;
				return j;
			} else {
				l = j +1;
			}
		}
		*count = 0;
		return -1;
	}
