
#include <stdio.h>
int main()
{
    int num1, num2, num3, num4, num5;
    int sum, avg;
    printf("enter 5 no:\n");

    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);


    sum = num1 + num2 + num3 + num4 + num5;

avg = sum / 5;

printf("SUM: %d\n", sum);
printf("Average : %5d\n", avg);
   
}



#include<stdio.h>

int main() 
{
	float c, fh;

	printf("Enter Temparature in Fahrenheit\n");
	scanf("%d", &fh);

	c = (fh - 32) / 1.8;

	printf("Temparature in Celcius is %f\n", c);
}