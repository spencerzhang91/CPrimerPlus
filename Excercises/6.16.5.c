/* 6.16.5.c */
#include <stdio.h>
int main(void)
{
	int lower, upper, i;
	int square, cube;
	
	printf("Please enter the lower and upper bound of the table: ");
	scanf("%d-%d", &lower, &upper);
	printf("The lower bound is %d, upper bound is %d.\n", lower, upper);
	printf("\n");
	
	for (i=lower; i < upper+1; i++)
	{
		square = i * i;
		cube = i * i * i;
		printf("%5d %4d %4d\n", i, square, cube);
	}
	return 0;
}
