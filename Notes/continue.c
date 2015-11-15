/* countinue.c -- different mechanism in for loop and while loop */
#include <stdio.h>
int main(void)
{
	int count_for = 0;
	int count_while = 0;
	char ch;
	
	// in for loop the count_for will always become 10
	// The reason is that if ch == '\n', then reaches continue, which will jump back to the top of
	// the for loop. The first action it takes after jumping back to top is calculate count_for's new
	// value (incremented by 1), then after that determine if the condition is true or false.
	for (count_for; count_for < 10; count_for++)
	{
		ch = getchar();
		if (ch == '\n')
			continue;
		putchar(ch);
	}
	
	// On the other hand, the while loop will 
	/*
	while (count_while < 10)
	{
		ch = getchar();
		if (ch == '\n')
			continue;
		putchar(count_while);
		count_while++;
	}*/
	printf("\n");
	printf("count_for: %d", count_for);
	//printf("count_while: %d", count_while);
	return 0;
}
