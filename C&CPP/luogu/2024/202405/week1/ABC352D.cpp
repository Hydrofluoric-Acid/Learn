#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    map<int,int> mp,fmp;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        mp[a[i]]=i;
        fmp[i]=a[i];
    }
    if(k==1){
        cout<<0;
        return 0;
    }
    deque<int> qz,qj;
    int ans=INT_MAX;
    for(int i=1;i<=n;i++){
        while(!qz.empty()&&mp[i]>qz.front())qz.pop_front();
        while(!qz.empty()&&fmp[qz.back()]<i-k+1)qz.pop_back();
        while(!qj.empty()&&mp[i]<qj.front())qj.pop_front();
        while(!qj.empty()&&fmp[qj.back()]<i-k+1)qj.pop_back();
        qz.push_front(mp[i]),qj.push_front(mp[i]);
        //cout<<qj.back()<<" "<<qz.back()<<endl;
        if(i>=k)ans=min(ans,qz.back()-qj.back());
    }
    cout<<ans<<endl;
    return 0;
}