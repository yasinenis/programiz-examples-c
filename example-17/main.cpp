// example-17
#include <stdio.h>
int main()
{
	int n, i, sum = 0;

	printf("Entered a positive integer: ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; ++i)
	{
		sum += i;
	}

	printf("Sum = %d", sum);
	return 0;
}