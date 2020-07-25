#include "../inc/libmx.h"

static  char  *mx_word(const char *str, char c, int *i) {
  char  *s;
  int   k;

  if (!(s = (char *)malloc(sizeof(s) * (mx_strlen(str)))))
    return (NULL);
  k = 0;
  while (str[*i] != c && str[*i])
  {
    s[k] = str[*i];
    k++;
    *i += 1;
  }
  s[k] = '\0';
  while (str[*i] == c && str[*i])
    *i += 1;
  return (s);
}

char **mx_strsplit(char const *str, char c) {

  int   i;
  int   j;
  int   wrd;
  char  **s;

  i = 0;
  j = 0;
  wrd = mx_count_words(str, c);
  
    if (!(s = (char **)malloc(sizeof(s) * (mx_count_words(str, c) + 2))))
        return (NULL);
     while (str[i] == c && str[i])
        i++;
      while (j < wrd && str[i])
      {
      s[j] = mx_word(str, c, &i);
      j++;
      }
     s[j] = NULL;
  return (s);
}
