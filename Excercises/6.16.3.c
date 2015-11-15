/* 6.16.3.c */
#include <stdio.h>
#define CHAR_NUM 6
int main(void)
{
	char ch;
	int i;
	
	for (i=1; i<7; i++)
	{
		for (ch='F';ch>'F'-i;ch--)
			printf("%c", ch);
		printf("\n");
	}
	return 0;
}
