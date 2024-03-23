
#include <stdio.h>

int main()
{
	int num, i;

	printf("Enter the Number : ")
	scanf_s("%d", &num);
	 
	if (num < 2) {
		printf("%d is not prime number.\n", num);
	}
	for (int i = 2; i < num/2; i++) {
		if (num % i == 0) {

			break;
		}
	}

	if (num == i) {
		printf("%d is a prime number.\n", num);
	}
	else {
		printf("%d is not a prime number.\n", num);
	}
}



