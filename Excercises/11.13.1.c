/* 11.13.1.c  excercise of chap 11 finally... */
#include <stdio.h>
#define SIZE 40
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
        *(ptr + cnt) = item;
    }
    *(ptr + n) = '\0';       
}
