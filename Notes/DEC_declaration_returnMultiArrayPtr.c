// Peculiar function declearation: return a 2d array pointer
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char **func_rcharPtrArray(void);
int **Func_re_2DIntArray_Ptr(void);

int main(void)
{
    /* This file will test some peculiar delearations and initializations */
    // ======================= Variable Declearation ==================== //
    // No.1: char array
    char array_char_a[3] = {'a','b','c'};                           // ok
    char array_char_aa[3] = "abc";
    printf("%c", array_char_aa[0]);
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
    int **call_func_no5;
    call_func_no5 = Func_re_2DIntArray_Ptr();
    printf("->return: %d", **call_func_no5);

    return 0;
}

// No.4: function that returns array of string pointer
char **func_rcharPtrArray(void)                                     // ok
{
    static char *temp[3] = {"abcd","e","fg"};
    return temp;
}
/* from here we notice that in C does not support a function definition that
returns an array. So use pointer when facing such need. */

// No.5 function that returns pointer that point to 2d int array
int **Func_re_2DIntArray_Ptr(void)
{
    int **ptr;
    int array[2][2] = {{2,4},{5,8}};
    printf("\n->%d\n", **array);
    ptr = array;
    return ptr;
}