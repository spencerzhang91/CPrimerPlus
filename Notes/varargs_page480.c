/* varargs.c -- use multiple argument fucntion */
#include <stdio.h>
#include <stdarg.h>
double sum(int, ...);
int main(void)
{
    double s, t;
    
    s = sum(3, 1.1, 2.5, 13.3);
    t = sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1);
    puts("return value for sum(3, 1.1, 2.5, 13.3):");
    printf("%g\n", s);
    puts("return value for sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1):");
    printf("%g\n", t);
    
    return 0;
}

double sum(int lim, ...)
{
    va_list ap;                         // declare variable to store args
    double tot = 0;
    int i;
    va_start(ap, lim);                  // initialize ap as a list of args
    for (i = 0; i < lim; i++)
        tot += va_arg(ap, double);      // access every member in the list
    va_end(ap);                         // clean up
    return tot;
}
