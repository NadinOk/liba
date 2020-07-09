#include "../inc/header.h"

int mx_strlen(const char *str);

char *mx_strcat(char *s1, const char *s2) {
  	int str1 = mx_strlen(s1);
  	int str2 = mx_strlen(s2);
	int i = str1;
	int j = 0;

  		while (i < (str1 + str2)){
    s1[i] = s2[j];
    j++;
  }
  s1[i++] = '\0';
  return s1;
}
