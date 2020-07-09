#include <math.h>

double mx_pow(double n, unsigned int pow) {
    double tmp = 1;
    unsigned int i = 0;

    for (; i < pow; i++) {
    tmp *= n;
    }
    return tmp;
}
int main() {
	printf("%f\n",mx_pow(3, 3));
	return 0;
}
