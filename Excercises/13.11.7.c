/* 13.11.7.c */
#include <stdio.h>
#include <stdlib.h>
#define LEN 80
#define BUF 1024

int main(void)
{
    FILE *fp1, *fp2;
    char *E1, *E2;
    char file1[LEN];
    char file2[LEN];
    char temp1[BUF];
    char temp2[BUF];
    
    puts("Enter the two files' name: ('0 0' to quit)");
    while (scanf("%s %s", file1, file2) == 2)
    {
        if ((fp1 = fopen(file1, "r")) == NULL ||
            (fp2 = fopen(file2, "r")) == NULL)
        {
            printf("Reading file %s or %s failed.\n", file1, file2);
            exit(EXIT_FAILURE);
        }

        E1 = fgets(temp1, BUF, fp1);
        E2 = fgets(temp2, BUF, fp2);
        while (E1 != NULL || E2 != NULL)
        {
            if (E1 != NULL)
                fputs(temp1, stdout);
            if (E2 != NULL)
                fputs(temp2, stdout);

            E1 = fgets(temp1, BUF, fp1);
            E2 = fgets(temp2, BUF, fp2);
            // printf("E2: %p  fp2: %p\n", E2, fp2);
        }
        /*
        while (1)
        {
            if ((E1 = fgets(temp1, BUF, fp1)) != NULL)
                fputs(temp1, stdout); //printf("%s", temp1); for problem b)
            if ((E2 = fgets(temp2, BUF, fp2)) != NULL)
                fputs(temp2, stdout); //printf("%s", temp2); for problem b)
            if (E1 == NULL && E2 == NULL)
                break;
        }
        */
        putchar('\n');
        if (fclose(fp1) != 0 || fclose(fp2) != 0)
            printf("Error in closing file %s or %s.\n", file1, file2);
        puts("Enter another pair of files: ('0 0' to quit)");
    }
    printf("Successfully done.\n");
    
    return 0;   
}
