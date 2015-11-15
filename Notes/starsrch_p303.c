/* starsrch.c -- use strncmp() */
#include <stdio.h>
#include <string.h>
#define LISTSIZE 5
int main(void)
{
    char *list[LISTSIZE] = {
    "astronomy", "astounding","astronomer",
    "astrophysics", "ostracize"};
    
    int count = 0;
    int i;
    for (i = 0; i < LISTSIZE; i++)
        if (strncmp(list[i], "astro", 5) == 0)
        {
            printf("Found: %s\n", list[i]);
            count++;
        }
    printf("The list contains %d words starts with astro.\n", count);
    return 0;
}
