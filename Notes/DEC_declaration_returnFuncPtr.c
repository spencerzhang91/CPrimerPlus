#include <stdio.h>
int (*(returnFunptr(void)))(void);
int testfunc(void);

int main(void)
{
    int (*p)(void);
    int (*t)(void);
    p = testfunc;
    t = returnFunptr();
    printf("pointer p: %p\n", p);
    printf("pointer t: %p\n", t);

    return 0;
}

int (*(returnFunptr(void)))(void)
{
    static int (*fp)(void);
    fp = testfunc;
    return fp;
}

int testfunc(void)
{
    return 2;
}