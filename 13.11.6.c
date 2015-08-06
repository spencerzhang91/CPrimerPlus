/* 13.11.6.c */
#include <stdio.h>
#include <stdlib.h>                 // for exit()
#include <string.h>                 // for strcpy() and strcat()
#define LEN 40
int main(void)
{
    FILE *in, *out;                 // declare two file pointer
    int ch;
    char name[LEN];                 // store in file name
    char source[LEN];
    int count = 0;
    
    puts("Enter file name: ");
    gets(source);
    // implemente in
    if ((in = fopen(source, "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", source);
        exit(2);
    }
    // implement out
    strcpy(name, source);          // copy file name into array
    strcat(name, ".red");
    if ((out = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }
    // copy data
    while ((ch = getc(in)) != EOF)
        if (count++ %3 == 0)
            putc(ch, out);          // print every three characters
    
    // cleaning up
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Error in closing files\n");
    return 0;
}
