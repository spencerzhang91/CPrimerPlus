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
void setval(char *strm, int *y, int *m, int *d);
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
    setval(mname, &year, &month, &day);
    if (mname[0] == '\0')
        printf("%d-%d-%d\n", year, month, day);
    else
        printf("%d-%s-%d\n", year, mname, day);
    return 0;   
}

void setval(char *strm, int *y, int *m, int *d)
{
    puts("Please enter year: ");
    
}


