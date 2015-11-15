/* fund3.c -- use struct itself as a parameter */
#include <stdio.h>
#define FUNDLEN 50

struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(struct funds moolah);
int main(void)
{
    struct funds Garry = {
        "HSBC",
        1000.00,
        "Pingan",
        1000.00
    };
    
    printf("Garry has a total of %.2f.\n", sum(Garry));
    
    return 0;
}

double sum(struct funds moolah)
{
    return (moolah.bankfund + moolah.savefund);
}
