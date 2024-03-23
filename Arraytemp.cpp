#include <stdio.h>
int main() {
	double fahrenheit[5] = {100.5, 45.6, 74.8, 99.1, 78.4};
	double celcius[5];

	double *fahr_ptr = fahrenheit;
	double *celcius_ptr = celcius;

	for (int i = 0; i < 5; i++) {
		*(celcius_ptr + i) = 5.0 / 8.0 * (*(fahr_ptr + i) - 32.0);
	}

	printf("Temparature in Fahrenheit\t Temparature in Celcius\n");
	for (int i = 0; i < 5; i++) {
		printf("%.2lf\t\t\t%.2lf\n", *(fahr_ptr + i), *(celcius_ptr + i));
	}
	return 0;
}