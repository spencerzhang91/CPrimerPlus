/* 10.13.4.c */
#include <stdio.h>
#define SIZE 4
int maxindex(double *ptr, int n);
int main(void)
{
    double array[SIZE] = {1.6, 2.2, 3.99, 41.2};
    int index;
    index = maxindex(array, SIZE);
    printf("The largest number's index is %d.\n", index);
    return 0;
}

int maxindex(double *ptr, int n)
{
    double temp = *ptr;
    int i;
    int index;
    for (i = 0; i < n; i++)
    {
        if (temp < *(ptr + i))
        {
            temp = *(ptr + i);
            index = i;
        }
    }
    return index;
}
