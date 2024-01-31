#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>> p;
    int ans=0,n,k,s,t;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&k);
        p.push(k);
    }
    while(p.size()!=1){
        s=p.top();
        p.pop();
        t=p.top();
        p.pop();
        k=s+t;
        ans+=k;
        p.push(k);
    }
    cout<<ans;
}