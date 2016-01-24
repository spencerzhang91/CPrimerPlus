// Peculiar function declearation: return a 2d array pointer
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char **func_rcharPtrArray(void);

int main(void)
{
    /* This file will test some peculiar delearations and initializations */
    // ======================= Variable Declearation ==================== //
    // No.1: char array
    char array_char_a[3] = {'a','b','c'};                           // ok
    char *array_char_p = (char *)malloc(sizeof(char) * 3);          // ok
    for (int i = 0; i < 3; i++)                                     // initialize
        *(array_char_p + i) = 'a' + i;
    
    // No.2: array of string pointer
    char *array_string_a[3] = {"abc", "defg", "hi"};                // ok
    // No.3: array of string
    char array_string_2a[3][5] = {"ab","cd","efgh"};                // ok
    
    // ====================== Function Calling Area ===================== //
    char **call_func_no4;
    call_func_no4 = func_rcharPtrArray();
    printf("%s", call_func_no4[2]);
    return 0;
}

// No.4: function that returns array of string pointer
char **func_rcharPtrArray(void)
{
    static char *temp[3] = {"abcd","e","fg"};
    return temp;
}