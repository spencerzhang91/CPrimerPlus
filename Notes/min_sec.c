// min_sec.c -- convert seconds to minutes and seconds. 
#include <stdio.h>
int main(void)
{
	int sec, min, left;
	printf("Convert seconds to minutes and seconds.\n");
	printf("Please enter the number of seconds.\n");
	scanf("%d", &sec);
	while (sec > 0)
	{
		min = sec / 60;
		left = sec % 60;
		printf("%d seconds is %d minutes and %d seconds.\n", sec, min, left);
		printf("Enter next value (<= 0 to quit):\n");
		scanf("%d", &sec);
	}
	printf("Done!\n");
	return 0;
}
