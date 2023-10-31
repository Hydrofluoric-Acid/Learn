#include<malloc.h>
#define MAXSIZE 100

typedef enum{TRUE=1,FALSE=0} Bool;
typedef int QElemType;
typedef struct SqQueue{
    QElemType *base;
    int front;
    int rear;
} SqQueue;
Bool InitQueue(SqQueue *Q);
int QueueLength(SqQueue *Q);
Bool EnQueue(SqQueue *Q,QElemType e);
Bool DeQueue(SqQueue *Q,QElemType *e);
Bool DestroyQueue(SqQueue *q);
Bool QueueEmpty(SqQueue *Q);
