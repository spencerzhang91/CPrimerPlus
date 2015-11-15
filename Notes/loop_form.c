#include <stdio.h>
void printN(int N);
int main(void)
{
	printN(100000);
	return 0;
}

void printN(int N)
{
	int i;
	for (i = 1; i <= N; i++){
		printf("%d\n", i);
	}
	return;
}
