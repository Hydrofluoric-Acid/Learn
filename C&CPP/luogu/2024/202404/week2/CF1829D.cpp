#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e7 + 1;
using namespace std;
int n,m;
bool dfs(int n,int m){
    bool f=false;
    int n1=n/3,n2=n1*2;
    if(n1==m||n2==m)return true;
    if(n1%3==0){
        f=f||dfs(n1,m);
    }
    if(f)return true;
    if(n2%3==0){
        f=f||dfs(n2,m);
    }
    return f;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n<m||(n%3&&n!=m)){
            cout<<"NO"<<endl;
            continue;
        }else if(n==m){
            cout<<"YES"<<endl;
            continue;
        }
        bool f=dfs(n,m);
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}