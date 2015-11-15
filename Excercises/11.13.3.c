/* 11.13.3.c */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 81
void word(char *ptr);
int main(void)
{
    char phrase[SIZE];
    puts("Please enter a string.");
    gets(phrase);
    word(phrase);
    puts(phrase);
    return 0;    
}

void word(char *ptr)
{
    int start = 0;
    int end;
    while (isspace(*(ptr + start)))
        start++;
    end = start;
    while (!isspace(*(ptr + end)))
        end++;
    *(ptr + end) = '\0';
    for (; *(ptr + start) != '\0'; ptr++)  // This approach is to copy word in (ptr+start, ptr+end) to (ptr, ptr+start-1)
        *ptr = *(ptr + start);
    *ptr = '\0';
}
