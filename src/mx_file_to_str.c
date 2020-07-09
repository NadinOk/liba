#include <unistd.h>
#include <stdlib.h>

char *mx_strjoin(char const *s1, char const *s2);
char *mx_strnew(const int size);

char *mx_file_to_str(int fd) {
    char *res = mx_strnew(0);

    int len = 4;
    char buf[len];
    int bytes_read;
    while ((bytes_read = read(fd, buf, len - 1)) != 0) {
        buf[bytes_read] = 0;
        char *old_res = res;
        res = mx_strjoin(res, (char *)buff);
        free(old_res);
        if (res == 0) {
            return 0;
        }
    }

    return res;
}
