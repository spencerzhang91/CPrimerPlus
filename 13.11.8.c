/* 13.11.8.c */
#include <stdio.h>
#include <stdlib.h>
#define MAXFILE 20

int main(int argc, char *argv[])
{
    int cnt = 0;
    char ch;
    char *name[MAXFILE];
    FILE *temp;
    
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s character filename [filename2...]\n",
                argv[0]);
        exit(EXIT_FAILURE);
    }
    
    if (argc = 2)
    {
        fprintf(stdout, "Please enter a string:\n");
        while ((ch = getc(stdin)) != EOF)
        {
            if (ch == *argv[1])
                cnt++;
        }
        fprintf(stdout, "In your input: %c appeared %d times.\n",
                *argv[1], cnt);
    }
    else
    {
        for (int i = 2; i < argc; i++)
        {
            if ((temp = fopen(argv[i], "r")) == NULL)
            {
                fprintf(stderr, "Fail to open file %s.\n", argv[i]);
                continue;
            }
            while ((ch = getc(temp)) != EOF)
            {
                if (ch == *argv[1])
                    cnt++;             
            }
            fprintf(stdout, "%d character %c counted in file %s\n",
                cnt, argv[1], argv[i]);
        }
    }
       
    
    return 0;
}
