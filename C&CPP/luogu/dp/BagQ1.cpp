#include<bits/stdc++.h>
using namespace std;
int money,cot;
typedef struct{
    string name;
    int cost;
}jd;
vector<jd> jds(cot);
vector<int> s(cot);
int solve(int i,int rest){
    if(rest<0)return -1;
    if(i==cot)return 0;
    int p1=solve(i+1,rest);
    int next=solve(i+1,rest-jds[i].cost);
    int p2=0;
    if(next!=-1){
        p2=s[i]+next;
    }
    return max(p1,p2);
}
int main(){
    cin>>money>>cot;
    jds.resize(cot),s.resize(cot);
    for(int i=0;i<cot;i++){
        cin>>jds[i].name>>jds[i].cost>>s[i];
    }
    cout<<solve(0,money);
    return 0;
}