/* 11.13.12.c */
#include <stdio.h>
#include <string.h>
#define LIM 20

int main(int argc, char *argv[])
{
    int i;
    char *p[LIM];
    for (i = 0; i < argc; i++)
        p[i] = argv[i];
    p[i] = '\0';
    for (; i >= 0; --i)
        puts(p[i]);
    return 0;
}

