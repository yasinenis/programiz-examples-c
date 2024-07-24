// example-15-2
#include <stdio.h>
int main()
{
	double num;
	printf("Entered a number: ");
	scanf_s("%lf", &num);

	if (num < 0.0)
		printf("You entered a negative number.");
	else if (num > 0.0)
		printf("You entered a positive number.");
	else
		printf("You entered 0.");

	return(0);
}