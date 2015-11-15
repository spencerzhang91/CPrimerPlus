#include <stdio.h>
int main(void)
{
    FILE *fp;
    int i = 0;
    fp = fopen("test", "w");
    fprintf(fp, "what is your name?");
    rewind(fp);
    printf("\ni -> %d  &i -> %p", i, &i);
    
    return 0;
}
