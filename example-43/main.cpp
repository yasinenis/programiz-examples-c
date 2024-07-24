// example-43
#include <stdio.h>

void reverseSentence();

int main()
{
	printf("Enter a sentence: ");
	reverseSentence();
	return 0;
}

void reverseSentence()
{
	char c;
	scanf_s("%c", &c, sizeof(c));
	if (c != '\n')
	{
		reverseSentence();
		printf("%c", c);
	}
}