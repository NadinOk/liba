#include "../inc/libmx.h"

int mx_bubble_sort(char **arr, int size) {
char *b = NULL;
int i; 
int j;
int res = 0;

for(i = 0; i != size; i++) {
    for (j = i; j != size; j++) {
	    if(mx_strcmp(arr[i], arr[j]) > 0) {
		    b = arr[j];
		    arr[j] = arr[i];
		    arr[i] = b;
		    res++;
	    }
    }
}
return res;
}
