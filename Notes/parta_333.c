/* parta.c --- storage class */
/* very important for understanding this concept */
#include <stdio.h>
void report_count(void);
void accumulate(int k);
int count = 0;                        // file scope, external linkage (external variable)
int main(void)
{
    int value;                        // block scope, no linkage (auto variable)
    register int i;                   // block scope, no linkage (register variable)
    
    printf("Enter a positive integer (0 to quit): ");
    while (scanf("%d", &value) == 1 && value > 0)
    {
        ++count;                      // use that external variable
        for (i = value; i >= 0; i--)
            accumulate(i);
        printf("Enter a positive integer (0 to quit): ");
    }
    report_count();
    return 0;
}

void report_count(void)
{
    printf("Loop executed %d times\n", count);
}
