
extern int mx_strlen(const char *s);
extern int mx_strncmp(const char *s1, const char *s2, int n);
extern char *mx_strstr(const char *s1, const char *s2);
extern char *mx_strchr(const char *s, int c);

int mx_count_substr(const char *str, const char *sub) {
	if (mx_strlen(sub) == 0){
		return 0;
	}

	int count = 0;
	const char *p = mx_strstr(str, sub);

	while(p != 0){
		p = mx_strstr(p+1, sub);
		count++;
	}

	return count;
}
