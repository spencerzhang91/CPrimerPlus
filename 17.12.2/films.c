/* list.c */
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

static void CopyToNode(Item item, Node *pnode);

void InitializeList(List *plist)
{
    plist->head = NULL;
    plist->tail = NULL;
}

bool ListIsEmpty(const List *plist)
{
    if (plist->head == NULL)
        return true;
    else
        return false;
}

bool ListIsFull(const List *plist)
{
    Node *pt;
    bool full;
    pt = (Node *)malloc(sizeof(Node));
    if (pt == NULL)
        full = true;
    else
        full = false;
    free(pt);
    
    return full; 
}

unsigned int ListItemCount(const List *plist)
{
    unsigned int count = 0;
    Node *pnode = plist->head;
    while (pnode != NULL)
    {
        ++count;
        pnode = pnode->next;
    }
    return count;
}

bool AddItem(Item item, List *plist)
{
    Node *pnew;
    Node *scan = plist->head;
    
    pnew = (Node *)malloc(sizeof(Node));
    if (pnew == NULL)
        return false;
        
    CopyToNode(item, pnew);
    pnew->next = NULL;
    if (scan == NULL)
        plist->head = pnew;
    else
    {
        while (scan->next != NULL)
            scan = scan->next;
        scan->next = pnew;
    }
    return true;
}

void Traverse(const List *plist, void (*pfun)(Item item))
{
    Node *pnode = plist->head;
    while (pnode != plist->tail)
    {
        (*pfun)(pnode->item);
        pnode = pnode->next;
    }
    (*pfun)(pnode->item);
}

void EmptyTheList(List *plist)
{
    Node *prev, *pscan = plist->head;
    if (pscan == NULL)
        return;
    while (pscan != plist->tail)
    {
        prev = pscan;
        pscan = pscan->next;
        free(prev);
    }
    free(pscan);
}

static void CopyToNode(Item item, Node *pnode)
{
    pnode->item = item;
}
