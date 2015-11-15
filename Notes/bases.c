/* bases.c -- 以十进制、八进制和十六进制的形式输出100 */
#include <stdio.h>
int main(void)
{
	int x = 100;
	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
	printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
	return 0;
}
