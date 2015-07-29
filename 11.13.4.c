/* 11.13.4.c */
#include <stdio.h>
#include <string.h>
#define SIZE 81
char *mystrchr(char *ptr, char c);
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
        // ptr = strchr(string, c);
        ptr = mystrchr(string, c);
        if (ptr)
        {
            puts("Found!");
            printf("%s\n", ptr);            
        }
        else
            puts("Not found!");        
    }
    puts("Bye!");
    return 0;       
}

char *mystrchr(char *ptr, char c)
{
    for (;*ptr != c; ptr++)
       if (*ptr == '\0') return NULL;
    return ptr;   
}
