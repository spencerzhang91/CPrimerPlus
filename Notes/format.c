/* format.c use funtion sprintf() */
#include <stdio.h>
#define MAX 20
int main(void)
{
    char first[MAX];
    char last[MAX];
    char formal[MAX * 2 + 10];
    double prize;
    
    puts("Enter your first name: ");
    gets(first);
    puts("Enter your last name: ");
    gets(last);
    puts("Enter your prize money: ");
    scanf("%lf", &prize);
    sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize);
    puts(formal);
    
    return 0;
}
