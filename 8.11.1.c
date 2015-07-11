/* 8.11.1.c */
#include <stdio.h>
int main(void)
{
	int ch;
	int cnt = 0;
	while ((ch = getchar()) != EOF)
		cnt++;
	printf("%d", cnt);
	return 0;
}
