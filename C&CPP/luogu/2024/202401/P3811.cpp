#include<iostream>
using namespace std;
typedef long long LL;
const int N=3e6;
LL inv[N]={0,1};
int main(){
    LL n,p;cin>>n>>p;
    cout<<1<<endl;
    for(LL i=2;i<=n;i++){
        inv[i]=(p-p/i)*inv[p%i]%p;
        printf("%lld\n",inv[i]);
    }
    return 0;
}