/* cypher1.c -- change input except space */
#include<stdio.h>
#define SPACE ' '
int main(void)
{
	char ch;
	
	while ((ch = getchar()) != '\n')
	{
		if (ch == SPACE)
			putchar(ch);
		else
			putchar(ch + 1);
	}
	putchar(ch);
	return 0;
}
