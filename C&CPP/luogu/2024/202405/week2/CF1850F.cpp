/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,x;
    cin>>t;
    while(t--){
        map<int,int> mp;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x<=n)mp[x]++;
            if(x==1)continue;
            for(int j=x+x;j<=n;j+=x){
                mp[j]++;
            }
        }
        int ans=mp[1];
        mp[1]=0;
        auto g=max_element(mp.begin(),mp.end(),cmp);
        cout<<ans+g->second<<endl;//Time limit exceeded on test 10
    }
    return 0;
} */
/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,x;
    cin>>t;
    while(t--){
        memset(a,0,sizeof(a));
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x<=n)a[x]++;
            if(x==1)continue;
            for(int j=x+x;j<=n;j+=x){
                a[j]++;
            }
        }
        int ans=0;
        for(int i=2;i<=n;i++){
            ans=max(ans,a[i]);
        }
        cout<<ans+a[1]<<endl;
    }
    return 0;//Time limit exceeded on test 16
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N],b[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,x;
    cin>>t;
    while(t--){
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x<=n)a[x]++;
        }
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j+=i){
                b[j]+=a[i];
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            ans=max(ans,b[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}