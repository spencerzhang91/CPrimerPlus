/* 14.18.8.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 40
#define SIZE 12

struct seat {
    char code;
    int sold;
    char first[LEN];
    char last[LEN];
};

void showmenu(void);
int shownumber(struct seat **ptr);
void empty_list(struct seat **ptr);
void sortedlist(struct seat **ptr);
void assignseat(struct seat **ptr);
void deleteseat(struct seat **ptr);
void readfile(struct seat *ptr, char *filename);
void writefile(struct seat *ptr, char *filename);

int main(void)
{
    int seats = SIZE;
    char command[LEN];
    struct seat plane[SIZE];
    struct seat *pp[SIZE];
    
    for (int i = 0; i < SIZE; i++)  // initialize
    {
        plane[i].code = 'A' + i;
        plane[i].sold = 0;
    }
    
    readfile(plane, "data.dat");    // load file and override initialization
    
    for (int i = 0; i < SIZE; i++)  // temporary array of struct pointer initialization
        pp[i] = &plane[i];
    int flag = 1;
    while (flag == 1) 
    {
        showmenu();
        gets(command);
        switch (command[0])
        {
            case 'a': shownumber(pp); break;
            case 'b': empty_list(pp); break;
            case 'c': sortedlist(pp); break;
            case 'd': assignseat(pp); break;
            case 'e': deleteseat(pp); break;
            case 'f': flag = 0; break;
            default: puts("choose a/b/c/d/e/f");
        } 
    }
    writefile(plane, "data.dat");
    puts("Good bye");
    return 0;
}

void showmenu(void)
{
    printf("To choose a function, enter its letter lable:\n");
    printf("a) Show number of empty seats\n");
    printf("b) Show list of empty seats\n");
    printf("c) Show alphabetical list of seats\n");
    printf("d) Assign a customer to seat assignment\n");
    printf("e) Delete a seat assignment\n");
    printf("f) Quit\n");
}

int shownumber(struct seat **ptr)
{
    int left = SIZE;
    for (int i = 0; i < SIZE; i++)
        if (ptr[i]->sold == 1)
            left -= 1;
    printf("There are %d seats still available.\n", left);
    return left; 
}

void empty_list(struct seat **ptr)
{
    for (int i = 0; i < SIZE; i++)
        if (ptr[i]->sold == 0)
            printf("%c\n", ptr[i]->code);
}

void sortedlist(struct seat **ptr)
{
    struct seat *temp;
    for (int i = 0; i < SIZE - 1; i++)
        for (int j = i + 1; j < SIZE; j++)
            if (ptr[i]->code > ptr[j]->code)
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
    puts("Alphabetical list of seats:");
    for (int i = 0; i < SIZE; i++)
        printf("%c\n", ptr[i]->code);
}

void assignseat(struct seat **ptr)
{
    if (shownumber(ptr) == 0)
        puts("Sorry, all tickets sold out.");
    else
    {
        int i;
        for (i = 0; i < SIZE; i++)
            if (ptr[i]->sold == 0)
            {
                puts("Please enter passenger's first name:");
                scanf("%s", &ptr[i]->first); getchar();
                puts("Please enter passenger's last name:");
                scanf("%s", &ptr[i]->last); getchar();
                ptr[i]->sold = 1;
                break;
            }
        printf("%s %s has booked seat %c.\n", ptr[i]->first,
                                              ptr[i]->last,
                                              ptr[i]->code);
    }
}

void deleteseat(struct seat **ptr)
{
    char code;
    char tfirst[LEN], tlast[LEN];
    puts("Please enter your seat code:");
    scanf("%c", &code); getchar();
    for (int i = 0; i < SIZE; i++)
        if (ptr[i]->code == code)
        {
            strcpy(tfirst, ptr[i]->first);
            strcpy(ptr[i]->first, "");
            strcpy(tlast, ptr[i]->last);
            strcpy(ptr[i]->last, "");
            ptr[i]->sold = 0;
            break;
        }
    printf("%s %s, your assignment is canceled.\n", tfirst, tlast);    
}

void readfile(struct seat *p, char *filename)
{
    FILE *ps;
    int count = 0;
    if ((ps = fopen(filename, "a+b")) == NULL)
    {
        printf("Can't open %s file\n", filename);
        exit(1);
    }
    rewind(ps);
    while (count < SIZE && fread(p+count, sizeof(struct seat), 1, ps) == 1)
        count++;
    if (ferror(ps) != 0)
        fprintf(stderr, "Error in loading structure data\n");
    fclose(ps);
}

void writefile(struct seat *p, char *filename)
{
    FILE *ps;
    ps = fopen(filename, "r+b");
    fwrite(p, sizeof(struct seat), SIZE, ps);
    if (ferror(ps) != 0)
        fprintf(stderr, "Error in saving structure data\n");
    fclose(ps);
}
