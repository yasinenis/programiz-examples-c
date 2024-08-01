// example-67
#include <stdio.h>
#include <stdlib.h>

struct course
{
	int marks;
	char subject[30];
};

int main()
{
	struct course* ptr;
	int noOfRecords;
	printf("Enter the number of records: ");
	if (scanf_s("%d", &noOfRecords) != 1 || noOfRecords <= 0)
	{
		printf("Invalid number of records.\n");
		return 1;
	}

	// Memory allocation for noOfRecords structures
	ptr = (struct course*)malloc(noOfRecords * sizeof(struct course));
	if (ptr == NULL)
	{
		printf("Memory allocation failed.\n");
		return 1;
	}

	for (int i = 0; i < noOfRecords;++i)
	{
		printf("Enter subject and marks:\n");
		scanf_s("%s", &(ptr + i)->subject, sizeof(ptr+i));
		scanf_s("%d", &(ptr + i)->marks);
	}

	printf("Displaying Information");
	for (int i = 0;i < noOfRecords;++i)
	{
		printf("%s\t%d\n", (ptr + i)->subject, (ptr + i)->marks);
	}
	
	free(ptr);

	return 0;
}