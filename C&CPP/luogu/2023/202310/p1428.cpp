#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f[n]={0};
    for(int i=0;i<n;i++){
        cin>>f[i];
    }
    cout<<0<<" ";
    for(int i=1;i<n;i++){
        int ans=0;
        for(int j=0;j<i;j++){
            if(f[j]<f[i]){
                ans++;
            }
        }
        cout<<ans;
        if(i!=n-1){
            cout<<" ";
        }
        
    }
    return 0;
}