/* quotes.c -- consider string as pointer */
#include <stdio.h>
int main(void)
{
    char a = 'f';
    printf("%s, %p, %c\n", "we", "flattered a girl", *"for 24 hours");
    printf("\n%p", &a);
    return 0;
}
