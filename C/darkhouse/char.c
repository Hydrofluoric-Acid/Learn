#include <stdio.h>

int main(){
    char ch='a';
    printf("%c's size is %d,its ASCII value is %d",ch,sizeof(ch),ch);
    printf("a convert to A,%c,%c",'a'-32,'a'-' ');//SPACE's ASCII value=32
    return 0;
}