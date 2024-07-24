// examples-15-1
#include <stdio.h>
int main()
{
	double num;
	printf("Enter a number: ");
	scanf_s("%lf", &num);
	if (num <= 0.00)
	{
		if (num == 0.00)
			printf("You entered 0.");
		else
			printf("You entered a negative number.");
	}
	else
		printf("You entered a positive number.");
	return(0);
}