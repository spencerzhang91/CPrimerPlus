/* 5.11.7.c */
#include <stdio.h>
void cube(float num);
int main(void)
{
	float n;
	printf("Please enter your floating point number (0 to quit): \n");
	scanf("%f", &n);
	while (n != 0)
	{
		cube(n);
		printf("Please enter your floating point number (0 to quit): \n");
		scanf("%f", &n);
	}
	printf("DONE\n");
	return 0;
}

void cube(float num)
{
	printf("The cube of %.1f is %.1f \n", num, num * num * num);
}
