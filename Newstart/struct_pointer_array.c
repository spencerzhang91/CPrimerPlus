// 2016.3.12
/* This mini program mainly aimed at reviewing how to declaire an array
contains multiple struct pointer
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct person *Person;
struct person {
    char *name;
    int height;
};



int main(void)
{
    int numbers[10];
    for (int i = 0; i < 10; i++)
        scanf("%d", &numbers[i]);
    printf("%d", numbers[3]);

    return 0;
}