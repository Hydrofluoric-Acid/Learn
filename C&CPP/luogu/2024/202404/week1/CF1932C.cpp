/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        string s;
        cin>>s;
        int l=0,r=n-1;
        for(int i=0;i<n;i++){
            ll res=1;
            for(int j=l;j<=r;j++){
                res=res*v[j]%m;
            }
            cout<<res<<' ';
            if(s[i]=='L')l++;
            else r--;
        }
        cout<<endl;
    }
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> v(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        string s;
        cin>>s;
        vector<int> res(n);
        int cur=0;
        int l=1,r=n;
        for(int i=0;i<n;i++){
            if(s[i]=='L')l++;
            else r--;
        }
        ll ans=1;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='L'){
                ans=ans*v[--l]%m;
            }else{
                ans=ans*v[++r]%m;
            }
            res[cur++]=ans;
        }
        for(int i=n-1;i>=0;i--){
            cout<<res[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}