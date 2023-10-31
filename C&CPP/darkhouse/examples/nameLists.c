#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char buf[1024];
    char *strArray[1024];
    char **pArray;
    int i,arrLen=0;
    while(1){
        scanf("%s",buf);
        if(strcmp(buf,"end")==0){
            break;
        }
        strArray[arrLen]=(char *)malloc(strlen(buf)+1);
        strcpy(strArray[arrLen],buf);
        arrLen++;
    }
    pArray=(char**)malloc(sizeof(char *)* arrLen);
    for(i=0;i<arrLen;i++){
        *(pArray+i)=strArray[i];
    }
    for(i=0;i<arrLen;i++){
        printf("%s\n",*(pArray+i));
    }
    for(i=0;i<arrLen;i++){
        free(strArray[i]);
    }
    free(pArray);
    return 0;
}