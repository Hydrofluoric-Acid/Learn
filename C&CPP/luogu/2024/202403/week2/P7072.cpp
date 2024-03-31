#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 610;
using namespace std;
int tong[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,w;
    cin>>n>>w;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        tong[x]++;
        ll sum=0;
        int t=max(1,i*w/100);
        for(int j=600;j>=0;j--){
            sum+=tong[j];
            if(sum>=t){
                cout<<j<<" ";
                break;
            }
        }
    }
    return 0;
}