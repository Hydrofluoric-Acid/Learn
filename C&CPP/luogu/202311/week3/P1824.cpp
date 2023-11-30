#include<bits/stdc++.h>
using namespace std;
int a[1000010],n,c;
bool P(int d){
    int k=0,last=-1e9;
    for(int i=1;i<=n;i++){
        if(a[i]-last>=d){
            last=a[i],k++;
        }
    }
    return k>=c;
}
int main(){
    cin>>n>>c;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    sort(a+1,a+n+1);
    int L=0,R=1e9,ans,mid;
    while(L<=R){
        if(P(mid=L+R>>1)){
            ans=mid,L=mid+1;
        }else{
            R=mid-1;
        }
    }
    cout<<ans;
}