#include<stdio.h>

int main() 
{
	float celcius, fahrenheit;

	printf("Enter Temparature in Fahrenheit\n");
	scanf_s("%f", &fahrenheit);

	celcius = (fahrenheit - 32)*5/9;

	printf("Temparature in Celcius is : %.2f\n", celcius);
	printf("Temparature in Fahrenheit is : %.2f\n", fahrenheit);

}
