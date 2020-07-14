#include "../inc/header.h"



char *del_extra_spaces(const char *str) {
    char *strn = mx_strnew(mx_strlen(str));
    // char *res;
    int i = 0;
    int j = 0;

      for(; str[i]; i++) {
        if (!mx_isspace(str[i]) && mx_isspace(str[i +1])) {
          strn[j] = ' ';
          j++;
          // write(1, &str[i], 1);
        }
        else if(!mx_isspace(str[i])) {
          strn[j] = str[i];
          j++;
          // write(1, &str[i], 1);
        }
        
      }
      // res = mx_strtrim(strn);
      // free(strn);
      // if (res == NULL) {
        // return mx_strnew(0);
    return strn;
  }


int main() {
  char str[] = "  If  you  gaze   into  the abyss,    the   abyss gazes also   into you.    ";
  char *tmp = del_extra_spaces(str);
  printf("%s\n", tmp);
  return 0;
}
