//#include <stdio.h>

char *mx_strncpy(char*dst, const char *src, int len) {
  
	char *ret = dst;
    do {
        if (!len--)
            return ret;
    } while ((*dst++ = *src++));
    while (len--)
        *dst++ = 0;
    return ret;
}


//int main () {
  //char i[6];
  //char *j = mx_strncpy(i, "nadin", 6);
  //printf("%s\n", j);
  //return 0;
//}
