/* 5.11.4.c */
#include <stdio.h>
#define C2I 2.54
#define I2F 12

int main(void)
{
	float height, inch, finch;
	int feet;
	printf("Enter a height in centimeters (<= 0 to quit): ");
	scanf("%f", &height);
	while (height > 0)
	{
		inch = height / C2I;
		feet = (int)inch / I2F;		
		finch = inch - feet * I2F;
		printf("%.2f cm = %d feet, %.1f inches.\n", height, feet, finch);
		printf("Enter a height in centimeters (<= 0 to quit): ");
		scanf("%f", &height);	
	}
	printf("bye\n");
	return 0;
}
