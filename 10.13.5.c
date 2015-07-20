/* 10.13.5.c */
#include <stdio.h>
#define SIZE 4
double sub(double *ptr, int n);
int main(void)
{
    double nums[SIZE] = {1.5, 5.5, 8.3, 2.8};
    double res;
    res = sub(nums, SIZE);
    printf("res = %.2lf\n", res);
    return 0;
}

double sub(double *ptr, int n)
{
    int i, j;
    double max = *ptr;
    double min = *ptr;
    for (i = 0; i < n; i++)
    {
        if (max < *(ptr + i))
            max = *(ptr + i);
    }
    for (j = 0; j < n; j++)
    {
        if (min > *(ptr + j))
            min = *(ptr + j);
    }
    return (max - min);
}
