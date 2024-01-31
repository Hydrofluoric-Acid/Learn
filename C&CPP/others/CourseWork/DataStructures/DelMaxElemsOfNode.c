#include <stdio.h>
#include "LinkList.h"
void DeleteMaxNode(LinkNode *L) {
    LinkNode *p = L->next;
    Elemtype max = p->data;
    while (p != NULL) {
        if (p->data > max) {
            max = p->data;
        }
        p = p->next;
    }
    p = L;
    while (p->next != NULL) {
        if (p->next->data == max) {
            LinkNode *q = p->next;
            p->next = q->next;
            free(q);
        } else {
            p = p->next;
        }
    }
}

int main() {
    LinkNode *L;
    InitList(&L);

    Elemtype a[] = {1,2,5,3,5,4,5,5,5};
    int n = sizeof(a) / sizeof(a[0]);
    CreateList(L, a, n);

    printf("原始链表：");
    DispList(L);

    DeleteMaxNode(L);

    printf("删除最大结点后的链表：");
    DispList(L);

    DestroyList(&L);

    return 0;
}