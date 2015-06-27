/* 5.11.3.c */
#include <stdio.h>
#define D2W 7

int main(void)
{
	int day, week, wd;
	printf("Please enter days.\n");
	scanf("%d", &day);
	while (day > 0)
	{
		week = day / D2W;
		wd = day % D2W;
		printf("%d weeks, %d days.\n", week, wd);
		printf("Continue:\n");
		scanf("%d", &day);
	}
	printf("DONE!\n");
	return 0;
}
