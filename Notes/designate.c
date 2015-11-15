// designate.c -- designated initializer
#include <stdio.h>
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = {31,28, [4]=41, 30,31, [1]=29};
	int i;
	
	for (i = 0; i < MONTHS; i++)
		printf("%2d %d\n", i+1, days[i]);
	return 0;
}


