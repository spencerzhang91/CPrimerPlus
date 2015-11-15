// input.c -- when to use &
#include <stdio.h>
int main(void)
{
	int age;
	float asset;
	char pet[30];
	
	printf("Please input your age and asset and favourite pet.\n");
	scanf("%d %f", &age, &asset);  // if there's a "," in between two %s, the input shall be in same format.
	scanf("%s", pet);
	printf("%d %f %s", age, asset, pet);
	
	return 0;
}
