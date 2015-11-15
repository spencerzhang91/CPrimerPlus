/* putget.c --print a string without newline */
#include <stdio.h>
int main(void)
{
    char line[81];
    while (gets(line))
        puts(line);
    return 0;
}
