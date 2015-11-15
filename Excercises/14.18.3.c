/* 14.18.3.c */
#include <stdio.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100 // max book number
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

void alphabet(struct book *ptrs[], int n);
void mintomax(struct book *ptrs[], int n);
void test(struct book *ptrs[], int n);
int main(void)
{
    struct book library[MAXBKS]; // book struct array
    int count = 0;
    int  index;
    
    printf("Please enter the book title.\n");
    printf("Press [enter] at the satrt of a line to stop.\n");
    while (count < MAXBKS && gets(library[count].title) != NULL
                          && library[count].title[0] != '\0')
    {
        printf("Now enter the author.\n");
        gets(library[count].author);
        printf("Now enter the value.\n");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;
        if (count < MAXBKS)
            printf("Enter the next book.\n");
    }
    
    struct book *stp[count];
    for (int i = 0; i < count; i++)
        stp[i] = &library[i];
        
    if (count > 0)
    {
        printf("Here is the list of your books: \n");
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title,
                                        library[index].author,
                                        library[index].value
                  );

        puts("In alphabetical order: ");
        alphabet(stp, count);
        puts("In value order: ");
        mintomax(stp, count);
    }
    else
        printf("No books? Too bad.\n");
    return 0;
}

void alphabet(struct book *ptrs[], int n)
{
    struct book *temp;
    int top, seek;
    for (top = 0; top < n-1; top++)
        for (seek = top + 1; seek < n; seek++)
        {
            if (strcmp(ptrs[top]->title, ptrs[seek]->title) > 0)
            {
                temp = ptrs[top];
                ptrs[top] = ptrs[seek];
                ptrs[seek] = temp;
            }                
        }
}

void mintomax(struct book *ptrs[], int n)
{
    struct book *temp;
    int seek, top;
    for (top = 0; top < n-1; top++)
        for (seek = top + 1; seek < n; seek++)
        {
            if (ptrs[top]->value > ptrs[seek]->value)
            {
                temp = ptrs[top];
                ptrs[top] = ptrs[seek];
                ptrs[seek] = temp;
            }                
        }
}

