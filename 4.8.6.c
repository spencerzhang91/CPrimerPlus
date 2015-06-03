/* 4.8.6.c -- what the hell is that... */
#include <stdio.h>
#include <float.h>
int main(void)
{
	float f = 1.0 / 3.0;
	double d = 1.0 / 3.0;
	printf("%.4f\n", f);
	printf("%.12f\n", f);
	printf("%.16f\n", f);
	printf("float: %d\n", FLT_DIG);
	
	printf("%.4f\n", d);
	printf("%.12f\n", d);
	printf("%.16f\n", d);
	printf("double: %d\n", DBL_DIG);
	
	return 0;
}
