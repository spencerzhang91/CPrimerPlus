//tree.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "wordtree.h"

void InorderTraversal(Node *pnode, void (* pfun)(void *));
void PostorderTraversal(Node *pnode, void (* pfun)(void *));
int PreorderTraversal(Node *pnode );
Node** BinarySearch(Item *pitem, Node **ppnode);
Node* MakeNode(Item item);
int  CompareItem(Item ,Item);

void InitializeTree(Tree * ptree)
{
 ptree->root = NULL;
}

bool TreeIsEmpty(const Tree * ptree)
{
 if (ptree->root == NULL) return true;
 else return false;
}

bool TreeIsFull(void)
{
 Node *p;
 p = malloc( sizeof(Node) ) ;
 if (p == NULL) return true;
 free(p);
 return false;
}

int TreeItemCount(const Tree * ptree)
{
 return PreorderTraversal( ptree->root );//前续遍历：中左右
}

bool AddItem( Item *pitem, Tree * ptree)
{
 if ( *BinarySearch(pitem, &(ptree->root) ) != NULL)
  return false;
 else
 {
  *BinarySearch( pitem, &(ptree->root) ) = MakeNode(*pitem);
  return true;
 }
}

bool InTree( Item * pitem,  Tree * ptree)
{
 if ( *BinarySearch(pitem, &(ptree->root) ) == NULL)
  return false;
 else
  return true;
}

bool DeleteItem( Item * pitem, Tree * ptree)
{
 Node **ppnode;
 Node *middle,*left,*right;
 ppnode = BinarySearch( pitem, &(ptree->root) );
 if (*ppnode == NULL) return false;
 middle = *ppnode;
 left = middle->left;
 right = middle->right;
 if (left == NULL && right ==NULL) //叶子结点
  *ppnode = NULL;
 else if(left == NULL && right !=NULL)
  *ppnode = right;
 else if(left != NULL && right ==NULL)
  *ppnode = left;
 else
 {
  while(left->right != NULL) left = left->right ;
  left->right = right;
  *ppnode = middle->left;
 }
 printf("delete:%s",middle->item.word);
 free(middle);
 return true;
}

void Traverse (const Tree * ptree, void (* pfun)(Node *node))
{
 InorderTraversal(ptree->root, (* pfun) );
}

void DeleteAll(Tree * ptree)
{
 PostorderTraversal(ptree->root, free );
 ptree->root = NULL;
}

bool ChangeItem( Item * pitem, Tree * ptree)
{
 if ( *BinarySearch(pitem, &(ptree->root) ) == NULL)
  return false;
 else
 {
  ( *BinarySearch( pitem, &(ptree->root) ) )->item.times ++;
  return true;
 }
}

bool DisplayItem( Item * pitem, Tree * ptree)
{
 Node *pnode = *BinarySearch(pitem, &(ptree->root) );
 if ( pnode == NULL)
  return false;
 else
 {
  printf("%s has occurred %d times\n", pnode->item.word, pnode->item.times);
  return true;
 }
}

void InorderTraversal( Node *pnode, void (* pfun)(void *) )//中序遍历：左中右
{
 if (pnode != NULL)
 {
  InorderTraversal(pnode->left, (* pfun) );
  (* pfun)(pnode);
  InorderTraversal(pnode->right, (* pfun) );
 }
}

void PostorderTraversal( Node *pnode, void (* pfun)(void *) )//后续遍历：左右中
{
 if (pnode != NULL)
 {
  PostorderTraversal(pnode->left, (* pfun) );
  PostorderTraversal(pnode->right, (* pfun) );
  (* pfun)(pnode);
 }
}

int PreorderTraversal( Node *pnode )//前续遍历：中左右
{
 if (pnode != NULL)
  return 1+PreorderTraversal(pnode->left )+PreorderTraversal(pnode->right );
 else
  return 0;
}

Node** BinarySearch(Item *pitem, Node **ppnode)//二分搜索，搜索到空位或匹配的结点
{
 if( *ppnode == NULL || CompareItem(*pitem, (*ppnode)->item) == 0)
  return ppnode;
 if ( CompareItem(*pitem, (*ppnode)->item) < 0 )
  return BinarySearch(pitem, &( (*ppnode)->left)) ;
 else
  return BinarySearch(pitem, &( (*ppnode)->right)) ; 
}

Node* MakeNode(Item item)
{
 Node *pnew;
 pnew = (Node *)malloc(sizeof(Node));
 pnew->item = item;
 pnew->left = NULL;
 pnew->right = NULL;
 return pnew;
}

int  CompareItem(Item item1, Item item2)
{
 return strcmp(item1.word, item2.word);
}
