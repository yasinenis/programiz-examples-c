// example-58
#include <stdio.h>
int main()
{
	char s[] = "Programming is fun :D";
	int i;

	for (i = 0;s[i] != '\0'; ++i);
	
	printf("Length of the string: %d", i);
	return 0;
}