#include<stdio.h>
#include "../include/LinkList.h"

int main() {
    LinkNode* L;
    InitList(&L);

    int a[] = { 1, 2, 3, 4, 5 };
    CreateList(L, a, 5);
    DispList(L);

    int e;
    GetElem(L, 3, &e);
    printf("The 3rd element is %d\n", e);

    int pos = LocateElem(L, &e);
    if (pos != 0)
        printf("The element %d is located at position %d\n", e, pos);
    else
        printf("The element %d is not found\n", e);

    ListInsert(L, 3, 6);
    DispList(L);

    ListDelete(L, 4, &e);
    printf("The deleted element is %d\n", e);
    DispList(L);

    DestroyList(&L);
    return 0;
}
