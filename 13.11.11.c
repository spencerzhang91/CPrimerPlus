/* 13.11.11.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 201

int main(int argc, char *argv[])
{
    char line[MAX];
    FILE *temp;
    
    if (argc <= 2)
    {
        fprintf(stderr, "Usage: %s character filename\n",
                argv[0]);
        exit(EXIT_FAILURE);
    }

    else
    {
        if ((temp = fopen(argv[2], "r")) == NULL)
        {
            fprintf(stderr, "Fail to open file %s.\n", argv[2]);
            exit(EXIT_FAILURE);
        }
        
        while (fgets(line, MAX, temp) != NULL)
            if (strstr(line, argv[1]) != NULL)
                fputs(line, stdout);
        fclose(temp);
    }
  
    return 0;
}
