/* two_func.c -- use two functions in one file */
#include <stdio.h>
void butler(void);    /* ISO/ANSI C function prototype */
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes. Bring me some tea and writeable CD-ROMS.\n");
	return 0;
}

void butler(void)    /* start of defined function */
{
	printf("You rang, sir?\n");
}


	
