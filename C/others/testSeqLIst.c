#include "SeqList.h"
int main(){
    SeqList L;
    InitList(&L);
    ListInsert(&L, 1, 1);
    ListInsert(&L, 2, 2);
    ListInsert(&L, 3, 3);
    ListInsert(&L, 4, 4);
    ListInsert(&L, 5, 5);
    DispList(&L);
    int e;
    GetElem(&L, 3, &e);
    printf("%d",e);
    printf("%d",ListEmpty(&L));
    printf("%d",ListLength(&L));
    ListDelete(&L,2,&e);
    DispList(&L);
    printf("\n%d had been deleted",e);
    int index=LocateElem(&L,5);
    printf("%d",index);
    int a[]={1,2,3,4,9}; 
    SeqList s;
    CreateList(&s,a,5);
    DispList(&s);
    return 0;
}