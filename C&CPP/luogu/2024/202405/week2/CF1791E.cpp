#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,x,g=INT_MAX,cnt=0;
        cin>>n;
        ll ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            ans+=abs(a[i]);
            if(a[i]<=0)cnt++;
            g=min(g,abs(a[i]));
        }
        if(cnt&1)ans=ans-g*2;

        cout<<ans<<endl;
    }
    return 0;
}
/*
33
3
5 2 -8
5
5 -2 -8 -6 -4
2
5 8
7
2 1 8 -5 1 -5 8
4
2 -2 -7 -3
3
-5 5 7
3
-8 -3 8
2
-6 -4
7
0 2 -2 -8 -7 -3 -3
6
-5 4 -7 2 -2 -7
6
-7 -5 -2 7 -4 -7
7
2 -7 6 0 8 6 -4
6
4 -3 -1 -6 7 3
3
7 -1 -4
4
5 3 -2 0
3
-1 -5 7
7
2 -1 -5 6 -2 -5 -2
6
4 -6 4 4 3 7
4
-6 -1 8 7
6
3 -3 5 -1 -3 1
2
-4 0
4
-7 6 -3 -6
7
-2 8 -1 4 -1 -6 -2
3
-8 -7 4
6
-6 -8 -5 8 -2 -1
4
-6 0 -4 -3
2
-2 -5
5
6 8 -5 2 7
3
-4 5 7
2
-5 2
3
0 -3 8
5
3 2 3 0 6
4
6 -1 3 4
 */