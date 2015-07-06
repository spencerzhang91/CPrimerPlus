/* 7.12.4.c */
#include <stdio.h>
int main(void)
{
	int count;
	char ch;
	printf("Enter some text and # to quit.\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			count++;
			putchar('!');
		}
		else if (ch == '!')
		{
			count++;
			printf("!!");
		}
		else
			putchar(ch);
	}
	printf("\nTotal alter times: %d", count);
	return 0;
}
