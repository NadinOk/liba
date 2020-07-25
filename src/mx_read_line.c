#include "../inc/libmx.h"

 static int indexChar(char *a, char b) {
    char *r = mx_strchr(a, b);
    return r - a;
}

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    char *buff = (char *)malloc(buf_size + 1);
    int bytes;

    while ((bytes = read(fd, buff, buf_size)) > 0) {
        int position = indexChar(buff, delim);
        if (position >= 0) {
            char* substr = malloc(position);
            mx_strncpy(substr, buff, position);
            *lineptr = (char*)realloc(*lineptr, mx_strlen(*lineptr) + position + 1);
            mx_strcat(*lineptr, substr);
            return mx_strlen(*lineptr);
        }
        buff[mx_strlen(buff)] = '\0';
        *lineptr = (char*)realloc(*lineptr, buf_size);
        mx_strcat(*lineptr, buff);
    }
    if(bytes < 0 ) return -1;
    free(buff);
    return mx_strlen(*lineptr);
}
