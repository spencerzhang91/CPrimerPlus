/* 8.11.4.c */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	int c_cnt = 0;
	int w_cnt = 0;
	char c;
	bool inword = false;
	printf("Please enter some text until end of file:\n");
	while ((c=getchar()) != EOF)
	{
		if (!ispunct(c) && !isspace(c))
			c_cnt++;
		if (isalpha(c) && !inword)
		{
			inword = true;
			w_cnt++;	
		}
		if (!isalpha(c) && inword)
			inword = false;
	}
	printf("Total word number: %d\n", w_cnt);
	printf("Average charactor per word is %.2f.\n", (float)c_cnt / w_cnt);
	return 0;
}
