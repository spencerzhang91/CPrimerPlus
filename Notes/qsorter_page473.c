/* qsorter.c -- use qsort() function to sort an array */
#include <stdio.h>
#include <stdlib.h>
#define NUM 40

struct names {
    char first[40];
    char last[40];
};

void showarray(const struct names ar[], int n);
int mycomp(const void *p1, const void *p2);

int main(void)
{
    struct names staff[3] = {
        {"James", "Bond"},
        {"Jason", "Borne"},
        {"Charley", "Brown"},
    };
    
    puts("Random list: ");
    showarray(vals, NUM);
    qsort(vals, NUM, sizeof(struct names), mycomp);
    puts("\nSorted list: ");
    showarray(vals, NUM);
    return 0;
}

void showarray(const struct names ar[], int n)
{
    int index;
    for (index = 0; index < n; index++)
    {
        printf("%s %s ", ar[index].first, ar[index].last);
        if (index % 6 == 5)
            putchar('\n');
    }
    if (index % 6 != 0)
        putchar('\n');
}

int mycomp(const void *p1, const void *p2)
{
    /* need to use double pointer */
    const struct names *a1 = (const double *)p1;
    const struct names *a2 = (const double *)p2;
    int res;
    res = strcmp(a1->last, a2->last);
    
    if (res != 0)
        return res;
    
    else
        return strcmp(a1->last, a2->last);
}
