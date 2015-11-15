/* 17.12.1.c -- 1 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45
struct film {
    char title[TSIZE];
    int rating;
    struct film *next;
    struct film *prev;
};

int main(void)
{
    struct film *head = NULL;
    struct film *tail = NULL;
    struct film *prev, *current;
    char input[TSIZE];
    
    puts("Enter first movie title: ");
    while (gets(input) != NULL && input[0] != '\0')
    {
        current = (struct film *)malloc(sizeof(struct film));
        if (head == NULL)
            head = current;
        else
        {
        	prev->next = current;
        	current->prev = prev;
		}
        current->next = NULL;   
        strcpy(current->title, input);
        puts("Enter your rating <0-10>: ");
        scanf("%d", &current->rating);
        while (getchar() != '\n')
            continue;
        puts("Enter next movie title (empty line to stop): ");
        prev = current;
        tail = current;
    }
    
    puts("Display list from head to tail:");
    if (head == NULL)
        puts("No data entered.");
    else
        puts("Here is the movie list: ");
    current = head;
    while (current != NULL)
    {
        printf("Movie: %s  Rating: %d\n", current->title, current->rating);
        current = current->next;
    }
    
    puts("Display list from tail to head:");
    if (tail == NULL)
    	puts("No data entered.");
    else
    	puts("Here is the movie list: ");
    current = tail;
    while (current != NULL)
    {
    	printf("Movie: %s Rating : %d\n", current->title, current->rating);
    	current = current->prev;
	}
	
    current = head;
    while (current != NULL)
    {
        free(current);
        current = current->next;
    }
    printf("Bye!\n");
    
    return 0;
}
