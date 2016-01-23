// Peculiar function declearation: return a 2d array pointer
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void func1(char *ptr);

int main(void)
{
    int *array = {1,2,3};
    printf("%d", *array);
    return 0;
}

void func1(char *ptr)
{
    printf("func1 -> %s\n", *ptr);
}
