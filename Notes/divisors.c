// divisors.c -- use nested if to show a number's factors.
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	unsigned long num;
	unsigned long div;
	bool isPrime;
	
	printf("Please enter an integer for analysis; ");
	printf("Enter q to quit.\n");
	while (scanf("%lu", &num) == 1)
	{
		/* isPrime = true; ......[1]
		Notice that the "isPrime = true" statement after comma is 
		the some as put it at [1], rather than in [2]
		*/
		for (div=2, isPrime = true; div * div <= num; div++)
		{
			//isPrime = true; ......[2]
			if (num % div == 0)
			{
				if ((div * div) != num)
					printf("%lu is divisible by %lu and %lu.\n",
					 num, div, num/div);
				else
					printf("%lu is divisible by %lu.\n", num, div);
				isPrime = false;
			}
		}
		if (isPrime)
			printf("%lu is prime.\n", num);
		printf("Please enter another integer for analysis: ");
		printf("Enter q to quit.\n");
	}
	printf("Bye.\n");
	return 0;
}
