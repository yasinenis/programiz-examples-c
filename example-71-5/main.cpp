// example-71-5
#include <stdio.h>
int main()
{
	int i, j, rows;

	printf("Enter the number of rows: ");
	scanf_s("%d", &rows);
	for (i = rows;i >= 1;--i)
	{
		for (j = 1;j <= i;++j)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}