#include<stdio.h>
#include<malloc.h>
typedef struct LNode{
    int data;
    struct LNode *next;
}LinkNode;
typedef int Elemtype;

void CreateList(LinkNode *L,Elemtype a[],int n);
void InitList(LinkNode **L);
void DestroyList(LinkNode **L);
int ListEmpty(LinkNode *L);
void DispList(LinkNode *L);
int GetElem(LinkNode *L,int i,Elemtype *p);
int LocateElem(LinkNode *L,Elemtype *p);
int ListInsert(LinkNode *L,int i,Elemtype e);
int ListDelete(LinkNode *L,int i,Elemtype *e);