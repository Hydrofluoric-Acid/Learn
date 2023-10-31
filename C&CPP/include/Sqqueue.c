#include "Sqqueue.h"
Bool InitQueue(SqQueue *Q){
    Q->base=(QElemType*)malloc(MAXSIZE*sizeof(QElemType));
    if(!Q->base)return FALSE;
    Q->front=Q->rear=0;
    return TRUE;
}
int QueueLength(SqQueue *Q){
    return (Q->rear-Q->front+MAXSIZE)%MAXSIZE;
}
Bool EnQueue(SqQueue *Q,QElemType e){
    if((Q->rear+1)%MAXSIZE==Q->front)return FALSE;
    Q->base[Q->rear]=e;
    Q->rear=(Q->rear+1)%MAXSIZE;
    return TRUE;
}
Bool DeQueue(SqQueue *Q,QElemType *e){
    if(Q->front==Q->rear)return FALSE;
    *e=Q->base[Q->front];
    Q->front=(Q->front+1)%MAXSIZE;
    return TRUE;
}
Bool QueueEmpty(SqQueue *Q)
{
	if(Q->front==Q->rear){
        return TRUE;
    }
    return FALSE;
}
Bool DestroyQueue(SqQueue *Q){
	if(!Q)return FALSE;
    free(Q);
    return TRUE;
}