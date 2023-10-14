#include <stdio.h>

#define N 10
void test(int a[]);
int main(){
    int a[N]={1,2,3,4,5,6,7,8,9,0},sum,*p;
    sum=0;
    for(p=&a[0];p<&a[N];p++){
        sum+=*p;
    }
    printf("%d",sum);
    sum=0;
    p=&a[0];
    while (p<&a[N]){
        sum+=*p++;
    }
    printf("%d",sum);
    sum=0;
    test(a);
    for(p=a;p<a+N;p++){
        sum+=*p;
    }
    //reverse numbers
    for(p=a+N-1;p>=a;p--){
        printf("%d,",*p);
    }
    return 0;
}
void test(int a[]){
    for(int i=0;i<10;i++){
        a[i]=0;
    }
}