/* 14.18.1.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct month {
    char name[21];
    char abbr[4];
    int days;
    int mnum;
};
int days(const struct month *p, char *select);
int main(void)
{
    int index = 0;
    int tot = 0;
    char temp[21];
    struct month year[12] = {
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
    
    puts("Please enter month name.");
    gets(temp);
    tot = days(year, temp);
    printf("Totoal days till %s is %d days.\n", temp, tot);
    
    return 0;   
}
int days(const struct month *p, char *select)
{
    int count = 0;
    int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        if (strcmp((p + i)->name, select) == 0)
        {
            count = i;
            break;
        }
    }
    for (int j = 0; j < count; j++)
        sum += (p + j)->days;
    return sum;
}

