/* 14.18.11.c */
#include <stdio.h>
#include <math.h>
#define LEN 100
void transform(const double source[],
                       double target[],
                       int n,
                       double (*fp)(double arg));               
void showres(const double target[], int n);

int main(void)
{
	double arrone[LEN];
	double arrtwo[LEN];
	double (*fp1)(double arg);
	double (*fp2)(double arg);
	double (*fp3)(double arg);
	double (*fp4)(double arg);
	for (int i = 0; i < 100; i++)
	   arrone[i] = 2 * i - i % 2;
	fp1 = sin;
    fp2 = cos;
    fp3 = tan;
    fp4 = sqrt;  
	transform(arrone, arrtwo, LEN, fp1);
	puts("fp1"); showres(arrtwo, LEN);
	transform(arrone, arrtwo, LEN, fp2);
	puts("fp2"); showres(arrtwo, LEN);
	transform(arrone, arrtwo, LEN, fp3);
	puts("fp3"); showres(arrtwo, LEN);
	transform(arrone, arrtwo, LEN, fp4);
	puts("fp4"); showres(arrtwo, LEN);
	
	return 0;
}

void transform(const double source[],
                       double target[],
                       int n,
                       double (*fp)(double arg))
{
	for (int i = 0; i < n; i++)
	    target[i] = (*fp)(source[i]);
}

void showres(const double target[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%.2f ", target[i]);
    printf("\n");
}
