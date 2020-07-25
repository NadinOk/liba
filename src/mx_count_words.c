#include "../inc/libmx.h"

int mx_count_words(const char *str, char c){
	int count = 0;
	int del_on = 0;
	int word_on = 0;	

if (!str){
        return -1;
    }
 while (str[word_on] != '\0') {
        while (str[word_on] != c && str[word_on] != '\0') {
            del_on++;
            word_on++;
        }
        if (del_on > 0) {
            count++;
            del_on = 0;
        }
        if (str[word_on] != '\0')
            word_on++;
    }
    return count;
}
