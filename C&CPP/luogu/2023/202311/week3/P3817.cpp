#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[100000],x,tmp;
    long long ans=0;
    cin>>n>>x;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=1;i<=n-1;i++){
        if(a[i]+a[i-1]>x){
            tmp=a[i];
            a[i]=x-a[i-1];
            ans+=tmp-a[i];
        }
    }
    cout<<ans;
    return 0;
}