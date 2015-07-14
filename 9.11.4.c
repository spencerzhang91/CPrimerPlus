/* 9.11.4.c */
#include <stdio.h>
double harmonicmean(double x, double y);
int main(void)
{
	double a = 1.0;
	double b = 1.0;
	double res;
	res = harmonicmean(a, b);
	printf("Harmonic mean of %.2lf and %.2lf is %.2lf.\n", a, b, res);
	return 0;
}

double harmonicmean(double x, double y)
{
	return 1.0/((1.0/x + 1.0/y)/2);
}
