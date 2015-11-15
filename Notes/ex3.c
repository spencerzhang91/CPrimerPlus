/* ex3.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct food {
    char *name;
    char *origin;
    double *price;
    int *production;
};

void getinfo(struct food *);
void showinfo(const struct food *);
void cleanup(struct food *);

int main(void)
{
    struct food chicken;
    getinfo(&chicken);
    showinfo(&chicken);
    return 0;
}

void getinfo(struct food *pst)
{
    char temp[81];
    double tprice;
    int tpro;
    
    printf("Enter food name:\n");
    gets(temp);
    pst->name = (char *)malloc(strlen(temp) + 1);
    strcpy(pst->name, temp);
    
    printf("Enter food origin:\n");
    gets(temp);
    pst->origin = (char *)malloc(strlen(temp) + 1);
    strcpy(pst->origin, temp);
    
    printf("Enter food price:\n");    
    pst->price = (double *)malloc(sizeof(double));
    scanf("%lf", pst->price);
    
    printf("Enter production:\n");    
    pst->production = (int *)malloc(sizeof(int));
    scanf("%d", pst->production);
}

void showinfo(const struct food *pst)
{
    printf("Total production of %s from %s is %.2lf.\n",
            pst->name, pst->origin, *(pst->price) * *(pst->production));
}

void cleanup(struct food *pst)
{
    free(pst->name);
    free(pst->origin);
    free(pst->price);
    free(pst->production);
}
