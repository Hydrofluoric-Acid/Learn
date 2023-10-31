#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long s=0,tmp=1;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        s+=(tmp*=i);
    }
    cout<<s;/* long long n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        long long factor=1;
        for(int j=1;j<=i;j++){
            factor*=j;
        }
        ans+=factor;
    }
    cout<<ans<<endl; */
    return 0;
}/*  */