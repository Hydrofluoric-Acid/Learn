#include<stdlib.h>
#include<stdio.h>
#include "SeqList.h"

void partition(SeqList *L);
int main(){
    int a[10]={5,1,2,3,4,6,10,8,9,777};
    SeqList L;
    CreateList(&L,a,10);
    printf("before move:");
    DispList(&L);
    printf("\n");
    partition(&L);
    printf("after move:");
    DispList(&L);
}   
void partition(SeqList *L) {
    int i = 0, j = 1;
    while (j < L->length) {
        if (L->head[j] <= L->head[0]) {
            i++;
            int temp = L->head[j];
            for (int k = j; k > i; k--) {
                L->head[k] = L->head[k-1];
            }
            L->head[i] = temp;
        }
        j++;
    }
    int temp = L->head[0];
    for (int k = 0; k < i; k++) {
        L->head[k] = L->head[k+1];
    }
    L->head[i] = temp;
}









/* int baselineNum;
    GetElem(&L,1,&baselineNum);

    printf("before move:");
    DispList(&L);
    printf("\n");
    int temp[10];
    for(int i=0;i<10;i++){
        GetElem(&L,i,temp+i);
    }
    DispList(&L);
    printf("分隔\n");
    for(int *p=temp;p<&temp[9];p++){
        printf("%d ",*p);
    }
    qsort(temp,10,sizeof(int),cmpfunc);
    
    SeqList S;
    InitList(&S);
    CreateList(&S,temp,10);
    printf("after move:");
    DispList(&S); */

