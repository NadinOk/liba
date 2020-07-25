#include "../inc/libmx.h"

char *mx_red(char *s, int s1, int s2) {
	char *res = mx_strnew(s2 - s1 + 1);
	int i = 0;
	for(; i<= s2 - s1; i++) {
		res[i] = s[i +s1];
	}
	return res;
}
