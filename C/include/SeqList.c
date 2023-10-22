#include "SeqList.h"
int InitList(SeqList *p){
    p->head=(ElementType*)malloc(INIT_SIZE*sizeof(ElementType));
    if(!p->head){
        return 0;
    }
    /* for(int i=0;i<INIT_SIZE;i++){
        *(p->head+i)=0;
    }  */
    p->head=NULL;
    p->length=0;
    p->capacity=INIT_SIZE;
    return 1;
}

int DestoryList(SeqList *p){
    if(p==NULL){
        return 0;
    }
    free(p->head);
    p->head=NULL;
    return 1;
}

int ListEmpty(SeqList *p){
    return p->length==0;
}

int ListLength(SeqList *p){
    return p->length;
}

int GetElem(SeqList *p,int i,ElementType *e){
    if(i<1||i>p->length){
        return 0;
    }
    *e=*(p->head+i-1);
    return 1;
}

int LocateElem(SeqList *p,ElementType e){
    if(p==NULL)return 0;
    for(int i=0;i<p->length;p++,i++){
        if(*(p->head)==e){
            return i+1;
        }
    }
    return 0;
}

int ListInsert(SeqList *p,int i,ElementType e){
    if(i<0||i>p->length-1){
        return 0;
    }
    if(p->length+1>p->capacity){
        ElementType *newHead=(ElementType*)realloc(p->head,sizeof(ElementType)*INCREMENT);
    if(!newHead){
        return 0;
    }
    p->head=newHead;
    p->capacity+=INCREMENT;
    }
    
    p->length+=1;
    for(int j=p->length;j<i;j--){
        *(p->head+j)=*(p->head+j+1);
    }
    *(p->head+i)=e;
    return 1;
}

int ListDelete(SeqList *p,int i,ElementType e){
    if(i<1||i>p->length){
        return 0;
    }
    p->length-=1;
    for(int j=i;j<p->length;j++){
        *(p->head+j)=*(p->head+j+1);
    }
    *(p->head+p->length-1)=0;
    return 1;
}
void DispList(SeqList *p){
	for(int i=0;i<=p->length;i++){
        printf("%dele",*(p->head+i));
    }
}