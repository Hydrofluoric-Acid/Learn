/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int N = 101;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,V,s;
    cin>>n>>V;
    vector<vector<int>> v(N,vector<int>(N,0)),w(N,vector<int>(N,0)),dp(N,vector<int>(N,0));
    for(int i=1;i<=n;i++){
        cin>>s;
        v[i][0]=s;
        for(int j=1;j<=s;j++){
            cin>>v[i][j]>>w[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=V;j++){
            dp[i][j]=dp[i-1][j];
            for(int k=1;k<=v[i][0];k++){
                if(j>=v[i][k]){
                    dp[i][j]=max(dp[i][j],dp[i-1][j-v[i][k]]+w[i][k]);
                }
            }
        }
    }
    cout<<dp[n][V];
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int N = 101;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,V,s;
    cin>>n>>V;
    vector<vector<int>> v(N,vector<int>(N,0)),w(N,vector<int>(N,0));
    vector<int> dp(V+1);
    for(int i=1;i<=n;i++){
        cin>>s;
        v[i][0]=s;
        for(int j=1;j<=s;j++){
            cin>>v[i][j]>>w[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=V;j>=0;j--){
            for(int k=v[i][0];k>=1;k--){
                if(j>=v[i][k]){
                    dp[j]=max(dp[j],dp[j-v[i][k]]+w[i][k]);
                }
            }
        }
    }
    cout<<dp[V];//优化
    return 0;
}
/* 
10 10
10
8 5
3 6
10 25
8 17
7 15
2 29
8 3
1 2
2 17
10 24
9
8 2
1 8
8 26
8 17
5 12
7 13
2 17
8 8
7 4
7
6 1
1 13
3 15
8 8
6 19
10 12
3 17
7
5 12
4 11
7 10
10 3
9 18
4 12
2 9
9
1 6
3 5
3 20
10 20
4 9
5 5
9 22
8 23
7 14
7
8 19
9 1
8 4
10 4
3 17
8 9
1 8
10
5 26
1 18
5 13
8 19
1 20
3 28
6 21
2 26
3 20
2 30
9
9 8
9 25
1 18
7 27
10 16
1 10
7 9
5 24
5 4
8
3 11
6 4
3 9
2 24
4 13
5 18
2 18
1 1
5
2 3
5 13
9 15
2 2
2 3
 */