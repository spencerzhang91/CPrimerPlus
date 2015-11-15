/* 3.11.6.c -- water molecule quantity */
#include <stdio.h>
int main(void)
{
	double quart, gram, m;
	
	printf("How many quart water are there?\n");
	scanf("%lf", &quart);
	printf("quart: %f\n",quart);
	
	gram = quart * 950.0;
	printf("gram: %f\n", gram);
	
	m = gram / (3.0e-23);
	printf("There are %e water molecules.\n", m);
	
	return 0;
}
