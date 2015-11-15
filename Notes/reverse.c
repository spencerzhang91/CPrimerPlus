/* reverse.c -- reversely print a file */
#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032'  // EOF in DOS system
#define SLEN 50
int main(void)
{
    char file[SLEN];
    char ch;
    FILE *fp;
    long count, last;
    
    puts("Enter the name of the file to be processed.");
    gets(file);
    if ((fp = fopen(file, "rb")) == NULL)       // binary read only mode
    {
        printf("reverse can't open %s\n", file);
        exit(1);
    }
    
    fseek(fp, 0L, SEEK_END);                    // locate to end of file
    last = ftell(fp);
    for (count = 1L; count <= last; count++)
    {
        fseek(fp, -count, SEEK_END);            // backward
        ch = getc(fp);
        if (ch != CNTL_Z && ch != '\r')
            putchar(ch);
    }
    putchar('\n');
    fclose(fp);
    
    return 0;
}
