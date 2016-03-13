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
    int *numbers[5];
    for (int i = 0; i < 5; i++)
        numbers[i] = (int *)malloc(sizeof(int));
    for (int i = 0; i < 5; i++)
        scanf("%d", numbers[i]);

    printf("output:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", *(numbers[i]));

    return 0;
}