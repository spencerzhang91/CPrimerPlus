#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int ch;
	int ucnt = 0;
	int lcnt = 0;
	
	while ((ch = getchar()) != EOF)
	{
		if (isupper(ch))
			ucnt++;
		else if (islower(ch))
			lcnt++;
	}
	printf("Upper case: %d\nLower case: %d\n", ucnt, lcnt);
	return 0;
}
