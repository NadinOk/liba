#include "../inc/libmx.h"

int mx_count_substr(const char *str, const char *sub) {
	 int count = 0;
	 int i = 0;
	int j = 0;
	
	
	if (str == NULL || sub == NULL) {
        return -1;
	}
	if (mx_strlen(sub) == 0){
			return 0;
		}
		 for (; i < mx_strlen(str); i++){
			if (str[i] == sub[0])
        {
            count++;
            for (; j < mx_strlen(sub); j++)
            {
                if (str[i + j] != sub[j])
                {
                    count--;
                    break;
                }
            }
        }
    }
    return count;
}
