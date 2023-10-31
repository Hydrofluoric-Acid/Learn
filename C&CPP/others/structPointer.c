#include <stdio.h>

int main(){
    struct person{
        char name[20];
        int age;
    }zhangsan{"zhangsan",100},*pzs=&zhangsan;
    printf("%s %d",pzs->name,(*pzs).age);
    struct person people[3]={{"a",1},{"b",20},{"c",3}};//不允许使用struct people people[3]={p1,p2,p3};
    struct person *p=people;
    for(int i=0;i<3;i++){
        printf("%s\n",(*p).name);
        p++;//printf("%s\n",(p+i)->name);
    }
    return 0;
}