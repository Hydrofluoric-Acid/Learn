#include <stdio.h>

int main(){
    short a=10;
    int b=10;
    long c=10L;
    long long d=10LL;
    printf("sizeof(a)=%u\n",sizeof(a));//short 2bits
    printf("sizeof(b)=%u\n",sizeof(b));//int 4bits
    printf("sizeof(c)=%u\n",sizeof(c));//long 4bits
    printf("sizeof(d)=%u\n",sizeof(d));//long long 8bits

    unsigned short a2=10u;
    unsigned int b2=10u;
    unsigned long c2=10u;
    unsigned long long d2=10u;
    printf("sizeof(a2)=%u\n",sizeof(a2));//unsigned short 2bits
    printf("sizeof(b2)=%u\n",sizeof(b2));//unsigned int 4bits
    printf("sizeof(c2)=%u\n",sizeof(c2));//unsigned long 4bits
    printf("sizeof(d2)=%u\n",sizeof(d2));//unsigned long long 8bits
}