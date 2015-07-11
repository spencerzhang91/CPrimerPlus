/* 8.11.2.c */
#include <stdio.h>
int main(void)
{
	int ch;
	while ((ch = getchar()) != EOF)
		printf("%c -> %d", ch, ch);
	return 0;
}
