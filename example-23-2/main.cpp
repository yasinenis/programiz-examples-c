// example-23-2
#include <stdio.h>
int main()
{
	char c;
	printf("Enter u to display uppercase alphabets. \n");
	printf("Enter l to display lowercase alphabets. \n");
	scanf_s("%c", &c);

	if (c == 'U' || c == 'u')
	{
		for (c = 'A';c <= 'Z';++c)
			printf("%c ", c);
	}
	else if (c == 'L' || c == 'l')
	{
		for (c = 'a';c <= 'z';++c)
			printf("%c ", c);
	}
	else
	{
		printf("Error! You entered an invalid character.");
	}

	return 0;
}