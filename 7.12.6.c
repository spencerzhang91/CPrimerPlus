/* 7.12.6.c */
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int cnt;
	char c;
	bool start;
	printf("Enter text to be parsed, q to quit.\n");
	while ((c = getchar()) != '#')
	{
		if ((c == 'e') && (start == false))
			start = true;
		if ((c == 'i') && (start == true))
		{
			start = false;
			cnt++;
		}
	}
	printf("There are %d pairs of \'ei\'s in the text.\n", cnt);
	return 0;
}
