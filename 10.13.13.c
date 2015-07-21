/* 10.13.12.c */
#include <stdio.h>
#define ROWS 3
#define COLS 5

void read(int rows, int cols, double arr[rows][cols]); // task a)
void mean_row(int rownum, int colnum, double *ptr1, double arr[rownum][colnum]);  // task b)
double mean_all(double a, double b, double c);  // task c)
double max(int rows, int cols, double arr[rows][cols]);  // task d)
void display(int r, int c, double arr[r][c], double mean_row1, double mean_row2, double mean_row3,
             double mean, double maximum); // task e)

int main(void)
{
    double nums[ROWS][COLS];
    double mean_row1, mean_row2, mean_row3;
    double mean;
    double maximum;
    int i, j;
    
    read(ROWS, COLS, nums);
    for (i = 0; i < ROWS; i++)
    {
        switch (i)
        {
            case 0: mean_row(0, COLS, &mean_row1, nums);
                    break;
            case 1: mean_row(1, COLS, &mean_row2, nums);
                    break;
            case 2: mean_row(2, COLS, &mean_row3, nums);
                    break;
            default: printf("Something's wrong.\n");break;
        }
    }
    mean = mean_all(mean_row1, mean_row2, mean_row3);
    maximum = max(ROWS, COLS, nums);
    
    display(ROWS, COLS, nums, mean_row1, mean_row2, mean_row3, mean, maximum);
    return 0;   
}

void read(int rows, int cols, double arr[rows][cols])
{
    int i, j;
    printf("Please enter 3 arrays of 5 numbers.\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%lf", &arr[i][j]);
}

void mean_row(int rownum, int colnum, double *ptr1, double arr[rownum][colnum])
{
    int i;
    double temp = 0;
    for (i = 0; i < colnum; i++)
        temp += arr[rownum][i];
    *ptr1 = (temp / colnum); 
}

double mean_all(double a, double b, double c)
{
    return (a + b + c) / 3;
}

double max(int rows, int cols, double arr[rows][cols])
{
    int i, j;
    double max = arr[0][0];
    for (i = 0; i < rows; i++)
    {
       for (j = 0; j < cols; j++)
       {
           if (max < arr[i][j])
               max = arr[i][j];
       }
       
    }
    return max;
}

void display(int r, int c, double arr[r][c], double mean_row1, double mean_row2, double mean_row3,
             double mean, double maximum)
{
    int i, j;
    printf("a)\n");
    printf("The array:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%.1lf ", arr[i][j]);
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
             
             
             
             
             
             
             
             
             
             
             
             

