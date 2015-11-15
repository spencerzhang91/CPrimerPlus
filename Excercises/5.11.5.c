/* 5.11.5.c */
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
		sum = sum + count;
	}
	printf("sum = %d\n", sum);
	return 0;
}
