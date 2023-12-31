#include<cstdio>
#include<iostream>
using namespace std;
typedef long long LL;
LL pows(LL a,LL b,LL p){
    LL res=1;
    while(b){
        if(b&1){
            res=res*a%p;
        }
        a=a*a%p;
        b>>=1;
    }
    return res;
}
LL pows1(LL a,LL b,LL c){
    if(b==0)return 1%c;
    if(b==1)return a%c;
    LL d=pows1(a,b/2,c);
    d=(d*d)%c;
    if(b%2==0)return d;
    else return (d*a)%c;
}
int main(){
    LL a,b,p;
    cin>>a>>b>>p;
    printf("%lld^%lld mod %lld=%lld",a,b,p,pows1(a,b,p));
    return 0;
}