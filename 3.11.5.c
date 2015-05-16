/* 3.11.5.c -- how old are you in seconds? */
#include <stdio.h>
int main(void)
{
	int age;
	float age_in_sec;
	printf("Please enter you age in years: ");
	scanf("%d",&age);
	age_in_sec = age * 3.156e+7;
	printf("You've lived %e seconds.", age_in_sec);
}
