/* a possible definition of tree structure in C */
/* wordtree.h */
#ifndef _TREE_H_
#define _TREE_H_

#define MAX 30
#include <stdbool.h>

/* replaceable item definition */
typedef struct item {
    char word[MAX];
    int times;
} Item;

typedef struct node {
    Item item;
    struct node *left;
    struct node *right;
} Node;

typedef struct tree {
    Node *root;
    int size;
} Tree;

void InitializeTree(Tree *ptree);
bool TreeIsEmpty(const Tree *ptree);
bool TreeIsFull(const Tree *ptree);
int TreeItemCount(const Tree *ptree);
bool AddItem(const Item *pi, Tree *ptree);
bool InTree(const Item *pi, const Tree *ptree);
bool DeleteItem(const Item *pi, Tree *ptree);
void Traverse(const Tree *ptree, void (*pfun)(Item item));
void DeleteAll(Tree *ptree);
bool ChangeItem(Item *pi, Tree *ptree);
bool DisplayItem(Item *pi, Tree *ptree);

#endif


