#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<vector<char>> v(n,vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]=='#'&&i-1>=0&&v[i-1][j]=='#'
            &&i+1<n&&v[i+1][j]=='#'&&j-1>=0&&v[i][j-1]=='#'
            &&j+1<n&&v[i][j+1]=='#'){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}