/* 10.13.12.c */
#include <stdio.h>
#define ROWS 3
#define COLS 5

void read(double (*ptr)[COLS], int rows); // task a)
void mean_row(double *ptr1, double (*ptr2)[COLS], int rownum);  // task b)
double mean_all(double a, double b, double c);  // task c)
double max(double (*ptr)[COLS], int rows);  // task d)
void display(double (*ptr)[COLS], double mean_row1, double mean_row2, double mean_row3,
             double mean, double maximum, int r, int c); // task e)

int main(void)
{
    double nums[ROWS][COLS];
    double mean_row1, mean_row2, mean_row3;
    double mean;
    double maximum;
    int i, j;
    
    read(nums, ROWS);
    for (i = 0; i < ROWS; i++)
    {
        switch (i)
        {
            case 0: mean_row(&mean_row1, nums, 0);
                    break;
            case 1: mean_row(&mean_row2, nums, 1);
                    break;
            case 2: mean_row(&mean_row3, nums, 2);
                    break;
            default: printf("Something's wrong.\n");break;
        }
    }
    mean = mean_all(mean_row1, mean_row2, mean_row3);
    maximum = max(nums, ROWS);
    
    display(nums, mean_row1, mean_row2, mean_row3, mean, maximum, ROWS, COLS);
    return 0;   
}

void read(double (*ptr)[COLS], int rows)
{
    int i, j;
    printf("Please enter 3 arrays of 5 numbers.\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < COLS; j++)
            scanf("%lf", &*(*(ptr + i) + j));
}

void mean_row(double *ptr1, double (*ptr2)[COLS], int rownum)
{
    int i;
    double temp = 0;
    for (i = 0; i < COLS; i++)
        temp += *(*(ptr2 + rownum) + i);
    *ptr1 = (temp / COLS); 
}

double mean_all(double a, double b, double c)
{
    return (a + b + c) / 3;
}

double max(double (*ptr)[COLS], int rows)
{
    int i, j;
    double max = ptr[0][0];
    for (i = 0; i < rows; i++)
    {
       for (j = 0; j < COLS; j++)
       {
           if (max < ptr[i][j])
               max = ptr[i][j];
       }
       
    }
    return max;
}

void display(double (*ptr)[COLS], double mean_row1, double mean_row2,
 double mean_row3, double mean, double maximum, int r, int c)
{
    int i, j;
    printf("a)\n");
    printf("The array:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%.1lf ", ptr[i][j]);
        printf("\n");
    }
    printf("b)\n");
    printf("mean_row1 = %.1lf\n", mean_row1);
    printf("mean_row2 = %.1lf\n", mean_row2);
    printf("mean_row3 = %.1lf\n", mean_row3);
    printf("c)\n");
    printf("mean_all = %.1lf\n", mean);
    printf("d)\n");
    printf("max = %.1lf\n", maximum);
    printf("End\n");
}         
             
             
             
             
             
             
             
             
             
             
             
             

