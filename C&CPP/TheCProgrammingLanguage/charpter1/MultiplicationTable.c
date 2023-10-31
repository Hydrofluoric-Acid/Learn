#include <stdio.h>

#define START 1
#define END 9

int main(){
    for(int i=START;i<=END;i++){
        for(int j=START;j<=i;j++){
            printf("%dX%d=%2d\t",j,i,i*j);
            if(j==i){
                printf("\n");
            }
        }
    }
}