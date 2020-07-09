#include "../inc/header.h"

char *mx_strjoin(char const *s1, char const *s2);
char *mx_strnew(const int size);

char *mx_file_to_str(const char *filename) {
  int i = open(filename, O_RDWR);
  if (i < 0) {
    return NULL;
  }
  int b;
  char *tmp = (char *)malloc(sizeof(i));
  char *buf = (char *)malloc(sizeof(char) * 2);
  while ((b = read(i, buf, 1)) > 0) {
    buf[1] = '\0';
    tmp = mx_strjoin(tmp, buf);
  }
  tmp = mx_strjoin(tmp, "\0");
  free(buf);
  close(i);
  return tmp;
}
