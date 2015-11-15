/* echo_eof.c -- repeat input until get to end of file */
#include <stdio.h>
int main(void)
{
	int ch;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}
