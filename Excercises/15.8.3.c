/* 15.8.3.c */
#include <stdio.h>
int bitopen(int num);
int main(void)
{
    int number, count;
    
    puts("Please enter a integer:");
    while (scanf("%d", &number) == 1)
    {
        count = bitopen(number);
        printf("%d bits opened\n", count);
        puts("Please enter next integer:");
    }
    puts("Bye!");
    return 0;
}

int bitopen(int num)
{
    int mask = 1;
    int count = 0;
    while (num > 0)
    {
        count += num & mask;
        num >>= 1;
    }  
    return count;
}
