#include "../inc/header.h"

int mx_count_words(const char *str, char delimiter){
	int count = 0;
	int del_on = 0;
	int word_on = 0;	

	while (*str != '\0'){
		if (*str != delimiter) {
			if (word_on == 1) {
				str++;
			}
			else {
				word_on = 1;
				count++;
				del_on = 0;
				str++;
			}
		}
		else {
			if (del_on == 0) {
				del_on = 1;
				word_on = 0;
				str++;
			} 
			else {
				str++;
			}
		}
	}
	return count;
}
