/* menuette.c -- memue technic */
#include <stdio.h>
char get_choice(void);
char get_first(void);
void count(void);
int get_int(void);
int main(void)
{
	int choice;
	while ((choice = get_choice()) != 'q')
	{
		switch (choice)
		{
			case 'a': printf("Buy low, sell high.\n");
					  break;
			case 'b': putchar('\a');
					  break;
			case 'c': count();
					  break;
			default: printf("Program error!\n");
					  break;
		}
	}
	return 0;
}

char get_choice(void)
{
	int ch;
	printf("Enter your choice:\n");
	printf("a. advice  b. bell\n");
	printf("c. count     q. quit\n");
	ch = get_first();
	while (ch != 'q')
	{
		if ((ch < 'a') || (ch > 'c'))
		{
			printf("Please respond with a, b, c, or q.\n");
			ch = get_first();
		}
		else
			break;
	}
	return ch;	
}

void count(void)
{
	int n, i;
	printf("Count how far? Enter an integer: ");
	n = get_int();
	for (i=1; i<=n; i++)
		printf("%d\n", i);
	while (getchar() != '\n')
		continue;	
}

int get_int(void)
{
	int input;
	char ch;
	
	while (scanf("%d", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
			
		printf(" is not an integer.\nPlease enter an integer value"
			   " such as 25, -178 or 3: ");
	}
	return input;
}

char get_first(void)
{
	int ch;
	ch = getchar();
	while (getchar() != '\n')
		continue;
	return ch;
}
