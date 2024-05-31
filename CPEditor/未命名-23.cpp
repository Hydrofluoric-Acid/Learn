#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int n,k;
int co(int m){
	int count = 0;
	while (m){
		m = m & (m - 1);
		count++;
	}
	return count;
}
void solve(){
    cin>>n>>k;
    if(n==1){
        cout<<k<<endl;
        return;
    }
    int m=0,g;
    for(int i=k;i>=0;i--){
        int tmp=co(i);
        if(tmp>m){
            m=tmp;
            g=i;
        }
    }
    vector<int> ans(n,0);
    //cout<<m<<endl;
    for(int i=0;i<n;i++){
        int tt=((g>>i)&1)*(1<<i);
        k-=tt;
        ans[i]=tt;
    }
    if(k)ans[0]+=k;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}