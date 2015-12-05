#include <stdio.h>
void alternum(int *ptr, int offset);

int main(void)
{
    int array[3] = {1,3,4};
    alternum(array, 2);
    printf("%d\n", array[2]);
    return 0;
}

void alternum(int *ptr, int offset)
{
    *(ptr + offset) = 100;
}