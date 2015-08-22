/* 16.17.2.c */
#include <stdio.h>
#define aver(x, y) 1/((1.0/(x) + 1.0/(y))/2)
int main(void)
{
    printf("%.2f\n", aver(4, 6));
    return 0;
}
