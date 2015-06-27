/* 5.11.1.c */
#define S2M 60
#include <stdio.h>
int main(void)
{
	int m, h, hm;
	printf("Please enter time in minutes.\n");
	scanf("%d", &m);
	while (m > 0)
	{
		h = m / S2M;
		hm = m % S2M;
		printf("%d minutes is %d hours, %d minutes.\n", m, h, hm);
		printf("Continue: \n");
		scanf("%d", &m);
	}
	printf("Done.\n");
	return 0;
}
