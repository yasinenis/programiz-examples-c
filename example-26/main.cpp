// example-26
#include <stdio.h>
int main()
{
	int base, exp;
	long double result = 1.0;
	printf("Enter a base number: ");
	scanf_s("%d", &base);
	printf("Enter an exponent: ");
	scanf_s("%d", &exp);

	while (exp != 0)
	{
		result *= base;
		--exp;
	}
	printf("Answer = %.0Lf", result);
	return 0;
}