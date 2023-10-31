#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define INIT_SIZE 50
#define INCREMENT 10

typedef int ElementType;

typedef struct MySeqList{
    ElementType *head;
    unsigned int length;
    unsigned int capacity;
} SeqList;

typedef enum {TRUE=1,FALSE=0} Bool;

Bool CreateList(SeqList *p,ElementType a[],int n);
Bool InitList(SeqList *p);
Bool DestoryList(SeqList *p);
Bool ListEmpty(SeqList *p);
int ListLength(SeqList *p);
int GetElem(SeqList *p, int i, ElementType *e);
int LocateElem(SeqList *p, ElementType e);
Bool ListInsert(SeqList *p, int i, ElementType e);
Bool ListDelete(SeqList *p, int i, ElementType *e);
void DispList(SeqList *p);