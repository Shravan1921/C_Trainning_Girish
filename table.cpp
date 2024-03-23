#include<stdio.h>

int main()
{
	int tableFor, tableTill;

	printf("Input Multiplication Table for:");
	scanf_s("%d", &tableFor);

	printf("Input Multiplication Table Till:");
	scanf_s("%d", &tableTill);

	printf("Display Multiplication Table of %d\n", tableFor);
	
	int i = 1;
	while (i <= tableTill) {
		printf("%d * %d = %d\n", tableFor,i,tableFor * i);
		i++;
	}
	return 0;

	

}
