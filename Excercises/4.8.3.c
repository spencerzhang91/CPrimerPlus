/* 4.8.3.c -- play with foating points */
#include <stdio.h>
int main(void)
{
	float number;
	printf("Please input a number:\n");
	scanf("%f", &number);
	printf("The input is %.1f or %.1e.\n", number, number);
	printf("The input is %.3f or %.3E.\n", number, number);
	
	return 0;
}
