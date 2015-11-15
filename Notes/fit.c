/* fit.c -- a function to trunct a string */
#include <stdio.h>
#include <string.h>
void fit(char *, unsigned int);
int main(void)
{
    char mesg[] = "Hold on to your hats, hackers. ";
    
    puts(mesg);
    fit(mesg, 7);
    puts(mesg);
    puts("Let's look at some more of the string. ");
    puts(mesg + 8);
    return 0;
}

void fit(char *ptr, unsigned int n)
{
    if (strlen(ptr) > n)
        *(ptr + n) = '\0';
}
