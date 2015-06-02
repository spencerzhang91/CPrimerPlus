/* 4.8.4.c -- how tall? */
#include <stdio.h>
int main(void)
{
	char name[20];
	float height;
	
	printf("Please input your name and height.\n");
	scanf("%s %f", name, &height);
	printf("%s, you are %.3f meter tall.\n", name, height / 100);
	
	return 0;
}
