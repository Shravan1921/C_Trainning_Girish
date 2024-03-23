

#include <stdio.h>

int compareString(char* str1, char* str2)
{
	while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	if (*str1 == *str2)
		return 0;
	else if (*str1 > *str2)
		return 1;
	else
		return -1;
}

int main()
{
	char str1[] = "Good";
	char str2[] = "Morning";
	int result = compareString(str1, str2);

	if (result == 0)
		printf("The Strings are equal.\n");
	else if (result == 1)
		printf(" * str1 is greater than str2.\n");
	else
		printf("str2 is greater than str1.\n");
	return 0;
}
