/* praise1.c -- learn to use different kind of char array(×Ö·û´®) */
#include <stdio.h>
#define PRAISE "What is a super marvelous name!"
int main(void)
{
	char name[40];
	
	printf("What is your name?\n");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	return 0;
 } 
