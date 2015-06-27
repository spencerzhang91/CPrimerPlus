/* 5.11.8.c */
#include <stdio.h>
#include <ctype.h>
const float A = 1.8;
const float B = 32.0;
const float C = 273.16;

void Temperatures(double f);
int main(void)
{
	double f, c, k;
	int status;
	printf("Please enter temperature in fahrenheit: \n");
	status = scanf("%lf", &f);
	while (status == 1)
	{
		c = (f - 32.0) / 1.8;
		k = c + C;
		printf("%.2f C  %.2f F  %.2f K\n", c, f, k);
		printf("Please enter temperature in fahrenheit: \n");
		status = scanf("%lf", &f);
	}
	printf("OVER");
	return 0;
}

