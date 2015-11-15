/* 13.11.4.c */
#include <stdio.h>
#include <stdlib.h>
#define LEN 256
int main(int argc, char *argv[])
{
    FILE *fp;
    char temp[LEN];
    int i;
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s filename.\n", argv[0]);
        exit(1);
    }
        
    for (i = 1; i < argc; i++)
    {
        if ((fp = fopen(argv[i], "r")) == NULL)
        {
            fprintf(stderr, "Can't open file %s.\n", argv[i]);
            exit(1);
        }
        while (fgets(temp, LEN, fp) != NULL)
            fputs(temp, stdout);
        fclose(fp);
    }
    putchar('\n');
    printf("%d file printed.\n", i);
    return 0;
}
