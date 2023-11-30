#include <stdio.h>

#define MAX 10

int main(){
    
    int b=10;
    const int MIN=1;

    int c=0567;
    int d=0xabc;
    printf("%d %o %x %X",b,c,d,d);
    return 0;
}