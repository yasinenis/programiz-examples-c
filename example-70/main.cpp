// example-70
#include <stdio.h>
#include <errno.h>

int main()
{
	FILE* fp;
	errno_t err;
	int c;

	// open the current input file
	err = fopen_s(&fp, __FILE__, "r");

	do
	{
		c = getc(fp);	// read character
		putchar(c);		// display character
	} while (c != EOF); // loop until the end of file is reached

	fclose(fp);
	return 0;
}