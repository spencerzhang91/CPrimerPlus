// Peculiar function declearation: return a 2d array pointer
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    /* This file will test some peculiar delearations and initializations */
    // No.1: char array
    char array_1[3] = {'a','b','c'};                           // ok
    char *array_2 = (char *)malloc(sizeof(char) * 3);          // ok
    for (int i = 0; i < 3; i++)                                // initialize
        *(array_2 + i) = 'a' + i;
    
    // No.2: string array
    char *array_string[3] = {"abc", "d", "ef"};                // ok
    printf("%s ", array_string[0]);


    return 0;
}

