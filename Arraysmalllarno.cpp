
#include <stdio.h>

int main()
{
    double largest, smallest,arr[10];
    int i;6

   // double

    printf("Enter 10 nuumbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter number % d:", i + 1);
        scanf_s("%d", &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] > smallest) {
            smallest = arr[i];
        }
    }

    printf("The largest element in the array is: % .2lf\n", largest);
    printf("The smallest element in the array is: % .2lf\n", smallest);

    return 0;

}
