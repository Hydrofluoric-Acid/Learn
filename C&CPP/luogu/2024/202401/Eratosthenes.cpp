#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=10000;
int vis[N],prim[N],cnt,n=2000;
int main(){
    for(LL i=2;i<=n;i++){//埃氏筛
        if(!vis[i]){
            prim[cnt++]=i;
            for(int j=i*i;j<=n;j+=i){//从当前数的倍数开始,时间复杂度O(nloglogn)
                vis[j]=1;
            }
        }
    }
    for(auto k:prim){
        if(k)cout<<k<<" ";
    }
    return 0;
}