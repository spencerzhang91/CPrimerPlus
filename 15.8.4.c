/* 15.8.4.c */
#include <stdio.h>
int bitcheck(int num, int bit);
int main(void)
{
    int number, bit;
    puts("Please enter an integer: ");
    scanf("%d", &number);
    puts("Please enter the bit you want to check: ");
    scanf("%d", &bit);
    printf("%d\n", bitcheck(number, bit));
    return 0;            
}

int bitcheck(int num, int bit)
{
    int mask = 1;
    mask <<= bit;
    return (num & mask);
}
