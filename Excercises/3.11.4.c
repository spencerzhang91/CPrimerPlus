/* 3.11.4.c -- read a float point number and print it in two ways. */
#include <stdio.h>
int main(void)
{
	float num;
	printf("Please enter a float point number: ");	
	scanf("%f",&num);
	printf("The input is %f or %e.\n",num, num);
	return 0;
	
}
