#include<bits/stdc++.h>
using namespace std;
int range,start,aim,cot;
vector<vector<int>> v(start+1,vector<int>(cot+1)); 
int solve(int cur,int rest){
    if(v[cur][rest]!=-1)return v[cur][rest];
    int ans;
    if(rest==0){
        ans=cur==aim?1:0;
    }else if(cur==1){
        ans=solve(2,rest-1);
    }else if(cur==range){
        ans=solve(range-1,rest-1);
    }else{
        ans=solve(cur-1,rest-1)+solve(cur+1,rest-1);
    }
    v[cur][rest]=ans;
    return ans;
}
int main(){
    cin>>range>>start>>aim>>cot;
    v.resize(range+1);
    for(auto& vec:v){
        vec.resize(cot+1,-1);
    }
    cout<<solve(start,cot)<<endl;
    vector<vector<int>> dp(range+1,vector<int>(cot+1,0));
    dp[aim][0]=1;//aim,0=1
    for(int i=1;i<range+1;i++){//0行开始
        dp[1][i]=dp[2][i-1];
         for(int j=2;j<cot;j++){//2列开始
            dp[j][i]=dp[j-1][i-1]+dp[j+1][i-1];
        }
        dp[range][i]=dp[range-1][i-1];
    }
    cout<<dp[start][cot];
    return 0;
}
/* #include<iostream>
#include<cstring>
using namespace std;

const int N = 4, start = 2, aim = 4, K = 4;
int dp[N + 1][K + 1];

int process1(int cur, int rest, int aim, int N);
int process2(int cur, int rest, int aim, int N);

int ways1(int N, int start, int aim, int K) {
    memset(dp, -1, sizeof(dp));
    return process2(start, K, aim, N);
}

int process1(int cur, int rest, int aim, int N) {
    if (rest == 0) {
        return cur == aim ? 1 : 0;
    }
    if (cur == 1) {
        return process1(2, rest - 1, aim, N);
    }
    if (cur == N) {
        return process1(N - 1, rest - 1, aim, N);
    }
    return process1(cur - 1, rest - 1, aim, N) +
           process1(cur + 1, rest - 1, aim, N);
}

int process2(int cur, int rest, int aim, int N) {
    if (dp[cur][rest] != -1) return dp[cur][rest];
    int ans;
    if (rest == 0) {
        ans = cur == aim ? 1 : 0;
    } else if (cur == 1) {
        ans = process2(2, rest - 1, aim, N);
    } else if (cur == N) {
        ans = process2(N - 1, rest - 1, aim, N);
    } else {
        ans = process2(cur - 1, rest - 1, aim, N) +
              process2(cur + 1, rest - 1, aim, N);
    }
    dp[cur][rest] = ans; // 存入计算结果
    return ans;
}

int main() {
    cout << ways1(start, N, aim, K) << endl;
    return 0;
}
 */