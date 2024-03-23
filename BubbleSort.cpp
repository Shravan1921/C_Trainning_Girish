
#include <stdio.h>

void bubbleSort(double arr[], int n) {
	int i, j;
	double temp;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {

				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main(){
	double arr[] = { 12.2, 11.3, 34.5, 45.6, 67.8, 34.6, 56.7, 78.6, 56.4, 99.0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Sorted array: \n");
	for (int i = 0; i < n; i++) {
		printf("%.2f", arr[i]);
		printf("\n");
		return 0;
	}
}

