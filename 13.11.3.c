/* 13.11.3.c */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define LEN 80
int main(void)
{
    FILE *source, *destin;
    char src[LEN];
    char des[LEN];
    char temp;
    int cnt;
    
    puts("Enter \"source file -> destination file\": ");
    cnt = scanf("%s -> %s", src, des);
    if ((source = fopen(src, "r")) == NULL)
    {
        fprintf(stderr, "Fail to open %s\n", src);
        exit(EXIT_FAILURE);
    }
        
    if ((destin = fopen(des, "w")) == NULL)
    {
        fprintf(stderr, "Fail to open %s\n", des);
        exit(EXIT_FAILURE);
    }
        
    
    while ((temp = getc(source)) != EOF)
        putc(toupper(temp), destin);
    if (ferror(source) != 0)
        fprintf(stderr, "Error in reading %s\n", src);
    if (ferror(destin) != 0)
        fprintf(stderr, "Error in writing %s\n", des);
    fclose(source);
    fclose(destin);
    printf("Done!\n");
    return 0;
}
