
#include <stdio.h>

int main()
{
	FILE* file;
	char file_name[100];
	char ch;

	printf("Enter the name of the file to read:");
	scanf("%s", file_name);

	file = fopen(file_name, "r");

	if (file == NULL) {
		printf("Error opening the fil")
	}









}
