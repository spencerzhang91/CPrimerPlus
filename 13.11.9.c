/* 13.11.9.c */
#include <stdio.h>
#include <stdlib.h>
#define MAX 40
int main(void)
{
    FILE *fp;
    char words[MAX];
    int num = 0;
    
    if ((fp = fopen("words", "a+")) == NULL)
    {
        fprintf(stdout, "Can't open \"words\" file.\n");
        exit(1);
    }
    while (fgets(words, MAX-1, fp) != NULL)
        num++;
    puts("Enter words to add to the file: press the Enter");
    puts("key at the beginning of line to terminate.");
    
    while (gets(words) != NULL && words[0] != '\0')
        fprintf(fp, "%d -> %s\n", num, words);
    
    puts("File contents: ");
    rewind(fp);             // back to beginning of the file
    
    while (fgets(words, MAX, fp) != NULL)
        puts(words);
    
    if (fclose(fp) != 0)
        fprintf(stderr, "Error closing file\n");
    
    return 0;
}

