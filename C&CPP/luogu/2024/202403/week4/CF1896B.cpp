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
        /* int n,ans=0;
        string s;
        cin>>n>>s;
        vector<bool> vis(n,false);
        bool flag=true;
        while(flag){
            bool f=false;
            for(int i=0;i<n-1;i++){
                if(s[i]=='A'&&s[i+1]=='B'&&!vis[i]){
                    swap(s[i],s[i+1]);
                    ans++;
                    f=true;
                    vis[i]=true;//暴力做法tle
                }
            }
            flag=f;
        }
        cout<<ans<<endl; */
        int n;
        string s;
        cin>>n>>s;
        int a=n,b=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                a=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='B'){
                b=i;
                break;
            }
        }
        if(a<b)cout<<b-a<<endl;
        else cout<<0<<endl;
    }
    return 0;
}