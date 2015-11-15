/* 13.11.11.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    char *line;
    line = (char *)malloc(201 * sizeof(char));
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
        
        while (fgets(line, 201, temp) != NULL)  // the 'line' here need to point to a allocated memory, can't be a uninitialized pointer.
            if (strstr(line, argv[1]) != NULL)
                fputs(line, stdout);
        fclose(temp);
    }
  
    return 0;
}
