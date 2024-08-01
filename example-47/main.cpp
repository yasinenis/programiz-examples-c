// example-47
// SD of a population
#include <stdio.h>
#include <math.h>

float calculateSD(float data[]);

int main()
{
	int i;
	float data[10];
	printf("Enter 10 elements: ");
	for (i = 0; i < 10; ++i)
		scanf_s("%f", &data[i]);
	printf("\nStandard Deviation = %.6f", calculateSD(data));
	return 0;
}

float calculateSD(float data[])
{
	float sum = 0.0, mean, SD = 0.0;
	int i;
	for (i = 0;i < 10;++i)
	{
		sum += data[i];
	}
	mean = sum / 10;
	for (i = 0;i < 10;++i)
	{
		SD += pow(data[i] - mean, 2);
	}
	return sqrt(SD / 10);
}

/* 

standard deviation

1- aritmetik ortlama bul
2- her veriden aritmetik ortalamayý çýkar
3- sonuçlarýn karelerini al topla
4- veri sayýsýnýn 1 eksiðine böl kare kökünü al

* */