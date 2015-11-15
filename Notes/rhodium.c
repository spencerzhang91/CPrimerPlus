/* rhodium.c -- use rhodium to mesure your weight. */
#include <stdio.h>
int main(void)
{
	float weight; /* user weight */
	float value; /* the value of equal weighted rhodium */
	printf("Are you worth your weight in rhodium?\n");
	printf("Let's check it out.\n'");
	printf("Please enter your weight in pounds: ");
/* get input from user here. */
	scanf("%f", &weight);
/* assume that rhodium costs 770 dollars per ounce. */
/* 14.5833 coverts avoirdupois weight to troy weight. */
	value = 770 * weight * 14.5883;
	printf("Your weight in rhodium is worth $%.2f.\n", value);
	printf("You are easily worth that! If rhodium prices drop, \n");
	printf("eat more to maintain your value.\n");
	return 0;
}
