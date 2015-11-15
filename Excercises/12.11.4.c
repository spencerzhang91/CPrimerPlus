/* 12.11.4.c */
#include <stdio.h>
int count;
void call(void);
int main(void)
{
    int times;
    puts("Enter call times.");
    scanf("%d", &times);
    for (; times > 0; times--)
        call();
    printf("Function has been called %d times.\n", count);
        
    return 0;
}

void call(void)
{
    extern int count; // optional declaration
    ++count;
}
