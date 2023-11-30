#include<bits/stdc++.h>
using namespace std;
long long n,m,a[1000000];
bool P(int h){
    long long tot=0;
    for(int i=1;i<=n;i++){
        if(a[i]>h){
            tot+=a[i]-h;
        }
    }
    return tot>=m;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int ans,mid,L=0,R=1e9;
    while(L<=R){
        mid=L+(R-L)/2;
        if(P(mid)){
            ans=mid,L=mid+1;
        }else{
            R=mid-1;
        }
    }
    cout<<ans;
    return 0;
}