/* 7.12.1.c */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int count_s;
	int count_t;
	int count_o;
	char ch;
	
	printf("Enter some text to be analyzed or enter # to quit.\n");
	while((ch = getchar()) != '#')
	{
		if (!isalpha(ch))
		{
			if (ch == ' ')
				count_s++;
			else if (ch == '\t')
				count_t++;
			else
				count_o++;
		}		
	}
	printf("space: %d | tab: %d | other: %d\n", count_s, count_t, count_o);
	return 0;
}
