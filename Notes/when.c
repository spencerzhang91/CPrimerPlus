// when.c -- when to quit a loop
#include <stdio.h>
int main(void)
{
	int n = 5;
	while(n < 7)
	{
		printf("n = %d\n", n);
		n++;
		printf("now n = %d\n", n);
	}
	printf("The loop has finished.\n");
	return 0;
}
