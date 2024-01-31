#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x,y;
    cin>>n>>m;
    vector<vector<int>> g1(n+1,vector<int>(n+1,0)),g2(n+1,vector<int>());
    vector<int> ans(n+1,0);
    while(m--){
        cin>>x>>y;
        g1[x][y]=g1[y][x]=1;
        //g2[x].push_back(y);
        //g2[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        int tmp=0;
        for(int j=1;j<=n;j++){
            cout<<g1[i][j]<<" ";
            tmp+=g1[i][j];
        }
        ans[i]=tmp;
        cout<<endl;
    }
    /* for(int i=1;i<=n;i++){
        cout<<g2[i].size()<<" ";
        sort(g2[i].begin(),g2[i].end());
        for(int j=0;j<g2[i].size();j++){
            cout<<g2[i][j]<<" ";
        }
        cout<<endl;
    } */
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
        for(int j=1;j<=n;j++){
            if(g1[i][j])cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}