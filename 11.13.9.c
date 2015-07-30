/* 11.13.9.c */
#include <stdio.h>
#include <string.h>
#define SIZE 81
void dropspace(char *ptr);
int main(void)
{
    char string[SIZE];
    for (;puts("Enter a string:"),gets(string),*string != ' ';)
    {
        printf("Before: %s\n", string);
        dropspace(string);
        puts("droping...");
        printf("After: %s\n", string);
    }
    puts("Bye!");
    return 0;
}

void dropspace(char *ptr)
{
    char temp[SIZE];
    int len = strlen(ptr);
    int i;
    for (i = 0; i < len; i++)
    {
        if (ptr[i] != ' ')
            temp[i] = ptr[i];
        else
            temp[i] = '\b'; // It's kind of cheating but whatever...
    }
    for (; i > 0; --i)
        ptr[i] = temp[i];     
}
