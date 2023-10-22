#include <stdio.h>
#include <malloc.h>

#define INIT_SIZE 50
#define INCREMENT 10

typedef int ElementType;

typedef struct MySeqList{
    ElementType *head;
    unsigned int length;
    unsigned int capacity;
} SeqList;

int InitList(SeqList *p);
int DestoryList(SeqList *p);
int ListEmpty(SeqList *p);
int ListLength(SeqList *p);
int GetElem(SeqList *p, int i, ElementType *e);
int LocateElem(SeqList *p, ElementType e);
int ListInsert(SeqList *p, int i, ElementType e);
int ListDelete(SeqList *p, int i, ElementType e);
void DispList(SeqList *p);