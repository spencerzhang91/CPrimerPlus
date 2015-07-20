/* 10.13.3.c */
#include <stdio.h>
#define SIZE 4
int maxnum(int *ptr, int n);
int main(void)
{
    int array[SIZE] = {1,22,3,4};
    int res;
    res = maxnum(array, SIZE);
    printf("The largest number is %d.\n", res);
    return 0;
}

int maxnum(int *ptr, int n)
{
    int temp = *ptr;
    int i;
    for (i = 0; i < n; i++)
    {
        if (temp < *(ptr + i))
            temp = *(ptr + i);
    }
    return temp;
}
