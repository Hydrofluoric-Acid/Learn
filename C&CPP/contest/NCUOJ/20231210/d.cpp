#include<bits/stdc++.h>
using namespace std;
int main(){
    /* int n,ans=-1;cin>>n;
    vector<int> v(n),x;
    for(int i=0;i<n;i++)cin>>v[i];
    if(n==1){
        cout<<v[0];
        return 0;
    }
    x.push_back(v[0]);
    for(int i=1;i<n;i++){
        ans=max(ans,v[i]-*min_element(x.begin(),x.end()));
    }
    if(ans<0)cout<<0;
    else cout<<ans;
    return 0; */
    /* int n,ans=-1;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    if(n==1){
        cout<<0;
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans=max(ans,v[i]-v[j]);
        }
    }
    cout<<ans;
    return 0; */
    int n,ans=0;cin>>n;
    vector<int> v(n),x;
    for(int i=0;i<n;i++)cin>>v[i];
    if(n==1){
        cout<<0;
        return 0;
    }
    for(int i=0;i<n-1;i++){
        if(v[i]<v[i+1])ans+=v[i+1]-v[i];
    }
    cout<<ans;
    return 0;
}