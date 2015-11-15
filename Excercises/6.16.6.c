/* 6.16.6.c */
#include <stdio.h>
#include <string.h>
#define LEN 50
int main(void)
{
	int index, len;
	char word[LEN];
	
	printf("Please enter a word you like!\n");
	scanf("%s", word);
	printf("%d chars\n", len = strlen(word));
	
	for (index=len-1; index >= 0; index--)
		printf("%c", word[index]);
	printf("\n");
	return 0;
}
