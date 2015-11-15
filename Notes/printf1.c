/* print1.c == illustrate some of printf()'s features. */
#include <stdio.h>
int main(void)
{
	int ten = 10;
	int two = 2;
	printf("Doing it right.\n");
	printf("%d minus %d is %d.\n", ten, two, ten-two);
	printf("Doing it wrong.\n");
	printf("%d minus %d is %d.\n", ten);
	return 0;
}
