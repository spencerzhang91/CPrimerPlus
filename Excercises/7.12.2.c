/* 7.12.2.c */
#include <stdio.h>
#define COL 9 // actual colum number is COL-1
int main(void)
{
	int count = 0;
	char ch;
	while ((scanf("%c", &ch) == 1) && ch != '#')
	{
		if (count++ % COL != 0)
			printf("%c -> %d  ", ch, ch);
		else
			printf("\n");
	}
	printf("\nDone.\n");
	return 0;
}
