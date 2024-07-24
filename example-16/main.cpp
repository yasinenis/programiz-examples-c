// example-16
#include <stdio.h>
#include <ctype.h>
int main()
{
	unsigned char c;
	printf("Enter a character: ");
	scanf_s("%c", &c, sizeof(c));

	c = toupper(c); // added

	if ((c >= 'a' && c <= 'Z') || (c >= 'A' && c <= 'Z'))
		printf("%c is an alphabet.", c);
	else
		printf("%c is not an alphabet.", c);

	return 0;
}