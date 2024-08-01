// example-69
#include <stdio.h>
#include <stdlib.h> // for exit() function
#include <errno.h>

int main()
{
	errno_t err;
	char c[1000];
	FILE* fptr;
	if ((err = fopen_s(&fptr, "program.txt", "r")) != 0)
	{
		printf("Error! File cannot be opened.");
		// Program exits if the file pointer returns NULL.
		exit(1);
	}

	// reads text until newline is encountered
	fscanf_s(fptr, "%[^\n]", c, sizeof(c));
	printf("Data from the file:\n%s", c);
	fclose(fptr);

	return 0;
}