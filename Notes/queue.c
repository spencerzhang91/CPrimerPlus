/* queue.c */
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

static void copytonode(Item item, Node *pn);
static void copytoitem(Node *pn, Item *pi);

void InitializeQueue(Queue *pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}

bool QueueIsFull(const Queue *pq)
{
    return pq->items == MAXQUEUE;
}

bool QueueIsEmpty(const Queue *pq)
{
    return pq->items == 0;
}

int QueueItemCount(const Queue *pq)
{
    return pq->items;
}

bool EnQueue(Item item, Queue *pq)
{
    Node *pnew;
    
    if (QueueIsFull(pq))
        return false;
    pnew = (Node *)malloc(sizeof(Node));
    if (pnew == NULL)
    {
        fprintf(stderr, "Unable to allocate memory!\n");
        exit(1);
    }
    copytonode(item, pnew);
    pnew->next = NULL;
    if (QueueIsEmpty(pq))
        pq->front = pnew;
    else
        pq->rear->next = pnew;
    pq->rear = pnew;
    return true;
}

bool DeQueue(Item *pitem, Queue *pq)
{
    Node *pt;
    if (QueueIsEmpty(pq))
        return false;
    copytoitem(pq->front, pitem);
    pt = pq->front;
    pq->front = pq->front->next;
    free(pt);
    pq->items--;
    if (pq->items == 0)
        pq->rear =NULL;
    return true;
}

void EmptyTheQueue(Queue *pq)
{
    Item dummy;
    while (!QueueIsEmpty(pq))
        DeQueue(&dummy, pq);
}

static void copytonode(Item item, Node *pn)
{
    pn->item = item;
}

static void copytoitem(Node *pn, Item *pi)
{
    *pi = pn->item;
}










