/* 8.11.4.c */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	int cnt = 0;
	char c;
	bool inword = false;
	printf("Please enter some text until end of file:\n");
	while ((c=getchar()) != EOF)
	{
		if (isalpha(c) && !inword)
		{
			inword = true;
			cnt++;	
		}
		if (!isalpha(c) && inword)
			inword = false;
	}
	printf("Total word number: %d", cnt);
	return 0;
}
