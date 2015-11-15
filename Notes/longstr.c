/* longstr.c -- print long string */
#include <stdio.h>
int main(void)
{
	printf("Here's one way to print a");
	printf("long string.\n");
	
	printf("Here's another way to print a\
 long string.\n");
	
	printf("The newest way to print a "
	"long string.\n"); // ANSI C
	
	return 0;
}
