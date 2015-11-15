// bounds.c -- out of range
#include <stdio.h>
#define SIZE 4
int main(void)
{
	int value1 = 44;
	int array[SIZE];
	int value2 = 88;
	int i;
	
	printf("value1 = %d, value2 = %d\n", value1, value2);
	for (i = -1; i <= SIZE; i++)
		array[i] = 2 * i + 1;
	for (i = -1; i < 7; i++)
		printf("%2d %d\n", i, array[i]);
	printf("value1 = %d, value2 = %d\n", value1, value2);
	return 0;
}
