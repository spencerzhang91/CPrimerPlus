/* 11.13.11.c */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 81
int cnt_words(char *ptr);
int cnt_upper(char *ptr);
int cnt_lower(char *ptr);
int cnt_punct(char *ptr);
int cnt_digit(char *ptr);

int main(void)
{
    char s[SIZE];
    char temp;
    char *ptr;
    int i;
    int words, upper, lower;
    int punct, digit;
    
    while (1)
    {
        puts("Please enter a string, EOF to quit.");
        for (i = 0; i < SIZE && (temp = getchar()) != EOF; i++)
            s[i] = temp;
        if (i >= SIZE)
        {
            puts("Max character capacity exceeded,"
                 " left over truncated automaticly.");
            s[i-1] = '\0';
        }   
        break;
    }
    s[i] = '\0';
    ptr = s;
    words = cnt_words(ptr);
    upper = cnt_upper(ptr);
    lower = cnt_lower(ptr);
    punct = cnt_punct(ptr);
    digit = cnt_digit(ptr);
    printf("Total words: %d\n"
           "Total upper case words: %d\n"
           "Total lower case words: %d\n"
           "Total punctuation marks: %d\n"
           "Total digits: %d\n",
           words, upper, lower, punct, digit);
    return 0;
}

int cnt_words(char *ptr)
{
    int cnt = 0;
    int inword = 0;
    int i;
    for (i = 0; *(ptr + i) != '\0'; i++)
    {
        if (!isspace(*(ptr + i)) && !inword)
        {
            inword = 1;
            cnt++;
        }
        else if (isspace(*(ptr + i)) && inword)
            inword = 0;
    }
    return cnt;
}

int cnt_upper(char *ptr)
{
    int i;
    int cnt = 0;
    for (i = 0; *(ptr + i) != '\0'; i++)
    {
        if (isupper(*(ptr + i)))
            cnt++;
    }
    return cnt;
}

int cnt_lower(char *ptr)
{
    int i;
    int cnt = 0;
    for (i = 0; *(ptr + i) != '\0'; i++)
    {
        if (islower(*(ptr + i)))
            cnt++;
    }
    return cnt;
}

int cnt_punct(char *ptr)
{
    int i;
    int cnt = 0;
    for (i = 0; *(ptr + i) != '\0'; i++)
    {
        if (ispunct(*(ptr + i)))
            cnt++;
    }
    return cnt;
}

int cnt_digit(char *ptr)
{
    int i;
    int cnt = 0;
    for (i = 0; *(ptr + i) != '\0'; i++)
    {
        if (isdigit(*(ptr + i)))
            cnt++;
    }
    return cnt;
}
