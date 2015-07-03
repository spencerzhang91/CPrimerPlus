/* 6.16.9.c */
#include <stdio.h>
int main(void)
{
	int lower, upper;
	int sum = 0;
	int i;
	printf("Please enter the lower and upper bound: \n");
	
	while ((scanf("%d-%d", &lower, &upper) == 2) && (lower < upper))
	{
		for (i=lower; i<=upper; i++)
			sum += i * i;
		printf("The sums of the squares for %d to %d is %d\n", 
				lower*lower, upper*upper, sum);
				
		printf("Enter next pair of bounds: \n");
	}
	printf("Done");	
	return 0;
}
