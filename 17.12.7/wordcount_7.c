/* petclub.c -- using binary search tree */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "tree.h"

char menu(void);
void showwords(const Tree *pt);
void findpet(const Tree *pt);
void printitem(Item item);
void lowercase(char *str);
bool file_to_tree(Tree *pt, char *filename);

int main(void)
{
    Tree words;
    char choice;
    
    InitializeTree(&words);
    while ((choice = menu()) != 'q')
    {
        switch(choice)
        {
            case 'd': showwords(&pets);
                      break;
            case 'f': findword(&pets);
                      break;
            default : puts("Switching error");
        }
    }
    DeleteAll(&pets);
    puts("Bye.");
    
    return 0;
}

char menu(void)
{
    int ch;
    
    puts("Word Frequecy Calculating Program");
    puts("Enter the letter corresponding to your choice: ");
    puts("d) display all        f) find a word");
    puts("q) quit");
    while ((ch = getchar()) != EOF)
    {
        while (getchar() != '\n')
            continue;
        ch = tolower(ch);
        if (strchr("dfq", ch) == NULL)
            puts("Please enter an d, f or q: ");
        else
            break;
    }
    if (ch == EOF)
        ch = 'q';
        
    return ch;
}

void addword(Tree *pt)
{
    Item temp;
    
    if (TreeIsFull(pt))
        puts("The word tree is full!");
    else
    {
        puts("Please enter name of pet: ");
        gets(temp.petname);
        puts("Please enter kind of pet: ");
        gets(temp.petkind);
        uppercase(temp.petname);
        uppercase(temp.petkind);
        AddItem(&temp, pt);
    }
}

void showwords(const Tree *pt)
{
    if (TreeIsEmpty(pt))
        puts("No entries!");
    else
        Traverse(pt, printitem);
}

void printitem(Item item)
{
    printf("%-19s frequecy: %d\n", item.word,
                                   item.frequecy);
}

void findword(const Tree *pt)// need to rewrite
{
    Item temp;
    if (TreeIsEmpty(pt))
    {
        puts("No entries!");
        return;
    }
    
    puts("Please enter name of pet you wish to find: ");
    gets(temp.petname);
    puts("Please enter kind of pet you wish to find: ");
    gets(temp.petkind);
    uppercase(temp.petkind);
    uppercase(temp.petname);
    printf("%s the %s ", temp.petname, temp.petkind);
    if (InTree(&temp, pt))
        printf("is a member.\n");
    else
        printf("is not a member.\n");
}

void lowercase(char *str)
{
    while (*str)
    {
        if (ispunct(*str)
            *str = '\0';
        *str = tolower(*str);
        str++;
    }
}

bool readfile_to_tree(Tree *ptree, char *filename) // yet finished
{
    FILE *fp;
    if ((fp = fopen(filename, "a+") == NULL)
    {
        fprintf(stderr, "Fail to open file %s.\n", filename);
        return false;
    }
    
}
