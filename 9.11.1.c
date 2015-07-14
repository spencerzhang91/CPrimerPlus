/* 9.11.1.c */
#include <stdio.h>
double min(double x, double y);
int main(void)
{
	double a = 1.0;
	double b = 3.5;
	printf("The smaller number of %.2lf and %.2lf is %.2lf\n", a, b, min(a, b));
	return 0;
}

double min(double x, double y)
{
	return x<y ? x:y;
}
