/* 12.11.6.c */
#include <stdio.h>
#include <stdlib.h>
void count(int *p);
int main(void)
{
    int nums[1000];
    int seed;
    puts("Please enter a integer value as seed, 'q' to quit.");
    while (scanf("%d", &seed) == 1)
    {
        srand(seed);
        for (int i = 0; i < 1000; i++)
            nums[i] = rand() % 10 + 1;
        count(nums);
        
        for (int j = 1; j <= 1000; j++)
        {
            if (j % 10 == 0)
                printf("last%3d\n", nums[j]);
            else
                printf("%3d ", nums[j]);
        }
        printf("\n");
        puts("Please choose another int seed, 'q' to quit.");
    }
    return 0;
}

void count(int *p)
{
    int i;
    int ten = 0;    int one = 0;
    int two = 0;    int three = 0;
    int four = 0;   int five = 0;
    int six = 0;    int seven = 0;
    int eight = 0;  int nine = 0;
    
    for (i = 0; i < 100; i++)
    {
        switch (p[i])
        {
            case 10: ++ten;  break;    case 1: ++one;   break;
            case 2: ++two;   break;    case 3: ++three; break;
            case 4: ++four;  break;    case 5: ++five;  break;
            case 6: ++six;   break;    case 7: ++seven; break;
            case 8: ++eight; break;    case 9: ++nine;  break;
            default: printf("\nwrong\n");
        }
    }
    printf("10 -> %d\n1 -> %d\n2 -> %d\n3 -> %d\n4 -> %d\n"
           "5 -> %d\n6 -> %d\n7 -> %d\n8 -> %d\n9 -> %d\n",
            ten, one, two, three, four, five, six, seven,
            eight, nine);
}
