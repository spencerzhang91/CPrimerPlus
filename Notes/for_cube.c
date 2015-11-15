/* for_cube.c -- use a for loop to generate a cubu table */
#include <stdio.h>
int main(void)
{
	int num;
	printf("   n   n cubed\n");
	for (num = 1; num <= 6; num++)
	{
		printf("%5d %5d\n", num, num*num*num);
	}
	return 0;
}
