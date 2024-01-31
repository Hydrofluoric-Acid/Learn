#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<1<<endl;
    if(n==1)return 0;
    if(n==2){cout<<"1 1"<<endl;return 0;}
    cout<<"1 1"<<endl;
    vector<int> v={1,1},u;
    for(int i=3;i<=n;i++){
        u.push_back(1);
        for(int j=0;j<i-2;j++){
            u.push_back(v[j]+v[j+1]);
        }
        u.push_back(1);
        for(int k=0;k<u.size();k++){
            cout<<u[k];
            if(k!=u.size()-1)cout<<" ";
            else{cout<<endl;}
        }
        v=u;
        u.clear();
    }
}