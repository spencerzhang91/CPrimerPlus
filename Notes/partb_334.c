/* partb.c -- be with parta.c ... */
#include <stdio.h>
extern int count;                        // refferencing declaration, external linkage

static int total = 0;                    // static defining declaration, internal linkage
void accumulate(int k);                  // prototype
void accumulate(int k)                   // block scope, no linkage --> k
{
    static int subtotal = 0;                 // static, no linkage, must defined clearly(with '= value')
    if (k <= 0)
    {
        printf("loop cycle: %d\n", count);
        printf("subtotal: %d; total: %d\n", subtotal, total);
        subtotal = 0;
    }
    else
    {
        subtotal += k;
        total += k;
    }
}
