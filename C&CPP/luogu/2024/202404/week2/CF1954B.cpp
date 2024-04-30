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
        int n,ans=INT_MAX;
        cin>>n;
        vector<int> v(n+2,0);
        set<int> s;
        bool f=true;
        for(int i=1;i<=n;i++){
            cin>>v[i];
            if(f)s.insert(v[i]);
            if(s.size()>1)f=false;
        }
        v[0]=v[n+1]=-1;
        if(s.size()==1){
            cout<<-1<<endl;
            continue;
        }
        for(int i=2;i<=n-1;i++){
            if(v[i-1]==v[i+1]&&v[i]!=v[i-1]){
                for(int j=i+2;j<=n+1;j++){
                    if(v[j]!=v[i+1]){
                        ans=min(ans,j-i-1);
                        break;
                    }
                }
            }
        }
        for(int i=n-2;i>=2;i--){
            if(v[i-1]==v[i+1]&&v[i]!=v[i-1]){
                for(int j=i-2;j>=0;j--){
                    if(v[j]!=v[i-1]){
                        ans=min(ans,i-j-1);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}