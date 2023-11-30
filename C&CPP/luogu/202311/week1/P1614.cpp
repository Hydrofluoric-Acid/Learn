#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,tmp,ans=9000001;
    cin>>n>>m;
    vector<int> s;
    for(int i=0;i<n;i++){
        cin>>tmp;
        s.push_back(tmp);
    }
    for(int i=0;i<n-m+1;i++){
        tmp=0;
        for(int j=0;j<m;j++){
            tmp+=s[i+j];
        }
        ans=min(ans,tmp);
    }
    cout<<ans;
}