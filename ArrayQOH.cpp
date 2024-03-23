
#include <stdio.h>

#define STORES 5
#define CITIES 3
#define ITEMS 3

int main()
{
	int qoh[STORES][CITIES][ITEMS] = { { {1,2,3},{4,5,6},{6,7,8} },
	{ {9,10,11}, {11,12,13},{14,15,16} },
	{ {17,18,19},{20,21,22},{23,24,25} },
	{ {26,27,28},{29,30,31},{32,33,34} },
	{ {35,36,37}, {38,39,40},{41,42,43} }

	};
	printf("Total QOH for each item in each city:\n");
	for (int city = 0; city < CITIES; city++) {
		printf("City %d:\n", city + 1);
		for (int item = 0; item < ITEMS; item++) {
			int totalQOH = 0;
			for (int store = 0; store < STORES; store++) {
				totalQOH += qoh[store][city][item];
			}
			printf(" ITEM %d: %d\n", item + 1, totalQOH);
		}
		printf("\n");
	}
	printf("Total QOH for each item across all stores and cities:\n");

	for (int item = 0; item < ITEMS; item++) {
		int totalQOH = 0;
		for (int store = 0; store < STORES; store++){
			for (int city = 0; city < CITIES; city++)
				{
					totalQOH += qoh[store][city][item];
				}
			}
		printf("Item %d:\n", item + 1, totalQOH);
	}
	return 0;
}

