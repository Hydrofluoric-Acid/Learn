#include<bits/stdc++.h>
using namespace std;
typedef struct{
    int x,y;
}apple;
bool cmp(apple m,apple n){
    return m.y<n.y;
}
int main(){
    int n,s,ans=0,a,b,tmp=0;
    cin>>n>>s>>a>>b;
    int x1=a+b;
    vector<apple> as(n);
    for(int i=0;i<n;i++){
        cin>>as[i].x>>as[i].y;
    }
    sort(as.begin(),as.end(),cmp);
    for(int i=0;i<n;i++){
        if(tmp+as[i].y<=s&&as[i].x<=x1){
            tmp+=as[i].y;
            ans++;
        }
    }
    cout<<ans;
}