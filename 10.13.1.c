/* 10.13.1.c */
#include <stdio.h>
#define MONTHS 12
#define YEARS 5
int main(void)
{
	// initialize array as precipitation from 2000 to 2004
	const float rain[YEARS][MONTHS] = {
	{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
	{3.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
	{6.3,4.3,4.3,3.0,2.5,1.4,0.2,0.2,0.5,2.4,3.5,6.6},
	{9.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
	{2.3,4.3,4.3,6.0,2.0,3.2,0.2,0.2,0.4,2.4,3.3,6.6}
	};
	
	int year, month;
	float subtot, total;
	printf(" YEAR	RAINFALL (inches) \n");
	for (year = 0, total = 0; year < YEARS; year++)
	{
		for (month = 0, subtot = 0; month < MONTHS; month++)
			//subtot += rain[year][month];
			subtot += *(*(rain + year) + month);
		printf("%5d %15.1f\n", 2000+year, subtot);
		total += subtot;
	}
	printf("\nThe yearly average is %.1f inches.\n\n", total/YEARS);
	printf("MONTHLY AVERAGES: \n\n");
	printf(" JAN  FEB  MAR  APR  MAY  JUN  JUL  AUG  SEP  OCT  NOV  DEC \n");
	
	for (month = 0; month < MONTHS; month++)
	{
		for (year = 0, subtot = 0; year < YEARS; year++)
			//subtot += rain[year][month];
			subtot += *(*(rain + year) + month);
		printf("%4.1f ", subtot/YEARS);
	}
	printf("\n");
	return 0;
}
