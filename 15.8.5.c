/* 15.8.5.c */
#include <stdio.h>

int rotate(int num, int bit);

int main(void)
{
    int number, bits;
    int newnum;
    puts("Please enter a number and rotate bits: ");
    scanf("%d %d", &number, &bits);
    newnum = rotate(number, bits);
    printf("Rotated number is %d.\n", newnum);
    
    return 0;
}

int rotate(int num, int bit)
{
    int bs = 0;
    int move;
    int mask = 1;
    int temp = num;
    while (temp > 0)
    {
        temp >>= 1;
        bs++;
    }
    for (int i = 0; i < bs; i++)
        mask = (mask << 1) | 1;
    move = num >> (bs - bit%bs);
    num <<= bit;
    num &= mask;
    num |= move;
    return num;
}
