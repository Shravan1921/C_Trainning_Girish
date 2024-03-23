

#include <stdio.h>

	void insertionSort(double arr[], int n) {
		int i, j;
		double key;
		for (i = 1; i < n; i++) {
			key = arr[i];
			j = i - 1;

			while (j >= 0 && arr[j] < key) {
				arr[j + 1] = arr[j];
				j = j - 1;
			}
			arr[j + 1] = key;
		}
	}

	int main() {
		double arr[10];
		int n = sizeof(arr) / sizeof(arr)[10];

		printf("Enter 10 double values:\n");
		for (int i = 0; i < n; i++) {
			printf("Enter value %d:", i + 1);
			scanf_s("%lf", &arr);
		}
		insertionSort(arr, n);

		printf("Sorted array in descending order:\n");
		for (int i = 0; i < n; i++) {
			printf("%.2f", arr[i]);
			printf("\n");
		}
		return 0;
}
