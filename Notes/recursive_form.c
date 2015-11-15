#include <stdio.h>
void printN(int N);
int main(void)
{
	printN(100000);
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
