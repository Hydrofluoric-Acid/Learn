#include <stdio.h>

int main(){
    float a=3.14f;
    double b=3.141592653589793238462643383279;
    printf("a=%f\n",a);//float %f
    printf("b=%lf",b);// double %lf
    int f=1;
    printf("%f %lf",f,f);
    return 0;
}