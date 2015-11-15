/* addemup.c -- t type of staments */
#include <stdio.h>
int main(void)
{
	int count, sum;
	count = 0;
	sum = 0;
	while (++count < 20)	
		sum = sum + count;	
	printf("sum = %d count = %d", sum, count);
	return 0;
}
