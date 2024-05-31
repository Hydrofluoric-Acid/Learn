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
        string s1,s2;
        cin>>s1>>s2;
        int p=0,q=0;
        int ans=0;
        while(q<m){
            if(s1[p]==s2[q]){
                p++;
                
            }
            q++;
        }
        cout<<p<<endl;
    }
    return 0;
}