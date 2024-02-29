/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(v[i]==j){
                dp[i][j]=dp[i-1][j]+1;
            }else if(j>v[i]){
                dp[i][j]=dp[i-1][j]+dp[i-1][j-v[i]];
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][m];
    return 0;
} */
/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int n,m;
vector<int> v;
int dfs(int x,int r){
    int ans=0;
    if(r==0){
        return 1;
    }else if(r<0||x==0){
        return 0;
    }else{
        int a=dfs(x-1,r-v[x]),b=dfs(x-1,r);
        ans+=a+b;
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    v.resize(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    cout<<dfs(n,m);
    return 0;
} */
/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int n, m;
vector<int> v;
vector<vector<int>> dp;
int dfs(int x, int r) {
    int ans = 0;
    if (r == 0) {
        return 1;
    }
    if (r < 0 || x == 0) {//为什么在上面代码的基础上dp[x][r]!=-1加在最前面无法通过，而现在可以
        return 0;
    }
    if (dp[x][r] != -1)return dp[x][r];
    int a = dfs(x - 1, r - v[x]), b = dfs(x - 1, r);
    //printf("%d %d %d\n",x,a,b);
    dp[x][r]=a+b;
    ans += a + b;
    return ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    v.resize(n + 1,0);
    dp.assign(n + 1, vector<int>(m + 1));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            dp[i][j]=-1;
        }
    }
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    cout << dfs(n, m)<<endl;
    
    return 0;
} */
/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        dp[i][0]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            dp[i][j]=dp[i-1][j-v[i]]+dp[i-1][j];//错误
        }
    }
    cout<<dp[n][m];
    return 0;
} */