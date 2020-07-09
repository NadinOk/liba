
int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s) {
  int start = 0;
  int end = mx_strlen(s) -1;
  while (start < end){
    mx_swap_char(&s[start], &s[end]);
    start ++; 
    end --;    
  }
}


