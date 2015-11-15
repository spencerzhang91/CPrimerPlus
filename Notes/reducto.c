/* reducto.c -- compress file to one-third size */
#include <stdio.h>
#include <stdlib.h>                 // for exit()
#include <string.h>                 // for strcpy() and strcat()
#define LEN 40
int main(int argc, char *argv[])
{
    FILE *in, *out;                 // declare two file pointer
    int ch;
    char name[LEN];                 // store in file name
    int count = 0;
    
    if (argc < 2)                   // check command line arguments
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(1);
    }
    // implemente in
    if ((in = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n",argv[1]);
        exit(2);
    }
    // implement out
    strcpy(name, argv[1]);          // copy file name into array
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
