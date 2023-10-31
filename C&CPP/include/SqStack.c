#include<malloc.h>
#include "SqStack.h"
bool InitStack(SqStack *S) {
    S->base = (ElemType*)malloc(INIT_SIZE * sizeof(ElemType));
    if (!S->base) {
        return false;
    }
    S->top = S->base;
    S->size = INIT_SIZE;
    return true;
}

bool DestoryStack(SqStack *S) {
    free(S->base);
    S->base = NULL;
    S->top = NULL;
    S->size = 0;
    return true;
}

bool StackEmpty(SqStack *s) {
    return s->top == s->base;
}

bool Push(SqStack *s, ElemType e) {
    if (s->top - s->base >= s->size) {  // 栈满，需要扩容
        s->base = (ElemType*)realloc(s->base,
        (s->size + INCREMENT) * sizeof(ElemType));
        if (!s->base) {
            return false;
        }
        s->top = s->base + s->size;
        s->size += INCREMENT;
    }
    *(s->top++) = e;
    return true;
}

bool Pop(SqStack *s, ElemType *e) {
    if (StackEmpty(s)) {
        return false;
    }
    *e = *(--s->top);
    return true;
}

bool GetTop(SqStack *s, ElemType *e) {
    if (StackEmpty(s)) {
        return false;
    }
    *e = *(s->top - 1);
    return true;
}