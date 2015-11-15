/* animals.c -- the switch statement */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	printf("Give me a letter of alphabet, and I will give ");
	printf("an animal name\nbegining with that letter.\n");
	printf("Please type in a letter; type # to end my act.\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			continue;
		if (islower(ch))
			switch (ch)
			{
				case 'a':
					printf("a....\n");
					break;
				case 'b':
					printf("b....\n");
					break;
				case 'c':
					printf("c....\n");
					break;
				case 'd':
					printf("d....\n");
					break;
				default:
					printf("That's a stumper!\n");
			}
		else
			printf("I recognized only lowercase letters.\n");
		while (getchar() != '\n')
			continue;
		printf("Please type another letter or a #.\n");
	}
	printf("Bye!\n");
	return 0;
}
