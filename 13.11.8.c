/* 13.11.8.c */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int cnt = 0;
    char ch;
    FILE *temp;
    
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s character filename [filename2...]\n",
                argv[0]);
        exit(EXIT_FAILURE);
    }
    
    else if (argc == 2) // get fucked so hard for mistaken == as =
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
            fprintf(stdout, "character %c appeared %d times in file %s\n",
                *argv[1], cnt, argv[i]);
            fclose(temp);
            cnt = 0;
        }
    }    
    return 0;
}
