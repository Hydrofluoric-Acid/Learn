#include <stdio.h>
//写出scanf内部可能构造
int main(){
    int c;
    /* c=getchar();
    while (c!=EOF){
        putchar(c);
        c=getchar();
    } */
    while((c=getchar()!=EOF)){
        putchar(c);
    }
}