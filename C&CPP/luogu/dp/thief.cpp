#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v(n),dp(n);
/* int dfs(int x){
	if(x>n)return 0;
	else return max(dfs(x+1),dfs(x+2)+v[x]);
} */
/* int dfs(int x){
    if(x==1)return v[1];
    if(x==2)return max(v[1],v[2]);
    else{
        int p1=v[x]+dfs(x-2);
        int p2=dfs(x-1);
        return max(p1,p2);
    }
} */
int dfs(int x){
    if(dp[x]!=-1)return dp[x];
    else return max(v[x]+dfs(x-2),dfs(x-1));
}
int solve(int x){
    vector<int> s(x+1,-1);
    s[1]=v[1],s[2]=max(v[1],v[2]);
    for(int i=3;i<=x;i++){
        s[i]=max(v[i]+s[i-2],s[i-1]);//注意各个vector，不能写错
    }
    return s[x];
}
int main(){
	cin>>n;
	v.resize(n+1),dp.resize(n+1,-1);
	for(int i=1;i<=n;i++)cin>>v[i];
    dp[1]=v[1],dp[2]=max(v[1],v[2]);
	cout<<dfs(n)<<endl;
    cout<<solve(n);
	return 0;
}