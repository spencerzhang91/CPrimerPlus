/* 7.12.9.c -- This version is of extreme low efficiency */
#include <stdio.h>
#include <string.h>
int isPrime(int num);
int main(void)
{
	int num, i;
	int cnt = 0;
	printf("Enter a number.\n");
	scanf("%d", &num);
	printf("All prime number before %d are:\n", num);
	for (i=2; i<num; i++)
	{
		if (isPrime(i))
		{
				if (cnt++ % 20 != 0)
					printf("%d ", i);
				else
					printf("\n");		
		}			
	}
	return 0;
}

int isPrime(int num)
{
	int j;
	for (j=2; j*j <= num; j++)
	{
		if (num % j == 0)
			return 0;
	}
	return 1;
}
