/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 4e5 + 5;
using namespace std;
int a[N];
void solve(){
    int n,k,ans=0;
    string s;
    cin>>n>>k>>s;
    s="1"+s;
    memset(a,0,sizeof(a));
    for(int i=1;i<=2*n;i++){
        a[i]=a[i-1]+(s[i]=='1');
    }
    int last=-k-1;//这一步妙！
    for(int i=1;i<=n;i++){
        if(s[i]=='1')last=i;
        if(i-last>k&&a[i+k]==a[i])ans++,last=i;
    }
    cout<<ans<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N],cnt;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<N;i++)a[i]=0;
        cnt=0;
        int n,k;
        string s;
        cin>>n>>k>>s;
        for(int i=1;i<=n;i++){
            if(s[i-1]=='1'){
                a[cnt++]=i;
            }
        }
        int ans=0;
        if(cnt==0){
            ans=(n-1)/(k+1)+1;
            cout<<ans<<endl;
        }else{
            for(int i=1;i<=a[0];i+=(k+1))ans++;
            
                for(int i=1;i<cnt;i++){
                    ans+=max(a[i]-a[i-1]-1-k,0)/(k+1);
                }
            for(int i=a[cnt-1];i<=n;i+=(k+1))ans++;
            cout<<ans-2<<endl;
        }
        
    }
    return 0;
}