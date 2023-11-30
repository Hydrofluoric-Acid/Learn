#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[100],b[100],g[100],k[100],ans=-1,x,y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>g[i]>>k[i];
    }
    cin>>x>>y;
    for(int i=n-1;i>=0;i--){
        if(x>=a[i]&&x<=a[i]+g[i]&&y>=b[i]&&y<=b[i]+k[i]){
            ans=i+1;
            break;
        }
    }
    cout<<ans;
}