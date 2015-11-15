/* 10.13.10.c */
#include <stdio.h>
#define ROWS 3
#define COLS 5
void printer(int (*ptr)[COLS], int rows);
// void printer(int ptr[][5], int size); is the same
void twotime(int (*ptr)[COLS], int rows);
int main(void)
{
    int array[ROWS][COLS] = {{0,1,2,3,4},{3,4,5,6,7},{8,9,10,11,12}};
    printer(array, ROWS);
    twotime(array, ROWS);
    printer(array, ROWS);
    
    return 0;   
}

void printer(int (*ptr)[COLS], int rows)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < COLS; j++)
            printf("%d ", ptr[i][j]);
        printf("\n");
    }
}

void twotime(int (*ptr)[COLS], int rows)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < COLS; j++)
            ptr[i][j] = 2 * ptr[i][j];
    }
}
