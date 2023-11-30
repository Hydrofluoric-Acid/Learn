#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b,cows[20000],ans=0,tmp=0;
    cin>>n>>b;
    for(int i=0;i<n;i++){
        cin>>cows[i];
    }
    sort(cows,cows+n,greater<int>());
    for(int i=0;i<n;i++){
        tmp+=cows[i];
        ans++;
        if(tmp>=b)break;
    }
    cout<<ans;
}