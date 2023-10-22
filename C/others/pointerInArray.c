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
    /* int *pA=&A[0][0][0];                      取第一个元素的地址
    int *pA=(int*)A[0];                     类型强制转换
    int *pA=(int*)A; 类型强制转换
    int* pA=A[0][0]       三维数组中这几个指针等价                        
    */
    return 0;
}
void test(int a[]){
    for(int i=0;i<10;i++){
        a[i]=0;
    }
}