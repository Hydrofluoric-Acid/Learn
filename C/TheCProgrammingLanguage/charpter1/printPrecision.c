#include<stdio.h>

int main(){
    int i=40;
    float pi=3.1415926535f;
    printf("|%d|%5d|%-5d|%5.3d|\n",i,i,i,i);
    printf("|%10.3f|%10.3e|%-10g|",pi,pi,pi);
    return 0;
}