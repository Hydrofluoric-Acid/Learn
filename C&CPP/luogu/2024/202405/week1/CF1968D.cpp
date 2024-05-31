#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int p[N],a[N];
int n,k,pb,ps;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k>>pb>>ps;
        for(int i=1;i<=n;i++){
            cin>>p[i];
        }
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        if(pb==ps){
            cout<<"Draw"<<endl;
            continue;
        }
        ll ans1=1ll*a[pb]*k,ans2=1ll*a[ps]*k;
        ll sb=a[pb],ss=a[ps],cnt1=1,cnt2=1;
        for(int i=p[pb];i!=pb;i=p[i]){
            if(cnt1==k)break;
            ans1=max(ans1,1ll*sb+1ll*(k-cnt1)*a[i]);
            cnt1++;
            sb+=a[i];
        }
        for(int i=p[ps];i!=ps;i=p[i]){
            if(cnt2==k)break;
            ans2=max(ans2,1ll*ss+1ll*(k-cnt2)*a[i]);
            cnt2++;
            ss+=a[i];
        }
        //cout<<ans1<<" "<<ans2<<endl;
        if(ans1>ans2){
            cout<<"Bodya"<<endl;
        }else if(ans1==ans2){
            cout<<"Draw"<<endl;
        }else{
            cout<<"Sasha"<<endl;
        }
    }
    return 0;
}