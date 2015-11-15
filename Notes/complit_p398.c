/* complit.c */
#include <stdio.h>
#define MAX 41


struct book {
    char title[MAX];
    char author[MAX];
    float value;
};

int main(void)
{
    struct book readfirst;
    int score;
    printf("Enter test score: \n");
    scanf("%d", &score);
    
    if (score >= 84)
        readfirst = (struct book){"Crime and Punishment",
                                  "Fyodor Dostoyevsky",
                                   9.99};
    else
        readfirst = (struct book){"Mr.Bouncy's Nice Hat",
                                  "Fred Winsome",
                                  5.99};
    printf("Your assigned reading: \n");
    printf("%s by %s: $%.2f\n", readfirst.title,
            readfirst.author, readfirst.value);
    return 0;
}
