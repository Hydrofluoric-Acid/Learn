#include<bits/stdc++.h>
using namespace std;
int n,volume;
vector<int> value(n),weight(n);
vector<vector<int>> v(n+1,vector<int>(volume+1,-1));
int solve1(int i,int rest){
    if(rest<0)return -1;//上下两句不可互换位置
    if(i==n)return 0;
    int p1=solve1(i+1,rest);
    int p2=0;
    int next=solve1(i+1,rest-weight[i]);
    if(next!=-1){
        p2=value[i]+next;
    }
    return max(p1,p2);
}
int solve2(int i, int rest) {
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=rest;j++){
            int p1=v[i+1][j];
            int p2=0;
            int next=j-weight[i]<0?-1:v[i+1][j-weight[i]];
            if(next!=-1){
                p2=value[i]+next;
            }
            v[i][j]=max(p1,p2);
        }
    }
    return v[0][rest];

}
int main(){
    cin>>n>>volume;
    value.resize(n),weight.resize(n);
    for(int i=0;i<n;i++)cin>>value[i];
    for(int i=0;i<n;i++)cin>>weight[i];
    cout<<solve1(0,volume)<<endl;

    v.resize(n+1);
    for(auto& vec:v){
        vec.resize(volume+1,0);
    }
    cout<<solve2(0,volume)<<endl;
    return 0;
}
/* 
7 15
5 6 3 19 12 4 2 
3 2 4 7 3 1 7

*/