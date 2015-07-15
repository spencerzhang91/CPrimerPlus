/* 9.11.7.c */
#include <stdio.h>
double power(double n, int p);
int main(void)
{
	double x, xpow;
	int exp;
	printf("Enter x and exp.\n");
	while (scanf("%lf %d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g to the power %d is %.3g.\n", x, exp, xpow);
		printf("Enter x and exp.\n");
	}
	printf("Bye.\n");
	return 0;
}

double power(double n, int p)
{
	int i;
	double res = 1.0;
	if (p > 0)
	{
		for (i = 0; i < p; i++)
			res *= n;
	}
	else if ((p < 0) && (n != 0))
	{
		for (i = 0; i > p; i--)
			res /= n;
	}
	else if (p == 0)
		res = 1;
	else
		res = 0;
	return res;	
}
