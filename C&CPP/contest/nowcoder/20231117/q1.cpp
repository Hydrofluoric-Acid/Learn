#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,a[100],ans=0;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]<x){
            ans+=a[i];
        }
    }
    cout<<ans;
    return 0;
}