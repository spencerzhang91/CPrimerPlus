/* 6.16.4.c */
#include <stdio.h>
#define BASE 'A'

int main(void)
{
	int lines, space, i, j, k;
	char ch, c;
	printf("Please choose a letter(Capital) to start the pyramid: \n");
	scanf("%c", &ch);
	
	lines = ch - BASE + 1;
	printf("There will be %d layers of pyramid.\n", lines);
	printf("The chosen letter is %c.\n", ch);

	for (i=0; i < lines; i++) // outer loop: controls total lines
	{
		for (space=lines; space > i; space--)
			printf(" ");
		for (c=0; c <= i; c++)
			printf("%c", c+BASE);
		for (c=i-1; c >= 0; c--)
			printf("%c", c+BASE);
		printf("\n");
	}
	return 0;
}
