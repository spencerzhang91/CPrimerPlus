/* ex1.c */
#include <stdio.h>
#include <string.h>

struct food {
    char name[20];
    char origin[20];
    double price;
    int production;
};

void getinfo(struct food *);
void showinfo(const struct food *);

int main(void)
{
    struct food chiken;
    getinfo(&chiken);
    showinfo(&chiken);
    return 0;
}

void getinfo(struct food *pst)
{
    printf("Enter food name:\n");
    gets(pst->name);
    printf("Enter food origin:\n");
    gets(pst->origin);
    printf("Enter food price:\n");
    scanf("%lf", &pst->price);
    printf("Enter production:\n");
    scanf("%d", &pst->production);
}

void showinfo(const struct food *pst)
{
    printf("Total production of %s from %s is %.2lf.\n",
            pst->name, pst->origin, pst->price * pst->production);
}

