/* glue.c -- using ## operater */
#include <stdio.h>
#define XNAME(n) x ## n
#define PRINT_XN(n) printf("x" #n " = %d\n", x ## n)

int main(void)
{
    int XNAME(1) = 14; // int x1 = 14;
    int XNAME(2) = 20; // int x2 = 20;
    PRINT_XN(1);       // printf("x1 = %d\n", x1);
    PRINT_XN(2);       // printf("x2 = %d\n", x2);
    
    return 0;
}
