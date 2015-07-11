/* 8.11.5.c */
#include <stdio.h>
#define LOWER 0
#define UPPER 100
char get_first(void);
int main(void)
{
	int lb = LOWER;
	int ub = UPPER;
	int guess = (LOWER + UPPER)/2;
	char judge, highlow;
	
	printf("Please pick a integer from %d to %d in mind.\n", LOWER, UPPER);
	printf("If I guess right, enter y else enter n.\n");
	printf("Okay, is the correct number 0 ?\n");
	judge = get_first();
	while (judge != 'y')
	{
		printf("What about %d, is it correct or need to be higher or lower?\n", guess);
		highlow = get_first();
		if (highlow == 'h')
		{
			lb = guess;
			guess = (lb + ub) / 2;
		}
		else if (highlow == 'l')
		{
			ub = guess;
			guess = (lb + ub) / 2;
		}
		else if ((highlow == ub) && (highlow == lb))
		{
			printf("Come on man!");
			break;	
		}			
		else
			printf("I only recognize h or l in this stage.\n");
	}
	printf("Correct!\n");
	return 0;
}

char get_first(void)
{
	char select;
	select = getchar();
	while (getchar() != '\n')
		continue;
	return select;
}

