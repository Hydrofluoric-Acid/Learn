#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int cnt[3];
bool vis[N*2];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> primes;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cnt[x]++;
    }
    int sum=cnt[1]+cnt[2]*2,cur=0;
    for(int i=2;i<=sum;i++){
        if(!vis[i])primes.push_back(i);
        for(int j=0;j<primes.size()&&i*primes[j]<=sum;j++){
            vis[i*primes[j]]=true;
            if(i%primes[j]==0)break;
        }
    }
    for(int i=0;i<primes.size();i++){
        int d=primes[i]-cur;
        for(int j=0;j<d/2&&cnt[2];j++){
            cout<<2<<' ';
            cnt[2]--;
            cur+=2;
        }
        d=primes[i]-cur;
        for(int j=0;j<d&&cnt[1];j++){
            cout<<1<<' ';
            cnt[1]--;
            cur++;
        }
    }
    for(int i=0;i<cnt[2];i++){
        cout<<2<<' ';
    }
    for(int i=0;i<cnt[1];i++){
        cout<<1<<' ';
    }
    return 0;
}