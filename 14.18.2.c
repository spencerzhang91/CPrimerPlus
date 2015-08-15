/* 14.18.2.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct months {
    char name[21];
    char abbr[4];
    int days;
    int mnum;
};
void setval(int *y, int *m, int *d);
int sumdays(struct months p[12], int year, int month, int day);
int isleap(int year);
int main(void)
{
    int year, month, day;
    char mname[21] = "";
    int tot = 0;
    
    struct months calandar[12] = {
        {"January", "JAN", 31, 1},
        {"Febuary", "FEB", 28, 2},
        {"March", "MAR", 31, 3},
        {"April", "APR", 28, 4},
        {"May", "MAY", 31, 5},
        {"June", "JUN", 28, 6},
        {"July", "JUL", 31, 7},
        {"August", "AUG", 28, 8},
        {"September", "SEP", 31, 9},
        {"October", "OCT", 28, 10},
        {"November", "NOV", 31, 11},
        {"December", "DEC", 28, 12},
    };
    setval(&year, &month, &day);
    tot = sumdays(calandar, year, month, day);
    printf("Total days till %d-%d-%d is %d days.\n",
    		year, month, day, tot);
    
    return 0;   
}

void setval(int *y, int *m, int *d)
{
    puts("Please enter interger date (year-month-day): ");
    if (scanf("%d-%d-%d", y, m, d) < 3)
	{
		puts("Invalid input");
		exit(1);
	}
	else if (*y < 0 || (*m < 0 || *m > 12) || (*d < 0 || *d > 31))
	{
		puts("Wrong input");
		exit(2);
	}
}

int sumdays(struct months p[12], int year, int month, int day)
{
	int sum = 0;
	for (int i = 1; i < month; i++)
		sum += p[i-1].days;
	sum += day;
	if (isleap(year) && month > 1 && day > 28)
		sum += 1;
	return sum;
}

int isleap(int year)
{
	int res = 0;
	if (year % 100 == 0)
	{
		if (year % 400 == 0)
			res = 1;
	}
	else
	{
		if (year % 4 == 0)
			res = 1;
	}
	return res;
}
