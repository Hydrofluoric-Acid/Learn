#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n+1),b(n+1),p(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        bool f=false;
        for(int i=1;i<=n;i++){
            if(p[a[i]]&&b[p[a[i]]]!=b[i]){
                cout<<"No"<<endl;
                f=true;
                break;
            }
            p[a[i]]=i;
            
        }
        if(!f)cout<<"Yes"<<endl;
    }
    return 0;
}