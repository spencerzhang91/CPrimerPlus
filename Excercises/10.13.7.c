/* 10.13.7.c */
#include <stdio.h>
void copy_ptr(double *ptr1, double *ptr2, int n);
int main(void)
{
    int i;
    double origin[7] = {1,2,3,4,5,6,7};
    double target[3];
    copy_ptr(target, origin, 3);
    for (i=0; i < 3; i++)
        printf("%.1lf  ", *(target + i));
    return 0;
}

void copy_ptr(double *ptr1, double *ptr2, int n)
{
    int i;
    for (i = 0; i < n; i++)
        *(ptr1 + i) = *(ptr2 + i + 2);
}
