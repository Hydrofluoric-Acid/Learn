#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<char>> u(4,vector<char>(4));
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cin>>u[i][j];
        }
    }
    int ans=INT_MAX;
    string s="ddfs";
    for(int i=1;i<=3;i++){
        vector<vector<char>> v(u.begin(),u.end());
        int tmp=0;
        for(int j=1;j<=3;j++){
            if(v[i][j]!=s[j]){
                v[i][j]=s[j];
                tmp++;
            }
        }
        for(int j=1;j<=3;j++){
            if(v[j][i]!=s[j])tmp++;
        }
        //cout<<tmp<<endl;
        ans=min(ans,tmp);
    }
    cout<<ans;
    return 0;
}