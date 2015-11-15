/* book.c -- page 379 */
#include <stdio.h>
#define MAXTITL 41
#define MAXAUTL 31
struct book {
    char titile[MAXTITL];
    char author[MAXAUTL];
    float value;
};
int main(void)
{
    struct book library;
    printf("Please enter the title.\n");
    gets(library.titile);
    printf("Now enter the author.\n");
    gets(library.author);
    printf("Now enter the value.\n");
    scanf("%f", &library.value);
    printf("%s by %s: $%.2f\n", library.titile, library.author, library.value);
    printf("Done.\n");
    
    return 0;
}
