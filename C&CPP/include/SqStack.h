#define INIT_SIZE 100
#include<stdbool.h>
#include<stdio.h>

#define INCREMENT 10
typedef int ElemType;
typedef struct s{
    ElemType *base;
    ElemType *top;
    int size;
} SqStack;

bool InitStack(SqStack *S);
bool DestoryStack(SqStack *S);
bool StackEmpty(SqStack *s);
bool Push(SqStack *s,ElemType e);
bool Pop(SqStack *s,ElemType *e);
bool GetTop(SqStack *s,ElemType *e);