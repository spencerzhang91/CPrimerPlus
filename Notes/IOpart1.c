/* use: fopen(), fprintf(), putc(), fclose() */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;    
    char file[20];
    char ch[100];
    long mid;
    int a;
    
    puts("Enter filename: ");
    gets(file);
    fp = fopen(file, "w");
    
    
    fprintf(fp, "No.1: fprintf()\n");
    
    a = putc('N',fp);putc('o',fp);putc('.',fp);putc('2',fp);
    putc(':',fp);putc(' ',fp);putc('g',fp);putc('e',fp);
    putc('t',fp);putc('c',fp);putc('(',fp);putc(')',fp);
    putc('\n',fp);
    
    fputs("No.3: fputs()\n", fp);
    
    rewind(fp);
    fseek(fp, -15L, SEEK_END);
    fgets(ch, 100, fp);
    puts(ch);
    mid = ftell(fp);
    printf("%c",a);
    
    
    if (fclose(fp) != 0)
        printf("Fail to close file %s.\n", file);
    return 0;
}
