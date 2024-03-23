

#include <stdio.h>
#include <string.h>


int main()
{
	char input[100], output[100];
	int start, numChars;

	printf("ENTER THE INPUT STRING:")
	fgets(input, sizeof(input), stdin);

	printf("ENTER THE STARTING POSITION:")
	scanf_s("%d", &start);

	printf("ENTER THE NUMBER OF CHARACTERS:");
	scanf("%d", &numChars);

	strncpy(output, input + start, numChars);

	output[numChars] = '\0';

	printf("Output String: \"%s\"\n", output);

	return 0;
}
