#include <stdio.h>
float area(float a,float b);
int main(){
    float a,b,s;
    scanf("%f %f",&a,&b);
    if(a<=0||b<=0){
        printf("不存在");
    }else{
        s=area(a,b);
        printf("矩形面积为：%f",s);
    }
    return 0;
}
float area(float a,float b){
    return a*b;
}