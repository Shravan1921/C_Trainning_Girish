

#include <stdio.h>


	float sum_of(float a, float b, float c) {
		return a + b + c;
	}
int main(){
		float num1, num2, num3;

		printf("Enter first number:");
		scanf_s("%f", &num1);

		printf("Enter second number:");
		scanf_s("%f", &num2);

		printf("Enter third number:");
		scanf_s("%f", &num3);

		float total_sum = sum_of(num1, num2, num3);

		printf("Sum of three number is : %.2f\n", total_sum);

		return 0;
}