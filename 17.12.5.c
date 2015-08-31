/* 17.12.5.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX 100

typedef struct stack {
    char items[MAX];
    int top;
} Stack;

typedef char Item;

void Initialize(Stack *stack);
bool isEmpty(const Stack *stack);
bool isFull(const Stack *stack);
bool push(Stack *stack, const Item item);
Item pop(Stack *stack);

int main(void)
{
    char ch;
    Stack chars;
    Initialize(&chars);
    puts("Please enter a line of characters.");
    while ((ch = getchar()) != '\n')
    {
        if (!isFull(&chars))
            push(&chars, ch);
        else
        {
            puts("Stack is full, push operation failed.");
            break;
        }
    }
    puts("Now pop them out:");
    while (!isEmpty(&chars))
        printf("%c", pop(&chars));
    
    return 0;    
}

void Initialize(Stack *stack)
{
    if (!isFull(stack))
        stack->top = 0;
}

bool push(Stack *stack, const Item item)
{
    if (!isFull(stack))
    {
        stack->items[stack->top] = item;
        stack->top++;
    }
}

Item pop(Stack *stack)
{
    Item temp;
    if (!isEmpty(stack))
    {
        temp = stack->items[stack->top-1];
        stack->top--;
    }
    return temp;
}

bool isEmpty(const Stack *stack)
{
    return stack->top < 0;
}

bool isFull(const Stack *stack)
{
    return stack->top == MAX;
}


