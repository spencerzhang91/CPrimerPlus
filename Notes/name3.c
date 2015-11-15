/* name3.c -- read a name */
#include <stdio.h>
#define MAX 81
int main(void)
{
    char name[MAX];
    char *ptr;
    
    printf("What the heck is your name?\n");
    ptr = fgets(name, MAX, stdin);
    printf("%s? Ah! %s!\n", name, ptr);
    return 0;
}
