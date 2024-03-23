
#include <stdio.h>
int main()
{
    int num1, num2, num3, num4, num5;
    int sum, avg;
    printf("enter 5 no:\n");

    scanf_s("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);


    sum = (num1 + num2 + num3 + num4 + num5);

    avg = sum / 5;

    printf("SUM: %d\n", sum);
    printf("Average : %5d\n", avg);

}