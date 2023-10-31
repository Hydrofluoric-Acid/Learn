#include "LinkList.h"
void CreateList(LinkNode* L, Elemtype a[], int n) {
    LinkNode* p = L;
    for (int i = 0; i < n; i++) {
        LinkNode* newNode = (LinkNode*)malloc(sizeof(LinkNode));
        newNode->data = a[i];
        newNode->next = NULL;
        p->next = newNode;
        p = p->next;
    }
}

void InitList(LinkNode** L) {
    *L = (LinkNode*)malloc(sizeof(LinkNode));
    (*L)->next = NULL;
}

void DestroyList(LinkNode** L) {
    LinkNode* p = (*L)->next;
    while (p != NULL) {
        LinkNode* temp = p;
        p = p->next;
        free(temp);
    }
    free(*L);
    *L = NULL;
}

int ListEmpty(LinkNode* L) {
    return L->next == NULL;
}

void DispList(LinkNode* L) {
    LinkNode* p = L->next;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int GetElem(LinkNode* L, int i, Elemtype* p) {
    LinkNode* node = L->next;
    int j = 1;
    while (node != NULL && j < i) {
        node = node->next;
        j++;
    }
    if (node == NULL || j > i)
        return 0;
    *p = node->data;
    return 1;
}

int LocateElem(LinkNode* L, Elemtype* p) {
    LinkNode* node = L->next;
    int i = 1;
    while (node != NULL && node->data != *p) {
        node = node->next;
        i++;
    }
    if (node == NULL)
        return 0;
    return i;
}

int ListInsert(LinkNode* L, int i, Elemtype e) {
    LinkNode* p = L;
    int j = 0;
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    }
    if (p == NULL || j > i - 1)
        return 0;
    LinkNode* newNode = (LinkNode*)malloc(sizeof(LinkNode));
    newNode->data = e;
    newNode->next = p->next;
    p->next = newNode;
    return 1;
}

int ListDelete(LinkNode* L, int i, Elemtype* e) {
    LinkNode* p = L;
    int j = 0;
    while (p->next != NULL && j < i - 1) {
        p = p->next;
        j++;
    }
    if (p->next == NULL || j > i - 1)
        return 0;
    LinkNode* q = p->next;
    *e = q->data;
    p->next = q->next;
    free(q);
    return 1;
}