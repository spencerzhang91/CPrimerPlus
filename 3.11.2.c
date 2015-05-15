/* 3.11.2.c -- return a char by input a ASCII code */
#include <stdio.h>
int main(void)
{
	int code;
	
	printf("Please enter a ASCII code: ");
	scanf("%d", &code);
	printf("The char is %c\n", code);
	
	return 0;
}
