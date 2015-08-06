/* 13.11.2.c */
#include <stdio.h>
#include <stdlib.h>
#define LEN 40
#define BUFSIZE 1024
void copy(FILE *des, FILE *src);
int main(void)
{
    FILE *sr, *ds;
    char sf[LEN];
    char df[LEN];
    char ch;
    
    printf("Enter source and destination filename "
           "in such formation: source -> destin\n");
    scanf("%s -> %s", sf, df);
    if ((sr = fopen(sf, "rb")) == NULL)
        fprintf(stderr, "Can't open file %s\n", sf);
    if (setvbuf(sr, NULL, _IOFBF, BUFSIZE) != 0)
        fprintf(stderr, "Can't create input buf.\n");
    if ((ds = fopen(df, "wb")) == NULL)
        fprintf(stderr, "Can't open file %s\n", df);
    if (setvbuf(ds, NULL, _IOFBF, BUFSIZE) != 0)
        fprintf(stderr, "Can't create output buf.\n");
    
    copy(ds, sr);
    
    if (ferror(ds) != 0)
        fprintf(stderr, "Error in writing file.\n");
    if (ferror(sr) != 0)
        fprintf(stderr, "Error in reading file.\n");
    
    fclose(ds);
    fclose(sr);
    printf("Copy %s to %s completed.\n", sf, df);
    
    return 0;    
}

void copy(FILE *des, FILE *src)
{
    size_t bytes;
    static char temp[BUFSIZE];
    
    while ((bytes = fread(temp, sizeof(char), BUFSIZE, src)) > 0)
        fwrite(temp, sizeof(char), BUFSIZE, des);
}
