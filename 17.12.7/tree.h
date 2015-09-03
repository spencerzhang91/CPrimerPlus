/* tree.h -- binary search tree */
#ifndef _TREE_H_
#define _TREE_H_
#include <stdbool.h>

typedef struct item {
    char petname[20];
    char petkind[20];
} Item;

#define MAXITEMS 30

typedef struct node {
    Item item;
    struct node *left;                  // pointer to left branch
    struct node *right;                 // pointer to right branch
} Node;

typedef struct tree {
    Node *root;                         // pointer to root
    int size;                           // nodes in a tree
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
#endif
