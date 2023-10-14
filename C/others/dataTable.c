#include <stdio.h>

void sumbyrow(int(*arr)[4],int row,int *sum);
void sumbycol(int(*arr)[4],int col,int *sum);
int main(){
    int dataTable[5][4]={0};
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            dataTable[i][j]=i*4+j;
        }
    }
    int(*p)[4]=dataTable;
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
        printf("\t%d",*(*(p+i)+j));
    }
    int select,pos,sum;
    void(*q)();
    
    }
    
}