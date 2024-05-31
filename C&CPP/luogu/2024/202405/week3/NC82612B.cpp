#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
bool vis[N];
int a[N*2];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> primes;
    for(int i=2;i<N;i++){
        if(!vis[i])primes.push_back(i);
        for(int j=0;j<primes.size()&&i*primes[j]<N;j++){
            vis[i*primes[j]]=true;
            if(i%primes[j]==0)break;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            if(vis[a[0]]||a[0]==3)cout<<-1<<endl;
            else cout<<0<<endl;
        }else{
            int cnt3=0,cnt=0;
            for(int i=0;i<n;i++){
                if(!vis[a[i]])cnt++;
                if(a[i]==3)cnt++,cnt3++;
            }
            if(cnt3*2==cnt||cnt==0)cout<<-1<<endl;
            else{
                int tmp=cnt-cnt3*2;
                if(tmp%2)cout<<0<<endl;
                else cout<<1<<endl;
            }
        }
    }
    return 0;
}