#include<iostream>
#define MAX_TREE_SIZE 100
typedef int TElemType;
typedef struct PTNode{
    TElemType data;
    int parent;
}PTNode;
typedef struct{
    PTNode nodes[MAX_TREE_SIZE];//节点数组
    int r,n;//根的位置和节点数
}PTree;