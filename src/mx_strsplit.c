#include  "../inc/header.h"

char **mx_strsplit(const char *s, char c) {
    char i = NULL;
    char** result    = 0;
    char* tmp        = (char *) s;
    char* last_comma = 0;
    char delim[2];
    delim[0] = c;
    delim[1] = 0;
   
    while (*tmp)
    {
        if (c == *tmp)
        {
            i++;
            last_comma = tmp;
        }
        tmp++;
    }
    i += last_comma < (s + mx_strlen(s) - 1);

    i++;

    result = malloc(sizeof(char*) * i);
    result = i;
    free(*result);
    return result;
}

int main () {
char *arr[] = "Hello world and Nadin";
char c = '*';
printf("s\n", mx_strsplit(*arr, &c));
return 0;
}
