#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int solve(){
    int n;
    string s;
    cin>>n>>s;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            int f=0,g=0;
            for(int j=0;j<i;j++){
                map<char,int> mp;
                for(int k=j;k<n;k+=i){
                    mp[s[k]]++;
                }
                if((mp.size()==2&&(mp[s[j]]==1||mp[s[j]]==n/i-1)))f++;
                if(mp.size()==1)g++;
            }
            if(f==1||g==1){
                cout<<i<<endl;
                return -1;
            }
        }
    }
    return n;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        int n=solve();
        if(n!=-1)cout<<n<<endl;
    }
    return 0;
}