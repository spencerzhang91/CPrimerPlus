/* 5.11.6.c */
#include <stdio.h>
int main(void)
{
	int count , sum, flag;
	printf("Please enter the flag number: ");
	scanf("%d", &flag);
	count = 0;
	sum = 0;
	while (count++ < flag)
	{
		sum = sum + count * count;
	}
	printf("sum = %d\n", sum);
	return 0;
}
