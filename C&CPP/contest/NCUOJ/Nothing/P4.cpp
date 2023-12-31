#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t,x,n,m;
    float tmp=0;
    cin>>t;
    vector<int> ans(t);
    for(int i=0;i<t;i++){
        cin>>x>>n>>m;
        if(x<=m*10){
            ans[i]=1;
            continue;;
        }
        for(int j=0;j<n;j++){
            tmp=tmp*0.5+10;
            if(tmp<=20)break;
        }
        if(tmp<=m*10)ans[i]=1;
        else ans[i]=0;
    }
    for(int i=0;i<t;i++){
        string s=(ans[i]==0?"NO":"YES");
        cout<<s<<endl;
    }
    return 0;
}