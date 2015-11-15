/* binary.c */
#include <stdio.h>
void to_binary(unsigned long n);

int main(void)
{
	unsigned long number;
	printf("Enter an integer (q to quit): \n");
	while (scanf("%ld", &number) == 1)
	{
		printf("Binary equivalent: ");
		to_binary(number);
		putchar('\n');
		printf("Enter an integer (q to quit): \n");
	}
	printf("Bye\n");
	return 0;
}

void to_binary(unsigned long n)
{
	int r;
	r = n % 2;
	if (n >= 2)
		to_binary(n / 2);
	putchar(r ? '1': '0');
	return;
}
