// ways to initialize struct
#include <stdio.h>

struct person {
    char *name;
    int height;
};

void display(struct person people);
struct person person_gen(char *name, int height);
struct person person_gen2(char *name, int height);

int main(void)
{
    // Way 1: initialize after declaration
    struct person spencer;
    spencer = (struct person){.name = "Spencer", .height = 185};
    display(spencer);
    //or:
    spencer = (struct person){"Spencer2", 186};
    // Way 2: initialize at declaration
    struct person james = {"James", 174};
    display(james);
    // Way 3: use a function
    struct person abby;
    abby = person_gen("Abby", 165);
    display(abby);
    // Way 4: On the text book C Primer Plus
    struct person larry;
    larry.name = "Larry";
    larry.height = 170;
    display(larry);
    // Way 5: or you can also do this...
    struct person wess;
    wess = person_gen2("Wess", 190);
    display(wess);

    return 0;
}

void display(struct person people)
{
    printf("%s is %d cm tall.\n", people.name, people.height);
}

struct person person_gen(char *name, int height)
{
    return (struct person){.name = name, .height = height};
}

struct person person_gen2(char *name, int height)
{
    struct person temp = {name, height};
    return temp;
}