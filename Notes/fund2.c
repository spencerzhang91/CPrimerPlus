/* fund2.c -- pass a pointer point to a struct */
#include <stdio.h>
#define FUNDLEN 50

struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(const struct funds *);

int main(void)
{
    struct funds Allen = {
        "Garlic-Mellon Bank",
        558425.00,
        "Merry Savings and Loan",
        4587.00
    };
    
    struct funds *money = &Allen;
    printf("Alen has a totoal of %.2f\n",
            sum(money));
    return 0;
}

double sum(const struct funds *money)
{
    return (money->bankfund + money->savefund);
    //return ((*money).bankfund + (*money).savefund); is equivalent
}
