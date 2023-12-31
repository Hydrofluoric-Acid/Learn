#include<bits/stdc++.h>
using namespace std;
int a[4],b[4]={1,2,3,4};
void dfs(int n,int x){
    if(n==x){
        for(int i=0;i<n;i++){
            if(a[i]==1)cout<<b[i]<<" ";
        }
        cout<<endl;
    }else{
        dfs(n,x+1);
        a[x]=1;
        dfs(n,x+1);
        a[x]=0;
    }
}
int main(){
    dfs(4,0);
}