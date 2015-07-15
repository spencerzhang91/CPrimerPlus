/* 9.11.10.c */
#include <stdio.h>
long fibonacci(int n);
int main(void)
{
	int n = 30;
	long res;
	res = fibonacci(n);
	printf("The No.%d fibonacci number is %ld.\n", n, res);
	return 0;
}

long fibonacci(int n)
{
	long res;
	long num1, num2, curr;
	int i;
	
	if (n <= 2)
		curr = 1;
	num1 = num2 = 1;
	for (i = 3; i <= n; i++)
	{
		curr = num1 + num2;
		num1 = num2;
		num2 = curr;
	}
	return curr;
}
