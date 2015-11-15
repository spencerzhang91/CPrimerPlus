/* ex2.c */
#include <stdio.h>
#include <string.h>

struct food {
    char name[20];
    char origin[20];
    double price;
    int production;
};

struct food getinfo(void);
void showinfo(struct food);

int main(void)
{
    struct food chicken;
    chicken = getinfo();
    showinfo(chicken);
    return 0;
}

struct food getinfo(void)
{
    struct food temp;
    printf("Enter food name:\n");
    gets(temp.name);
    printf("Enter food origin:\n");
    gets(temp.origin);
    printf("Enter food price:\n");
    scanf("%lf", &temp.price);
    printf("Enter production:\n");
    scanf("%d", &temp.production);
    return temp;
}

void showinfo(struct food info)
{
    printf("Total production of %s from %s is %.2lf.\n",
            info.name, info.origin, info.price * info.production);
}

