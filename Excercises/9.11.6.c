/* 9.11.6.c */
#include <stdio.h>
#include <ctype.h>

int alphaplace(char c);
int main(void)
{
	char c;
	int res;
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			printf("\n");
			continue;
		}
		res = alphaplace(c);
		printf("%d ", res);
	}
	printf("Bye!");
	return 0;
}

int alphaplace(char c)
{
	int num;
	
	if (isalpha(c))
	{
		num = tolower(c) - 'a' + 1;
		return num;
	}
	else
		return -1;		
}
