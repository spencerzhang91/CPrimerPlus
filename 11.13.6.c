/* 11.13.6.c */
#include <stdio.h>
#include <string.h>
#define SIZE 81
char *mystrncpy(char *target, char *sourse, int n);
int main(void)
{
    char s1[SIZE];
    char s2[SIZE];
    int n;
    for (;puts("Input s1"), gets(s1), *s1 != 'q';)
    {
        puts("Input n");
        scanf("%d", &n);
        getchar();
        mystrncpy(s2, s1, n);
        printf("s1: %s\n", s1);
        printf("s2: %s\n", s2);
        continue;
    }
    puts("End of program!");
    return 0;
}

char *mystrncpy(char *target, char *sourse, int n)
{
    int len = strlen(sourse);
    int i;
    len = (n > SIZE)? SIZE: n;
    for (i = 0; i < len; i++)
        *(target + i) = *(sourse + i);
    *(target + i) = '\0';
    return target;
}
