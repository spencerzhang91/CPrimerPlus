/* 16.17.4.c */
#include <stdio.h>
#include <time.h>

void loop(int sec);

int main(void)
{
    int seconds;
    puts("Please enter an integer number of seconds: ");
    scanf("%d", &seconds);
    loop(seconds);
    
    return 0;
}

void loop(int sec)
{
    clock_t t1 = clock();
    clock_t t2 = clock();
    while (t2 - t1 < sec * CLOCKS_PER_SEC)
    {
        t2 = clock();
        printf("... ...");
        printf("\b\b\b\b\b\b\b");
    }
    printf("Finish");
}
