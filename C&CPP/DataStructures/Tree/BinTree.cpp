#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

#define QUEUE_SIZE 50
typedef char DATA;
typedef struct {
    DATA data;
    ChainTree *left,*right;
}ChainTree;

ChainTree* BinTreeInit(ChainTree *node){
    if(node!=NULL){
        return node;
    }else{
        return NULL;
    }
}

bool BinTreeAddNode(ChainTree *bt,ChainTree *node,int n){
    if(bt==NULL)return false;
    if(n==1){
        if(bt->left){
            return false;
        }else{
            bt->left=node;
        }
    }else if(n==2){
        if(bt->right){
            return false;
        }else{
            bt->right=node;
        }
    }else return false;
    return true;
}

ChainTree *BinTreeLeft(ChainTree *bt){
    if(bt){
        return bt->left;
    }else{
        return NULL;
    }
}

ChainTree *BinTreeRight(ChainTree *bt){
    if(bt){
        return bt->right;
    }else{
        return NULL;
    }
}

bool BinTreeIsEmpty(ChainTree *bt){
    if(bt)return false;
    return true;
}

int BinTreeDepth(ChainTree *bt){
    int dep1,dep2;
    if(bt==NULL)return 0;
    else{
        dep1=BinTreeDepth(bt->left);
        dep2=BinTreeDepth(bt->right);
        return max(dep1+1,dep2+1);
    }
}