#include  "../inc/header.h"

int mx_count_words(const char *str, char delimiter);
char *mx_strnew(const int size);
char *mx_strncpy(char*dst, const char *src, int len);
int mx_strlen(const char *s);

char mx_strsplit(char const *s, char c) {
    int str = mx_count_words(s, c);
    char *result = mx_strnew(mx_strlen(result)); 
    //result[strnew ] = 0;
    if (s == 0)
        return 0;
    for (int p = 0; p < str; p++) {
        while (*s == c) {
            s++;
        }
        char *i = (char *) s;
        int j = 0;
        while (*s != c) {
            j++;
        }
        char *x = mx_strnew(j);
        mx_strncpy(x, i, j);
        result[p] = *x;     
    }
   free(result);
    return *result;
}
int main( void ) {
  char j[23] =  "qwerty:asdfgh::zxcvbn";
  char i = '*';
  printf("%c\n", mx_strsplit( j, i));
  return 0;
}
