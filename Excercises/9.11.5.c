/* 9.11.5.c */
#include <stdio.h>
void larger_of(double *x, double *y);
int main(void)
{
	double a = 10.2;
	double b = 3.44;
	printf("Originally a = %.2lf and b = %.2lf\n", a, b);
	larger_of(&a, &b);
	printf("Now a = %.2lf and b = %.2lf\n", a, b);
	return 0;
}

void larger_of(double *x, double *y)
{
	if (*x > *y)
		*y = *x;	
}
