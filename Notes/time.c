/* time.c -- A C vertion test code of function time */
#include <stdio.h>
#include <time.h>
void printN(int N);
clock_t start, stop;
double duration;

int main(void)
{
	start = clock();
	printN(1000);
	stop = clock();
	duration = ((double)(stop - start)) / CLK_TCK;
	printf("%lf", duration);
	return 0;
}

void printN(int N)
{
	if (N){
		printN(N - 1);
		printf("%d\n", N);
	}
	return;
}
