/* compare.c -- using strcmp() */
#include <stdio.h>
#include <string.h>
#define ANSWER "Grant"
#define MAX 40
int main(void)
{
    char tries[MAX];
    
    puts("Who is buried in Grant's tomb?");
    gets(tries);
    while (strcmp(tries, ANSWER))
    {
        puts("No, that's wrong, try again.\n");
        gets(tries);
    }
    puts("That's right!");
    return 0;
}
