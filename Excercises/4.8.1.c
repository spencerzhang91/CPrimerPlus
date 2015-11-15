/* 4.8.1.c -- tell me your name */
#include <stdio.h>
int main(void)
{
	char f_name[20], l_name[20];
	
	printf("Please enter your first name and last name.\n");
	scanf("%s %s", f_name, l_name);
	printf("%s %s", f_name, l_name);
	
	return 0;
}
