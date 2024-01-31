#include<bits/stdc++.h>
using namespace std;
int mark[20000],prime[20000],cnt=0;
int main(){
    int n=2000;
    for(int i=2;i<=n;i++){//注意，每个数都遍历
        if(!mark[i]){
            prime[cnt++]=i;
        }
        for(auto k:prime){
            if(k*i>n)break;
            mark[k*i]=1;
            if(i%k==0)break;//欧拉筛（线性筛）
        }
    }
    for(auto k:prime){
        if(k)cout<<k<<" ";
    }
    return 0;
}