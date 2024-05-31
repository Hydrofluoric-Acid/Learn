#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 998244353 ,inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int a[N],pre[N],suf[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        set<int> st1,st2;
        for(int i=0;i<=n;i++){
            st1.insert(i);
            st2.insert(i);
        }
        for(int i=1;i<=n;i++){
            if(st1.find(a[i])!=st1.end())st1.erase(a[i]);
            pre[i]=*st1.begin();
        }
        for(int i=n;i>=1;i--){
            if(st2.find(a[i])!=st2.end()){
                st2.erase(a[i]);
            }
            suf[i]=*st2.begin();
        }
        bool f=false;
        for(int i=1;i<n;i++){
            if(pre[i]==suf[i+1]){
                cout<<2<<endl;
                cout<<1<<' '<<i<<endl;
                cout<<i+1<<' '<<n<<endl;
                f=true;
                break;
            }
        }
        if(!f)cout<<-1<<endl;
    }
    return 0;
}