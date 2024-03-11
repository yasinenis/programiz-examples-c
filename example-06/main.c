// ex6 : Compute Quotient and Reminder
#include <stdio.h>
int main() {
	int dividend, divisor, quotient, remainder;
	printf("Enter dividend: ");
	scanf_s("%d", &dividend);
	printf("Enter divisor: ");
	scanf_s("%d", &divisor);

	// Computes quotient
	quotient = dividend / divisor;

	// Computes remainder
	remainder = dividend % divisor;

	printf("Quotient = %d\n", quotient);
	printf("Remainder = %d", remainder);
	return 0;
}