/* 10.13.6.c */
#include <stdio.h>
#define ROWS 2
#define COLS 2
void copy_2d(double (*ptr1)[COLS], double (*ptr2)[COLS], int n);
void copy_1d(double *ptr1, double *ptr2, int n);

int main(void)
{
    double matrix[ROWS][COLS] = {{1,2}, {2,1}};
    double target[ROWS][COLS];
    copy_2d(matrix, target, COLS);
    int i, j;
    for (i = 0; i < COLS; i++)
        for (j = 0; j < ROWS; j++)
            printf("%.1lf  ", target[i][j]);
    printf("\n");
    
    return 0;
}

void copy_2d(double (*ptr1)[COLS], double (*ptr2)[COLS], int n)
{
    int i;
    for (i = 0; i < n; i++)
        copy_1d(*(ptr1 + i), *(ptr2 + i), n);
}

void copy_1d(double *ptr1, double *ptr2, int n)
{
    int j;
    for (j = 0; j < n; j++)
        *(ptr2 + j) = *(ptr1 + j);
}


