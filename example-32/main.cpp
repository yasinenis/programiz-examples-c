// example-32
#include <stdio.h>
int main()
{
	int num, i;
	printf("Enter a positive integer: ");
	scanf_s("%d", &num);
	printf("Factors of %d are: ", num);
	for (i = 1;i <= num;++i)
	{
		if (num % i == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}