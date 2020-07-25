#include "../inc/libmx.h"

int mx_sqrt(int x) {
	int i = 1; 

	while(x / i >= i) {
		if (i * i == x) {
			return i;
		}
		i++;
	}
	return 0;
}
