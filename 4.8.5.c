/* 4.8.5.c -- alignment */
#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[20];
	char surname[20];
	int len_n;
	int len_s;	
	
	printf("Please enter your name and then surname in exact order.\n");
	scanf("%s %s", name, surname);
	len_n = strlen(name);
	len_s = strlen(surname);
	printf("%s %s\n", name, surname);
	printf("%*d %*d\n", len_n, len_n, len_s, len_s);
	printf("\n");
	printf("%s %s\n", name, surname);
	printf("%-*d %-*d\n", len_n, len_n, len_s, len_s);
	
	return 0;
}
