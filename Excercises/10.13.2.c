/* 10.13.2.c */
#include <stdio.h>
void copy_arr(double ar1[], double ar2[], int n);
void copy_ptr(double *ptr1, double *ptr2, int n);
void show(double *ptr, int n);

int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    
    copy_arr(source, target1, 5);
    copy_ptr(source, target2, 5);
    
    show(target1, 5);
    show(target2, 5);
    return 0;
}

void copy_arr(double ar1[], double ar2[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        ar2[i] = ar1[i];
}

void copy_ptr(double *ptr1, double *ptr2, int n)
{
    int i;
    for (i = 0; i < n; i++)
        *(ptr2 + i) = *(ptr1 + i);
}

void show(double *ptr, int n)
{
    int i;
    printf("array at %#x\n", ptr);
    for (i = 0; i < n; i++)
        printf("%.1lf  ", *(ptr + i));
    putchar('\n');
}
