/* 11.13.2.c mutant of 13.1.c */
#include <stdio.h>
#include <ctype.h>
#define SIZE 41
void store(char *ptr, int n);
int main(void)
{
    char group[SIZE];
    int n = 10;
    int i;
    store(group, n);
    puts(group);
    return 0;
}

void store(char *ptr, int n)
{
    int cnt;
    char item;
    for (cnt = 0; cnt < n; cnt++)
    {
        item = getchar();
        if (isspace(item))
            break;
        *(ptr + cnt) = item;
    }
    *(ptr + cnt) = '\0';
}
