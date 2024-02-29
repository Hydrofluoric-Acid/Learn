#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,ans=0,a=0,b=0;
    cin>>n;
    vector<int> v(2*n+1);
    for(int i=1;i<=2*n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=2*n;i++){
        if(i&1){
            if(!v[i])a++;
            if(v[i])b++;
        }else{
            if(v[i])a++;
            if(!v[i])b++;
        }
    }
    ans=min(a,b)/2;
    cout<<ans;
    return 0;
}