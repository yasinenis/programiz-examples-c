// example-17-3
#include <stdio.h>
int main()
{
	int n, i, sum = 0;
	
	do {
		printf("Enter a positive integer: ");
		scanf_s("%d", &n);
	} while (n <= 0);

	for (i = 1;i <= n;++i)
	{
		sum += i;
	}
	printf("Sum = %d", sum);
	return 0;
}