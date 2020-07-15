#include "../inc/header.h"


int mx_count_words(const char *str, char delimiter);
char *mx_strnew(const int size);
//char *mx_strncpy(char*dst, const char *src, int len);

char **mx_strsplit(char const *s, char c) {
    int d = 0;
    int count = 0;
    int strnew = mx_count_words(s, c);
    for (; s[d] != '\0'; d++) {
        if(s[d] == c && s[d] + 1 != c && s[d] + 1 != '\0') {
            count ++;
        }
    }
    char **result = (char **) malloc(count * sizeof(char **)) ; 
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
        result[p] = mx_strncpy(x, i, j);
        //result[p] = x;
    }
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
