/* booksave.c -- save struct contents into a file */
#include <stdio.h>
#include <stdlib.h>
#define MAX 40
#define MAXBKS 10
struct book {
    char title[MAX];
    char author[MAX];
    float value;
};

int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index, filecount;
    FILE *pbooks;
    int size = sizeof(struct book);
    
    if ((pbooks = fopen("book.dat", "a+b")) == NULL)
    {
        fputs("Can't open book.dat file.", stderr);
        exit(1);
    }
    rewind(pbooks);
    while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
    {
        if (count == 0)
            puts("Current contents of book.dat: ");
        printf("%s by %s: $%.2f\n", library[count].title,
                library[count].author, library[count].value);
        count++;
    }
    filecount = count;
    if (count == MAXBKS)
    {
        fputs("The book.dat file is full.", stderr);
        exit(2);
    }
    
    puts("Please enter new book titles.");
    puts("Press [enter] at the start of line to stop.");
    while (count < MAXBKS && gets(library[count].title) != NULL
                          && library[count].title[0] != '\0')
    {
        puts("Now enter the author.");
        gets(library[count].author);
        puts("Now enter the value.");
        scanf("%f", &library[count].value);
        while (getchar() != '\n')
            continue;
        if (count++ < MAXBKS)
            puts("Enter the next title.");
    }
    printf("count: %d\n", count);
    if (count > 0)
    {
        puts("Here is the list of your books: ");
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title,
                    library[index].author, library[index].value);
        fwrite(&library[filecount], size, count - filecount, pbooks);
    }
    else
        puts("No books? Too bad.\n");
    puts("Bye.\n");
    fclose(pbooks);
    
    return 0; 
}
