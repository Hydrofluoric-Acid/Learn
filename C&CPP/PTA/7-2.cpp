#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,e=2;
    cin>>n>>m;
    m=m%n;
    int a[n]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> s;
    while(e--){
        for(int i=0;i<n;i++){
            s.push_back(a[i]);
        }
    }
    for(int i=m;i<m+n;i++){
        cout<<s[i];
        if(i!=m+n-1){
            cout<<" ";
        }
    }
    return 0;
    /* for(int i=m;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<m;i++){
        cout<<a[i];
        if(i!=m-1)cout<<" ";
    }
    return 0; */
}