/* dyn_arr.c -- dynamic array memory allocation */
#include <stdio.h>
#include <stdlib.h>        // provide prototype for malloc() and free()
int main(void)
{
    double *ptd;
    int max;
    int number;
    int i = 0;
    
    puts("What is the maximum number of type double entries?");
    scanf("%d", &max);
    ptd = (double *)malloc(max * sizeof(double));
    if (ptd == NULL)
    {
        puts("Memory allocation failed. Goodbye.");
        exit(EXIT_FAILURE);
    }
    /* Now ptd point to an array with max elements */
    puts("Enter the values(q to quti): ");
    while (i < max && scanf("%lf", &ptd[i]) == 1)
        ++i;
    printf("Here are your %d entries.\n", number = i);
    for (i = 0; i < number; i++)
    {
        printf("%7.2f ", ptd[i]);
        if (i % 7 == 6)
            putchar('\n');
    }
    if (i % 7 != 0)
        putchar('\n');
    puts("Done.");
    free(ptd);
    
    return 0;
}
