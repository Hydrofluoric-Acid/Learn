#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int n;
vector<int> v1,v2;
bool scan(int a){
    for(int i=0;i<n;i++){
        if(v1[i]/a!=v2[i])return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    v1.resize(n,0),v2.resize(n,0);
    int a,b,start=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>v1[i]>>v2[i];
        start=max(start,v1[i]/v2[i]);
    }
    int ans1=0,ans2=0;
    for(int i=start;i>0;i--){
        if(scan(i)){
            ans1=i;
            break;
        }
    }
    for(int i=ans1;i>0;i--){
        if(!scan(i)){
            ans2=i+1;
            break;
        }
    }
    cout<<ans2<<" "<<ans1;
    return 0;
}