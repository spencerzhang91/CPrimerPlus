/* badcount.c -- incorrect attribute quantity */
#include <stdio.h>
int main(void)
{
	int f = 4;
	int g = 5;
	float h = 5.0f;
	
	printf("%d\n", f, g); /* too many attributes */
	printf("%d %d\n", f); /* not enough attributes */
	printf("%d %f\n", h, g); /* incorrect type */
	
	return 0;
}
