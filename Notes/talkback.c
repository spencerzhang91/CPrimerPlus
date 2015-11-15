// talkback.c -- a dialog program that can provide you with some information.
#include <stdio.h>
#include <string.h>  // provide strlen() function prototype
#define DENSITY 62.4 // population density
int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40]; // name is an array with 40 charactor
	
	printf("Hi! What's your first name?\n");
	scanf("%s", name);
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	
	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
	printf("Also, your first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it in.\n", size);
	return 0;
}
