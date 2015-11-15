/* sort_str.c -- read some strings and sort them */
#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 20
#define HALT " "
void strsort(char *strings[], int num);

int main(void)
{
    char input[LIM][SIZE]; // an array of LIM elements, each element is a string of SIZE size
    char *ptstr[LIM]; // an array of char pointers
    int ct = 0;
    int k;
    
    printf("Input up to %d lines, and I will sort them.\n", LIM);
    printf("To stop, press the Enter key at a line's start.\n");
    while (ct < LIM && gets(input[ct]) != NULL && input[ct][0] != '\0')
    {
        ptstr[ct] = input[ct]; // pointer point to element in input; input[ct] is the name of 
                               // the ct th string, i.e. the adress of the string
        ct++;
    }

    strsort(ptstr, ct);
    puts("\nHere's the sorted list: \n");
    for (k = 0; k < ct; k++)
        puts(ptstr[k]);
    
    return 0;
}

void strsort(char *strings[], int num)
{
    char *temp;
    int top, seek;
    for (top = 0; top < num - 1; top++)
        for (seek = top + 1; seek < num; seek++)
            if (strcmp(strings[top], strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
}
