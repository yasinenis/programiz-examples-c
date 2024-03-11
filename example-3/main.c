// ex3 : Add Two Integers
#include <stdio.h>
int main() {

	int number1, number2, sum;

	printf("Enter two integers: ");
	scanf_s("%d %d", &number1, &number2);

	// calculate the sum
	sum = number1 + number2;

	printf("%d + %d = %d", number1, number2, sum);
	return 0;
}