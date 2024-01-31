#include<bits/stdc++.h>
using namespace std;
int a[4],b[21],maxtime,nowtime,ans=0,sum=0;
void dfs(int maxdeep,int x){
    if(x>maxdeep){
        maxtime=max(maxtime,nowtime);
        return;
    }
    if(b[x]+nowtime<=sum/2){
        nowtime+=b[x];
        dfs(maxdeep,x+1);
        nowtime-=b[x];
    }
    dfs(maxdeep,x+1);
}
int main(){
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    for(int i=0;i<4;i++){
        maxtime=0;
        sum=0;
        for(int j=1;j<=a[i];j++){
            cin>>b[j];
            sum+=b[j];
        }
        nowtime=0;
        dfs(a[i],1);
        ans+=(sum-maxtime);
    }
    cout<<ans;
    return 0;
}