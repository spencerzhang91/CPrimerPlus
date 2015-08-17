/* 14.18.7.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10
int  count = 0;
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
void read_file(struct book *p, char *filename);
void display(struct book *p);
void change(struct book *p);
void reduce(struct book *p);
void add(struct book *p);
void write_file(struct book *p, char *filename);

int main(void)
{
    struct book library[MAXBKS];
    char command[10];
    read_file(library, "book.dat");
    printf("seletct the functions:\n");
    printf("d) display all book     c) change a book\n");
    printf("r) reduce a book        a) add books\n");
    printf("other: save and quit\n");
    while (1)
    {
        gets(command);
        switch (command[0])
        {
            case 'd': display(library); break;
            case 'c': change(library); break;
            case 'r': reduce(library); break;
            case 'a': add(library); break;
            default: write_file(library, "book.dat"); return 0;
        }
        printf("seletct: d/c/r/a/other:\n");
    }
}

void read_file(struct book *p, char *filename)
{
    FILE *pb;
    if ((pb = fopen(filename, "a+b")) == NULL)
    {
        printf("Can't open %s file\n", filename);
        exit(1);
    }
    rewind(pb);
    while (count < MAXBKS && fread(p+count, sizeof(struct book), 1, pb) == 1)
        count++;
    fclose(pb);
    printf("read %s successfully! There are %d books.\n", filename, count);
}

void display(struct book *p)
{
    if (count == 0)
        puts("There is no book.");
    printf("Book list for %d books: \n", count);
    for (int i = 0; i < count; i++)
        printf("%s by %s: $%.2f\n", p[i].title, p[i].author, p[i].value);
}

void change(struct book *p)
{
    char title[MAXTITL];
    puts("Input the title of book which you want to change:");
    gets(title);
    for (int i = 0; i < count; i++)
        if (strcmp(p[i].title, title) == 0)
        {
            puts("Please enter new book title:");
            gets(p[i].title);
            puts("Now enter the author:");
            gets(p[i].author);
            puts("Now enter the value:");
            scanf("%f", &p[i].value);
            getchar();
            puts("The book has been changed!");
        }
    printf("Error! %s is not in the list!\n", title);
}

void reduce(struct book *p)
{
    char title[MAXTITL];
    if (count == 0)
    {
        puts("Error! The book list is empty!");
        return;
    }
    puts("Input the name of the book which you want to change:");
    gets(title);
    for (int i = 0; i < count; i++)
        if (strcmp(p[i].title, title) == 0)
        {
            p[i] = p[count - 1]; // move struct at [count-1] to [i]
            strcpy(p[count - 1].title, "");
            strcpy(p[count - 1].author, "");
            p[count - 1].value = 0;
            count--;
            printf("%s has been removed from list\n", title);
        }
    printf("Error! %s is not in the list.\n", title);
}

void add(struct book *p)
{
    if (count == MAXBKS)
    {
        fputs("Error! The book.dat file is full.\n", stderr);
        exit(1);
    }
    puts("Please enter new book titles.");
    puts("Press [enter] at the start of line to stop.");
    while (count < MAXBKS && gets(p[count].title) != NULL
                          && p[count].title[0] != '\0')
    {
        puts("Now enter the author.");
        gets(p[count].author);
        puts("Now enter the value.");
        scanf("%f", &p[count].value);
        while (getchar() != '\n')
            continue;
        if (count++ < MAXBKS)
            puts("Enter the next title.");
        else
            puts("The book.dat file is full.");
    }
}

void write_file(struct book *p, char *str)
{
    FILE *pb;
    pb = fopen(str, "r+b");
    fwrite(p, sizeof(struct book), count, pb);
    fclose(pb);
}


