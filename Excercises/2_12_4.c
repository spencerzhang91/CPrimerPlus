#include <stdio.h>
void complement(void);  // a function that call later.
void lastline(void);  // another function that call afer that.
int main(void){
	complement();
	lastline();
	return 0;
}

void complement(void){
	printf("For he's a jolly good fellow!\n");
	printf("For he's a jolly good fellow!\n");
	printf("For he's a jolly good fellow!\n");
}

void lastline(void){
	printf("Which no one can deny!\n");
}
