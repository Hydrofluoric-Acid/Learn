#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0,tmp=0;
    cin>>n;
    int a[n+1]={0};
    a[n+1]=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]+1==a[i+1]){
            tmp+=1;
            ans=max(ans,tmp);
        }else{
            tmp=0;
        }
    }
    cout<<ans+1;
    return 0;
}