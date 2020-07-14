#include "../inc/header.h"

bool mx_isspace(char c);
int mx_strlen(const char *s);

char * mx_strtrim(const char * s){
    int j=0;
    char *i = (char *)s;
    char *res = NULL;
      while((mx_isspace(*i))) {
            i++;
       }
       if(j>0) { 
          for(j=0; j < mx_strlen(s); j++) { 
              res = j + i;
            }
            return i;
       }
       j = mx_strlen(s)-1;
       while((mx_isspace(*i))) {
          j--;
       }
       if(j<(mx_strlen(s)-1)) {
          res = j + i;
       }
       return i;
  }
 
/*int main() {
    char name [] = "  ger ghjj";
     printf("%s\n", mx_strtrim(name));   
    return 0;
}*/