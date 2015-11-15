/* charcode.c -- show the ASCII code of a charactor. */
#include <stdio.h>
int main(void){
	char ch;
	printf("Please enter a character.\n");
	scanf("%c", &ch);
	printf("The code for %c is %d.\n", ch, ch);
	return 0;
}
