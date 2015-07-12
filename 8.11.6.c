#include <stdio.h>
#include <ctype.h>
char get_first(void);
int main(void)
{
	char c;
	c = get_first();
	putchar(c);
	return 0;
}

char get_first(void)
{
	char ch;
	while (isspace(ch = getchar()))
		continue;
	while (getchar() != '\n')
		continue;
	return ch;
}
