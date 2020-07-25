#include "../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
	unsigned long  res = 0;
	unsigned long i = 1;
	int j = 0;

	while (hex[j] != '\0'){
    	j++;
	}
	for(; j >= 0; j--) {
    	if((hex[j] > 47 && hex[j] < 58) != 0) {
	    	res += (hex[j] -48) *i;
	    	i *= 16;
		}
    	else if ((hex[j] > 64 && hex[j] < 91 ) || (hex[j] > 96 && hex[j] < 123) != 0) {
	    	if((hex[j] > 96 && hex[j] < 103) != 0){
		    	res += (hex[j] - 87) * i;
		    	i *= 16;
			} 
	    	else if ((hex[j] > 64 && hex[j] < 91)) {
		    	res += (hex[j] - 55) * i;
		    	i *= 16;
		    	}
	    	}
    	}	
    	return res;
	}
