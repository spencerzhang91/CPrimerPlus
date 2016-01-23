// Peculiar function declearation: return a 2d array pointer
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    /* This file will test some peculiar delearations and initializations */
    // No.1: char array
    char array_1[3] = {'a','b','c'};
    char *array_2 = (char *)malloc(sizeof(char) * 3);
    for (int i = 0; i < 3; i++)
        *(array_2 + i) = 'a' + i;
    printf("%c", *array_2);
    return 0;
}

