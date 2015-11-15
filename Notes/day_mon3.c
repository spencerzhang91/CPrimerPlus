/* day_mon3.c -- use pointer */
#include <stdio.h>
#define MONTHS 12

int main(voi)
{
	int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int index;
	
	for (index = 0; index < MONTHS; index++)
		printf("Month %2d has %d days.\n", index+1, *(days + index)); // the same as days[index]
	return 0;
}
