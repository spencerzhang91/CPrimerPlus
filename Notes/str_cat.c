/* str_cat.c -- concatenate two strings */
#include <stdio.h>
#include <string.h>
#define SIZE 81
int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    puts("What is your favorite flower?");
    gets(flower);
    strcat(flower, addon);
    puts(flower);
    puts(addon);
    return 0;
}
