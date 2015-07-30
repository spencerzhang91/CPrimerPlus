/* 11.13.5.c */
#include <stdio.h>
#include <string.h>
#define SIZE 81
char *is_within(char *ptr, char c);
int main(void)
{
    char string[SIZE];
    char *ptr;
    char c;
    while (1)
    {
        puts("Please enter a string shorter than 80 characters.");
        gets(string);
        puts("Please enter a character to be find.(enter 'q' to quit)");
        if ((c = getchar()) == 'q')
            break;
        getchar();
        ptr = is_within(string, c);
        if (ptr)
            printf("%c is within the string!\n", c);       
        else
            puts("Not within!");        
    }
    puts("Bye!");
    return 0;       
}

char *is_within(char *ptr, char c)
{
    for (;*ptr != c; ptr++)
       if (*ptr == '\0') return NULL;
    return ptr;   
}

