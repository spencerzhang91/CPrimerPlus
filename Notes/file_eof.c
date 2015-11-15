// file_eof.c -- open a file and show it's content
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ch;
	FILE * fp;
	char fname[50];
	
	printf("Enter the name of file: ");
	scanf("%s", fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
	{
		printf("Failed to epen file. Bye\n");
		exit(1);
	}
	while((ch = getc(fp)) != EOF)
		putchar(ch);
	fclose(fp);
	return 0;
}
