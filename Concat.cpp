

#include <stdio.h>
#include <string.h>

void concatstrs(char*, char*);
char str3[100];

int len = 0;

char str1[100] = "This is a String";

char str2[100] = "of characters that is null terminated";



	int main()

		concatstrs(str1, str2);

	printf("Concatenated String: %s\n", str3);
	
	return 0;

	void concatstrs(char* str1, char* str2){
		int i, j, k;

		for (i = 0; str1[i] != '\0'; i++) {
			str3[i] = str1[i];
		}


		for (j = 0; str2[i] != '\0'; j++) {
			str3[i] = str2[i];
			i++;
		}
		str3[i] = '\0';

}
