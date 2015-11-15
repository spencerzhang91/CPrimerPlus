/* 10.13.8.c */
#include <stdio.h>
#define ROWS 3
#define COLS 5
void copy_2d(int r, int c, double org[r][c], double tgt[r][c]);
void show_2d(int r, int c, double toshow[r][c]);
int main(void)
{
    double array[ROWS][COLS] = {{0,1,0,0,1},
                                {1,0,1,0,1},
                                {0,1,1,1,0}};
    double target[ROWS][COLS];
    copy_2d(ROWS, COLS, array, target);
    show_2d(ROWS, COLS, target);
    return 0;
}

void copy_2d(int r, int c, double org[r][c], double tgt[r][c])
{
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            tgt[i][j] = org[i][j];
}

void show_2d(int r, int c, double toshow[r][c])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%.1lf ", toshow[i][j]);
        printf("\n");
    }
}
