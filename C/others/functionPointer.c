/* 
int* fun(int);返回值为int*类型的函数
int (*fun)(int);指向函数的指针fun，返回值是int
 */
#include <stdio.h>
#include <string.h>

int add(int,int);
typedef int (*fun)(int,int);//typedef struct sb{}shazi; 
int computer(fun f,int n1,int n2);
int sub(int,int);

int main(){
    char sz1[20]="I Love";
    char sz2[20]="China";
    char* (*pfun)(char*,const char*);
    pfun=strcat; 
    //char* (*pfun)(char*,const char*)=strcat;
    (*pfun)(sz1,sz2);
    printf("%s",sz1);
    pfun=&strcpy;
    pfun(sz1,sz2);
    printf("%s",sz1);
    //使用typedef为函数指针定义别名
    /* fun add1;
    add1=add;//略写成fun add1=add */
    printf("%d",add(1,2));

    //传递函数指针9,10,29,33,36
    printf("\n%d",computer(add,1,3));
    

    //函数指针数组
    int (*fun[2])(int,int)={add,sub};//调用：fun[0](1,5)
    // fun f[2]={add,sub};运用了typedef容易理解
    return 0;
}
int add(int i,int j){
    return i+j;
}
int computer(fun f,int n1,int n2){
        return f(n1,n2);
    }
int sub(int i,int j){
    return i-j;
}
fun select(char opcode){//fun类型指针，特点：int (*fun)(int,int)
    switch(opcode){
        case '+':return add;
        case '-':return sub;
    }
}
int evaluate(char opcode,int m,int n){
    fun f=select(opcode);
    return f(m,n);
}