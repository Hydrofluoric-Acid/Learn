#include<bits/stdc++.h>
using namespace std;
double a,b,c,d;
double f(double x){
    return a*x*x*x+b*x*x+c*x+d;
}
void gen(double L,double R){
    double l=L,r=R,mid;
    while(r-l>1e-4){
        mid=(l+r)/2;
        /* if(fabs(f(mid))<1e-4){
            printf("%.2lf",mid);
        }else */ if(f(mid)*f(l)<0){
            r=mid;
        }else{
            l=mid;
        }
    }
    printf("%.2lf ",mid);
}
int main(){
    cin>>a>>b>>c>>d;
    for(int i=-100;i<=100;i++){
        double l=i,r=i+1;
        if(fabs(f(l))<0.0001)printf("%.2lf ",l);
        else if(fabs(f(r))<0.0001)continue;
        else if(f(l)*f(r)<0){
            gen(l,r);
        }
    }
}