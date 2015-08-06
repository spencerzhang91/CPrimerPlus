/* 13.11.1.c */
#include <stdio.h>
#include <stdlib.h>
#define LEN 41
int main(void)
{
    int ch;
    FILE *fp;
    long count = 0;
    char file[LEN];
    
    puts("chose file to read: (empty line to quit)");
    while (gets(file)[0] != '\0')
    {
        if ((fp = fopen(file, "r")) == NULL)
        {
            fprintf(stderr, "Can't open file %s.\n", file);
            exit(1);
        }
        while ((ch = getc(fp)) != EOF)
        {
            putc(ch, stdout);
            count++;
        }
        putchar('\n');
        fclose(fp);
        printf("File %s has %d characters.\n", file, count);
        printf("Another file or empty line to quit: \n");
    }
    puts("Good bye");
    return 0;
}
