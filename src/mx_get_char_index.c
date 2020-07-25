#include "../inc/libmx.h"

int mx_get_char_index(const char *str, char c) {
	//char *new = mx_findchr(str, c);
	int index = 0;

	if(!str) {
		return -2;
	}
	while (str[index] != '\0'){
		if (str[index] == c) {
			return index;
			//index ++;
		}
		index ++;

	}
		return -1;
	}
