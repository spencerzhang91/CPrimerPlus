/* 6.16.13.c */
#include <stdio.h>
#define LEN 8
int main(void)
{
	double array_1[LEN], array_2[LEN];
	double sum = 0;
	int i;
	printf("Enter numbers: \n");
	
	for (i=0; i<LEN; i++)
		scanf("%lf", &array_1[i]);
		
	for (i=0; i<LEN; i++)
	{
		sum += array_1[i];
		array_2[i] = sum;
	}
	for (i=0; i<LEN; i++)
		printf("%6.2f ", array_1[i]);
		
	printf("\n");
	
	for (i=0; i<LEN; i++)
		printf("%6.2f ", array_2[i]);
	
	return 0;
}
