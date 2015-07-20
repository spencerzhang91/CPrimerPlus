/* 10.13.9.c */
#include <stdio.h>
#define LEN 3
void addarray(int *arr1, int *arr2, int *arr3, int len);
int main(void)
{
    int m1[LEN] = {1, 2, 3};
    int m2[LEN] = {1, 2, 3};
    int sum[LEN];
    int i;
    addarray(m1, m2, sum, LEN);
    for (i = 0; i < LEN; i++)
        printf("%d ", sum[i]);
    return 0;
}

void addarray(int *arr1, int *arr2, int *arr3, int len)
{
    int i;
    for (i = 0; i < len; i++)
        *(arr3 + i) = *(arr1 +i) + *(arr2 + i);
}
