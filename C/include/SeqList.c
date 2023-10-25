#include "SeqList.h"
Bool CreateList(SeqList *p,ElementType a[],int n){
    if(p==NULL)return FALSE;
    InitList(p);
    int size_u=n/10+1;
    p->head=(ElementType*)malloc(sizeof(ElementType)*(n>50?(size_u)*INCREMENT:INIT_SIZE));
    for(int i=0;i<n;i++){
        p->head[i]=a[i];
    }
    p->length+=n;
    p->capacity=n>50?INIT_SIZE+size_u*INCREMENT:INIT_SIZE;
    return TRUE;
} 
Bool InitList(SeqList *p){
    p->head=(ElementType*)malloc(INIT_SIZE*sizeof(ElementType));
    if(!p->head){
        return FALSE;
    }
    p->length=0;
    p->capacity=INIT_SIZE;
    return TRUE;
}

Bool DestoryList(SeqList *p){
    if(p==NULL){
        return FALSE;
    }
    free(p->head);
    p->head=NULL;
    p->length=p->capacity=0;
    return TRUE;
}

Bool ListEmpty(SeqList *p){
    return (p->length==0)?TRUE:FALSE;
}

int ListLength(SeqList *p){
    return p->length;
}

int GetElem(SeqList *p,int i,ElementType *e){
    if(i<1||i>p->length){
        return -1;
    }
    *e=p->head[i-1];
    return 1;
}

int LocateElem(SeqList *p,ElementType e){
    if(p==NULL)return 0;
    for(int i=0;i<p->length;i++){
        if(p->head[i]==e){
            return i+1;
        }
    }
    return 0;
}

Bool ListInsert(SeqList *p, int i, int e) {
    if (i < 1 || i > p->length+1) return FALSE;
    if (p->length >= p->capacity) {
        int *newbase = (ElementType*)realloc(p->head, (p->capacity+1)*sizeof(int));
        if (!newbase) exit(1);
        p->head = newbase;
        p->capacity++;
    }
    for (int j = p->length; j >= i; j--) {
        p->head[j] = p->head[j-1];
    }
    p->head[i-1] = e;
    p->length++;
    return TRUE;
}

Bool ListDelete(SeqList *p,int i,ElementType *e){
    if(i<1||i>p->length){
        return FALSE;
    }
    *e=*(p->head+i-1);
    p->length-=1;
    for(int j=i;j<=p->length;j++){
        *(p->head+j-1)=*(p->head+j);
    }
    return TRUE;
}
void DispList(SeqList *p){
	for(int i=0;i<p->length;i++){
        printf("%d ",p->head[i]);
    }
}