#include "../inc/header.h"


int mx_count_words(const char *str, char delimiter);
char *mx_strnew(const int size);
char *mx_strncpy(char*dst, const char *src, int len);

char **mx_strsplit(char const *s, char c) {
    int strnew = mx_count_words(s, c);
    char **result = (char **) malloc(sizeof(char **) * (result+ 1)); 
    //result[strnew ] = 0;
    if (s == 0)
        return 0;
    for (int p = 0; p < strnew; p++) {
        while (*s == c) {
            s++;
        }
        char *i = (char *) s;
        int j = 0;
        while (*s != c) {
            j++;
            s++;
        }
        char *x = mx_strnew(j);
        mx_strncpy(x, i, j);
        result[p] = x;
    }
   free(result);
    return result;
}
int main( void ) {
	char* arr = *mx_strsplit( "qwerty:asdfgh::zxcvbn", '*' );

	if ( arr ) {
		printf( "%c\n", arr[ 0 ] ); // "qwerty"
		printf( "%c\n", arr[ 1 ] ); // "asdfgh"
		printf( "%c\n", arr[ 2 ] ); // ""
		printf( "%c\n", arr[ 3 ] ); // "zxcvbn"
		printf( "%c\n", arr[ 4 ] ); // NULL
		free( arr );
	}
	return 0;
}
