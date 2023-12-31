#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,n,m[11][11];
    
    cin>>T;
    vector<int> ans;
    for(int i=0;i<T;i++){
        cin>>n;
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                cin>>m[j][k];
            }
        }
        int flag=0;
        for(int j=2;j<=n;j++){
            for(int k=1;k<=j-1;k++){
                flag=flag|m[j][k];
            }
        }
        ans.push_back(flag);
    }
    for(int i=0;i<ans.size();i++){
        if(ans[i]==0)cout<<"YES"<<endl;
        else{cout<<"NO"<<endl;}
    }
    return 0;
}