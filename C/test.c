#include "SeqList.h"
int main(){
    SeqList s;
    InitList(&s);
    int e=-9;
    
    ListInsert(&s,1,5);
    GetElem(&s,2,&e);
    DispList(&s);
    printf("length=%d",ListLength(&s));
    printf("get=%d",e);
    return 0;
}