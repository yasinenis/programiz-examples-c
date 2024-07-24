// example-26-2
#include <stdio.h>
#include <math.h>
int main()
{
	double base, exp, result;
	printf("Enter a base number: ");
	scanf_s("%lf", &base);
	printf("Enter an exponent: ");
	scanf_s("%lf", &exp);

	// calculates the power
	result = pow(base, exp);

	printf("%.1lf^%.1lf = %.2lf", base, exp, result);
	return 0;
}