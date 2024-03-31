/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
set<int> st;
int n,m=0;
vector<int> v;
void dfs(int i,int j,vector<vector<int>> &dp){
    st.insert(abs(j));
    if(i==n+1||dp[i][j+m])return;
    if(i+1<=n){
        dfs(i+1,j-v[i+1],dp);
        dfs(i+1,j+v[i+1],dp);
        dfs(i+1,j,dp);
    }
    dp[i][j+m]=1;
    return;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cin>>n;
    v.resize(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        m+=v[i];
    }
    for(int i=1;i<=n;i++){
        st.insert(m+v[i]);
    }
    vector<vector<int>> dp(n+1,vector<int>(m*3+1,0));
    dfs(0,m,dp);
    cout<<(st.size()-1)/2;
    cout<<endl;
    for(auto k:st){
        cout<<k<<" ";
    } 
    return 0;
}
//记忆化搜索，60/100
*/
/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
set<int> st;
int n,m=0;
vector<int> v;
void dfs(int i,int j,vector<vector<int>> &dp){
    st.insert(abs(j));
    if(i==n+1||dp[i][j])return;
    if(i+1<=n){
        dfs(i+1,abs(j-v[i+1]),dp);
        dfs(i+1,abs(j+v[i+1]),dp);
        dfs(i+1,abs(j),dp);
    }
    dp[i][j]=1;
    return;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cin>>n;
    v.resize(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        m+=v[i];
    }
    for(int i=1;i<=n;i++){
        st.insert(m+v[i]);
    }
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    dfs(0,0,dp);
    for(auto k:st){
        cout<<k<<" ";
    }
    int ans=0;
    for(auto k:st){
        if(k!=0&&k<=m){
            ans++;
        }
    } 
    cout<<ans;
    return 0;
}
//记忆化搜索，70/100,内存占用减小
 */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int n,m=0;
vector<int> v;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cin>>n;
    v.resize(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        m+=v[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(m*2+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j==v[i])dp[i][j]=1;
            else if(dp[i-1][j])dp[i][j]=1;
            else if(dp[i-1][j+v[i]])dp[i][j]=1;
            else if(dp[i-1][abs(j-v[i])])dp[i][j]=1;//dp[i][j]表示选择前i个能否得到|j|
        }
    }
    int ans=0;
    for(int j=1;j<=m;j++){
        if(dp[n][j]){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}