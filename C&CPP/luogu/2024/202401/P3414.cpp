#include<iostream>
#include<cstdio>
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
int main(){
    LL n,p=6662333;
    scanf("%lld",&n);
    printf("%lld",pows(2,n-1,p));
    return 0;
}