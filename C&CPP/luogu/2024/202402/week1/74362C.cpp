#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,ans=0;
    char c;
    string s;
    cin>>n>>c>>s;
    if(n==1){
        cout<<1;
        return 0;
    }
    for(int i=0;i<n;i++){
        if(s[i]==c){
            ans+=min(i+1,n-i);
        }
    }
    /* if(s[0]==c)ans++;
    if(s[n-1]==c)ans++; */
    cout<<ans;
    return 0;
}