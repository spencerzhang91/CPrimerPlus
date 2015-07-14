/* 9.11.2.c */
#include <stdio.h>
void chline(char ch, int i, int j);
int main(void)
{
	char c = '*';
	int i = 4;
	int j = 12;
	chline(c, i, j);
	return 0;
}

void chline(char ch, int i, int j)
{
	int cnt;
	for (cnt = 1; cnt < i; cnt++)
		putchar(' ');
	for (cnt; cnt < j; cnt++)
		putchar(ch);
}
