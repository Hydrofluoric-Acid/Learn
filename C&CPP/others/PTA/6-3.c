#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

BinTree CreatBinTree(); /* 实现细节忽略 */
void PreorderPrintLeaves( BinTree BT );

int main()
{
    BinTree BT = CreatBinTree();
    printf("Leaf nodes are:");
    PreorderPrintLeaves(BT);
    printf("\n");

    return 0;
}
void PreorderPrintLeaves( BinTree BT )
{
    if(BT==NULL)return;
    if(BT->Left==NULL && BT->Right==NULL)printf(" %c",BT->Data);//叶子结点就是左右都为空的结点
    PreorderPrintLeaves(BT->Left);
    PreorderPrintLeaves(BT->Right);
}