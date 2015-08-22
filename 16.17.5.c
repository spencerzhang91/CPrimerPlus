/* 16.17.5.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define LEN 10
#define PICK 30

void prelement(int array[], int len, int cnt);

int main(void)
{
    int nums[LEN] = {1,2,3,4,5,6,7,8,9,10};
    prelement(nums, LEN, PICK);
    
    return 0;
}

void prelement(int array[], int len, int cnt)
{
    int subs, index;
    puts("Random pick starts: ");
    while (cnt-- > 0)
    {
        int temp[len];
        memmove(temp, array, len * sizeof(int));
        srand(clock());
        subs = rand() % len + 1; // at least pick one element
        printf("%d pick left, piked %d elements: \n", cnt, subs);
        for (int i = 0; i < subs; i++)
        {
            index = rand() % len;
            if (temp[index] != '\0')
            {
                printf("%d ", temp[index]);
                temp[index] = '\0';
            }
            else
            {
                --i;
                continue;
            } 
        }
        puts("\n");
    }
    puts("Done"); 
}
