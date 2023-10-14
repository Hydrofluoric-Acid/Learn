#include <stdio.h>

int b[10];//全局数组，部分元素初始化或未初始化，未初始化元素为0

int main(){
    b[1]=6;
    int a[10];
    a[0]=1;//在main函数内定义，为局部数组，未初始化的元素值随机
    for(int i=0;i<10;i++){
        printf("a[%d]=%d",i,b[i]);
    }
    // char c1[]={'s','t','r'};乱码，没有\0结束符
    char c1[]={'s','t','r','\0'};//未指定长度，需加\0
    printf("%s\n",c1);
    char c2[3]={'a','b','c'};//指定长度，无需加\0
    char c3[]="today";

    char d1[2];
    char d2[2];
    char d3[2];
    scanf("%s%s%s",&d1,&d2,&d3);//输入a b c，需要一个额外的字符空间用于存储字符串结束符 \0
    printf("%d %s %s",d1,d2,d3);
    return 0;
}