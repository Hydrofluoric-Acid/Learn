#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n;
    vector<int> a(n+1,0);
    for(int i=0;i<n;i++){
        cin>>k;
        //if(k>n)continue;//加上此句能ac
        a[k]++;
    }
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            cout<<0;
            return 0;
        }
    }
    cout<<1<<endl;
    for(int i=1;i<n;i++){
        cout<<i<<" ";
    }
    return 0;
}