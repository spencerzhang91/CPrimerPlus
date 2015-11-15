/* pound.c -- define a function with argument */
#include <stdio.h>
void pound(int n);
int main(void)
{
	int times = 5;
	char ch = '!'; // ASCII code number 33
	float f = 6.0;
	pound(times);
	pound(ch);
	pound((int) f);
	return 0;
}

void pound(int n)
{
	while (n-- > 0)
		printf("#");
	printf("\n");	
}
