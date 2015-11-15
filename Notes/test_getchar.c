/* a test code to help better understanding getchar() and putchar(). */
#include <stdio.h>
int main(void)
{
	char ch;
	int num;
	int i = 0;
	while ((scanf("%c", &ch)), ch != '\n')
	{
		printf("%c is the one\n", ch);
		i++;
	}
	printf("Looped %d times\n", i);
	return 0;
}

// above is equivalent to below:
/*
int main(void)
{
	char ch;
	int num;
	int i=0;
	while ((ch = getchar()) != '\n')
	{
		printf("%c is the one\n", ch);
		i++;
	}
	printf("Looped %d times\n", i);
	return 0;
}
*/

