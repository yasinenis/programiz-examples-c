// example-68
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
	char sentence[1000];
	errno_t err;

	// creating file pointer to work with files
	FILE* fptr;

	// opening file in writing mode
	err = fopen_s(&fptr, "program.txt", "w");

	// exiting program
	if (err != 0)
	{
		printf("Error!");
		exit(1);
	}

	printf("Enter a sentence:\n");
	fgets(sentence, sizeof(sentence), stdin);
	fprintf(fptr, "%s", sentence);
	fclose(fptr);
	return 0;
}